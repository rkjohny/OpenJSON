#ifndef OPEN_JSON_LINKED_LIST_H
#define OPEN_JSON_LINKED_LIST_H

#include <memory>
#include <string>
#include "Common.h"
#include "Object.h"

namespace open_json {
    class LinkedStack;

    class Node : public Object {
        friend class LinkedStack;

    private:
        std::string m_value;
        std::shared_ptr<Node> m_next;
        std::shared_ptr<Node> m_prev;

    public:
        Node();

        virtual ~Node() override = default;

        Node(Node &&other) noexcept: m_value(std::move(other.m_value)), m_next(std::move(other.m_next)),
                                     m_prev(std::move(other.m_prev)) {
            other.m_value = "";
            other.m_prev = nullptr;
            other.m_next = nullptr;
        }

        Node &operator=(Node &&other) noexcept;
    };

    class LinkedStack : public Object {
    private:
        std::shared_ptr<Node> m_top = nullptr;

    public:
        LinkedStack() = default;

        LinkedStack(LinkedStack &&other) noexcept: m_top(std::move(other.m_top)) {
            other.m_top = nullptr;
        };

        LinkedStack &operator=(LinkedStack &&other) noexcept;

        virtual ~LinkedStack() override = default;

        [[maybe_unused]] std::shared_ptr<Node> pop();

        [[maybe_unused]] void push(NOT_NULL const std::shared_ptr<Node> &node);

        [[maybe_unused]] void push(NOT_NULL const Node *node);

        [[maybe_unused]] void push(NOT_NULL Node &&node);
    };

} // open_json
// common

#endif //OPEN_JSON_LINKED_LIST_H

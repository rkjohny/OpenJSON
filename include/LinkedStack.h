#ifndef OPEN_JSON_LINKED_LIST_H
#define OPEN_JSON_LINKED_LIST_H

#include <memory>
#include <string>
#include "Common.h"
#include "Object.h"

namespace open_json {
    class LinkedStack;

    class Node : virtual public Object {
        friend class LinkedStack;
    private:
        std::string m_value;
        std::shared_ptr<Node> m_next;
        std::shared_ptr<Node> m_prev;

    public:
        Node();

        ~Node() override = default;

        Node(Node &&node) noexcept = default;
    };

    class LinkedStack : virtual public Object {
    private:
        std::shared_ptr<Node> m_top = nullptr;

    public:
        LinkedStack() = default;

        LinkedStack(LinkedStack &&other) noexcept = default;

        ~LinkedStack() override = default;

        [[maybe_unused]] std::shared_ptr<Node> pop();

        [[maybe_unused]] void push(NOT_NULL const std::shared_ptr<Node> &node);

        [[maybe_unused]] void push(NOT_NULL const Node *node);

        [[maybe_unused]] void push(NOT_NULL Node &&node);
    };

} // open_json
// common

#endif //OPEN_JSON_LINKED_LIST_H

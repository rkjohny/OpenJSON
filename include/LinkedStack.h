#ifndef OPEN_JSON_LINKED_LIST_H
#define OPEN_JSON_LINKED_LIST_H

#include <memory>
#include <string>
#include "Common.h"

namespace open_json {

    class Node {
    public:
        std::string value;
        std::shared_ptr<Node> next;
        std::shared_ptr<Node> prev;

    public:
        Node();

        virtual ~Node();
    };

    class LinkedStack {
    public:
        std::shared_ptr<Node> top;

    public:
        LinkedStack();

        virtual ~LinkedStack();

        std::shared_ptr<Node> pop();

        void push(NOT_NULL const std::shared_ptr<Node> &node);

        void push(NOT_NULL const Node *node);
    };

} // open_json
// common

#endif //OPEN_JSON_LINKED_LIST_H

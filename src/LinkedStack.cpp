#include "../include/LinkedStack.h"
#include <assert.h>

namespace open_json {
    namespace json {
        Node::Node() {
            next = std::shared_ptr<Node>(nullptr);
            prev = std::shared_ptr<Node>(nullptr);
        }

        Node::~Node() {
        }

        LinkedStack::LinkedStack() {
            top = std::shared_ptr<Node>(nullptr);
        }

        LinkedStack::~LinkedStack() {
        }

        std::shared_ptr<Node> LinkedStack::pop() {
            if (top.get() == nullptr) {
                return nullptr;
            }
            std::shared_ptr<Node> ret = top;
            top = top->prev;
            return ret;
        }

        void LinkedStack::push(std::shared_ptr<Node> node) {
            if (top.get() == nullptr) {
                top = node;
            } else {
                top->next = node;
                node->prev = top;
                top = node;
            }
        }

    } // json
} // open_json
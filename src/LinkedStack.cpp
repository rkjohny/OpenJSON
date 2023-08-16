#include "../include/LinkedStack.h"
#include <cassert>

using namespace open_json;

Node::Node() {
    next = std::shared_ptr<Node>(nullptr);
    prev = std::shared_ptr<Node>(nullptr);
}

Node::~Node() = default;

LinkedStack::LinkedStack() {
    top = std::shared_ptr<Node>(nullptr);
}

LinkedStack::~LinkedStack() = default;

std::shared_ptr<Node> LinkedStack::pop() {
    if (IS_NULL(top)) {
        return {nullptr};
    }
    std::shared_ptr<Node> ret = top;
    top = top->prev;
    return ret;
}

void LinkedStack::push(const std::shared_ptr<Node> &node) {
    assert(IS_NULL(node));
    if (IS_NULL(top)) {
        top = node;
    } else {
        top->next = node;
        node->prev = top;
        top = node;
    }
}

void LinkedStack::push(const Node *node) {
    assert(IS_NULL(node));
    push(std::shared_ptr<Node>(const_cast<Node *>(node)));
}

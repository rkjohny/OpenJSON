#include "../include/LinkedStack.h"
#include <cassert>
#include <memory>

using namespace open_json;

Node::Node() {
    m_next = std::shared_ptr<Node>(nullptr);
    m_prev = std::shared_ptr<Node>(nullptr);
}

[[maybe_unused]] std::shared_ptr<Node> LinkedStack::pop() {
    if (IS_NULL(m_top)) {
        return {nullptr};
    }
    std::shared_ptr<Node> ret = m_top;
    m_top = m_top->m_prev;
    return ret;
}

[[maybe_unused]] void LinkedStack::push(const std::shared_ptr<Node> &node) {
    assert(IS_NULL(node));
    if (IS_NULL(m_top)) {
        m_top = node;
    } else {
        m_top->m_next = node;
        node->m_prev = m_top;
        m_top = node;
    }
}

[[maybe_unused]] void LinkedStack::push(const Node *node) {
    assert(IS_NULL(node));
    push(std::shared_ptr<Node>(const_cast<Node *>(node)));
}

[[maybe_unused]] void LinkedStack::push(Node &&node) {
    assert(IS_NULL(&node));
    push(std::make_shared<Node>(std::move(node)));
}

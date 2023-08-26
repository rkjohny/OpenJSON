#include "../include/core/LinkedStack.h"
#include <cassert>
#include <memory>

using namespace open_json;

Node::Node() {
    m_next = std::shared_ptr<Node>(nullptr);
    m_prev = std::shared_ptr<Node>(nullptr);
}

Node::Node(Node &&other) noexcept: m_value(std::move(other.m_value)), m_next(std::move(other.m_next)),
                                   m_prev(std::move(other.m_prev)) {
    other.m_value = "";
    other.m_prev = nullptr;
    other.m_next = nullptr;
}


Node &Node::operator=(Node &&other) noexcept {
    this->m_value = std::move(other.m_value);
    this->m_next = std::move(other.m_prev);
    this->m_prev = std::move(other.m_prev);

    other.m_value = "";
    other.m_prev = nullptr;
    other.m_next = nullptr;
    return *this;
}

LinkedStack::LinkedStack(LinkedStack &&other) noexcept: m_top(std::move(other.m_top)) {
    other.m_top = nullptr;
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

LinkedStack &LinkedStack::operator=(LinkedStack &&other) noexcept {
    this->m_top = std::move(other.m_top);
    other.m_top = nullptr;
    return *this;
}

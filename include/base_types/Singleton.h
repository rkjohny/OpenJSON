#ifndef OPEN_JSON_SINGLETON_H
#define OPEN_JSON_SINGLETON_H

#include <memory>
#include "../core/Common.h"
#include "NonCopyNonMoveAble.h"

namespace open_json {
    template<class T>
    class Singleton : public NonCopyNonMoveAble {
    protected:
        constexpr Singleton() = default;

        static T ms_singleton;
    public:
        ~Singleton() override = default;

        Singleton(const Singleton &) = delete;

        Singleton(Singleton &&) noexcept = delete;

        Singleton(const std::shared_ptr<Singleton> &) = delete;

        Singleton &operator=(const Singleton &) = delete;

        Singleton &operator=(Singleton &&) noexcept = delete;

        [[maybe_unused]] T static const &getInstance();
    };
}

#endif //OPEN_JSON_SINGLETON_H

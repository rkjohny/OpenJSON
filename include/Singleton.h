#ifndef OPEN_JSON_SINGLETON_H
#define OPEN_JSON_SINGLETON_H

#include <memory>
#include "Common.h"

namespace open_json {
    template<class T>
    class Singleton {
    protected:
        constexpr Singleton() = default;

        static T m_singleton;
    public:
        virtual ~Singleton() = default;

        Singleton(const Singleton &another) = delete;

        Singleton(Singleton &&another) noexcept = delete;

        Singleton(const std::shared_ptr<Singleton> &another) = delete;

        Singleton &operator=(const Singleton &another) = delete;

        Singleton &operator=(Singleton &&another) noexcept = delete;

        [[maybe_unused]] T static const &getInstance();
    };
}

#endif //OPEN_JSON_SINGLETON_H

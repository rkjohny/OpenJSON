#ifndef OPEN_JSON_SINGLETON_H
#define OPEN_JSON_SINGLETON_H

namespace open_json {
    template<class T>
    class Singleton {
    private:
        constexpr Singleton() = default;
        static T m_singleton;

    public:
        virtual ~Singleton() = default;

        constexpr Singleton(Singleton &&other) noexcept = delete;

        constexpr Singleton(const Singleton &other) = delete;

        constexpr Singleton(Singleton &other) = delete;

        constexpr Singleton &operator=(const Singleton &other) = delete;

        constexpr Singleton &operator=(const Singleton other) = delete;

        [[maybe_unused]] T const &getInstance();

        [[maybe_unused]] T const *get();
    };
}

#endif //OPEN_JSON_SINGLETON_H

#ifndef OPEN_JSON_SETTER_H
#define OPEN_JSON_SETTER_H

namespace open_json {

    template<class ClassT, class ArgT>
    class [[maybe_unused]] Setter {
    public:
        typedef void (ClassT::*SetterPtr)(ArgT);

        [[maybe_unused]] constexpr Setter(SetterPtr fp, const char *name);

    private:
        [[maybe_unused]] SetterPtr fp;
        [[maybe_unused]] const char *name;
    };
}

#endif //OPEN_JSON_SETTER_H

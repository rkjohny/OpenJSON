#ifndef OPEN_JSON_SETTER_H
#define OPEN_JSON_SETTER_H

namespace open_json {

    template<class ClassT, class ArgT>
    class [[maybe_unused]] Setter {
    private:
        typedef void (ClassT::*SetterPtr)(ArgT);

        [[maybe_unused]] SetterPtr fp;
        [[maybe_unused]] const char *name;

    public:
        [[maybe_unused]] constexpr Setter(SetterPtr fp, const char *name) : fp(fp), name(name) {
        }

    }; //Class Setter

} // namespace open_json::common

#endif //OPEN_JSON_SETTER_H

#ifndef OPEN_JSON_SETTER_H
#define OPEN_JSON_SETTER_H

namespace open_json {
    namespace json {

        template<class ClassT, class ArgT>
        class Setter {
        public:
            typedef void (ClassT::*SetterPtr)(ArgT);

            SetterPtr fp;
            const char *name;

            constexpr Setter(SetterPtr fp, const char *name) : fp(fp), name(name) {
            }

        }; //Class Setter

    } // namespace json
} // namespace open_json


#endif //OPEN_JSON_SETTER_H

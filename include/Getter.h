#ifndef OPEN_JSON_GETTER_H
#define OPEN_JSON_GETTER_H

namespace open_json {
    namespace json {

        template<class ClassT, class ReturnT>
        class Getter {
        public:
            typedef ReturnT(ClassT::*GetterPtr)() const;

            GetterPtr fp;
            const char *name;

            constexpr Getter(GetterPtr fp, const char *name) : fp(fp), name(name) {
            }
        };

    } // namespace json
} // namespace open_json

#endif //OPEN_JSON_GETTER_H

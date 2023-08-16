#ifndef OPEN_JSON_GETTER_H
#define OPEN_JSON_GETTER_H


namespace open_json::json {

    template<class ClassT, class ReturnT>
    class Getter {
    private:
        typedef ReturnT(ClassT::*GetterPtr)() const;

        GetterPtr fp;
        const char *name;

    public:
        constexpr Getter(GetterPtr fp, const char *name) : fp(fp), name(name) {
        }
    };

} // namespace open_json::json


#endif //OPEN_JSON_GETTER_H

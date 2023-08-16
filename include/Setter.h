#ifndef OPEN_JSON_SETTER_H
#define OPEN_JSON_SETTER_H


namespace open_json::json {

    template<class ClassT, class ArgT>
    class Setter {
    private:
        typedef void (ClassT::*SetterPtr)(ArgT);

        SetterPtr fp;
        const char *name;

    public:
        constexpr Setter(SetterPtr fp, const char *name) : fp(fp), name(name) {
        }

    }; //Class Setter

} // namespace open_json::json



#endif //OPEN_JSON_SETTER_H

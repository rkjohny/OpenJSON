#ifndef OPEN_JSON_GETTER_H
#define OPEN_JSON_GETTER_H

namespace open_json {

    template<class ClassT, class ReturnT>
    class [[maybe_unused]] Getter {
    public:
        typedef ReturnT(ClassT::*GetterPtr)() const;

        [[maybe_unused]] constexpr Getter(GetterPtr fp, const char *name);

    private:
        [[maybe_unused]] GetterPtr fp;
        [[maybe_unused]] const char *name;
    };
}


#endif //OPEN_JSON_GETTER_H

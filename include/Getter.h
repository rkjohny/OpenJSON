#ifndef OPEN_JSON_GETTER_H
#define OPEN_JSON_GETTER_H

namespace open_json {

    template<class ClassT, class ReturnT>
    class [[maybe_unused]] Getter {
    private:
        typedef ReturnT(ClassT::*GetterPtr)() const;

        [[maybe_unused]] GetterPtr fp;
        [[maybe_unused]] const char *name;

    public:
        [[maybe_unused]] constexpr Getter(GetterPtr fp, const char *name) : fp(fp), name(name) {
        }
    };

} // namespace open_json::common


#endif //OPEN_JSON_GETTER_H

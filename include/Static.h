
#ifndef OPEN_JSON_STATIC_H
#define OPEN_JSON_STATIC_H

# include "memory"
#include "Common.h"
#include "NotAllowedToCreateNew.h"

using namespace std;

namespace open_json {

    class Static : public NotAllowedToCreateNew {
    public:

        Static(const Static &another) = delete;

        Static(Static &&another) noexcept = delete;

        Static(const std::shared_ptr<Static> &another) = delete;

        Static &operator=(const Static &another) = delete;

        Static &operator=(Static &&another) noexcept = delete;
    };

} // open_json

#endif //OPEN_JSON_STATIC_H

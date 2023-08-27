
#ifndef OPEN_JSON_STATIC_H
#define OPEN_JSON_STATIC_H

# include "memory"
#include "../core/Common.h"
#include "NotAllowedToCreateNew.h"

using namespace std;

namespace open_json {

    class Static : public NotAllowedToCreateNew {
    public:

        Static(const Static &) = delete;

        Static(Static &&) noexcept = delete;

        Static(const std::shared_ptr<Static> &) = delete;

        Static &operator=(const Static &) = delete;

        Static &operator=(Static &&) noexcept = delete;
    };

} // open_json

#endif //OPEN_JSON_STATIC_H

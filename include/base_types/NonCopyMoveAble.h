#ifndef OPEN_JSON_NON_COPY_MOVE_ABLE_H
#define OPEN_JSON_NON_COPY_MOVE_ABLE_H

#include <memory>
#include "../core/Common.h"
#include "AllowedToCreateNew.h"

using namespace std;
namespace open_json {

    class NonCopyMoveAble : public AllowedToCreateNew {
    public:
        constexpr NonCopyMoveAble() = default;

        ~NonCopyMoveAble() override = default;

        NonCopyMoveAble(const NonCopyMoveAble &) = delete;

        NonCopyMoveAble(NonCopyMoveAble &&) noexcept = default;

        NonCopyMoveAble &operator=(const NonCopyMoveAble &) = delete;

        NonCopyMoveAble &operator=(NonCopyMoveAble &&) noexcept = default;
    };
}

#endif //OPEN_JSON_NON_COPY_MOVE_ABLE_H

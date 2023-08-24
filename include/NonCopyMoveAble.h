#ifndef OPEN_JSON_NON_COPY_MOVE_ABLE_H
#define OPEN_JSON_NON_COPY_MOVE_ABLE_H

#include <memory>
#include "Common.h"
#include "AllowedToCreateNew.h"

using namespace std;
namespace open_json {

    class NonCopyMoveAble : public AllowedToCreateNew {
    public:
        constexpr NonCopyMoveAble() = default;

        ~NonCopyMoveAble() override = default;

        NonCopyMoveAble(const NonCopyMoveAble &another) = delete;

        NonCopyMoveAble(NonCopyMoveAble &&another) noexcept = default;

        NonCopyMoveAble &operator=(const NonCopyMoveAble &another) = delete;

        NonCopyMoveAble &operator=(NonCopyMoveAble &&another) noexcept = default;
    };
}

#endif //OPEN_JSON_NON_COPY_MOVE_ABLE_H

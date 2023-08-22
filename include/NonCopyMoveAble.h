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
        virtual ~NonCopyMoveAble() = default;

        NonCopyMoveAble(NonCopyMoveAble &another) = delete;
        NonCopyMoveAble(const NonCopyMoveAble &another) = delete;
        NonCopyMoveAble(NonCopyMoveAble &&another) = default;
        NonCopyMoveAble& operator=(NonCopyMoveAble &another) = delete;
        NonCopyMoveAble& operator=(const NonCopyMoveAble &another) = delete;
        NonCopyMoveAble& operator=(NonCopyMoveAble &&another) = default;
    };
}

#endif //OPEN_JSON_NON_COPY_MOVE_ABLE_H

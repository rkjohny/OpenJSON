#ifndef OPEN_JSON_NON_COPY_NON_MOVE_ABLE_H
#define OPEN_JSON_NON_COPY_NON_MOVE_ABLE_H

#include <memory>
#include "Common.h"
#include "AllowedToCreateNew.h"

using namespace std;

namespace open_json {
    class NonCopyNonMoveAble : public AllowedToCreateNew {
    public:
        NonCopyNonMoveAble(NonCopyNonMoveAble &) = delete;

        NonCopyNonMoveAble(const NonCopyNonMoveAble &another) = delete;

        NonCopyNonMoveAble(NonCopyNonMoveAble &&another) noexcept = delete;

        NonCopyNonMoveAble(const NonCopyNonMoveAble &&another) noexcept = delete;

        NonCopyNonMoveAble(std::shared_ptr<NonCopyNonMoveAble> &another) = delete;

        NonCopyNonMoveAble(const std::shared_ptr<NonCopyNonMoveAble> &another) = delete;

        NonCopyNonMoveAble &operator=(const NonCopyNonMoveAble another) = delete;

        NonCopyNonMoveAble &operator=(NonCopyNonMoveAble &another) = delete;

        NonCopyNonMoveAble &operator=(const NonCopyNonMoveAble &another) = delete;

        NonCopyNonMoveAble &operator=(NonCopyNonMoveAble &&another) noexcept = delete;

        NonCopyNonMoveAble &operator=(const NonCopyNonMoveAble &&another) noexcept = delete;
    };
}


#endif //OPEN_JSON_NON_COPY_NON_MOVE_ABLE_H

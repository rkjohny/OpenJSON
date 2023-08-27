#ifndef OPEN_JSON_NON_COPY_NON_MOVE_ABLE_H
#define OPEN_JSON_NON_COPY_NON_MOVE_ABLE_H

#include <memory>
#include "../core/Common.h"
#include "AllowedToCreateNew.h"

using namespace std;

namespace open_json {
    class NonCopyNonMoveAble : public AllowedToCreateNew {
    public:
        NonCopyNonMoveAble() = default;

        ~NonCopyNonMoveAble() override = default;

        NonCopyNonMoveAble(const NonCopyNonMoveAble &) = delete;

        NonCopyNonMoveAble(NonCopyNonMoveAble &&) noexcept = delete;

        NonCopyNonMoveAble(const std::shared_ptr<NonCopyNonMoveAble> &) = delete;

        NonCopyNonMoveAble &operator=(const NonCopyNonMoveAble &) = delete;

        NonCopyNonMoveAble &operator=(NonCopyNonMoveAble &&) noexcept = delete;
    };
}


#endif //OPEN_JSON_NON_COPY_NON_MOVE_ABLE_H

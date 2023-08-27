#ifndef OPEN_JSON_COPY_ABLE_MOVE_ABLE_H
#define OPEN_JSON_COPY_ABLE_MOVE_ABLE_H

#include <memory>
#include "../core/Common.h"
#include "AllowedToCreateNew.h"

using namespace std;
namespace open_json {
    class CopyAbleMoveAble : public AllowedToCreateNew {
    public:
        CopyAbleMoveAble() = default;

        ~CopyAbleMoveAble() override = default;

        CopyAbleMoveAble(const CopyAbleMoveAble &) = default;

        CopyAbleMoveAble(CopyAbleMoveAble &&) noexcept = default;

        explicit CopyAbleMoveAble(const std::shared_ptr<CopyAbleMoveAble> &);

        CopyAbleMoveAble &operator=(const CopyAbleMoveAble &) = default;

        CopyAbleMoveAble &operator=(CopyAbleMoveAble &&) noexcept = default;

        CopyAbleMoveAble &operator=(const std::shared_ptr<CopyAbleMoveAble> &);
    };
}


#endif //OPEN_JSON_COPY_ABLE_MOVE_ABLE_H

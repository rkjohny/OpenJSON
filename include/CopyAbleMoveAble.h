#ifndef OPEN_JSON_COPY_ABLE_MOVE_ABLE_H
#define OPEN_JSON_COPY_ABLE_MOVE_ABLE_H

#include <memory>
#include "Common.h"
#include "AllowedToCreateNew.h"

using namespace std;
namespace open_json {
    class CopyAbleMoveAble : public AllowedToCreateNew {
    public:
        CopyAbleMoveAble() = default;

        ~CopyAbleMoveAble() override = default;

        CopyAbleMoveAble(const CopyAbleMoveAble &another) = default;

        CopyAbleMoveAble(CopyAbleMoveAble &&another) noexcept = default;

        explicit CopyAbleMoveAble(const std::shared_ptr<CopyAbleMoveAble> &another);

        CopyAbleMoveAble &operator=(const CopyAbleMoveAble &another) = default;

        CopyAbleMoveAble &operator=(CopyAbleMoveAble &&another) noexcept = default;

        CopyAbleMoveAble &operator=(const std::shared_ptr<CopyAbleMoveAble> &another);
    };
}


#endif //OPEN_JSON_COPY_ABLE_MOVE_ABLE_H

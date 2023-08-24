#include "../include/CopyAbleMoveAble.h"

using namespace open_json;

CopyAbleMoveAble::CopyAbleMoveAble(shared_ptr<CopyAbleMoveAble> &another) {
    copy(*another);
}

CopyAbleMoveAble::CopyAbleMoveAble(const shared_ptr<CopyAbleMoveAble> &another) {
    copy(*another);
}

CopyAbleMoveAble &CopyAbleMoveAble::operator=(const CopyAbleMoveAble &another) {
    copy(another);
    return *this;
}

CopyAbleMoveAble &CopyAbleMoveAble::operator=(CopyAbleMoveAble &&another) noexcept {
    copy(another);
    return *this;
}

CopyAbleMoveAble &CopyAbleMoveAble::operator=(shared_ptr<CopyAbleMoveAble> &another) {
    copy(*another);
    return *this;
}

CopyAbleMoveAble &CopyAbleMoveAble::operator=(const shared_ptr<CopyAbleMoveAble> &another) {
    copy(*another);
    return *this;
}

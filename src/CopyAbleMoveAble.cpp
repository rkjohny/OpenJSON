#include "../include/base_types/CopyAbleMoveAble.h"

using namespace open_json;


CopyAbleMoveAble::CopyAbleMoveAble(const shared_ptr<CopyAbleMoveAble> &) {

}

CopyAbleMoveAble &CopyAbleMoveAble::operator=(const shared_ptr<CopyAbleMoveAble> &) {
    return *this;
}

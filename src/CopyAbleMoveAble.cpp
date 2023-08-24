#include "../include/CopyAbleMoveAble.h"

using namespace open_json;


CopyAbleMoveAble::CopyAbleMoveAble(const shared_ptr<CopyAbleMoveAble> &another) {

}

CopyAbleMoveAble &CopyAbleMoveAble::operator=(const shared_ptr<CopyAbleMoveAble> &another) {
    return *this;
}

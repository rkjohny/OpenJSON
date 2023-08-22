//
// Created by User on 8/22/2023.
//


#ifndef OPEN_JSON_STATIC_H
#define OPEN_JSON_STATIC_H

# include "memory"
#include "Common.h"
#include "NotAllowedToCreateNew.h"

using namespace std;

namespace open_json {

    class Static : public NotAllowedToCreateNew {
    public:
        Static(Static&) = delete;
        Static(const Static &another) = delete;
        Static(Static &&another) = delete;
        Static(const Static &&another) = delete;
        Static(std::shared_ptr<Static> &another) = delete;
        Static(const std::shared_ptr<Static> &another) = delete;
        Static& operator=(const Static another) = delete;
        Static& operator=(Static &another) = delete;
        Static& operator=(const Static &another) = delete;
        Static& operator=(Static &&another) = delete;
        Static& operator=(const Static &&another) = delete;
    };

} // open_json

#endif //OPEN_JSON_STATIC_H

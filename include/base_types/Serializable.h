#ifndef OPEN_JSON_SERIALIZABLE_H
#define OPEN_JSON_SERIALIZABLE_H

#include <memory>
#include "../core/Common.h"
#include "AllowedToCreateNew.h"
#include "CopyAbleMoveAble.h"

namespace open_json {
    class Serializable : virtual public CopyAbleMoveAble {
    public:
        Serializable() = default;

        ~Serializable() override = default;

        Serializable(const Serializable &) = default;

        Serializable(Serializable &&) noexcept = default;

        explicit Serializable(const std::shared_ptr<Serializable> &);

        Serializable &operator=(const Serializable &) = default;

        Serializable &operator=(Serializable &&) noexcept = default;

        Serializable &operator=(const std::shared_ptr<Serializable> &);
    };

} // open_json

#endif //OPEN_JSON_SERIALIZABLE_H

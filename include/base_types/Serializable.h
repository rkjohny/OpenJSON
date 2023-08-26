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

        Serializable(const Serializable &another) = default;

        Serializable(Serializable &&another) noexcept = default;

        explicit Serializable(const std::shared_ptr<Serializable> &another);

        virtual Serializable &operator=(const Serializable &another) = default;

        virtual Serializable &operator=(Serializable &&another) noexcept = default;

        virtual Serializable &operator=(const std::shared_ptr<Serializable> &another);
    };

} // open_json

#endif //OPEN_JSON_SERIALIZABLE_H

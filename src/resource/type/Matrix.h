#pragma once

#include "resource/Resource.h"
#include "libultraship/libultra/types.h"

namespace Fast {
class Matrix : public Ship::Resource<Mtx> {
  public:
    using Resource::Resource;

    Matrix();

    Mtx* GetPointer() override;
    size_t GetPointerSize() override;

    Mtx Matrx;
};
} // namespace Fast

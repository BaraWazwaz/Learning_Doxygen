/**
 * @file
 * @brief Declaration of @ref Pointer `using` wrapper and @ref nullIntPointer.
 * 
 * @author Bara Wazwaz
 * @date 30.Jan.2026
 */
#pragma once

namespace nitron
{
    /**
     * @brief Generic pointer `using` wrapper.
     * 
     * @tparam T Typename to substitute the pointer type of.
     */
    template <typename T>
    using Pointer = T*;

    /**
     * @brief Consant Integer Null Pointer.
     * 
     * note to myself in the future: you can group global variables using:
     * - `@defgroup`
     * - `@ingroup`
     * - `@addtogroup`
     * and such.
     */
    extern const Pointer<int> nullIntPointer;
} // namespace nitron

#include "template.tpp"
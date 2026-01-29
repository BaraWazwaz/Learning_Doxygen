#pragma once

namespace nitron
{
    /**
     * @brief Base class.
     */
    class Base {
    protected:
        int data; ///< integer data.
    };

    /**
     * @brief Derived class.
     */
    class Derived : public Base {};
} // namespace nitron

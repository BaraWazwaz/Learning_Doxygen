/**
 * @file
 * @brief Declaration of @ref Base and @ref Derived classes.
 * 
 * @author Bara Wazwaz
 * @date 30.Jan.2026
 */
#pragma once

namespace nitron
{
    /**
     * @brief Base class.
     */
    class Base {
    protected:
        int data; ///< integer data.
    public:
        /**
         * @brief Getter for @ref Base::data variable.
         * @return integer value of @ref Base::data variable.
         */
        virtual int getData(void) const;

        /**
         * @brief Setter for @ref data variable.
         * @param dataValue The new value of @ref data variable.
         */
        virtual void setData(int dataValue);
    };

    /**
     * @brief Derived class.
     */
    class Derived : public Base {};
} // namespace nitron

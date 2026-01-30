/**
 * @file
 * @brief Implementation of @ref Base and @ref Derived Classes.
 * 
 * @author Bara Wazwaz
 * @date 30.Jan.2026
 */
#include "header.hpp"

namespace nitron
{
    int Base::getData(void) const {
        return data;
    }

    void Base::setData(int dataValue) {
        data = dataValue;
    }
} // namespace nitron

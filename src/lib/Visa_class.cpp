#include "Visa_class.h"

namespace card_validation
{
    bool Visa::validate(const std::string &card_number)
    {
        if (card_number.length() != 16)
        {
            return false;
        }

        if (card_number[0] != '4')
        {
            return false;
        }

        return true;
    }
}

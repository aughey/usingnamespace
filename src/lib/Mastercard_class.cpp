#include "Mastercard_class.h"

namespace card_validation
{
    bool Mastercard::validate(const std::string &card_number)
    {
        if (card_number.size() != 16)
        {
            return false;
        }

        if (card_number[0] != '5')
        {
            return false;
        }

        if (card_number[1] < '1' || card_number[1] > '5')
        {
            return false;
        }

        return true;
    }
}

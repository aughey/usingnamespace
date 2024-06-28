#include "Visa_typed.h"

namespace card_validation::VisaTyped
{
    bool validate(const Card &card)
    {
        auto &card_number = card.number;

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
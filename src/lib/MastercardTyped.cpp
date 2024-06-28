#include "Mastercard_typed.h"

namespace card_validation::MastercardTyped
{
    bool validate(const Card &card)
    {
        auto &card_number = card.number;

        if (card_number.length() != 16)
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
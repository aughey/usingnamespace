#pragma once

#include <string>

namespace card_validation
{
    namespace VisaTyped
    {
        struct Card
        {
            std::string number;
        };

        bool validate(const Card &card);
    }
}
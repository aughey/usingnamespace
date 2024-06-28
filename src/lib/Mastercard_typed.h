#pragma once

#include <string>

namespace card_validation
{
    namespace MastercardTyped
    {
        struct Card
        {
            std::string number;
        };

        bool validate(const Card &card);
    }
}
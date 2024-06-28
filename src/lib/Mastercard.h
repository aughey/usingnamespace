#pragma once

#include <string>

namespace card_validation
{
    namespace Mastercard
    {
        bool validate(const std::string &card_number);
    }
}
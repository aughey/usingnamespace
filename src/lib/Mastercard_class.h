#pragma once

#include <string>

namespace card_validation
{
    class Mastercard
    {
    public:
        static bool validate(const std::string &card_number);
    };
}
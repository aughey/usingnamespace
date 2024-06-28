#pragma once

#include <string>

namespace card_validation
{
    class Visa
    {
    public:
        static bool validate(const std::string &card_number);
    };
}
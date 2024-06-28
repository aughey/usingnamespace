#include <gtest/gtest.h>
#include "Visa.h"
#include "Mastercard.h"

using namespace card_validation::Visa;

TEST(CardTests, VisaValidates)
{
    std::string number("4111111111111111");
    EXPECT_TRUE(card_validation::Visa::validate(number));
}

TEST(CardTests, MastercardValidates)
{
    std::string number("5111111111111111");
    EXPECT_TRUE(card_validation::Mastercard::validate(number));
}

TEST(CardTests, VisaValidates2)
{
    std::string number("4111111111111111");
    EXPECT_TRUE(validate(number));
}

// TEST(CardTests, MastercardValidates2)
// {
//     std::string number("5111111111111111");
//     EXPECT_TRUE(validate(number));
// }
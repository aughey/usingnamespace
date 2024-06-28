#include <gtest/gtest.h>
#include "Visa_class.h"
#include "Mastercard_class.h"

using namespace card_validation;
// using namespace card_validation::Mastercard;

TEST(CardClassTests, VisaValidates)
{
    std::string number("4111111111111111");
    EXPECT_TRUE(card_validation::Visa::validate(number));
}

TEST(CardClassTests, VisaValidates2)
{
    std::string number("4111111111111111");
    EXPECT_TRUE(Visa::validate(number));
}

TEST(CardClassTests, MastercardValidates)
{
    std::string number("5111111111111111");
    EXPECT_TRUE(card_validation::Mastercard::validate(number));
}

TEST(CardClassTests, MastercardValidates2)
{
    std::string number("5111111111111111");
    using namespace card_validation;
    EXPECT_TRUE(Mastercard::validate(number));
}
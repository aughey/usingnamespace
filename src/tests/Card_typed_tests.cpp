#include <gtest/gtest.h>
#include "Visa_typed.h"
#include "Mastercard_typed.h"

using namespace card_validation;
using namespace card_validation::VisaTyped;
using namespace card_validation::MastercardTyped;

TEST(CardTypedTests, VisaValidates)
{
    std::string number("4111111111111111");
    EXPECT_TRUE(validate(VisaTyped::Card{number}));
    EXPECT_TRUE(VisaTyped::validate(VisaTyped::Card{number}));
    EXPECT_TRUE(card_validation::VisaTyped::validate(VisaTyped::Card{number}));
}

TEST(CardTypedTests, MastercardValidates)
{
    std::string number("5111111111111111");
    // EXPECT_TRUE(validate(Card{number}));
    EXPECT_TRUE(validate(MastercardTyped::Card{number}));
}
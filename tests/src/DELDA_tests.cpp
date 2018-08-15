#include "gtest/gtest.h"

/**
 *  Overall algorithm performance check.
 */
class DELDAFixture : public ::testing::Test
{
  protected:

    void SetUp() override
    {}

    void TearDown() override
    {}
};

/**
 * Google test working check.
 */
TEST_F(DELDAFixture, test_check)
{
  ASSERT_TRUE(2 + 2 == 4);
}
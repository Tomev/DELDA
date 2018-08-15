#include "gtest/gtest.h"

#include <ctime>
#include <random>

class DELDAFixture : public ::testing::Test
{
  protected:

    void SetUp() override
    {

    }

    void TearDown() override
    {}
};

TEST_F(DELDAFixture, test_check)
{
  ASSERT_TRUE(2 + 2 == 4);
}
#include "test_math.h"
#include <tutorial/math.h>

MathTest::MathTest() {}

MathTest::~MathTest() {}

void MathTest::SetUp() {}

void MathTest::TearDown() {}

TEST_F(MathTest, SqrtTest)
{
    float value = 100.0F;

    ASSERT_FLOAT_EQ(10.0, tutorial::Sqrt(value));
}
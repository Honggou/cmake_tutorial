#pragma once

#include <gtest/gtest.h>

class MathTest : public ::testing::Test
{
  protected:
    MathTest();

    virtual ~MathTest();

    virtual void SetUp();

    virtual void TearDown();
};

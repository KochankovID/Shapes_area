//
// Created by Ilya Kochankov on 9/12/20.
//

#include "gtest/gtest.h"
#include "PCenter.h"

TEST(PCenter_construct, default_construct_no_throw){
    ASSERT_NO_THROW(PCenter());
}

TEST(PCenter_construct, default_construct_correct){
    PCenter pCenter;

    ASSERT_EQ(pCenter.x(), 0);
    ASSERT_EQ(pCenter.y(), 0);
}
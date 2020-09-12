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

TEST(PCenter_construct, point_construct_no_throw){
    ASSERT_NO_THROW(PCenter(Point(2, 3)));
}

TEST(PCenter_construct, point_construct_correct){
    PCenter pCenter(Point(4, 5));

    ASSERT_EQ(pCenter.x(), 4);
    ASSERT_EQ(pCenter.y(), 5);
}

TEST(PCenter_construct, x_y_construct_no_throw){
    ASSERT_NO_THROW(PCenter(2, 3));
}

TEST(PCenter_construct, x_y_construct_correct){
    PCenter pCenter(7, 1);

    ASSERT_EQ(pCenter.x(), 7);
    ASSERT_EQ(pCenter.y(), 1);
}

TEST(PCenter_construct, copy_construct_no_throw){
    ASSERT_NO_THROW(PCenter(2, 3));
}

TEST(PCenter_construct, copy_construct_correct){
    PCenter pCenter1(7, 1);

    PCenter pCenter(pCenter1);

    ASSERT_EQ(pCenter.x(), 7);
    ASSERT_EQ(pCenter.y(), 1);
}

TEST(PCenter_assignment, assign_operator_no_throw){
    PCenter a, b(1,2);

    ASSERT_NO_THROW(a = b);
}

TEST(PCenter_assignment, assign_operator_correct){
    PCenter a, b(1,2);

    a = b;

    ASSERT_EQ(a.x(), 1);
    ASSERT_EQ(a.y(), 2);
}
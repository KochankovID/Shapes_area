//
// Created by Ilya Kochankov on 9/12/20.
//

#include "gtest/gtest.h"
#include "Circle.h"

TEST(Point_construct, default_construct_no_throw){
    ASSERT_NO_THROW(Circle());
}

TEST(Point_construct, default_construct_no_correct){
    Circle circle;

    ASSERT_EQ(circle.center(), Point());
    ASSERT_EQ(circle.getRadius(), 1);
}
//
// Created by Ilya Kochankov on 9/12/20.
//

#include "gtest/gtest.h"
#include "Point.h"

TEST(Point_construct, default_construct_no_throw){
    ASSERT_NO_THROW(Point());
}

TEST(Point_construct, default_construct_correct){
    Point point(3,4);

    ASSERT_EQ(point.x, 3);
    ASSERT_EQ(point.y, 4);
}
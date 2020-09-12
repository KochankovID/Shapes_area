//
// Created by Ilya Kochankov on 9/12/20.
//

#include "gtest/gtest.h"
#include "Point.h"

TEST(Point_construct, default_construct_no_throw){
    ASSERT_NO_THROW(Point());
}

TEST(Point_construct, default_construct_correct){
    Point point;

    ASSERT_EQ(point.x, 0);
    ASSERT_EQ(point.y, 0);
}

TEST(Point_construct, initial_construct_no_throw){
    ASSERT_NO_THROW(Point(1, 2));
}

TEST(Point_construct, initial_construct_correct){
    Point point(1, 2);
    ASSERT_EQ(point.x, 1);
    ASSERT_EQ(point.y, 2);
}

TEST(Point_assignment, assign_operator_no_throw){
    Point a, b(1,2);

    ASSERT_NO_THROW(a = b);
}

TEST(Point_assignment, assign_operator_correct){
    Point a, b(1,2);

    a = b;

    ASSERT_EQ(a.x, 1);
    ASSERT_EQ(a.y, 2);
}

TEST(Point_equal, equal_operator_no_throw){
    Point a(1, -2), b(1,-2);

    ASSERT_NO_THROW(a == b);
}

TEST(Point_equal, equal_operator_correct){
    Point a(1, -2), b(1,-2);

    ASSERT_EQ(a == b, true);
}

TEST(Point_equal, unequal_operator_no_throw){
    Point a(1, -2), b(1,-2);

    ASSERT_NO_THROW(a != b);
}

TEST(Point_equal, unequal_operator_correct){
    Point a(1, 2), b(1,-2);

    ASSERT_EQ(a != b, true);
}
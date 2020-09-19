//
// Created by Ilya Kochankov on 9/12/20.
//

#include "gtest/gtest.h"
#include "Point_implementation/PCircle.h"
#include "cmath"

TEST(PCircle_construct, default_construct_no_throw){
    ASSERT_NO_THROW(PCircle());
}

TEST(PCircle_construct, default_construct_correct){
    PCircle pCircle;

    ASSERT_EQ(pCircle.x(), 0);
    ASSERT_EQ(pCircle.y(), 0);
    ASSERT_EQ(pCircle.getRadius(), 1);
}

TEST(PCircle_construct, point_and_radius_construct_no_throw){
    ASSERT_NO_THROW(PCircle(Point(1,2), 2));
}

TEST(PCircle_construct, point_and_radius_construct_correct){
    PCircle pCircle(Point(1,2), 3);

    ASSERT_EQ(pCircle.x(), 1);
    ASSERT_EQ(pCircle.y(), 2);
    ASSERT_EQ(pCircle.getRadius(), 3);
}

TEST(PCircle_construct, point_and_radius_construct_negative_radius){
    ASSERT_ANY_THROW(PCircle(Point(-1, 4), -1));
}

TEST(PCircle_construct, point_and_radius_construct_zero_radius){
    ASSERT_ANY_THROW(PCircle(Point(-1, 4), 0));
}

TEST(PCircle_construct, x_y_radius_construct_no_throw){
    ASSERT_NO_THROW(PCircle(1, 2, 2));
}

TEST(PCircle_construct, x_y_radius_construct_correct){
    PCircle pCircle(1,2, 3);

    ASSERT_EQ(pCircle.x(), 1);
    ASSERT_EQ(pCircle.y(), 2);
    ASSERT_EQ(pCircle.getRadius(), 3);
}

TEST(PCircle_construct, x_y_radius_construct_negative_radius){
    ASSERT_ANY_THROW(PCircle(0, 4, -1));
}

TEST(PCircle_construct, x_y_radius_construct_zero_radius) {
    ASSERT_ANY_THROW(PCircle(-1, 5, 0));
}

TEST(PCircle_construct, copy_construct_no_throw){
    PCircle pCircle;

    ASSERT_NO_THROW(PCircle(pCircle));
}

TEST(PCircle_construct, copy_construct_correct){
    PCircle pCircle1(1,2,3);
    PCircle pCircle(pCircle1);

    ASSERT_EQ(pCircle.x(), 1);
    ASSERT_EQ(pCircle.y(), 2);
    ASSERT_EQ(pCircle.getRadius(), 3);
}

TEST(PCircle_method, setRadius_no_throw){
    PCircle pCircle;

    ASSERT_NO_THROW(pCircle.setRadius(10));
}

TEST(PCircle_method, setRadius_correct){
    PCircle pCircle;

    pCircle.setRadius(14);

    ASSERT_EQ(pCircle.getRadius(), 14);
}

TEST(PCircle_method, area_no_throw){
    PCircle pCircle;

    ASSERT_NO_THROW(pCircle.area());
}

TEST(PCircle_method, area_correct){
    PCircle pCircle(0,0,2);

    ASSERT_TRUE(abs(pCircle.area() - 12.56) < 0.01);
}

TEST(PCircle_assignment, assignment_no_throw){
    PCircle pCircle, pCircle1(4,5,6);

    ASSERT_NO_THROW(pCircle = pCircle1);
}

TEST(PCircle_assignment, assignment_correct){
    PCircle pCircle, pCircle1(4,5,6);

    pCircle = pCircle1;

    ASSERT_EQ(pCircle.x(), 4);
    ASSERT_EQ(pCircle.y(), 5);
    ASSERT_EQ(pCircle.getRadius(), 6);
}

TEST(PCircle_equal, equal_no_throw){
    PCircle pCircle(4,5,6), pCircle1(4,5,6);

    ASSERT_NO_THROW(pCircle == pCircle1);
}

TEST(PCircle_equal, equal_correct){
    PCircle pCircle(4,5,6), pCircle1(4,5,6);

    ASSERT_TRUE(pCircle == pCircle1);
}

TEST(PCircle_unequal, unequal_no_throw){
    PCircle pCircle(4,5,6), pCircle1(-4,5,6);

    ASSERT_NO_THROW(pCircle != pCircle1);
}

TEST(PCircle_unequal, unequal_correct){
    PCircle pCircle(4,5,6), pCircle1(-4,5,6);

    ASSERT_TRUE(pCircle != pCircle1);
}
//
// Created by Ilya Kochankov on 9/12/20.
//

#include "gtest/gtest.h"
#include "Circle.h"
#include "cmath"

TEST(Circle_construct, default_construct_no_throw){
    ASSERT_NO_THROW(Circle());
}

TEST(Circle_construct, default_construct_correct){
    Circle circle;

    ASSERT_EQ(circle.center(), Point());
    ASSERT_EQ(circle.getRadius(), 1);
}

TEST(Circle_construct, point_and_radius_construct_no_throw){
    ASSERT_NO_THROW(Circle(Point(1,2), 2));
}

TEST(Circle_construct, point_and_radius_construct_correct){
    Circle circle(Point(1,2), 3);

    ASSERT_EQ(circle.center(), Point(1, 2));
    ASSERT_EQ(circle.getRadius(), 3);
}

TEST(Circle_construct, point_and_radius_construct_negative_radius){
    ASSERT_ANY_THROW(Circle(Point(-1, 4), -1));
}

TEST(Circle_construct, point_and_radius_construct_zero_radius){
    ASSERT_ANY_THROW(Circle(Point(-1, 4), 0));
}

TEST(Circle_construct, x_y_radius_construct_no_throw){
    ASSERT_NO_THROW(Circle(1, 2, 2));
}

TEST(Circle_construct, x_y_radius_construct_correct){
    Circle circle(1,2, 3);

    ASSERT_EQ(circle.center(), Point(1, 2));
    ASSERT_EQ(circle.getRadius(), 3);
}

TEST(Circle_construct, x_y_radius_construct_negative_radius){
    ASSERT_ANY_THROW(Circle(0, 4, -1));
}

TEST(Circle_construct, x_y_radius_construct_zero_radius) {
    ASSERT_ANY_THROW(Circle(-1, 5, 0));
}

TEST(Circle_construct, copy_construct_no_throw){
    Circle circle;

    ASSERT_NO_THROW(Circle(circle));
}

TEST(Circle_construct, copy_construct_correct){
    Circle circle, circle1(1,2,3);

    circle = circle1;

    ASSERT_EQ(circle.center(), Point(1, 2));
    ASSERT_EQ(circle.getRadius(), 3);
}

TEST(Circle_method, setRadius_no_throw){
    Circle circle;

    ASSERT_NO_THROW(circle.setRadius(10));
}

TEST(Circle_method, setRadius_correct){
    Circle circle;

    circle.setRadius(14);

    ASSERT_EQ(circle.getRadius(), 14);
}

TEST(Circle_method, area_no_throw){
    Circle circle;

    ASSERT_NO_THROW(circle.area());
}

TEST(Circle_method, area_correct){
    Circle circle(0,0,2);

    ASSERT_TRUE(abs(circle.area() - 12.56) < 0.01);
}
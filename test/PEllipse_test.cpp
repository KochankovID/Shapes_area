//
// Created by Ilya Kochankov on 9/12/20.
//

#include "gtest/gtest.h"
#include "Point_implementation/PEllipse.h"
#include "cmath"

TEST(PEllipse_construct, default_construct_no_throw){
    ASSERT_NO_THROW(PEllipse());
}

TEST(PEllipse_construct, default_construct_correct){
    PEllipse PEllipse;

    ASSERT_EQ(PEllipse.x(), 0);
    ASSERT_EQ(PEllipse.y(), 0);
    ASSERT_EQ(PEllipse.getr(), 1);
    ASSERT_EQ(PEllipse.getR(), 1);
}

TEST(PEllipse_construct, point_construct_no_throw){
    ASSERT_NO_THROW(PEllipse(Point(1, 2), 2, 3));
}

TEST(PEllipse_construct, point_construct_correct){
    PEllipse pEllipse(Point(1, 2), 2, 3);

    ASSERT_EQ(pEllipse.x(), 1);
    ASSERT_EQ(pEllipse.y(), 2);
    ASSERT_EQ(pEllipse.getr(), 2);
    ASSERT_EQ(pEllipse.getR(), 3);
}

TEST(PEllipse_construct, x_y_construct_no_throw){
    ASSERT_NO_THROW(PEllipse(1, 2, 2, 3));
}

TEST(PEllipse_construct, x_y_construct_correct){
    PEllipse pEllipse(1, 2, 2, 3);

    ASSERT_EQ(pEllipse.x(), 1);
    ASSERT_EQ(pEllipse.y(), 2);
    ASSERT_EQ(pEllipse.getr(), 2);
    ASSERT_EQ(pEllipse.getR(), 3);
}

TEST(PEllipse_construct, copy_construct_no_throw){
    PEllipse pEllipse(2,3,4,5);

    ASSERT_NO_THROW(PEllipse(pEllipse));
}

TEST(PEllipse_construct, copy_construct_correct){
    PEllipse pEllipse(2,3,4,5);

    PEllipse PEllipse(pEllipse);

    ASSERT_EQ(PEllipse.x(), 2);
    ASSERT_EQ(PEllipse.y(), 3);
    ASSERT_EQ(PEllipse.getr(), 4);
    ASSERT_EQ(PEllipse.getR(), 5);
}

TEST(PEllipse_method, setr_no_throw){
    PEllipse PEllipse;

    ASSERT_NO_THROW(PEllipse.setr(10));
}

TEST(PEllipse_method, setr_correct){
    PEllipse PEllipse;

    PEllipse.setr(14);

    ASSERT_EQ(PEllipse.getr(), 14);
}

TEST(PEllipse_method, setR_no_throw){
    PEllipse PEllipse;

    ASSERT_NO_THROW(PEllipse.setR(10));
}

TEST(PEllipse_method, setR_correct){
    PEllipse PEllipse;

    PEllipse.setR(14);

    ASSERT_EQ(PEllipse.getR(), 14);
}

TEST(PEllipse_method, area_no_throw){
    PEllipse PEllipse;

    ASSERT_NO_THROW(PEllipse.area());
}

TEST(PEllipse_method, area_correct){
    PEllipse PEllipse(0,0,2,3);

    ASSERT_TRUE(abs(PEllipse.area() - 18.849) < 0.01);
}

TEST(PEllipse_assignment, assignment_no_throw){
    PEllipse PEllipse, PEllipse1(-1, 4,5,6);

    ASSERT_NO_THROW(PEllipse = PEllipse1);
}

TEST(PEllipse_assignment, assignment_correct){
    PEllipse PEllipse, PEllipse1(-1, 4,5,6);

    PEllipse = PEllipse1;

    ASSERT_EQ(PEllipse.x(), -1);
    ASSERT_EQ(PEllipse.y(), 4);
    ASSERT_EQ(PEllipse.getr(), 5);
    ASSERT_EQ(PEllipse.getR(), 6);
}

TEST(PEllipse_equal, equal_no_throw){
    PEllipse PEllipse(4, 4,5,6), PEllipse1(4, 4,5,6);

    ASSERT_NO_THROW(PEllipse == PEllipse1);
}

TEST(PEllipse_equal, equal_correct){
    PEllipse PEllipse(4, 4, 5, 6), PEllipse1(4, 4, 5, 6);

    ASSERT_TRUE(PEllipse == PEllipse1);
}

TEST(PEllipse_unequal, unequal_no_throw){
    PEllipse PEllipse(-2, 4, 5, 6), PEllipse1(2, -4, 5, 6);

    ASSERT_NO_THROW(PEllipse != PEllipse1);
}

TEST(PEllipse_unequal, unequal_correct) {
    PEllipse PEllipse(-2, 4, 5, 6), PEllipse1(2, -4, 5, 6);

    ASSERT_TRUE(PEllipse != PEllipse1);
}
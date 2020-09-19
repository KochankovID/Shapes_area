//
// Created by Ilya Kochankov on 9/19/20.
//

#include "gtest/gtest.h"
#include "Random_generator.h"
#include "PCircle.h"
#include "PEllipse.h"


TEST(Random_generator, no_param_construct_no_throw){
    ASSERT_NO_THROW(Random_generator());
}

TEST(Random_generator, no_param_construct_correct){
    Random_generator randomGenerator;
    std::pair<double, double> radiusRange(1, 100);

    ASSERT_EQ(randomGenerator.getRRange(), radiusRange);
    ASSERT_EQ(randomGenerator.getPmin(), Point(0, 0));
    ASSERT_EQ(randomGenerator.getPmax(), Point(100, 100));
}

TEST(Random_generator, init_construct_no_throw){
    ASSERT_NO_THROW(Random_generator(std::make_pair(19,20), Point(3,4), Point(5,6)));
}

TEST(Random_generator, init_construct_correct){
    Random_generator randomGenerator(std::make_pair(19,20), Point(3,4),
                           Point(5,6));
    std::pair<double, double> radiusRange(19, 20);

    ASSERT_EQ(randomGenerator.getRRange(), radiusRange);
    ASSERT_EQ(randomGenerator.getPmin(), Point(3, 4));
    ASSERT_EQ(randomGenerator.getPmax(), Point(5, 6));
}

TEST(Random_generator, set_radius_range_throw){
    Random_generator randomGenerator;

    ASSERT_ANY_THROW(randomGenerator.setRRange(std::make_pair(10,1)));
}

TEST(Random_generator, set_radius_range_correct){
    Random_generator randomGenerator;
    std::pair<double, double> radiusRange(29, 50);

    randomGenerator.setRRange(radiusRange);

    ASSERT_EQ(randomGenerator.getRRange(), radiusRange);

}

TEST(Random_generator, set_setPmin_throw){
    Random_generator randomGenerator;

    ASSERT_ANY_THROW(randomGenerator.setPmin(Point(1000, 1000)));
}

TEST(Random_generator, set_setPmin_correct){
    Random_generator randomGenerator;

    randomGenerator.setPmin(Point(-1, -1));

    ASSERT_EQ(randomGenerator.getPmin(), Point(-1, -1));
}

TEST(Random_generator, set_setPmax_throw){
    Random_generator randomGenerator;

    ASSERT_ANY_THROW(randomGenerator.setPmax(Point(-1, -1)));
}

TEST(Random_generator, set_setPmax_correct){
    Random_generator randomGenerator;

    randomGenerator.setPmax(Point(1000, 1000));

    ASSERT_EQ(randomGenerator.getPmax(), Point(1000, 1000));
}

TEST(Random_generator, randius_generator){
    Random_generator randomGenerator;

    double radius = randomGenerator.randius_generator();

    ASSERT_TRUE(radius >= randomGenerator.getRRange().first);
    ASSERT_TRUE(radius <= randomGenerator.getRRange().second);
}

TEST(Random_generator, center_generator){
    Random_generator randomGenerator;

    Point center = randomGenerator.center_generator();

    ASSERT_TRUE(center.x >= randomGenerator.getPmin().x);
    ASSERT_TRUE(center.x <= randomGenerator.getPmax().x);
    ASSERT_TRUE(center.y >= randomGenerator.getPmin().y);
    ASSERT_TRUE(center.y <= randomGenerator.getPmax().y);
}

TEST(Random_generator, curve_random_type_generator){
    Random_generator randomGenerator;
    Curve* curve;

    ASSERT_NO_THROW(curve = randomGenerator.curve_generator());

    delete curve;
}
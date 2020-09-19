//
// Created by Ilya Kochankov on 9/19/20.
//

#include <vector>

#include "gtest/gtest.h"
#include "Curves_utils.h"
#include "Point_implementation/PCircle.h"
#include "Point_implementation/PEllipse.h"


using namespace std;

TEST(total_area, total_area_no_throw){
    vector<shared_ptr<Curve>> v_curves = {
            make_shared<PCircle>(Point(0,0), 5),
            make_shared<PEllipse>(Point(0,0), 10, 10)
                    };

    ASSERT_NO_THROW(total_area(v_curves.begin(), v_curves.end()));
}

TEST(total_area, total_area_correct){
    vector<shared_ptr<Curve>> v_curves = {
            make_shared<PCircle>(Point(0,0), 5),
            make_shared<PEllipse>(Point(0,0), 10, 10)
    };
    double circle_area = v_curves[0]->area();
    double ellips_area = v_curves[1]->area();

    double area = total_area(v_curves.begin(), v_curves.end());

//    ASSERT_EQ(circle_area, 78.539816339744825);
//    ASSERT_EQ(ellips_area, 314.1592653589793);
    ASSERT_EQ(area, 78.539816339744825 + 314.1592653589793);
}
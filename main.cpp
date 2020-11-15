#include <iostream>
#include <vector>

#include "Random_generator.h"
#include "Curves_utils.h"
#include "PerimeterVisitor.h"


using namespace std;

int main() {
    Random_generator randomGenerator;
    vector<shared_ptr<Curve>> vector_of_curves;
    int number_of_curves;

    cout << "Введите кол-во кривых: " << endl;
    cin >> number_of_curves;

    for(size_t i = 0; i < number_of_curves; i++){
        vector_of_curves.push_back(randomGenerator.curve_generator());
        cout << vector_of_curves.back()->toString() << endl;
    }

    std::sort(vector_of_curves.begin(), vector_of_curves.end(), [](const shared_ptr<Curve>& f_curve,
                                                                   const shared_ptr<Curve>& s_curve) -> bool{
        return f_curve->area() < s_curve->area();
    });

    cout << endl << "Отсортированные кривые: " << endl;

    for(auto i = vector_of_curves.begin(); i < vector_of_curves.end(); i++){
        cout << (*i)->toString() << endl;
    }

    cout << "Общая площадь кривых: " << endl;

    double t_area = total_area(vector_of_curves.begin(), vector_of_curves.end());
    cout << t_area << endl;

    cout << endl << "Периметры кривых: " << endl;
    auto visitor = PerimeterVisitor();
    for(auto i = vector_of_curves.begin(); i < vector_of_curves.end(); i++){
        cout << (*i)->toString() << ": " << (*i)->accept(visitor) << endl;
    }

    return 0;
}

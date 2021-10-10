

#include "Point.h"
const double PI = 3.1415926;
class Circle : protected Point {
    protected:
        double radius;
    public:
        Circle(double R = 0, int X = 0, int Y = 0) : Point(X, Y)
        {
            radius = R;
            cout << "circle constructing, radius: " << R << endl;
        }
        ~Circle()
        {
            cout << "Circle destructing, radius: " << radius << endl;
        }
};
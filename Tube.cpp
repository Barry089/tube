

#include <iostream>
#include "Circle.h"
using namespace std;

class Tube : protected Circle {
    private:
        double height;
        Circle InCircle;
    public:
        Tube(double H, double R1, double R2 = 0, int X = 0, int Y = 0) : InCircle(R2, X, Y), Circle(R1, X, Y)
        {
            height = H;
            cout << "Tube constructing, height: " << H << endl;
        }
        ~Tube()
        {
            cout << "Tube destructing, height: " << height << endl;
        }
};

int main()
{
    Tube TU(100, 20, 5);
    return 0;
}
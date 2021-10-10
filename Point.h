

#include <iostream>
using namespace std;
class Point {
    private:
        int X, Y;
    public:
        Point(int X, int Y)
        {
            this->X = X, this->Y = Y;
            cout << "Point constructing..." << endl;
        }
        ~Point()
        {
            cout << "Point destructing..." << endl;
        }
};
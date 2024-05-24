#include <iostream>
using namespace std;

class Circle {
    int radius;
    public:
    Circle(int r) { radius = r; }
    int getRadius() { return radius; }
    double getArea() { return 3.14 * radius * radius; }
};

int main() {
    Circle circleArray[3] = { Circle(10), Circle(20), Circle(30) };
}
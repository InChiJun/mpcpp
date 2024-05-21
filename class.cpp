#include <iostream>

using namespace std;

class Circle{
    private:
        double radius;
    public:
        Circle(double r){
            radius = r;
        }
        double getRadius(){
            return radius;
        }
        
        double getArea(){
            return 3.14 * radius * radius;
        }
};

int main(int argc, char const *argv[]){
    // Circle donut;
    Circle pizza(30.0);
    // cout << "donut의 면적은 " << donut.getArea() << endl;
    cout << "pizza의 면적은 " << pizza.getArea() << endl;

    return 0;
}
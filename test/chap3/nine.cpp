#include <iostream>

using namespace std;

class Oval{
	int width, height;
}

int main(){
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}
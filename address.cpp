#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	cout<<"Enter your address: ";
	char address[100];
	cin.getline(address, 100, '\n');
	cout<<"address: "<<address<<endl;

	return 0;
}

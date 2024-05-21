#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout<<song + "를 부른 가수는";
	cout<<"(hint: 첫 글자는"<<elvis[0]<<")";
	// cin.getline(singer, 20);
	getline(cin, singer);
	if(singer == elvis)
		cout<<"Elvis!";
	else
		cout<<"Elvis가 아닙니다..!";

	return 0;
}

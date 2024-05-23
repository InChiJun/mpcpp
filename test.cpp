#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class Random{
	public:
		Random(){}
		int next(){
			return rand()%32768;
		}
		int nextInRange(int start, int end){
			int range = end - start + 1;
			return (rand()%range) + start;
		}
};


int main(int argc, char const *argv[]){
	Random r;
	cout << "-- 0에서 " << 32767 << "까지의 랜덤 정수 10 개--" << endl;
	for(int i = 0; i < 10; i++){
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for(int i = 0; i < 10; i++){
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
    return 0;
}

#include <iostream>
#include <cstring>

using namespace std;
/* 10번 문제 */
int main(int argc, char const *argv[]){
    string input;

    cout<<"문자열 입력>>";
    cin>>input;

    for (size_t i = 0; i < input.length(); i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            cout<<input[j]<<endl;
        }
    }
    
    return 0;
}
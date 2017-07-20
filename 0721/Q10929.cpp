#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int num;
    while(cin>>num){
        if(num == 0){
            break;
        }

        if(num%11 == 0){
            cout<<num<<" is a multiple of 11."<<endl;
        }else{
            cout<<num<<" is not a multiple of 11."<<endl;
        }
    }
    return 0;
}



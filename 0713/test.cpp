
#include<iostream>
using namespace std;

int main()
{
    int num,t=0;
    cin>>num;

    while(num>0){
        t++;
        num = num/10;
    }


    cout<<t<<endl;
}



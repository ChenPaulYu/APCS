
#include<iostream>
using namespace std;

int main()
{
    int y;
    while(cin>>y){
        if(((y%4==0)and(y%100!=0))||y%400==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}



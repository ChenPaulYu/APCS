#include<iostream>
using namespace std;

int main()
{
    //四年一潤，百年不潤，四百年潤
    int a,b,t=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if((i%4==0&&i%100!=0)||(i%400==0)){
            t++;
        }
    }
    cout<<t<<endl;
    return 0;
}


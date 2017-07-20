#include<iostream>
using namespace std;

int main()
{
    int b;
    cin>>b;
    for(int k=1;k<=b;k++){
        long long int a,t=1;
        cin>>a;
        if(a==0){
            t=0;
        }
        for(int i=a;i>0;i=i/10){
            t = t*(i%10);
        }
            cout<<t<<endl;
    }
    return 0;
}

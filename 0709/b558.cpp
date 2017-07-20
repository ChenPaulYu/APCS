#include<iostream>
using namespace std;

int main()
{
    int n,t;
    while(cin>>n){
        t=1;
        for(int i=1;i<n;i++){
            t += i;
        }
        cout<<t<<endl;
    }


    return 0;
}

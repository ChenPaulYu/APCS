#include<iostream>
using namespace std;

//zeroJudge a111

int main()
{
    int n,t=0;


    while(cin>>n){
        if(n==0){
            break;
        }

        while(n>0){
            t = t+n*n;
            n--;
        }
        cout<<t<<endl;
        t = 0;
    }



    return 0;
}

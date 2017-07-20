#include<iostream>
using namespace std;

int main()
{
    long long int a,b,m,r;

    while(cin>>a>>b){
        if(a>b){
            m=b;
        }else{
            m=a;
        }

        while(m>0){
            if((a%m==0)and(b%m==0)){
                cout<<m<<endl;
                break;
            }
            m--;
        }

        if(m == 0){
            cout<<1<<endl;
        }
    }

    return 0;
}






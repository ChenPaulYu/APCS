#include<iostream>
using namespace std;

int main()
{
    long long int a,b,c,i=0,t=1;
    long double ans,r;
    cin>>a>>b>>c;
    while(i<c){
        t*=10;
        i++;
    }

    r = a*t/b;
    cout<<r<<endl;
    ans = r/t;


    cout<<ans<<endl;

    return 0;
}

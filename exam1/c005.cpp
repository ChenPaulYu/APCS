#include<iostream>
using namespace std;

int main()
{
    long long int m,n,t=0;
    cin>>m;
    for(int k=1;k<=m;k++){
        cin>>n;
        for(int i=1;i<=n;i++){
            long long int a,b,c;
            cin>>a>>b>>c;
            t += a*c;
        }
        cout<<t<<endl;
        t=0;
    }

    return 0;
}





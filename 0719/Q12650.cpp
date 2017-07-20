#include<iostream>
using namespace std;

int main()
{
    int n,R,p[10000],i=1,man;
    while(cin>>n>>R){
        while(i<=n){
            p[i] = 0;
            i++;
        }

        i=1;
        while(i<=R){
            cin>>man;
            p[man]=1;
            i++;
        }

        if(n==R){
            cout<<"*"<<endl;
        }else{
            i=1;
            while(i<=n){
                if(p[i] == 0){
                    cout<<i<<" ";
                }
                i++;
            }
            cout<<endl;
        }




    }

    return 0;
}



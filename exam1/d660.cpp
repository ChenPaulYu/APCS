#include<iostream>
using namespace std;

int main()
{
    int n,k,a,b;
    int high=0,low=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>k;
        for(int m=1;m<=k;m++){
            cin>>a;
            if(m !=1){
                if(a>b){
                    high++;
                }else if(a<b){
                    low++;
                }
            }
            b = a;
        }
        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
        low = 0;
        high = 0;
    }

}

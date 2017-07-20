#include<iostream>
using namespace std;

int main()
{
    int n,h[60],sum=0,avg,ans=0;

    while(cin>>n){

        if(n==0){
            break;
        }

        for(int i=0;i<n;i++){
            cin>>h[i];
            sum = sum+h[i];
        }

        avg = sum/n;

        for(int k=0;k<n;k++){
            if(avg>h[k]){
                ans += avg-h[k];
            }else{
                ans += h[k]-avg;
            }
        }

        ans /= 2;
        cout << "The minimum number of moves is " << ans << "." << endl;
        cout << endl;


    }

    return 0;
}




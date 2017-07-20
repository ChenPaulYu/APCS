#include<iostream>
using namespace std;

int main()
{
    int n,temp;



    while(cin>>n){
        int result[100],i=0;

        if(n==0){
            break;
        }

        for(int a=0;a<100;a++){
            result[a] = 0;
        }

        while(i<n){
            cin>>temp;
            result[temp]++;
            i++;
        }

        i = 0;

        while(i<100){
            if(result[i]!=0){
                for(int k=0;k<result[i];k++){
                   cout<<i<<" ";
                }
            }
            i++;
        }

        cout<<endl;
    }


    return 0;
}

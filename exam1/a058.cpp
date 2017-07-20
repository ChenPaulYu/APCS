#include<iostream>
using namespace std;

int main()
{
    int n,i,temp,a=0,b=0,c=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>temp;
        if(temp%3==0){
            a++;
        }else if(temp%3==1){
            b++;
        }else{
            c++;
        }
    }

    cout<<a<<" "<<b<<" "<<c;

    return 0;
}



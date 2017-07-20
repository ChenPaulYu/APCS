#include<iostream>
using namespace std;

int main()
{
    long long int a,b,c,n=0;
    bool add = false;
    cin>>a>>b;

    /*
    if(a%2==0||b%2==0){
        n = (b-a)/2+1;
    }else{
        n = (b-a)/2;
    }
    */

    if((a-b+1)%2 ==0){
        if(b%2==0){
            add = true;
        }
        b--;
    }

    c = (a+b+1)/2;


    for(int i=a;i<c;i++){
        if(i%2==0){
            n++;
        }
    }
    n*=2;
    if(add){
        n++;
    }

    if(c%2==0){
        n++;
    }



    cout<<n;


    return 0;
}

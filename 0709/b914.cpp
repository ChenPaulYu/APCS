#include<iostream>
using namespace std;

int main()
{
    int a,b,t;
    while(cin>>a){
        t=0;
        for(int i=0;i<a;i++){
            cin>>b;
            t += b;
        }
        if(a==0){
            cout<<t;
        }else if((t%a)*2>=a){
            cout<<(t/a)+1<<endl;
        }else{
            cout<<(t/a)<<endl;
        }
    }
}

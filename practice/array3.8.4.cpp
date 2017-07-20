#include<iostream>
using namespace std;

int main()
{
    int customer[100];
    int N,T,i=0;

    cin>>N>>T;

    //把所有帳戶存款歸零
    while(i<N){
        customer[i]=0;
        i++;
    }
    i=0;
    //執行所有交易
    while(i<T){
        int n,t,m;
        cin>>n>>t>>m; //n => 第幾個人 t=> 存款/提款 m=>多少錢
        if(t==1){
            customer[n] = customer[n]+m ; //customer[n] =>目前的存款
        }else if(t ==2){
            customer[n] = customer[n]-m ;
        }
        i++;
    }
    i=0;
    while(i<N){
        cout<<"No."<<i<<"="<<customer[i]<<endl;
        i++;
    }

    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int layer;
    while(cin>>layer){
        for(int i=1;i<=layer;i++){
            for(int k=layer-i;k>0;k--){
                cout<<"_";
            }
            for(int m=1;m<=i;m++){
                cout<<"+";
            }
            cout<<endl;

        }
        if(layer!=0){
           cout<<endl;
        }

    }

    return 0;
}




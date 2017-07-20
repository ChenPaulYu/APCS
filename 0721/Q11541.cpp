#include<iostream>
using namespace std;

int main()
{

    int times,n=0,k=0,r=0,order;
    char c;

    string setence;

    cin>>times;
    while(n<times){
        cin>> setence;
        k = 0;
        r = 0;
        order = 1;
        while(k<setence.length()){
            if(('0'<=setence[k])and(setence[k]<='9')){
                r =r*order+(int(setence[k])-48);
                order = 10;
            }else{
                r = 0;
                order = 1;
                c = setence[k];
            }


            if(('0'>=setence[k+1])or(setence[k+1]>='9')){
                for(int i=0;i<r;i++){
                    cout<<c;
                }
            }

            k++;
        }
        cout<<endl;
        n++;
    }


    return 0;
}


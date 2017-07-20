#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int grp,space;
    string num;
    int m;

    while(cin>>grp>>num){
        if(grp ==0){
            break;
        }

        space = num.length()/grp;

        m = space-1;
        int order = 0;

        for(int i=0;i<num.length();i++){
                cout<<num[m+(space)*order];
                m--;
                if(m == -1){
                    m = space-1;
                    order ++;
                }

        }

        cout<<endl;

    }
    return 0;
}


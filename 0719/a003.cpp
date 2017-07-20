
#include<iostream>
using namespace std;

int main()
{
    int m,d;
    while(cin>>m>>d){

        int S = (m*2+d)%3;

        switch(S){

            case 0:
                cout<<"普通"<<endl;
                break;
            case 1:
                cout<<"吉"<<endl;
                break;
            case 2:
                cout<<"大吉"<<endl;
                break;
        }


    }

    return 0;
}

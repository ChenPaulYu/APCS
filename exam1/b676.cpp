#include<iostream>
using namespace std;

int main()
{

    int x,r;
    cin>>x;
    r=x%5;
    switch(r){
        case 0:
            cout<<"U";
            break;
        case 1:
            cout<<"G";
            break;
        case 2:
            cout<<"Y";
            break;
        case 3:
            cout<<"T";
            break;
        case 4:
            cout<<"I";
            break;
    }



    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int n,w=1;

    cin>>n;

    while(w<=n){
        long long int a,b,c;
        cin>>a>>b>>c;

        switch(a){
            case 1:
                cout<<b+c;
                break;
            case 2:
                cout<<b-c;
                break;
            case 3:
                cout<<b*c;
                break;
            case 4:
                cout<<b/c;
                break;
        }

        cout<<endl;

        w++;
    }

    return 0;
}



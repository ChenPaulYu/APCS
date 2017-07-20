#include<iostream>
using namespace std;

int main()
{
    long long int a,b,c;
    char r;
    while(cin>>a>>b>>c){
    if(a!=b and b!=c and c!=a){
        if(a>b and a>c){
            if(a>b+c){
                r='A';
            }else{
                if(b>c){
                    r = 'B';
                }else{
                    r = 'C';
                }
            }
        }else if(b>a and b>c){
            if(b>a+c){
                r='B';
            }else{
                if(a>c){
                    r = 'A';
                }else{
                    r = 'C';
                }
            }
        }else{

            if(c>a+b){
                r='C';
            }else{
                if(b>a){
                    r = 'B';
                }else{
                    r = 'A';
                }
            }

        }

    }else{
        if(a>=b and b>=c){
            r = 'A';
        }else if(b>=a and b>=c){
            r = 'B';
        }else {
            r = 'C';
        }

    }

        cout<<r<<endl;

    }

    return 0;
}




#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s,t;
    int i,m;
    while(cin>>s>>t){
        i = 0;
        m = 0;
        while(i<t.length()){
            if(s[m] == t[i]){
                m++;
            }
            i++;
        }

        if(m==s.length()){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }



    return 0;
}

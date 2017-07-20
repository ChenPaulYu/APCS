#include<iostream>
using namespace std;
int main(){
    string a;
    int i,t,tc;
    while(getline(cin,a)){
        i = 0,t = 0,tc = 0;
        int b = a.length();

        while(i<b){
            if(('a'<=a[i] and a[i]<='z')or('A'<=a[i] and a[i]<='Z')){
                tc++;
            }else{
                if(tc>=1){
                    t++;
                }
                tc=0;
            }
            i++;
        }

        if(tc>=1){
            t++;
        }
        cout<<t<<endl;
    }

    return 0;
}


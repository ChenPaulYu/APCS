#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int times,M=0;
    int check[26];

    cout<<int('A')<<endl;
    cout<<int('a')<<endl;
    string s;
    cin>>times;
    for(int i=0;i<times;i++){
        cin.get();
        getline(cin,s);

        for(int i =0;i<26;i++){
            check[i] = 0;
        }


        for(int k =0;k<s.length();k++){
            if(s[k] =='\0'){
                break;
            }

            if('a'<=s[k] and s[k]<='z'){
                check[int(s[k])-97]++;
                if(check[int(s[k])-97]>M){
                   M = check[int(s[k])-97];
                }

            }else if('A'<=s[k] and s[k]<='Z'){
                check[int(s[k])-65]++;
                if(check[int(s[k])-65]>M){
                    M = check[int(s[k])-65];
                }
            }

        }



        for(int i=0;i<26;i++){
            if(check[i] == M){
                cout<<char(i+97);
            }
            //cout<<"i:"<<i<<"="<<check[i]<<endl;
        }

        cout<<endl;


    }
    return 0;
}

#include<iostream>
#include<string.h>
using namespace std;

int main()
{

    string s;
    int i;
    while(getline(cin, s)){
        i = 0;
        while(i<s.length()){
            cout<<char((int)s[i]-7);
            i++;
        }
    cout<<endl;
    }

    return 0;
}


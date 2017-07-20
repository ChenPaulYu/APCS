#include<iostream>
using namespace std;
int main(){
    string a="@gmail.com";
    int k = a.find("@",1);

    if(k>a.length()-1){
        cout<<"¤£¦s¦b"<<endl;
    }else{
        cout<<k<<endl;
    }


    return 0;
}

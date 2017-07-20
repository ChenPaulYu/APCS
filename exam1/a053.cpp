#include<iostream>
using namespace std;

int main()
{
    int num,score;
    cin>>num;

    if(num<=10){
       score = num*6;
    }else if(num<=20){
        score = (num-10)*2+60;
    }else if(num<=40){
        score = (num-20)*1+20+60;
    }else{
        score = 100;
    }

    cout<<score<<endl;

    return 0;
}


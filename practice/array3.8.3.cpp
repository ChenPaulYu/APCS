
#include<iostream>
using namespace std;

int main()
{
    //關注學生

    int N,i=0,M=0,m=100001;
    int score[100];
    cin>>N;
    while(i<N){
        cin>>score[i];
        i++;
    }



    for(int k=0;k<N;k++){
        if(score[k]>M){
            M = score[k];
        }
        if(score[k]<m){
            m = score[k];
        }
    }

    cout<<M<<" "<<m<<endl;


    //第二種解法

    /*
    int N,i=0,temp,M,m;
    cin>>N;
    while(i<N){
        cin>>temp;
        if(i !=0){
            if(temp>M){
                M = temp;
            }else if(temp<m){
                m = temp;
            }
        }else{
            M = temp;
            m = temp;
        }
        i++;
    }


    cout<<M<<" "<<m<<endl;
    */

    return 0;
}

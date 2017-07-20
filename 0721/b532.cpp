#include<iostream>
using namespace std;
int main(){

    int m = 0,times;

    cin>>times;
    while(m<times){
        string input;
        int left=0,right=0,result;
        int findingoperator=0;
        int order = 1;

        cin>>input;
        int l = input.length();

        for(int i=0;i<l;i++){
            if(findingoperator == 0){
                if('0'<=input[i] and input[i]<='9'){
                    order = 10;
                   int num = (int)input[i]-48;
                    left = left*order+num;
                }else if(input[i]=='+'){
                    findingoperator = 1;
                    order = 1;
                }else if(input[i]=='-'){
                    findingoperator = 2;
                    order = 1;
                }else if(input[i]=='*'){
                    findingoperator = 3;
                    order = 1;
                }else if(input[i]=='/'){
                    findingoperator = 4;
                    order = 1;
                }else if(input[i]=='%'){
                    findingoperator = 5;
                    order = 1;
                }
            }else{
                if('0'<=input[i] and input[i]<='9'){
                    order = 10;
                    int num = (int)input[i]-48;
                    right = right*order+num;
                }
            }
        }

        switch(findingoperator){
            case 1:
                result = left + right;
                break;
            case 2:
                result = left - right;
                break;
            case 3:
                result = left * right;
                break;
            case 4:
                result = left / right;
                break;
            case 5:
                result = left % right;
                break;
        }
        cout<<result<<endl;
        m++;
    }

    return 0;
}



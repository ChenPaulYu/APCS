#include<iostream>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b){
        if(a != -1 or b!=-1){
            int ans1,ans2,temp;
            if(a>b){
                temp = a;
                a = b;
                b = temp;
            }

            ans1 = b-a;
            ans2 = 100-(b-a);

            if(ans1>ans2){
                cout<<ans2<<endl;
            }else{
                cout<<ans1<<endl;
            }

        }
        else{
            break;
        }

    }

    return 0;
}


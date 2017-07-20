#include<iostream>
using namespace std;

int main()
{
    int left,right,ans_temp,ans;

    int k,k_temp;

    while(cin>>left>>right){

        if(left>right){
            int temp;
            temp = left;
            left = right;
            right = temp;
        }

        ans = 0;
        k=left;
        while(k<=right){
             k_temp = k;
            ans_temp =1;

            while(k_temp != 1){
                if( k_temp%2 == 0 )
                    k_temp = k_temp/2;
                else
                    k_temp = k_temp*3+1;

                ans_temp = ans_temp+1;
            }

            if( ans_temp > ans )
                ans = ans_temp;

            k++;
        }

        cout<<left<<" "<<right<<" "<<ans<<endl;
    }


    return 0;
}







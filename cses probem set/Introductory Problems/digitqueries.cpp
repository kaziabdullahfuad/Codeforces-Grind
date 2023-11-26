#include<iostream>
#include<algorithm>
#include<cmath>
#include<cmath>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
ll power(ll base,ll times){
    ll answer=1;
    while(times--){

        answer*=base;
    }
    return answer;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll q;
    cin>>q;
    

    while(q){

        ll k;
        cin>>k;

        if(k<=9){

            cout<<k<<endl;
        }
        else{

            ll mul=10;
            ll sum=9;
            ll start=2;

            while(k>sum){

                sum+=(9*start*mul);
                start++;
                mul*=10;
            }
            // cout<<sum<<endl;
            // cout<<k<<endl;
            start--;
            //cout<<start<<endl;
            ll digits_away=sum-k;
            ll away=digits_away/start;
            ll remainder=(sum-k)%start;
            // calculate number
            ll number=(power(10,start)-1)-away;

            string result=to_string(number);

            cout<<result[result.length()-1-remainder]<<endl;

        }
        q--;
    }


    return 0;
}
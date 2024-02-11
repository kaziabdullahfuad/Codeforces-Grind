#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
template<typename t1>
void printVector(vector<t1> v1){

    for(int i=0;i<v1.size();i++){

        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    // factorial of 8 is 40320
    // factorial of 5 is 120
    vector<ll> v1;

    v1.push_back(1);

    for(int i=2;i<=n;i++){
        ll carry=0;
        //cout<<i<<": ";
        for(int j=0;j<v1.size();j++){

            ll prod=v1[j]*i+carry;
            //cout<<prod<<endl;
            // just like in real multiplication
            // last value rakhte hobe and first ta carry
            ll last=prod%10;
            //cout<<last<<endl;
            carry=prod/10;
            //cout<<carry<<endl;
            v1[j]=last;
        }
        //cout<<carry<<endl;
        // if(carry!=0){
        //     v1.push_back(carry);
        // }

        while(carry){
            ll last_val=carry%10;
            v1.push_back(last_val);
            carry/=10;
        }
        //cout<<v1.size()<<endl;
        //printVector(v1);

    }

    printVector(v1);

    if(n<=7){
        int len=v1.size()-1;

       for(int i=len;i>=0;i--){
            
            cout<<v1[i];
       }
    }
    else{
        int len=3;

        for(int i=len,j=1;j<=4;j++,i--){

            cout<<v1[i];
        }
        cout<<endl;
    }


    return 0;
}
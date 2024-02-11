#include<iostream>
#include<numeric>
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
void printVector(vector<ll> v1){

    for(ll i=0;i<v1.size();i++){

        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

        ll n;
        cin>>n;
        vector<ll> v1(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>v1[i];
            sum+=v1[i];
        }   


        //printVector(v1);
        //cout<<sum<<endl;
        bool square_it=false;

        for(ll i=1;i*i<=sum;i++){

            ll mul=i*i;
            if(mul==sum){
                //cout<<"HERE mul: "<<i<<": "<<mul<<endl;
                square_it=true;
                break;
            }
        }


        if(square_it){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        t--;
    }

    return 0;
}
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
#define debug(x) cout<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
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

    int t;
    cin>>t;

    while(t){

        ll n,k;
        cin>>n>>k;
        //debug(n) debug(k)
        ll sum=0;
        ll start=1;
        vector<ll>ans;
        if(k==1){
        ans.push_back(3);
        for(int i=1;i<25;i++){
            ans.push_back((1<<i));
            if((1<<i)>n||ans.size()==25){
                break;
            }
        }
        cout<<ans.size()<<endl;
        printVector(ans);
        
    }
    else if(k==2){
        ans.push_back(1);
        ans.push_back(3);
        ans.push_back(6);
        for(int i=2;i<25;i++){
            ans.push_back((1<<i));
            if((1<<i)>n||ans.size()==25){
                break;
            }
        }
       cout<<ans.size()<<endl;
        printVector(ans);
    }
    else{
        ll kminus1 = k-1;
    
    ll x = log2(kminus1);
    for(int i=0;i<x;i++){
        ans.push_back(1<<i);
    }
    ans.push_back(kminus1-(1<<x)+1);
    ans.push_back(k+1);
    x = log2(k+1);
    x++;
    ans.push_back((1<<x)-1);
    while(ans.size()<25){
        ans.push_back(1<<x);
        x++;
        if((1<<x)>n){
            break;
        }
    }
    cout<<ans.size()<<endl;
    printVector(ans);
}

        t--;
    }

    return 0;
}
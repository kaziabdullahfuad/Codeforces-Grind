#include<iostream>
#include <iomanip>
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

    ll n,k;
    cin>>n>>k;
    vector<ll> v1(n);

    cout<< setprecision(11);
    cout<<fixed;
    
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }

    //printVector(v1);

    double weeks=n-k+1;
    //debug(weeks)

    double total=0;

    ll first=k-2;
   // debug(first)
    double sum=0;
    for(int i=0;i<=first;i++){

        sum+=v1[i];
    }
    int start=0;
    //debug(first)
    //debug(k-1)
    for(int i=k-1;i<n;i++){

        sum+=v1[i];
        
        total+=sum;

        sum-=v1[start];
        start++;
    }

    cout<<total/weeks<<endl;

    return 0;
}
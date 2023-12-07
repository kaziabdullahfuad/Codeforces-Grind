#include<iostream>
#include<set>
#include<unordered_set>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    
    while(t){

        ll n;
        cin>>n;
        set<ll> s1;
        vector<ll> v1(n);

        for(int i=0;i<n;i++){

            cin>>v1[i];
        }

        for(auto x: v1){
            cout<<x<<" ";
        }
        cout<<endl;
        
        t--;
    }

    return 0;
}
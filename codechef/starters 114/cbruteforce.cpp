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
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]=i;
    	}

    	

    	// for(auto x:m1){
    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }
        //cout<<"START"<<endl;
    	ll count=0;

    	for(int i=1;i<n;i++){
            //cout<<i<<endl;
    		for(int j=n;j>i;j--){

    		  if(m1[j]<m1[i]){
                count++;
                break;
              }
    		}
    		//cout<<endl;
    	}
        cout<<count<<endl;

    	t--;
    }

    return 0;
}
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

    	ll n,m;
    	cin>>n>>m;

    	vector<ll> v1[m];

    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){

    			ll val;
    			cin>>val;
    			//cout<<val<<" ";
    			v1[j].push_back(val);
    		}
    		//cout<<endl;
    	}

    	for(int i=0;i<m;i++){

    		sort(all(v1[i]));
    	}

    	for(int i=0;i<m;i++){

    		for(int j=0;j<n;j++){

    			cout<<v1[i][j]<<" ";
    		}
    		cout<<endl;
    	}


    	

    	t--;
    }

    return 0;
}
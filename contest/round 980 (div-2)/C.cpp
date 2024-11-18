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

    	ll n;
    	cin>>n;

    	vector<pair<ll,ll>> v1;
    	while(n){

    		ll val1,val2;
    		cin>>val1>>val2;

    		v1.push_back({val1,val2});


    		n--;
    	}

    	sort(v1.begin(), v1.end(), [&](pair<ll,ll>&A, pair<ll,ll>&B){
            if(max(A.first, A.second) == max(B.first, B.second)) 
            return min(A.first, A.second) < min(B.first, B.second);
            return max(A.first, A.second) < max(B.first, B.second);
        });

        for(auto x:v1){
        	cout<<x.first<<" "<<x.second<<" ";
        }

        cout<<endl;

    	t--;
    }

    return 0;
}
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

    	ll x,y,k;
    	cin>>x>>y>>k;

    	ll min_val=min(x,y);

    	cout<<0<<" "<<min_val<<" "<<min_val<<" "<<0<<endl;
    	cout<<0<<" "<<0<<" "<<min_val<<" "<<min_val<<endl;

    	t--;
    }

    return 0;
}
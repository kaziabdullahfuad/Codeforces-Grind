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
ll mod_val=1e9+7;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	cout<<mod_val<<endl;
    	ll temp=11;
    	cout<<temp/mod_val<<endl;

    	t--;
    }

    return 0;
}
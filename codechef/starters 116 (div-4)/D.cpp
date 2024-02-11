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
template<typename t>
void printVector(vector<t> &v1){

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

    	vector<ll> v1(n);
    	vector<ll> v2(m);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<m;i++){
    		cin>>v2[i];
    	}

    	//printVector(v2);

    	ll max_val=*max_element(v2.begin(),v2.end());

    	//cout<<max_val<<endl;

    	ll far=n-max_val;

    	sort(v1.begin()+far,v1.end());

    	printVector(v1);

    	t--;
    }

    return 0;
}
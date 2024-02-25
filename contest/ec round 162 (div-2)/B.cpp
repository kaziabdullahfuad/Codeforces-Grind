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
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
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

    	// monster health
    	vector<ll> v1(n);

    	// moster distance
    	vector<ll> v2(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    		v2[i]=abs(v2[i]);
    	}

    	printVector(v1);
    	printVector(v2);

    	vector<pair<ll,ll>> v3(n);

    	for(int i=0;i<n;i++){

    		v3[i].first=v1[i];
    		v3[i].second=v2[i];
    	}
    	cout<<"VECTOR PAIR"<<endl;
    	for(auto x:v3){

    		cout<<x.first<<" "<<x.second<<endl;
    	}

    	sort(all(v3),sortbysec);
    	cout<<"AFTER SORTING"<<endl;
    	for(auto x:v3){

    		cout<<x.first<<" "<<x.second<<endl;
    	}

    	ll holder=0;
    	for(int i=0;i<n;i++){

    		cout<<v3[i].first<<" "<<v3[i].second<<endl;


    	}

    	t--;
    }

    return 0;
}
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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	sort(all(v1));
    	//printVector(v1);
    	
    	ll sum=0;

    	sum+=v1[0]+v1[1];
    	sum/=2;
    	//debug(sum)
    	for(int i=2;i<n;i++){

    		sum+=v1[i];
    		sum/=2;
    		//debug(sum)

    	}

    	cout<<sum<<endl;	

    	t--;
    }

    return 0;
}
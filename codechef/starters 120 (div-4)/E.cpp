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

	for(int i=1;i<v1.size();i++){

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
    	
    	vector<ll> holder(n+1); // 1 based indexing

    	for(int i=0;i<n;i++){

    		ll sum=0;
    		for(int j=i;j<n;j++){

    			sum+=v1[j];

    			if(sum<=n){
    				//cout<<sum<<" ";
    				holder[sum]++;
    			}
    			else{
    				break;
    			}
    		}
    		//cout<<endl;
    	}

    	printVector(holder);

    	t--;
    }

    return 0;
}
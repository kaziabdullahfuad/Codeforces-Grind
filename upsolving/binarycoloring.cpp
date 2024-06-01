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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll x;
    	cin>>x;

    	vector<ll> ans(32);

    	//printVector(ans);

    	ll holder=x;
    	ll j=0;
    	//cout<<endl;
    	while(holder){

    		if(holder%2){
    			ans[j]=1;
    		}
    		holder/=2;
    		j++;
    	}

    	//printVector(ans);
    	ll n=ans.size();

    	for(int i=0;i<n;i++){

    		if(i<n-1 && ans[i]!=0 && ans[i+1]!=0){

    			ll start=i;
    			ll end=i;

    			while(ans[end]!=0){
    				end++;
    			}
    			//cout<<start<<" "<<end<<endl;
    			for(int z=start;z<end;z++){
    				ans[z]=0;
    			}
    			ans[start]=-1;
    			ans[end]=1;
    			i=end;
    			i--;
    		}
    	}

    	//cout<<endl;
    	cout<<32<<endl;
    	printVector(ans);
    	

    	t--;
    }

    return 0;
}
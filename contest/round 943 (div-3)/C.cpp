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

    	ll n;
    	cin>>n;
    	ll len=n-1;
    	vector<ll> v1(len);

    	for(int i=0;i<len;i++){
    		cin>>v1[i];
    	}

    	//printVector(v1);

    	vector<ll> ans(n);

    	ans[0]=v1[0]+1;
    	//cout<<ans[0];
    	ll start=1;
    	for(int i=0;i<len;i++){
    		//debug(i)
    		ll temp=ans[i]*1;
    		//debug(temp)
    		if(i+1<len && v1[i]<=v1[i+1]){
    			ll ceil_div=(v1[i+1]+ans[i]-1)/ans[i];
    			ll holder=(ans[i]*ceil_div)+v1[i];
    			//debug(ceil_div)
    			//debug(holder)
    			ans[start]=holder;
    		}
    		else{

    			ans[start]=v1[i];
    		}
    		//debug(start)
    		//cout<<ans[start]<<endl;
    		start++;
    	}



    	printVector(ans);

    	t--;
    }

    return 0;
}
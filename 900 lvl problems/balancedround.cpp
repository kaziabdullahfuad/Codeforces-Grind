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

    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	if(n==1){
    		cout<<0<<endl;
    	}
    	else{

    		// maximum jei subsequence hobe oita nibo baki shob delete

    		ll max_val=0;
    		ll cur=0;

    		sort(all(v1));

    		//printVector(v1);

    		for(int i=0;i<n-1;i++){
    			//debug(v1[i])
    			if(abs(v1[i]-v1[i+1])>k){
    				max_val=max(max_val,cur);
    				//debug(cur)
    				//debug(max_val)
    				cur=0;
    			}
    			else{
    				cur++;
    			}
    			//debug(cur)
    		}
    		max_val=max(cur,max_val);

    		if(max_val==0){
    			cout<<n-1<<endl;
    		}
    		else{
	    		//cout<<++max_val<<endl;
	    		++max_val;
	    		cout<<n-max_val<<endl;
	    	}
    	}

    		
    	

    	t--;
    }

    return 0;
}
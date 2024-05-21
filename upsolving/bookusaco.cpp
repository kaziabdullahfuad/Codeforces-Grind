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

    ll n,k;
    cin>>n>>k;

    vector<ll> v1(n);

    for(int i=0;i<n;i++){
    	cin>>v1[i];
    }

    ll left=0,right=0,ans=0;
    ll sum=0;

    while(left<n && right<n){
    	// maximum sum less than k
    	while(right<n){

    		sum+=v1[right];
    		right++;

    		if(sum>k){
    			//tahole abar ager ta te chole jabo
    			right--;
    			sum-=v1[right];
    			break;
    		}
    	}

    	// ager left ar sum gula baad
    	ans=max(ans,right-left);
    	sum-=v1[left];
    	left++;
    }

    cout<<ans<<endl;

    return 0;
}
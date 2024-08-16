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
    	
    	ll left=0;
    	ll right=n-1;
    	ll left_sum=v1[0];
    	ll right_sum=v1[n-1];
    	ll ans=0;
    	while(left<right){

    		//cout<<left<<" "<<right<<" "<<left_sum<<" "<<right_sum<<endl;
    		if(left_sum==right_sum){

    			ans=(left+1)+(n-right);
    			left++;
    			right--;

    			if(left>=right){
    				break;
    			}
    			left_sum+=v1[left];
    			right_sum+=v1[right];
    		}
    		else if(left_sum>right_sum){

    			right--;
    			if(left>=right){
    				break;
    			}
    			right_sum+=v1[right];
    		}
    		else if(right_sum>left_sum){

    			left++;
    			if(left>=right){
    				break;
    			}
    			left_sum+=v1[left];
    		}


    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}
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

    	ll n,s;
    	cin>>n>>s;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll total=accumulate(all(v1),0ll);

    	if(total==s){
    		cout<<0<<endl;
    	}
    	else if(total<s){
    		cout<<-1<<endl;
    	}
    	else{
    		// total boro

    		// does it matter if we remove zero?
    		// total-zero=total. so only 1 matters
    		// also removing zero does count as operations and zeroes must be minimized


    		// options ki 0 0 so left++ dei just count++
    		// 0 1 so right-- count++
    		// 1 0 so left++ count++
    		// 1 1 left++ count++

    		ll left=0;
    		ll right=n-1;
    		ll count=0;

    		while(left<right){

    			if(v1[left]==v1[right]){
    				// either duitai 0 0 or duitai 1 1
    				left++;
    				count++;
    				if(v1[left]==1){
    					total--;
    				}
    			}
    			else{
    				// duitai alada 0 1 1 0
    				// so count to barbei total o kombe
    				
    				if(v1[left]==1){

    					left++;
    					
    				}
    				else{
    					// v1[right]==1
    					right--;
    				}
    				count++;
    				total--;
    			}

    			if(total==s){

    				break;
    			}
    		}

    		//cout<<total<<" "<<count<<endl;
    		cout<<count<<endl;
    	}

    	t--;
    }

    return 0;
}
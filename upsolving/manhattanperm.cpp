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

    	ll n,k;
    	cin>>n>>k;

    	if(k%2==1){
    		cout<<"NO"<<endl;
    	}
    	else{

    		ll hold=n;
    		ll max_val=0;

    		for(int i=1;i<=n;i++){

    			//debug(abs(i-hold))
    			max_val+=(abs(i-hold));
    			hold--;
    		}

    		if(k>max_val){
    			cout<<"NO"<<endl;
    		}
    		else{
    			vector<ll> v1(n);
    			cout<<"YES"<<endl;
    			iota(all(v1),1);
    			//printVector(v1);

    			ll left=0;
    			ll right=n-1;
    			ll hold=k;

    			while(left<right){

    				if((abs(v1[right]-v1[left])*2)==hold){
    					swap(v1[right],v1[left]);
    					break;
    				}
    				else if((abs(v1[right]-v1[left])*2)>hold){

    					right--;
    				}
    				else{

    					// less
    					hold-=(abs(v1[right]-v1[left])*2);
    					swap(v1[right],v1[left]);
    					left++;
    					right--;
    				}
    			}

    			printVector(v1);
    		}
    		
    	}

    	t--;
    }

    return 0;
}
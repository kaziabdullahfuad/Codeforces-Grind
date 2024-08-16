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
    	
    	ll odd=0;
    	ll even=0;
    	// find max odd
    	ll max_odd=-1;
    	ll max_even=-1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];

    		if(v1[i]%2==0){
    			max_even=max(max_even,v1[i]);
    			even++;
    		}
    		else{
    			max_odd=max(max_odd,v1[i]);
    			odd++;
    		}
    	}
    	
    	// cout<<odd<<" "<<even<<endl;
    	// cout<<max_odd<<" "<<max_even<<endl;
    	if(odd==0 || even==0){

    		cout<<0<<endl;
    	}
    	else{

    		if(max_odd>max_even){

    			cout<<even<<endl;
    		}
    		else{
    			//cout<<even+1<<endl;
    			//find je kono tare change koira max even
    			// theke boro kora jai ki na
    			
    			sort(all(v1));
    			//printVector(v1);
    			ll holder=max_odd;
    			//debug(max_even)
    			ll index=0;
    			for(int i=n-1;i>=0;i--){

    				if(v1[i]==max_odd){
    					index=i;
    					break;
    				}
    			}
    			//cout<<index<<endl;
    			ll count=0;
    			for(int i=index;i>=0;i--){

    				if(v1[i]%2==1){
    					continue;
    				}
    				else{
    					count++;
    					holder=holder+v1[i];
    				}
    			}
    			//cout<<holder<<endl;
    			//debug(count)
    			bool found=true;
    			for(int i=index+1;i<n;i++){

    				if(holder>v1[i]){
    					holder=holder+v1[i];
    					count++;
    				}
    				else{
    					found=false;
    					break;
    				}
    			}

    			//cout<<count<<endl;

    			if(found){
    				cout<<count<<endl;
    			}
    			else{
    				cout<<even+1<<endl;
    			}

    		}
    	}

    	t--;
    }

    return 0;
}
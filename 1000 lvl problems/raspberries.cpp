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
    	vector<ll> v1(n);
    	//ll prod=1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		//prod*=v1[i];
    	}
    	
    	// k is between 2 and 5. 2<=k<=5
    	// 2,3,4,5 ar moddhe 2,3 and 5 prime so agula ekta antei hobe
    	// 4 prime na so ata ante highest 3 lagte pare ba 2 ta value
    	// thakle 2 lagbe

    	if(k==4){

    		// 2 ba tar niche
    		//cout<<prod<<endl;

    		
    		ll min_val=k;
    		//cout<<min_val<<endl;
    		ll even_count=0;
    		bool found=false;
    		for(int i=0;i<n;i++){

    			if(v1[i]%2==0){
    				even_count++;
    			}
    			if(v1[i]%4==0){
    				found=true;
    				
    				break;
    			}
    			ll hold=k-v1[i]%k;
    			//debug(hold)
    			min_val=min(min_val,hold);
    		}    		
    		
    		if(found){
    			cout<<0<<endl;
    		}
    		else if(even_count>=2){

    			cout<<0<<endl;
    		}
    		else if(even_count==1){
    			//min_val=min(min_val,1LL);
    			//cout<<min_val<<endl;
    			cout<<1<<endl;
    		}
    		else{
    			// ar maane ekta 1 even count
    			min_val=k;
    			even_count=0;
	    		for(int i=0;i<n;i++){

	    			if(v1[i]%2==0){
	    				continue;
	    			}
	    			ll hold=k-v1[i]%k;
	    			//debug(hold)
	    			min_val=min(min_val,hold);
	    		}

	    		min_val=min(min_val,2LL);
	    		cout<<min_val<<endl;    	
    		}
    	}
    	else{

			ll min_val=k;

			for(int i=0;i<n;i++){

				if(v1[i]%k==0){
					min_val=0;
					break;
				}
				ll hold=k-v1[i]%k;
				//debug(hold)
				min_val=min(min_val,hold);
			}

			cout<<min_val<<endl;

    		
    	}

    	t--;
    }

    return 0;
}
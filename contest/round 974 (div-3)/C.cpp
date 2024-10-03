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
bool check(vector<ll> & v1,ll mid,ll half_ppl,ll sum){

	// mid ta val
	ll total=sum+mid;
	ll n=v1.size();
	double avg=double(total)/(n*2);
	ll count=0;
	//debug(avg)
	for(int i=0;i<n-1;i++){

		if(avg>v1[i]){
			count++;
		}
	}
	//debug(count)
	if(count>=half_ppl){
		return true;
	}
	else{
		return false;
	}

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
    	
    	// binary search??

    	if(n==1 || n==2){
    		// possible na
    		cout<<-1<<endl;
    	}
    	else{
    		sort(all(v1));

    		// age dekho je age thekei n/2 ar beshi upset ki na
    		ll half_ppl=n/2;
    		half_ppl++;
    		//cout<<half_ppl<<endl;

    		ll sum=accumulate(all(v1),0ll);
    		//cout<<sum<<endl;
    		double avg=double(sum)/(n*2);
    		//debug(avg)
    		ll count=0;
    		for(int i=0;i<n;i++){

    			if(avg>v1[i]){
    				count++;
    			}
    		}
    		//debug(count)

    		if(count>=half_ppl){
    			cout<<0<<endl;
    		}
    		else{

    			// mane half ar beshi hoi nai

    			ll low=0;
    			ll high=1e17;
    			//ll high=sum;
    			ll ans=LLONG_MAX;

    			while(low<=high){


    				ll mid=low+(high-low)/2;
    				//debug(mid)
    				if(check(v1,mid,half_ppl,sum)){

    					// jodi pai tahole aro choto nawar try korbo
    					high=mid-1;
    					ans=min(ans,mid);
    				}
    				else{

    					low=mid+1;
    				}
    			}

    			if(ans==LLONG_MAX){
    				cout<<-1<<endl;
    			}
    			else{
    				cout<<ans<<endl;
    			}
    		}

    	}


    	t--;
    }

    return 0;
}
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
    	vector<ll> v2(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    	}
    	
    	vector<ll> v3;

    	for(int i=0;i<n;i++){

    		v3.push_back(v2[i]-v1[i]);
    	}

    	//printVector(v1);
    	//printVector(v2);
    	sort(all(v3),greater<ll>());
    	//printVector(v3);
    	ll pos=0;
    	ll neg=0;
    	for(int i=0;i<n;i++){

    		if(v3[i]>=0){
    			pos++;
    		}
    		else{
    			neg++;
    		}
    	}

    	//cout<<pos<<" "<<neg<<endl;

    	if(pos==0){
    		// possible na
    		cout<<0<<endl;
    	}
    	else if(neg==0){

    		// all positive
    		// joto gulo positive ase ogulo diye ki kora jai

    		cout<<pos/2<<endl;
    	}
    	else{

    		// pos neg duitai ase. pos diye neg pair korar try koro

    		ll left=0;
    		ll right=n-1;

    		bool found=false;
    		ll count=0;
    		//cout<<left<<" "<<right<<endl;
    		while(left<right){

    			ll temp=v3[left]+v3[right];
    			//cout<<left<<" "<<right<<" "<<temp<<endl;
    			if(temp>=0ll){

    				//cout<<"ASCHE"<<endl;
    				left++;
    				right--;
    				count++;
    			}
    			else{
    				right--;
    			}

    			if(v3[left]<0ll){
    				// ar mane paise
    				found=true;
    				break;
    			}
    			else if(v3[right]>=0){
    				found=false;
    				break;
    			}
    		}
    		
    		// cout<<count<<endl;
    		// cout<<found<<endl;
    		// cout<<left<<" "<<right<<endl;

    		if(found){
    			// mane shob paise
    			cout<<count<<endl;
    		}
    		else{
    			ll positive=0;

    			while(left<n){

    				if(v3[left]>=0ll){
    					positive++;
    				}
    				else{
    					break;
    				}
    				left++;
    			}

    			count+=(positive)/2;
    			cout<<count<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}
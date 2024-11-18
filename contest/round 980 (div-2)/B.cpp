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
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	sort(all(v1));

    	//printVector(v1);

    	

    	ll press=0;
    	ll sum=0;
    	ll len=n;
    	ll have=0;
    	for(int i=0;i<n;i++){

    		ll val=v1[i];
    		v1[i]-=sum;
    		//debug(i)
    		//debug(v1[i])
    		if(v1[i]==0){

    			press++;
    		}
    		else{

    			ll temp=(v1[i]*len);
    			//debug(temp)
    			if(have+temp==k){

    				press+=k-have;
    				have+=temp;
    				break;
    			}
    			else if(have+temp>k){

    				//cout<<"HERE"<<endl;
    				//debug(temp)
    				press+=k-have;
    				have+=(have+temp)-k;
    				break;
    			}
    			else{

    				// have+temp<k so have shob nibe
    				//debug(temp)
    				have+=temp;
    				press+=temp;
    				press++;
    			}

    		}
    		//sum=v1[i];
    		sum=val;
    		
    		// debug(press)
    		// debug(have)
    		// debug(len)
    		len--;
    	}

    	//cout<<have<<" "<<press<<endl;
    	cout<<press<<endl;

    	t--;
    }

    return 0;
}
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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll last=v1[n-1];
    	bool found=true;
    	ll count=0;
    	for(ll i=n-2;i>=0;i--){
    		//debug(last)
    		if(v1[i]>=last){
    			//cout<<"BIGGER"<<endl;
    			//debug(v1[i])
    			if(last==0){
    				found=false;
    				break;
    			}
    			else{
    				ll temp=v1[i];

    				while(temp>0 && temp>=last){

    					temp/=2;
    					count++;
    				}
    				last=temp;
    				//debug(temp)
    				v1[i]=temp;
    			}
    		}
    		else{
    			last=v1[i];
    		}
    	}
    	//debug(found)
    	//printVector(v1);
    	//cout<<count<<endl;

    	if(found){
    		cout<<count<<endl;
    	}
    	else{
    		cout<<-1<<endl;
    	}

    	t--;
    }

    return 0;
}
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

    	
    	sort(all(v1));

    	//printVector(v1);
    	ll first_min=v1[0];
    	vector<ll> holder;
    	bool found=true;
    	for(int i=0;i<n;i++){
    		//cout<<v1[i]<<endl;
    		if(v1[i]%first_min!=0){
    			holder.push_back(v1[i]);
    		}
    	}


    	if(holder.size()==0){

    		cout<<"YES"<<endl;
    	}
    	else{

    		sort(all(holder));
    		//printVector(holder);
    		ll second_min=holder[0];
    		bool found=true;
    		for(int i=0;i<holder.size();i++){

    			if(holder[i]%second_min!=0){
    				found=false;
    				break;
    			}
    		}

    		if(found){
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}
    	

    	t--;
    }

    return 0;
}
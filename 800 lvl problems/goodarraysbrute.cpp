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
    	
    	//printVector(v1);

    	if(n==1){
    		cout<<0<<endl;
    	}
    	else if(n==2){

    		if((v1[0] %2==0 && v1[1]%2==0) || ((v1[0] %2==1 && v1[1]%2==1))){
    			cout<<1<<endl;
    		}
    		else{
    			cout<<0<<endl;
    		}
    	}
    	else{

    		ll holder=0;
    		ll count;
    		if((v1[0] %2==0 && v1[1]%2==0) || (v1[0]%2==1 && v1[1]%2==1)){
    			holder=v1[0]*v1[1];
    			count=1;
    			
    			for(int i=2;i<n;i++){
    				// debug(holder)
    				// debug(i)
    				if((holder%2==0 && v1[i]%2==0) || (holder%2==1 && v1[i]%2==1)){
    					// cout<<"EKI TYPE"<<endl;
    					// debug(holder)
    					// debug(v1[i])
    					holder*=v1[i];
    					count++;
    				}
    				else{
    					holder=v1[i];
    				}
    			}
    			//debug(holder)
    			cout<<count<<endl;
    		}
    		else{
    			holder=v1[0];
    			count=0;

    			for(int i=1;i<n;i++){

    				//debug(holder)
    				if((holder%2==0 && v1[i]%2==0) || (holder%2==1 && v1[i]%2==1)){
    					cout<<"EKI TYPE"<<endl;
    					// debug(holder)
    					// debug(v1[i])
    					holder*=v1[i];
    					count++;
    				}
    				else{
    					holder=v1[i];
    				}
    			}
    			cout<<count<<endl;
    		}



    	}

    	t--;
    }

    return 0;
}
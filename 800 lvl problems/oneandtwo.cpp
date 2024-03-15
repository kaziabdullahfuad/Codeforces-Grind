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
    	int one_count=0;
    	int two_count=0;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	ll sum=0;
    	ll mul=1;
    	for(int i=0;i<n;i++){
    		sum+=v1[i];
    		mul*=v1[i];
    		if(v1[i]==1){
    			one_count++;
    		}
    		else{
    			two_count++;
    		}
    	}
    	// val
    	//debug(sum) debug(mul)	
    	
    	if(two_count==0){
    		cout<<1<<endl;
    	}
    	else{

    		if(two_count%2==1){
    			cout<<-1<<endl;
    		}
    		else{

    			int count=0;
    			int k;
    			bool found=false;
    			for(int i=0;i<n-1;i++){

    				//debug(count)
    				//debug(two_count)
    				
    				if(v1[i]==2){
    					count++;
    					two_count--;
    				}
    				if(count==two_count){
    					found=true;
    					k=i;
    					break;
    				}
    			}

    			if(found){
    				cout<<k+1<<endl;
    			}
    			else{
    				cout<<-1<<endl;
    			}
    		}
    	}

    	t--;
    }

    return 0;
}
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

    	ll l,r;
    	cin>>l>>r;

    	if(r-l+1==2){
    		ll first;
    		ll second;
    		if(l==2){

    			
    		}
    		ll first=l;
    		ll second=r;
    		ll count=0;
    		while(second){

    			first*=3;
    			second/=3;
    			count++;
    		}

    		//cout<<first<<" "<<second<<" "<<count<<endl;

    		while(first){
    			debug(count)
    			first/=3;
    			count++;
    			if(first==0){
    				count++;
    			}
    		}

    		cout<<count<<endl;
    	}
    	else{

    		ll first=l;
    		ll second=l+1;
    		ll count=0;
    		cout<<first<<" "<<second<<endl;
    		while(second){

    			//cout<<first<<" "<<second<<endl;
    			first*=3;
    			second/=3;
    			count++;
    		}

    		cout<<first<<" "<<second<<" "<<count<<endl;
    		ll sum=0;
    		count++;
    		while(first){
    			//debug(count)
    			first/=3;
    			sum++;
    			count++;
    			// if(first==0){
    			// 	count++;
    			// }
    		}

    		cout<<first<<" "<<second<<" "<<count<<endl;

    		for(int i=l+2;i<=r;i++){

    			ll hold=i;
    			//cout<<hold<<endl;
    			ll sum=0;
    			while(hold){

    				hold/=3;
    				count++;
    				
    			}
    		}

    		cout<<count<<endl;
    	}

    	t--;
    }

    return 0;
}
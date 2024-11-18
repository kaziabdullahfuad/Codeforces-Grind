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

    	ll n,r;
    	cin>>n>>r;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	

    	ll count=0;
    	ll remain=0;
    	
    	for(int i=0;i<n;i++){

    		ll temp=v1[i]/2;
    		count+=(temp*2);
    		r-=temp;
    		remain+=v1[i]%2;
    		
    	}

    	// debug(remain)
    	// debug(count)
    	// debug(r)

    	//debug(remain)
    	//cout<<count<<" "<<r<<endl;
    	if(r==0){
    		cout<<count<<endl;
    	}
    	else{

    		// debug(r)
    		//debug(count)

    		//ll total_seats=r*2;

    		 //debug(total_seats)
    		// debug(remain)

    		if(r>=remain){
    			//cout<<"HERE"<<endl;
    			count+=remain;
    			cout<<count<<endl;
    		}
    		else{

    			ll hold=remain-r;

    			//remain-=(hold*2);
    			// debug(remain)
    			// debug(hold)
    			// debug(r)
    			ll temp=remain-(hold*2);
    			ll another=remain-hold;

    			// debug(temp)
    			// debug(another)
    			// debug(count)

    			r-=hold;
    			count+=r;
    			cout<<count<<endl;
    			// if(temp<=another){

    			// 	count+=temp;
    			// 	cout<<count<<endl;
    			// }
    			// else{

    			// 	hold++;
    			// 	remain-=(hold*2);
    			// 	count+=remain;
    			// 	cout<<count<<endl;

    			// }
    			
    		}
    	}
    

    	t--;
    }

    return 0;
}
// problem link:https://codeforces.com/contest/1920/problem/B
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

    	// n- size of array
    	// k- max no of elements that can be removed
    	/// x - max no of numbers that can be negative
    	ll n,k,x;
    	cin>>n>>k>>x;

    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	//printVector(v1);

    	sort(v1.begin(),v1.end());

    	//printVector(v1);

    	// make a prefix sum

    	vector<ll> holder(n);

    	holder[0]=v1[0];

    	for(int i=1;i<n;i++){

    		holder[i]=holder[i-1]+v1[i];
    	}

    	//printVector(holder);

    	vector<ll> bolder(n);

    	bolder[n-1]=v1[n-1];

    	for(int i=n-2;i>=0;i--){

    		bolder[i]=bolder[i+1]+v1[i];
    	}

    	//printVector(bolder);

    	if(x==n){

    		ll hold=n-k;
    		//cout<<"X==N now hold: "<<hold<<endl;
    		ll sum=0;
    		for(int i=0;i<hold;i++){
    			sum+=-v1[i];
    		}

    		cout<<sum<<endl;
    	}
    	else{

    		ll sub=0;
    		ll right=n-x;
    		ll left=right-1;
    		//cout<<left<<" "<<right<<endl;
    		ll max_val=-1e18;
    		ll last=n-1;
    		//cout<<"START"<<endl;
    		while(k>=0 && x!=n){
    			//cout<<"N:"<<n<<", K:"<<k<<", X:"<<x<<endl;
    			ll sum=holder[left]-(bolder[right]-sub);
    			max_val=max(max_val,sum);
    			//cout<<sum<<endl;
    			left--;
    			sub=bolder[last];
    			last--;
    			right--;
    			n--;
    			k--;
    			
    		}
    		 //cout<<"END"<<endl;
    		// cout<<"N:"<<n<<", K:"<<k<<", X:"<<x<<endl;
    		// cout<<"Max VAL: "<<max_val<<endl;
    		
    		if(k>=0){
	    		ll new_sum=0;
	    		ll go_to=n-k;
	    		//cout<<go_to<<endl;

	    		for(int i=0;i<go_to;i++){
	    			//cout<<"HELLO"<<endl;
	    			new_sum+=-v1[i];
	    			//cout<<new_sum<<" ";
	    		}
	    		//cout<<endl;

	    		//cout<<new_sum<<endl;
	    		max_val=max(max_val,new_sum);
	    		cout<<max_val<<endl;
	    	}
	    	else{

	    		cout<<max_val<<endl;
	    	}


    	}


    	


    	t--;
    }

    return 0;
}
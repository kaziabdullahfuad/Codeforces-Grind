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

    	ll n,q;
    	cin>>n>>q;

    	string s;
    	cin>>s;

    	if(n>=2){
	    	ll max_val=1;
	    	ll count=1;
	    	for(int i=0;i<n-1;i++){

	    		if(s[i]!=s[i+1]){
	    			
	    			max_val=max(max_val,count);
	    			count=0;
	    		}
	    		// cout<<s[i]<<endl;
	    		// cout<<count<<endl;
	    		// cout<<max_val<<endl;
	    		count++;
	    	}
	    	//cout<<max_val<<endl;

	    	// last count
	    	ll last_count=1;
	    	for(int i=n-1;i>=1;i--){
	    		//cout<<s[i]<<s[i-1]<<" ";
	    		if(s[i]==s[i-1]){
	    			last_count++;
	    		}
	    		else{
	    			break;
	    		}
	    	}
	    	//cout<<endl;
	    	//cout<<"Last count: "<<last_count<<endl;
	    	char temp=s[n-1];
	    	max_val=max(max_val,last_count);
	    	cout<<max_val<<" ";

	    	for(int i=1;i<=q;i++){

	    		char val;
	    		cin>>val;

	    		if(val==temp){
	    			last_count++;
	    			max_val=max(max_val,last_count);
	    			cout<<max_val<<" ";
	    		}
	    		else{
	    			last_count=1;
	    			temp=val;
	    			max_val=max(max_val,last_count);
	    			cout<<max_val<<" ";
	    		}
	    	}

	    	cout<<endl;
	    }
	    else{
	    	ll max_val=1;
	    	ll last_count=1;
	    	char temp=s[n-1];
	    	max_val=max(max_val,last_count);
	    	cout<<max_val<<" ";

	    	for(int i=1;i<=q;i++){

	    		char val;
	    		cin>>val;

	    		if(val==temp){
	    			last_count++;
	    			max_val=max(max_val,last_count);
	    			cout<<max_val<<" ";
	    		}
	    		else{
	    			last_count=1;
	    			temp=val;
	    			max_val=max(max_val,last_count);
	    			cout<<max_val<<" ";
	    		}
	    	}

	    	cout<<endl;

	    }

    	t--;
    }

    return 0;
}
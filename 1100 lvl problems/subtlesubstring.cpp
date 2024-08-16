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

    	//string s="zabcd";

    	//int hold=s[0]-'a'+1;
    	
    	string s;
    	cin>>s;

    	ll n=s.size();

    	if(n==1){

    		cout<<"Bob "<<" "<<s[0]-'a'+1<<endl;
    	}
    	else if(n%2==0){

    		ll sum=0;
    		for(int i=0;i<n;i++){

    			sum+=s[i]-'a'+1;
    		}
    		cout<<"Alice "<<sum<<endl;
    	}
    	else{

    		// prothom baad ba last baad

    		ll sum=0;

    		for(int i=0;i<n;i++){
    			sum+=s[i]-'a'+1;
    		}

    		ll max_val=max(sum-(s[0]-'a'+1),sum-(s[n-1]-'a'+1));
    		//debug(max_val)
    		if(s[0]>=s[n-1]){

    			max_val-=s[n-1]-'a'+1;
    			cout<<"Alice"<<" "<<max_val<<endl;
    		}
    		else{

    			max_val-=s[0]-'a'+1;
    			cout<<"Alice"<<" "<<max_val<<endl;
    		}
    	}



    	t--;
    }

    return 0;
}
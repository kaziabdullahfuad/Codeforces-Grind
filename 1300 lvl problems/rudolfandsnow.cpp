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
ll max_till=1e6;
set<ll> s1;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    for(ll i=2;i<=100;i++){

    	ll sum=1ll+i+(i*i);
    	ll mul=i*i;
    	s1.insert(sum);
    	while(sum<max_till){

    		mul*=i;
    		//debug(mul)
    		if(sum+mul<=max_till){
    			sum+=mul;
    			//debug(sum)
    			s1.insert(sum);
    		}
    		else{
    			break;
    		}
    	}

    	if(sum==max_till){
    		s1.insert(sum);
    	}
    }

   //cout<<s1.size()<<endl;

   // for(auto x:s1){
   // 	cout<<x<<" ";
   // }
   //cout<<endl;
    while(t){

    	ll n;
    	cin>>n;

    	if(s1.find(n)!=s1.end()){
    		cout<<"YES"<<endl;
    	}
    	else{
    		//debug(n)
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}
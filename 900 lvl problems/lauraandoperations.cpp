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

    	ll a,b,c;
    	cin>>a>>b>>c;

    	ll ans1=0,ans2=0,ans3=0;

    	// for 1
    	if(b==c){
    		ans1=1;
    	}
    	else{
    		ll holder=abs(b-c);
    		if(holder%2==0){
    			ans1=1;
    		}
    	}
    	// for 2
    	if(a==c){
    		ans2=1;
    	}
    	else{
    		ll holder=abs(a-c);
    		if(holder%2==0){
    			ans2=1;
    		}
    	}

    	// for 3
    	if(a==b){
    		ans3=1;
    	}
    	else{
    		ll holder=abs(a-b);
    		if(holder%2==0){
    			ans3=1;
    		}
    	}

    	cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;

    	t--;
    }

    return 0;
}
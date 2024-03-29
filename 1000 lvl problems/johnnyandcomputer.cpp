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

    	ll a,b;
    	cin>>a>>b;

    	if(a==b){

    		cout<<0<<endl;
    	}
    	else{

    		if(a>b){
    			swap(a,b);
    		}

    		// b always greater than a
    		ll a_hold=a;

    		while(a_hold%2==0){
    			a_hold/=2;
    		}
    		ll b_hold=b;
    		while(b_hold%2==0){
    			b_hold/=2;
    		}

    		if(a_hold!=b_hold){
    			cout<<-1<<endl;
    		}
    		else{

    			//cout<<"EKHANE"<<endl;

    			b/=a;
    			//cout<<b<<endl;
    			ll ans=0;
    			while(b >= 8){
				b /= 8, ++ans;
			}
				if(b > 1)	++ans;
				cout<<ans<<endl;
			
    		}
    	}
    

    	t--;
    }

    return 0;
}
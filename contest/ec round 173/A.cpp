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

    	// cout<<"Bismillah"<<endl;
    	// cout<<"Allahu Akbar"<<endl;

    	ll n;
    	cin>>n;

    	if(n<=3){
    		cout<<1<<endl;
    	}
    	else{

    		ll count=0;

    		while(n>=4){

    			//count+=2ll;
    			count++;
    			n/=4ll;
    			// debug(count)
    			// debug(n)
    		}

    		// cout<<n<<endl;
    		// cout<<count<<endl;

    		ll ans=pow(2ll,count);
    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}
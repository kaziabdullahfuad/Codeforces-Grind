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

    
	ll n;
	cin>>n;
	//cout<<n<<endl;
	ll highest=1e9;
	bool found=false;
	ll first,second;
	for(ll i=1;i*i<=highest;i++){

		ll square=i*i;

		if(square%n==0){
			continue;
		}
		else{

			ll needed=n-(square%n);

			if(needed<=highest){
				ll holder=sqrtl(needed);

    			if(sqrtl(needed)==holder){
    				found=true;
    				first=i;
    				second=holder;
    				break;
    			}
			}
			else{
				continue;
			}
			

		}
	}

	if(found){
		cout<<first<<" "<<second<<endl;
	}
	else{
		cout<<"No solutions"<<endl;
	}


    

    return 0;
}
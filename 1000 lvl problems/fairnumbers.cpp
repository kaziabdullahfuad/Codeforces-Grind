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
bool check(ll holder){

	ll value=holder;
	while(holder){

		ll last=holder%10;

		if(last!=0){

			if(value%last!=0){
				return false;
			}
		}
		holder/=10;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll n;
    	cin>>n;

    	bool found=false;

    	while(found==false){

    		ll holder=n;

    		found=check(holder);
    		if(found){
    			break;
    		}
    		n++;
    	}

    	cout<<n<<endl;

    	t--;
    }

    return 0;
}
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

    	ll n,k;
    	cin>>n>>k;

    	if(n==1){

    		cout<<1<<endl;
    	}
    	else if(k==1){

    		cout<<n<<endl;
    	}
    	else{

    		ll holder=n;
    		ll count=0;


    		while(holder){

    			ll temp=1;

    			while(temp<holder){

    				temp*=k;
    			}

    			if(temp==holder){
    				count++;
    				break;
    			}
    			else if(temp>holder){

    				temp/=k;
    				count++;
    			}
    			holder-=temp;
    			//debug(holder)
    			ll div_times=holder/temp;
    			count+=div_times;
    			//debug(div_times)
    			holder=holder-(temp*div_times);
    			//debug(holder)

    		}

    		cout<<count<<endl;
    		
    	}


    	t--;
    }

    return 0;
}
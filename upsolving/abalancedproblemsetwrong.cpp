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
ll gcd(ll x,ll y){

	if(x%y==0){
		return y;
	}

	return gcd(y,x%y);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll x,n;
    	cin>>x>>n;

    	if(x%n==0){

    		cout<<x/n<<endl;
    	}
    	else{

    		ll holder=x/2;
    		ll max_val=1;
    		ll temp;
    		ll temp2;
    		ll gcd_val;
    		for(int i=2;i<=holder;i++){
    			//debug(i);
    			if(i*(n-1)<x){

    				temp=i*(n-1);
    				//debug(temp)
    				temp2=x-temp;
    				//debug(temp2)
    				gcd_val=gcd(i,temp2);
    				//debug(gcd_val);
    				max_val=max(max_val,gcd_val);

    			}
    			else{
    				break;
    			}
    		}
    		//cout<<"END"<<endl;
    		//debug(max_val);
    		cout<<max_val<<endl;
    	}

    	

    	t--;
    }

    return 0;
}
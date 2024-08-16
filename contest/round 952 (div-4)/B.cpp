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

    	ll n;
    	cin>>n;
    	ll max_val=0;
    	ll index=2;
    	for(int i=2;i<=n;i++){

    		ll count=0;
    		ll sum=i;
    		//debug(i)
    		while(sum<=n){

    			//debug(sum)

    			sum+=i;
    			count++;
    		}
    		//debug(sum)
    		//debug(count)
    		if(count>=max_val){
    			max_val=count;
    			index=i;
    		}

    	}

    	cout<<index<<endl;

    	t--;
    }

    return 0;
}
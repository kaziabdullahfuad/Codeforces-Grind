//problem link:https://codeforces.com/contest/1878/problem/C
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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	// n- range- 1 to n
    	// k - amount of integers we can pickk
    	// x-summation of those k integers=x
    	ll n,k,x;
    	cin>>n>>k>>x;

    	// if the least minimum summation is greater than x
    	// then ans is no
    	// ex: 5 3 3. Minimum summation of 3 num is 1+2+3=6
    	// which is 6>3 so ans no

    	ll min_sum=(k*(k+1))/2;
    	// cout<<min_sum<<endl;
    	// cout<<x<<endl;
    	if(min_sum>x){

    		cout<<"NO"<<endl;
    	}
    	else{

    		// purata theke boro
    		ll full_sum=(n*(n+1))/2;

    		if(x>full_sum){
    			cout<<"NO"<<endl;
    		}
    		else{

    			/* if n=5,k=2,x=7
    				1,2,3,4,5. Max sum=(5*6)/2=15
    				min sum=(2*3)/2=3.
    				max sum=5+4=9.
    				to get max sum 1,2,3, [4,5]
    				subtract the sum of 1+2+3 from whole
    				sum. So if k=2. Then (find n-k+1).
    			*/

    			ll before_part=(n-k)*(n-k+1)/2;
    			// cout<<full_sum<<endl;
    			// cout<<min_sum<<endl;
    			// cout<<before_part<<endl;
    			ll highest_range=full_sum-before_part;
    			//cout<<highest_range<<endl;

    			if(x>=min_sum && x<=highest_range){
    				cout<<"YES"<<endl;
    			}
    			else{
    				cout<<"NO"<<endl;
    			}
    		}
    	}

    	t--;
    }

    return 0;
}
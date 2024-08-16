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

    	/*
			the initial variable, constant and the number of operations.
    	*/
    	ll x,y,k;
    	cin>>x>>y>>k;

    	int count=0;
    	while(k){

    		// if(count==10){
    		// 	break;
    		// }
    		if(x==1){

    			ll hold=y-(x%y);

    			if(k>=hold){

    				ll temp1=y-1;

    				if(k%temp1==0){
    					x=1;
    					break;
    				}
    				else{

    					x+=(k%temp1);
    					break;
    				}
    			}
    			else{
    				x+=k;
    				break;
    			}
    		}
    		while(x%y==0){

    			x/=y;
    		}

    		// other wise shobche kache ki
    		ll hold=y-(x%y);
    		debug(hold)
    		debug(x)
    		debug(k)
    		if(k>=hold){
    			x+=hold;
    			k-=hold;
    		}
    		else{
    			x+=k;
    			break;
    		}
    		count++;
    	}

    	while(x%y==0){
    		x/=y;
    	}
    	debug(k)
    	cout<<x<<endl;

    	t--;
    }

    return 0;
}
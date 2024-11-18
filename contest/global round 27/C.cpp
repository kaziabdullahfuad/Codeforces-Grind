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
    	ll first=1;
    	
    	if(n==5){

    		cout<<5<<endl;
    		cout<<2<<" "<<1<<" "<<3<<" "<<4<<" "<<5<<endl;
    	}
    	else if(n==6){

    		cout<<7<<endl;
			cout<<1<<" "<<2<<" "<<4<<" "<<6<<" "<<5<<" "<<3<<endl;
    	}
    	else if(n==7){

    		cout<<7<<endl;
			cout<<2<<" "<<4<<" "<<5<<" "<<1<<" "<<3<<" "<<6<<" "<<7<<endl;
    	}
    	else{

    		ll highest=1;
    		ll last=1;
    		for(int i=1;i<=32;i++){


    			ll hold=(1<<i);

    			if(hold>n){
    				highest=hold;
    				break;

    			}
    			else{
    				last=hold;
    			}
    		}

    		//debug(last)
    		//debug(highest)

    		if(n%2==0){

    			cout<<highest-1<<endl;
    		}
    		else{
    			cout<<n<<endl;
    		}

    		// last ar 5 ta ek hishab

    		if(n%2==0){

    			ll till=n-5;

    			for(int i=1;i<=n;i++){

    				if(i!=1 && i!=3 && i!=last
    					&& i!=last-1 && i!=last-2){

    					cout<<i<<" ";
    				}
    			}

    			cout<<1<<" "<<3<<" "<<last-2<<" "<<last-1<<" "<<last<<endl;
    		}
    		else{

    			ll temp=n-1;
    			for(int i=1;i<n;i++){

    				if(i!=1 && i!=3 && i!=last
    					&& i!=last-1 && i!=last-2){

    					cout<<i<<" ";
    				}
    			}

    			cout<<1<<" "<<3<<" "<<last-2<<" "<<last-1<<" "<<last<<" "<<n<<endl;

    		}
    	}	

    	t--;
    }

    return 0;
}
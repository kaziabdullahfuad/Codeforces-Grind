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

    	ll x,n;
    	cin>>x>>n;
    	
    	if(abs(x)%2==1){

    		// rem 0 hole x
    		// rem 1 hole x+d where d is (4*(n/q)+n%4)
    		// rem 2 hole x-1 dekhtesi
    		// rem 3
    		//debug(x) debug(n)

    		if(n%4==0){
    			cout<<x<<endl;
    		}
    		else if(n%4==1){

    			cout<<x+n<<endl;
    		}
    		else if(n%4==2){

    			cout<<x-1<<endl;
    		}
    		else if(n%4==3){

    			ll hold=(n/4)+1;
    			hold*=4;
    			
    			cout<<x-hold<<endl;
    		}

    	}
    	else{

    		//debug(x) debug(n)

    		if(n%4==0){
    			cout<<x<<endl;
    		}
    		else if(n%4==1){

    			// tahole 1 minus hobe
    			cout<<x-n<<endl;
    		}
    		else if(n%4==2){

    			// plus add hobe
    			//ll holder=(4*(n/4))+(n%4);
    			cout<<x+1<<endl;
    		}
    		else if(n%4==3){

    			ll holder=(n/4)+1;
    			holder*=4;
    			cout<<x+holder<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}
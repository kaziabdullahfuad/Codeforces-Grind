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

    	ll n;
    	cin>>n;

    	if(n%2==1 || n<4){
    		cout<<-1<<endl;
    	}
    	else{

    		// equation 4x+6y=n
    		// div by 2x+3y=n/2.
    		n/=2;

    		ll min_val=1e18;
    		// minimum buses
    		if(n%3==0){

    			min_val=n/3;
    		}
    		else if(n%3==1){

    			min_val=n/3;
    			min_val--;
    			min_val+=2;
    		}
    		else if(n%3==2){

    			min_val=n/3;
    			min_val++;


    		}

    		ll max_val=-1;

    		if(n%2==0){
    			max_val=n/2;
    		}
    		else{

    			max_val=(n/2)-1;
    			max_val++;
    		}

    		cout<<min_val<<" "<<max_val<<endl;
    	}

    	t--;
    }

    return 0;
}
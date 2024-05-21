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


    	// x- no of sticks you can buy with one stick
    	// y -  number of sticks required to buy one coal 
    	//k-the number of torches you need
    	ll x,y,k;
    	cin>>x>>y>>k;

    	// shuru 1 stick theke. stick thekei shob
    	// one torch requires 1 stick and 1 coal
    	// so k torches need k sticks and k coal

    	// stickes needed
    	ll sticks_ned=(y*k)+k;
    	cout<<sticks_ned<<endl;
    	debug(sticks_ned)
    	ll start=1;
    	ll trades=0;
    	while(start<sticks_ned){

    		//debug(start) debug(trades)
    		if(start*x>=sticks_ned){

    			break;
    		}
    		else{
    			trades+=start;
    			start*=x;
    		}
    	}

    	// start =trades
    	debug(start) debug(trades)

    	if(start==sticks_ned){

    		trades+=(y*k);
    		cout<<trades<<endl;
    	}
    	else{

    		ll needed=sticks_ned-start;
    		ll ek_kom=x-1;
    		debug(needed)
    		ll plus=(needed+ek_kom-1)/ek_kom; // ceil division
    		debug(plus)
    		trades+=plus+k;
    		debug(trades)

    	}

    	t--;
    }

    return 0;
}
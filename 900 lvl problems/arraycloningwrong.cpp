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
    	vector<ll> v1(n);
    	map<ll,ll> m1;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}
    	
    	// jodi 2 ta ba tar beshi thake tahole 2 ta pair kore nibo
    	// and proti pair a 3 ta operation ekta cloning ar 2 ta swap
    	// and remainder 1 ta baki thakle oitar jonno duita operation
    	// but also check kora lagbe oi element baade ar koita baki ase
    	ll max_val=-1e10;
    	for(auto x:m1){

    		max_val=max(x.second,max_val);
    	}
    	//debug(max_val)

    	if(max_val>=2){

    		ll rest=n-max_val;

    		if(rest==0){
    			cout<<0<<endl;
    		}
    		else{


    			ll rem=(rest%2)*2;

    			ll oper=(rest/2)*3;
    			//debug(rest) debug(oper)
    			cout<<oper+rem<<endl;
    		}
    	}
    	else{

    		ll rest=n-max_val;

    		if(rest==0){
    			cout<<0<<endl;
    		}
    		else{

    			//debug(rest)
    			ll rem=1;

    			rest--;

    			ll oper=(rest/2)*3;

    			rem+=(rest%2);

    			rem*=2;

    			//debug(oper) debug(rem)

    			cout<<oper+rem<<endl;
    		}

    	}




    	t--;
    }

    return 0;
}
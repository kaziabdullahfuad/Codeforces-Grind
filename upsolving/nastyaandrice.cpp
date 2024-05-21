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

    	/*
			n(1≤n≤1000)— the number of grains that Nastya counted and 
			a,b,c,d(0≤b<a≤1000,0≤d<c≤1000)— numbers that determine the possible 
			weight of one grain of rice (from a−b to a+b) 
			and the possible total weight of the package (from c−d to c+d).
    	*/

    	ll n,a,b,c,d;
    	cin>>n>>a>>b>>c>>d;

    	bool found=false;

    	ll left=(a-b)*n;
    	ll right=(a+b)*n;

    	ll weight_one=(c-d);
    	ll weight_two=(c+d);
    	// cout<<left<<" "<<right<<endl;
    	// cout<<weight_one<<" "<<weight_two<<endl;
    	
    	if(left>weight_two || right<weight_one){
    		cout<<"NO"<<endl;
    	}
    	else{
    		cout<<"YES"<<endl;
    	}


    	t--;
    }

    return 0;
}
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

    	ll n,k;
    	cin>>n>>k;


    	ll left=k-1;
    	ll right=n-k;

    	//cout<<left<<" "<<right<<endl;
    	// debug(left)
    	// debug(right)

    	// left ke right ar shoman banate parbo ki na

    	if(n==1 && k==1){

    		cout<<1<<endl;
    		cout<<1<<endl;
    	}
    	else if(k==1 || k==n){
    		cout<<-1<<endl;
    	}
    	else if(left%2==1 && right%2==1){

    		// mane duitai just ekbar dhora hobe

    		cout<<3<<endl;

    		cout<<1<<" "<<k<<" "<<k+1<<endl;
    	}
    	else if(left%2==0 && right%2==0){

    		// mane left and right dui pashei even

    		// ekta even such as e ke amra duita odd a vhag korte pari
    		// ex 4=1+3. x=1+(x-1) 6=1+5

    		// so subarray hobe 5 ta

    		cout<<5<<endl;
    		cout<<1<<" "<<2<<" "<<k<<" "<<k+1<<" "<<k+2<<endl;
    	}

    	t--;
    }

    return 0;
}
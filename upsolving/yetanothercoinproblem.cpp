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
    map<ll,ll> m1;

    // coin gula 1,3,6,10,15
    // 1 theke 15 ar answer
    m1[0]=0;
    m1[1]=1;
    m1[2]=2; // 1+1=2
    m1[3]=1;
    m1[4]=2; // 3+1=4 but 2 coins used
    m1[5]=3; // 3+1+1=5
    m1[6]=1;
    m1[7]=2;
    m1[8]=3;
    m1[9]=2;
    m1[10]=1;
    m1[11]=2;
    m1[12]=2;
    m1[13]=2;
    m1[14]=3; // 10+3+1

    //cout<<m1.size()<<endl;
    // for(auto x:m1){
    // 	cout<<x.first<<" "<<x.second<<endl;
    // }
    
    while(t){

    	ll n;
    	cin>>n;

    	if(n<15){
    		cout<<m1[n]<<endl;
    	}
    	else if(n%15==5){
    		cout<<n/15+1<<endl;
    	}
    	else if(n%15==8){

    		cout<<n/15+2<<endl;
    	}
    	else{

    		cout<<(n/15)+m1[n%15]<<endl;
    	}


    	t--;
    }

    return 0;
}
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
#define all(x) (x).begin(),(x).end();
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
    	int sum=0;
    	int no_neg=0;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		if(v1[i]<0)no_neg++;
    		sum+=v1[i];
    	}
    	//debug(sum);
    	//debug(no_neg);
    	if(sum>=0 && no_neg%2==0){

    		cout<<0<<endl;
    	}
    	else{

    		int oper=0;
    		if(sum%2==0){

    			oper=abs(sum/2);
    		}
    		else{
    			oper=abs(sum/2)+1;
    		}

    		//debug(oper);
    		no_neg-=oper;
    		//debug(no_neg);
    		if(no_neg%2==0){
    			cout<<oper<<endl;
    		}
    		else{
    			cout<<oper+1<<endl;
    		}
    	}	
    	

    	t--;
    }

    return 0;
}
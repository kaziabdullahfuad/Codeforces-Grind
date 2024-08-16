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
bool checking(vector<ll> &v1,vector<ll> &v2,vector<ll> &v3,ll &la,
	ll &ra,ll &lb,ll &rb,ll &lc,ll &rc,ll need){

	ll sum1=0;
	ll n=v1.size();

	for(int i=0;i<n;i++){

		sum1+=(v1[i]);
		if(sum1>=need){
			ra=i;
			break;
		}
	}

	lb=ra+1;
	sum1=0;
	for(int i=lb;i<n;i++){

		sum1+=(v2[i]);
		if(sum1>=need){
			rb=i;
			break;
		}
	}

	if(sum1<need){
		la=0,ra=0,lb=0,rb=0,lc=0,rc=0;
		return false;
	}
	lc=rb+1;

	sum1=0;
	for(int i=lc;i<n;i++){

		sum1+=(v3[i]);
		if(sum1>=need){
			rc=i;
			break;
		}
	}

	if(sum1<need){
		la=0,ra=0,lb=0,rb=0,lc=0,rc=0;
		return false;
	}

	return true;

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
    	vector<ll> v1(n),v2(n),v3(n);
    	ll sum=0;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		sum+=v1[i];
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    	}

    	for(int i=0;i<n;i++){
    		cin>>v3[i];
    	}

    	bool found=false;
    	ll need=(sum+2)/3;

    	// a b c
    	ll la=0,ra=0,lb=0,rb=0,lc=0,rc=0;
    	
    	
    	//ABC
    	if(checking(v1,v2,v3,la,ra,lb,rb,lc,rc,need)){

    		cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<endl;
    		
    	}//ACB
    	else if(checking(v1,v3,v2,la,ra,lc,rc,lb,rb,need)){

    		cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<endl;
    	}// BAC
    	else if(checking(v2,v1,v3,lb,rb,la,ra,lc,rc,need)){

    		cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<endl;
    	}// B C A
    	else if(checking(v2,v3,v1,lb,rb,lc,rc,la,ra,need)){

    		cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<endl;
    	} // C A B
    	else if(checking(v3,v1,v2,lc,rc,la,ra,lb,rb,need)){

    		cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<endl;
    	}// C B A
    	else if(checking(v3,v2,v1,lc,rc,lb,rb,la,ra,need)){

    		cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<endl;
    	}
    	else{
    		cout<<-1<<endl;
    	}

    	t--;
    }

    return 0;
}
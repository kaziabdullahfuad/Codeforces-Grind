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

    	ll n,r,b;
    	cin>>n>>r>>b;
    	
    	ll b_region=b+1;
    	//cout<<b_region<<endl;
    	ll ans=r/(b_region);
    	ll before=r/(b_region);
    	//debug(before)
    	//cout<<ans<<endl;
    	ll extra=0;
    	if(r%b_region!=0){
    		extra=r%b_region;
    		ans++;
    	}

    	//debug(ans)

    	//debug(extra)
    	vector<char> keep(n,'a');
    	
    	ll count=0;
    	ll start;
    	if(extra!=0){
    		start=ans;
    		keep[ans]='B';
    		extra--;
    	}
    	else{
    		start=ans;
    		keep[start]='B';
    		count++;
    	}
    	
    	

    	while(extra){

    		start+=ans+1;
    		//debug(start)
    		keep[start]='B';
    		count++;
    		extra--;
    	}
    	//debug(start)
    	//printVector(keep);

    	while(start+(before+1)<keep.size() && count<b){

    		start+=(before+1);
    		keep[start]='B';
    	}

    	//printVector(keep);

    	for(int i=0;i<keep.size();i++){

    		if(keep[i]=='a'){
    			keep[i]='R';
    		}
    	}
    	
    	string final;

    	for(int i=0;i<keep.size();i++){

    		final.push_back(keep[i]);
    	}

    	cout<<final<<endl;


    	t--;
    }

    return 0;
}
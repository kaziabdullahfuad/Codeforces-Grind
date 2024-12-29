#include<iostream>
#include<queue>
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

    	// n= no of hurdles
    	// m= powerups
    	//l=destination
    	ll n,m,l;
    	cin>>n>>m>>l;


    	vector<pair<ll,ll>> v1(n);

    	vector<pair<ll,ll>> v2(m);

    	priority_queue<ll> p1;

    	for(int i=0;i<n;i++){

    		cin>>v1[i].first>>v1[i].second;

    	}

    	// for(int i=0;i<n;i++){

    	// 	cout<<v1[i].first<<" "<<v1[i].second<<endl;

    		
    	// }

    	

    	for(int i=0;i<m;i++){

    		cin>>v2[i].first>>v2[i].second;
    	}

    	// for(int i=0;i<m;i++){

    	// 	cout<<v2[i].first<<" "<<v2[i].second<<endl;
    	// 	//p1.push(v2[i].second);
    	// }


    	int len=p1.size();
    	//debug(len)
    	ll start=0;
    	ll sum=1;
    	bool found=true;
    	ll count=0;
    	for(int i=0;i<n;i++){

    		// jotokhon dhore prothom barrier theke choto
    		ll val=v1[i].first;
    		//debug(val)


    		//cout<<"v2 val"<<endl;
    		while(start<m && v2[start].first<val){

    			//cout<<v2[start].first<<endl;
    			//debug(v2[start].first)
    			p1.push(v2[start].second);
    			start++;
    		}
    		ll diff=v1[i].second-v1[i].first+2;
    		//debug(diff)
    		while(!p1.empty() && sum<diff){

    			count++;
    			sum+=p1.top();
    			p1.pop();
    		}

    		// cout<<"NOW SUM"<<endl;
    		// debug(sum)
    		if(sum<diff){
    			found=false;
    			break;
    		}

    	}

    	if(found){

    		cout<<count<<endl;
    	}
    	else{
    		cout<<-1<<endl;
    	}


    	t--;
    }

    return 0;
}
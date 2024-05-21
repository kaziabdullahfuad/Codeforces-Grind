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

    	ll n,k,pb,ps;
    	cin>>n>>k>>pb>>ps;

    	vector<ll> v1(n+1);
    	vector<ll> v2(n+1);
    	vector<pair<ll,ll>> v3(n+1);

    	for(int i=1;i<=n;i++){
    		cin>>v1[i];
    		//cin>>v1[i].second;
    	}

    	for(int i=1;i<=n;i++){
    		cin>>v2[i];
    	}

    	for(int i=1;i<=n;i++){
    		// v3[i].first=v1[i];
    		// v3[i].second=v2[i];
    		//cout<<v1[i]<<" "<<v2[i]<<endl;
    		v3[i].first=v1[i];
    		v3[i].second=v2[i];
    	}

    	// for(int i=1;i<=n;i++){
    	// 	cout<<v3[i].first<<" "<<v3[i].second<<endl;
    	// }

    	//printVector(v1);

    	set<ll> s1;
    	set<ll> s2;
    	vector<ll> brodya_val;
    	s1.insert(pb);
    	s2.insert(ps);
    	bool go=true;
    	ll hold=pb;
    	//cout<<"HERE"<<endl;
    	//cout<<v3[hold].second<<endl;
    	while(go){

    		brodya_val.push_back(v3[hold].second);

    		hold=v3[hold].first;
    		//cout<<hold<<" "<<v3[hold].second<<endl;

    		if(s1.find(hold)!=s1.end()){
    			break;
    		}
    		else{
    			s1.insert(hold);
    		}
    	}

    	// for brodya
    	//printVector(brodya_val);
    	ll max_brodya=0;
    	ll temp=k;
    	ll sum=0;
    	for(int i=0;i<brodya_val.size();i++){
    		//cout<<temp<<" "<<sum<<endl;
    		if(temp==0){
    			break;
    		}
    		else{

    			max_brodya=max(max_brodya,sum+(brodya_val[i]*temp));
    			//cout<<max_brodya<<endl;
    			sum+=(brodya_val[i]);
    			//cout<<sum<<endl;
    			temp--;
    		}
    	}

    	//cout<<max_brodya<<endl;
    	vector<ll> sasha_val;
    	hold=ps;
    	while(go){

    		sasha_val.push_back(v3[hold].second);

    		hold=v3[hold].first;
    		//cout<<hold<<" "<<v3[hold].second<<endl;

    		if(s2.find(hold)!=s2.end()){
    			break;
    		}
    		else{
    			s2.insert(hold);
    		}
    	}

    	//printVector(sasha_val);

    	ll max_sasha=0;
    	temp=k;
    	sum=0;
    	for(int i=0;i<sasha_val.size();i++){
    		//cout<<temp<<" "<<sum<<endl;
    		if(temp==0){
    			break;
    		}
    		else{

    			max_sasha=max(max_sasha,sum+(sasha_val[i]*temp));
    			//cout<<max_brodya<<endl;
    			sum+=(sasha_val[i]);
    			//cout<<sum<<endl;
    			temp--;
    		}
    	}
    	//cout<<max_brodya<<" "<<max_sasha<<endl;

    	if(max_brodya==max_sasha){
    		cout<<"Draw"<<endl;
    	}
    	else if(max_brodya>max_sasha){
    		cout<<"Bodya"<<endl;
    	}
    	else{
    		cout<<"Sasha"<<endl;
    	}

    	t--;
    }

    return 0;
}
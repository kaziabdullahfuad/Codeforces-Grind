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

    	ll n;
    	cin>>n;

    	string s;
    	cin>>s;
    	map<char,int> m1;
    	
    	for(int i=0;i<n;i++){

    		m1[s[i]]++;
    	}
    	
    	

    	vector<pair<int,char>> v1;

    	for(auto x:m1){

    		v1.push_back(make_pair(x.second,x.first));
    	}

    	int len=v1.size();

    	

    	sort(all(v1));
    	reverse(all(v1));
    	// cout<<"HERE"<<endl;

    	// for(int i=0;i<len;i++){

    	// 	cout<<v1[i].second<<" "<<v1[i].first<<endl;
    	// }

    	int sum=0;
    	string temp;

    	for(int i=0;i<len;i++){

    		temp+=v1[i].second;
    		
    	}
    	sum=1;

    	//cout<<temp<<" "<<sum<<endl;
    	int i=len-1;
    	string ans=temp;
    	while(i>=0){

    		int times=v1[i].first-sum;

    		if(times<=0){
    			i--;
    			temp.pop_back();
    			continue;
    		}

    		ans+=temp;
    		sum++;


    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}
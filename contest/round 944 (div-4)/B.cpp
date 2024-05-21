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

    	string s;
    	cin>>s;
    	ll len=s.size();
    	map<char,int> m1;

    	for(int i=0;i<len;i++){

    		m1[s[i]]++;
    		//cout<<s[i]<<endl;
    	}
    	//cout<<m1.size()<<endl;
    	if(s.size()==1){
    		cout<<"NO"<<endl;
    	}
    	else{

    		if(m1.size()==1){
    			cout<<"NO"<<endl;
    		}
    		else{

    			string holder;
    			cout<<"YES"<<endl;
    			bool alr_sorted=true;
    			for(int i=0;i<len-1;i++){

    				if(s[i]>s[i+1]){
    					alr_sorted=false;
    				}
    			}

    			if(alr_sorted){
    				// make it unsorted
    				sort(all(s),greater<char>());
    				cout<<s<<endl;
    			}
    			else{
    				sort(all(s));
    				cout<<s<<endl;
    			}
    			//reverse(s.begin()+1,s.end());
    			//cout<<s<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}
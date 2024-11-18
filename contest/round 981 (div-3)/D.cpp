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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll sum=0;
    	set<ll> s1;
    	s1.insert(0);
    	ll count=0;
    	for(int i=0;i<n;i++){

    		sum+=v1[i];
    		//debug(i)
    		//debug(sum)
    		if(s1.find(sum)!=s1.end()){

    			// ar mane ager thekei ase
    			//cout<<"Paise"<<endl;
    			count++;
    			s1.clear();
    			s1.insert(0);
    			sum=0;
    		}
    		else{

    			s1.insert(sum);
    		}
    	}

    	cout<<count<<endl;

    	t--;
    }

    return 0;
}
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

    	map<char,ll> m1;

    	if(n==1){
    		cout<<s<<endl;
    	}
    	else{

    		for(int i=0;i<n;i++){

    			m1[s[i]]++;
    		}

    		char first;
    		ll max_val=0;
    		for(auto x:m1){


    			if(x.second>max_val){
    				first=x.first;
    				max_val=x.second;
    			}
    		}

    		//cout<<first<<endl;
    		max_val=0;
    		// ata ager i ar jonno
    		ll index=-1;
    		// ata j ar jonno
    		ll ind=0;
    		for(int i=0;i<n;i++){

    			if(s[i]==first){

    				ll count=0;
    				ll j=i;

    				while(j<n && s[j]==first){

    					count++;
    					j++;
    				}

    				if(count>max_val){

    					if(j==n){
    						// last a chole asche
    						index=i-1;
    						ind=j;
    					}
    					else{
    						ind=j;
    					}
    					max_val=count;
    				}

    				j--;
    				i=j;
    			}
    		}
    		//debug(first)
    		//cout<<index<<" "<<ind<<endl;
    		if(ind==n){

    			// mane ekdom baire chole gese
    			if(index==-1){
    				// ar mane hocche puratai i naki

    			}
    			else{

    				s[index]=first;
    			}
    		}
    		else{

    			// pore ase aro
    			// simply j re banai dibo
    			s[ind]=first;

    		}

    		cout<<s<<endl;

    	}

    	t--;
    }

    return 0;
}
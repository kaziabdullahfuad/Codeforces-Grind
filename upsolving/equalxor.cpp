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

    	ll n,k;
    	cin>>n>>k;

    	vector<ll> v1(n);
    	vector<ll> v2(n);
    	map<ll,ll> m1;
    	map<ll,ll> m2;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    		m2[v1[i]]++;
    	}

    	// printVector(v1);
    	// printVector(v2);
    	ll p1=0;
    	ll p2=0;
    	ll k_hold=2*k;
    	vector<ll> a_sub;
    	vector<ll> b_sub;
    	// for(auto x:m1){
    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }
    	for(int i=1;i<=n;i++){

    		ll val1=m1[i];
    		ll val2=2-val1;
    		//debug(i)
    		//debug(val1) debug(val2)
    		//debug(p1) debug(p2)
			
			if(val1==2){

				if((p1+2)<=k_hold){
					a_sub.push_back(i);
					a_sub.push_back(i);
					p1+=2;
				}
			}
			else if(val2==2){

				if((p2+2)<=k_hold){
					b_sub.push_back(i);
					b_sub.push_back(i);
					p2+=2;
				}
			}
			

    	}

    	//debug(k_hold)
    	//debug(p1) debug(p2)

    	if(p1!=k_hold){

    		for(int i=1;i<=n;i++){

    			ll val1=m1[i];
    			ll val2=2-val1;
    			if(val1==1){

				if(p1<k_hold && p2<k_hold){
					a_sub.push_back(i);
					b_sub.push_back(i);
					p1++;
					p2++;
				}
			}    		
    		}
    	}

    	printVector(a_sub);
    	printVector(b_sub);

    	t--;
    }

    return 0;
}
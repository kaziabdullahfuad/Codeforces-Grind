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

    	ll n,m;
    	cin>>n>>m;
    	vector<ll> v1(m);
    	
    	for(int i=0;i<m;i++){
    		cin>>v1[i];
    	}

    	//printVector(v1);
    	
    	sort(all(v1));

    	vector<ll> subarr;

    	for(int i=1;i<m;i++){

    		subarr.push_back(v1[i]-v1[i-1]-1);
    	}

    	subarr.push_back((v1[0]-1)+(n-v1[m-1]));
    	sort(all(subarr),greater<ll>());

    	//printVector(subarr);

    	ll noninf=0;
    	ll count=0;
    	// if (count*2)>=subarr val then break
    	// if subarr remain=1 then noninf+=1, count+=1
    	// if subarr remain=2 then noninf+=1, count+=1
    	// if subarr remain>=3 then noninf+=(remain-1), count+=2
    	for(int i=0;i<subarr.size();i++){

    		ll holder=count*2ll;
    		//debug(holder)
    		if(holder>=subarr[i]){
    			break;
    		}
    		else{

    			ll remain=subarr[i]-(count*2ll);
    			//debug(remain);

    			if(remain==1 || remain==2){
    				noninf+=1;
    				count+=1;
    			}
    			else{
    				// 3 ar beshi
    				noninf+=remain-1;
    				//debug(noninf)
    				count+=2;
    			}
    			//debug(noninf)
    		}

    		//cout<<noninf<<" "<<count<<endl;

    	}

    	//cout<<noninf<<" "<<count<<endl;

    	cout<<n-noninf<<endl;

    	t--;
    }

    return 0;
}
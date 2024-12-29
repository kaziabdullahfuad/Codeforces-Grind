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

    	ll n,a,b,c;
    	cin>>n>>a>>b>>c;

    	ll sum=a+b+c;
    	

    	if(sum>=n){

    		ll count=0;
    		ll remain=n;

    		if(a>=remain){

    			count++;
    			cout<<count<<endl;
    		}
    		else if(remain>a && remain<=(a+b)){

    			count+=2;
    			cout<<count<<endl;
    		}
    		else{

    			count+=3;
    			cout<<count<<endl;
    		}
    	}
    	else{
    	ll div=n/sum;
    	//debug(div)

    	ll total=div*sum;
    	//debug(total)

    	ll count=div*3ll;
    	
    	ll remain=n%total;
    	//debug(remain)
    	if(remain==0){

    		cout<<count<<endl;
    	}
    	else{

    		bool found=false;

    		if(a>=remain){

    			count++;
    			cout<<count<<endl;
    		}
    		else if(remain>a && remain<=(a+b)){

    			count+=2;
    			cout<<count<<endl;
    		}
    		else{

    			count+=3;
    			cout<<count<<endl;
    		}
    	}
    }

    	t--;
    }

    return 0;
}
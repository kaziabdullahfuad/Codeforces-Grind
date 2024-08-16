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

    	//cout<<s<<endl;
    	ll sum=0;
    	ll a=0;
    	ll b=0;
    	ll c=0;
    	ll d=0;

    	for(int i=0;i<s.size();i++){
    		//cout<<i<<endl;
    		if(s[i]=='A' && a==0){
    			a++;
    			sum++;
    		}
    		else if(s[i]=='B' && b==0){
    			b++;
    			sum++;
    		}
    		else if(s[i]=='C' && c==0){
    			c++;
    			sum++;
    		}
    		else if(s[i]=='D' && d==0){
    			d++;
    			sum++;
    		}
    		//debug(sum)
    		if(i%4==3){
    			a=0;
    			b=0;
    			c=0;
    			d=0;
    		}
    	}

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}
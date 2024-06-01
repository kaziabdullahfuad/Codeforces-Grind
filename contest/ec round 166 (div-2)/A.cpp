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

    	ll n;
    	cin>>n;

    	string s;
    	cin>>s;

    	// sorted hote hobe
    	// letter ar por number nai
    	bool found=true;

    	string numbers;
    	string letters;

    	for(int i=0;i<n-1;i++){

    		if(s[i]>=97 && s[i]<=122){

    			if(s[i+1]>=48 && s[i+1]<=57){
    				found=false;
    				break;
    			}
    		}
    	}

    	for(int i=0;i<n;i++){

    		if(s[i]>=97 && s[i]<=122){

    			letters+=s[i];
    		}	
    		else{

    			numbers+=s[i];
    		}
    	}

    	string first=numbers;
    	string second=letters;

    	sort(all(first));

    	sort(all(second));

    	if((first!=numbers) || (second!=letters)){

    		found=false;
    	}

    	if(found){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}
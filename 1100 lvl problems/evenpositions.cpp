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

    	ll open=0;

    	//cout<<s<<endl;

    	for(int i=0;i<n;i++){

    		if(s[i]=='_'){

    			if(open==0){
    				s[i]='(';
    			}
    			else{

    				s[i]=')';
    				open--;
    			}
    		}
    		else if(s[i]=='('){
    			open++;
    		}
    	}

    	//cout<<s<<endl;
    	ll left=0;
    	ll right=1;
    	ll sum=0;
    	while(left<n && right<n){

    		if(s[left]!='('){

    			left++;
    		}
    		else if(s[right]!=')'){
    			right++;
    		}
    		else if(s[left]=='(' && s[right]==')'){

    			//cout<<left+1<<" "<<right+1<<endl;

    			sum+=abs((left+1)-(right+1));
    			//cout<<sum<<endl;
    			left++;
    			right++;
    		}
    	}

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}
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

    	int n;
    	cin>>n;

    	int a,b,c;

    	for(int i=1;i<=26;i++){

    		for(int j=i;j<=26;j++){

    			for(int k=1;k<=26;k++){

    				if(i+j+k==n){
    					a=i;
    					b=j;
    					c=k;
    					goto label1;
    				}
    			}
    		}
    	}

    	label1:
    	string ans="";
    	ans=char(a+96);
    	ans+=char(b+96);
    	ans+=char(c+96);
    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}
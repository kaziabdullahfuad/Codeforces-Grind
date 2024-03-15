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

    	int n=s.size();
    	int zero_count=0;
    	int one_count=0;
    	for(int i=0;i<n;i++){

    		if(s[i]=='0'){
    			zero_count++;
    		}
    		else{
    			one_count++;
    		}
    	}

    	int min_op=min(one_count,zero_count);

    	//cout<<min_op<<endl;

    	if(min_op%2==0){
    		cout<<"NET"<<endl;
    	}
    	else{
    		cout<<"DA"<<endl;
    	}

    	t--;
    }

    return 0;
}
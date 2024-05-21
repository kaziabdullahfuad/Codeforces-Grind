#include<iostream>
#include<stack>
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

    	ll a,b,c,d;
    	cin>>a>>b>>c>>d;

    	stack<int> s1;
    	//cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    	// s1.push(12);
    	// s1.push(14);
    	// cout<<s1.top()<<endl;
    	bool found=true;
    	//cout<<s1.empty()<<endl;
    	for(int i=1;i<=12;i++){
    		//cout<<i<<endl;
    		//cout<<s1.top()<<endl;
    		if((i==a || i==b || i==c || i==d) && (s1.empty()==true)){

    			s1.push(i);
    			//cout<<s1.top()<<endl;
    		}
    		else if((i==a && s1.top()==b) || (i==b && s1.top()==a)){
    			//cout<<i<<endl;
    			found=false;
    			break;
    		}
    		else if((i==c && s1.top()==d) || (i==d && s1.top()==c)){
    			//cout<<i<<endl;
    			found=false;
    			break;
    		}
    		else if(i==a || i==b || i==c || i==d){
    			s1.push(i);
    			//cout<<s1.top()<<endl;
    		}

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
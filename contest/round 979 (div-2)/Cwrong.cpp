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

    	ll turns=n-1;
    	//debug(n)
    	if(n==2){

    		// tahole just alice ar turn
    		if(s[0]=='0' && s[1]=='0'){

    			cout<<"NO"<<endl;
    		}
    		else{
    			cout<<"YES"<<endl;
    		}
    	}
    	else{

    		// last 3 ta element nibo
    		// char first=s[n-3];
    		// char second=s[n-2];
    		// char third=s[n-1];

    		char first=s[0];
    		char second=s[1];
    		char third=s[2];


    	if(turns%2==1){

    		// alice ar last turn
    		// ar ar ager turn bob ar

    		//1
    		if(first=='0' && second=='0' && third=='0'){
    			cout<<"NO"<<endl;
    		}//2
    		else if(first=='0' && second=='0' && third=='1'){
    			cout<<"NO"<<endl;
    		}//3
    		else if(first=='0' && second=='1' && third=='0'){
    			cout<<"NO"<<endl;
    		}//4
    		else if(first=='0' && second=='1' && third=='1'){
    			cout<<"YES"<<endl;
    		}// 5
    		else if(first=='1' && second=='0' && third=='0'){

    			cout<<"NO"<<endl;
    		}// 6
    		else if(first=='1' && second=='0' && third=='1'){

    			cout<<"YES"<<endl;
    		}// 7
    		else if(first=='1' && second=='1' && third=='0'){
    			cout<<"YES"<<endl;
    		}// 8
    		else if(first=='1' && second=='1' && third=='1'){

    			cout<<"YES"<<endl;
    		}


    	}
    	else{

    		// bob ar last turn
    		// ar ager turn alice ar

    		if(first=='0' && second=='0' && third=='0'){
    			cout<<"NO"<<endl;
    		}
    		else if(first=='0' && second=='0' && third=='1'){
    			cout<<"NO"<<endl;
    		}
    		else if(first=='0' && second=='1' && third=='0'){
    			cout<<"NO"<<endl;
    		}
    		else if(first=='0' && second=='1' && third=='1'){
    			cout<<"YES"<<endl;
    		}// 5
    		else if(first=='1' && second=='0' && third=='0'){

    			cout<<"YES"<<endl;
    		}// 6
    		else if(first=='1' && second=='0' && third=='1'){

    			cout<<"YES"<<endl;
    		}// 7
    		else if(first=='1' && second=='1' && third=='0'){
    			cout<<"YES"<<endl;
    		}// 8
    		else if(first=='1' && second=='1' && third=='1'){

    			cout<<"YES"<<endl;
    		}
    	}
    }

    	t--;
    }

    return 0;
}
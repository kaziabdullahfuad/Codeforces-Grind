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
    	//debug(n)

    	if(n%2==1 && n>=27){
    		
    		// 1 , 10, 26
    		// in zero index it's 0,9 and 25

    		vector<ll> v1(n);

    		v1[0]=1;
    		v1[9]=1;
    		v1[25]=1;

    		v1[22]=2;
    		v1[26]=2;

    		ll start=3;

    		for(int i=1;i<9;i+=2){

    			v1[i]=start;
    			v1[i+1]=start;
    			start++;
    		}

    		// debug(start)
    		// printVector(v1);

    		for(int i=10;i<22;i+=2){

    			//cout<<i<<" ";
    			v1[i]=start;
    			v1[i+1]=start;
    			start++;
    		}

    		// debug(start)
    		// printVector(v1);

    		v1[23]=start;
    		v1[24]=start;

    		start++;

    		for(int i=27;i<n;i+=2){

    			v1[i]=start;
    			v1[i+1]=start;

    			start++;
    		}

    		printVector(v1);

    	}
    	else if(n%2==0){


    		ll start=1;
    		//vector<ll> v1(n);

    		for(int i=0;i<n;i+=2){

    			//v1[i]=start;
    			//v1[i+1]=start;
    			cout<<start<<" "<<start<<" ";
    			start++;
    			//debug(i)
    		}
    		cout<<endl;
    		//printVector(v1);
    	}
    	else{

    		cout<<-1<<endl;
    	}

    	t--;
    }

    return 0;
}
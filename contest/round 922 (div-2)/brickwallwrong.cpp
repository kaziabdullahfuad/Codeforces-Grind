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

    	ll height,row;
    	cin>>height>>row;

    	if(row%2==0 && height%2==0){

    		cout<<(row*height)/2<<endl;
    	}
    	else if(row%2==0){

    		

    		if(row*height%2==0){
    				cout<<(row*height)/2<<endl;
    			
    		}
    	}
    	else{

    		ll hold=row*height;
    		//cout<<hold<<endl;
    		ll first=hold/2;	
    		ll temp;
    		for(int i=2;i<=height;i++){

    			if(height%i==0){
    				temp=i;
    				break;
    			}
    		}

    		ll keep=height/temp;

    		cout<<first-keep<<endl;

    	}

    	t--;
    }

    return 0;
}
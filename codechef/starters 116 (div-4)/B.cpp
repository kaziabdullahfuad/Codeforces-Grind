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
template<typename t>
void printVector(vector<t> &v1){

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

    	vector<string> v1(6);

    	for(int i=0;i<6;i++){
    		cin>>v1[i];
    	}

    	//printVector(v1);
    	bool found=false;
    	for(int i=0;i<4;i++){
    		
    		if(v1[i]=="W"){

    			if(v1[i+1]=="W" && v1[i+2]=="W"){
    				found=true;
    				break;
    			}
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
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
template<typename t3>
void printVector(vector<t3> holder){

	for(int i=0;i<holder.size();i++){

		cout<<holder[i]<<endl;
	}
	
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> v1={"0","1"};

    int n;
    cin>>n;
    n--;
    while(n){

    	for(int i=v1.size()-1;i>=0;i--){

    		v1.push_back(v1[i]);
    	}

    	for(int i=0;i<v1.size()/2;i++){
    		v1[i]=v1[i]+'0';
    	}

    	for(int i=v1.size()/2;i<v1.size();i++){
    		v1[i]=v1[i]+'1';
    	}

    	n--;
    }

    printVector(v1);

    return 0;
}
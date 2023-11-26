#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	int n;
    	cin>>n;
    	
    	if(n%3==0){
    		cout<<"Second"<<endl;
    	}
    	else{
    		cout<<"First"<<endl;
    	}

    	t--;
    }

    return 0;
}
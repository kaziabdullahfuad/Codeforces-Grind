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

    	string s;
    	cin>>s;

    	char a=s[0];
    	int b=s[1]-'0';

    	//cout<<a<<endl<<b<<endl;

    	// horizontal
    	char start='a';
    	for(int i=1;i<=8;i++){

    		if(start!=a){
    			cout<<start<<b<<endl;
    		}
    		start++;
    	}

    	// vertical
    	for(int i=1;i<=8;i++){

    		if(i!=b){
    			cout<<a<<i<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}
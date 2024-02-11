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
    	int x,y;
    	cin>>x>>y;

    	//cout<<x<<" "<<y<<endl;
    	int holder;
    	for(int i=2;i<=4;i++){
    		
    		int a,b;
    		cin>>a>>b;

    		//cout<<a<<" "<<b<<endl;
    		int diff_x=x-a;
    		int diff_y=y-b;
    		if(diff_x!=0){
    			holder=diff_x;
    			//cout<<"HOLDER X: "<<holder<<endl;
    			//break;
    		}
    		else if(diff_y!=0){
    			holder=diff_y;
    			//cout<<"HOLDER Y: "<<holder<<endl;
    			//break;
    		}

    	}

    	cout<<holder*holder<<endl;

    	t--;
    }

    return 0;
}
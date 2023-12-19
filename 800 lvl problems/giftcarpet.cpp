//problem link: https://codeforces.com/problemset/problem/1862/A
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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	int n,m;
    	cin>>n>>m;
    	vector<char> v1={'v','i','k','a'};
    	bool found;
    	int start=0;
    	int index=0;
    	vector<vector<char>> holder;
    	for(int i=0;i<n;i++){
    		vector<char> temp;
    		for(int j=0;j<m;j++){
    			char val;
    			cin>>val;
    			temp.push_back(val);
    		}
    		holder.push_back(temp);
    		
    	}


    	
    	for(int i=0;i<m;i++){
    		//found=false;
    		for(int j=0;j<n;j++){

    			if(holder[j][i]==v1[index]){
    				//found=true;
    				// cout<<holder[j][i]<<endl;
    				// cout<<v1[index]<<endl;
    				index++;
    				break;
    			}
    		}
    		if(index>=4)
    			break;

    	}

    	if(index==4){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    

    	t--;
    }

    return 0;
}
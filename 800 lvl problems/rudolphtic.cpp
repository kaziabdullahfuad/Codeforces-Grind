// problem link:https://codeforces.com/problemset/problem/1846/B
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

    	vector<string> v1(3);

    	for(int i=0;i<3;i++){
    		cin>>v1[i];
    	}

    	// for(auto x:v1){
    	// 	cout<<x<<endl;
    	// }

    	bool x_won=false;
    	bool o_won=false;
    	bool plus_won=false;

   	
    	// for row
    	for(int i=0;i<3;i++){
    		int x_count=0;
    		int o_count=0;
    		int plus_count=0;

    		for(int j=0;j<3;j++){

    			if(v1[i][j]=='X'){
    				x_count++;
    			}
    			else if(v1[i][j]=='O'){
    				o_count++;
    			}
    			else if(v1[i][j]=='+'){
    				plus_count++;
    			}

    		}

    		if(x_count==3){
    			x_won=true;
    			cout<<"X"<<endl;
    			break;
    		}
    		else if(o_count==3){
    			o_won=true;
    			cout<<"O"<<endl;
    			break;
    		}
    		else if(plus_count==3){
    			plus_won=true;
    			cout<<"+"<<endl;
    			break;
    		}
    	}

    	if(x_won==false && o_won==false && plus_won==false){
    		
    		// column check
    		for(int i=0;i<3;i++){
    		int x_count=0;
    		int o_count=0;
    		int plus_count=0;

    		for(int j=0;j<3;j++){

    			if(v1[j][i]=='X'){
    				x_count++;
    			}
    			else if(v1[j][i]=='O'){
    				o_count++;
    			}
    			else if(v1[j][i]=='+'){
    				plus_count++;
    			}

    		}

    		if(x_count==3){
    			x_won=true;
    			cout<<"X"<<endl;
    			break;
    		}
    		else if(o_count==3){
    			o_won=true;
    			cout<<"O"<<endl;
    			break;
    		}
    		else if(plus_count==3){
    			plus_won=true;
    			cout<<"+"<<endl;
    			break;
    		}
    	}
    	}

    	if(x_won==false && o_won==false && plus_won==false){

    		// diagonal check
    		int x_count=0;
    		int o_count=0;
    		int plus_count=0;

    		// left  diagonal
    		for(int i=0;i<v1.size();i++){

    			if(v1[i][i]=='X'){
    				x_count++;
    			}
    			else if(v1[i][i]=='O'){
    				o_count++;
    			}
    			else if(v1[i][i]=='+'){
    				plus_count++;
    			}
    		}

    		if(x_count==3){
    			x_won=true;
    			cout<<"X"<<endl;
    			//break;
    		}
    		else if(o_count==3){
    			o_won=true;
    			cout<<"O"<<endl;
    			//break;
    		}
    		else if(plus_count==3){
    			plus_won=true;
    			cout<<"+"<<endl;
    			//break;
    		}
    		
    	}

    	if(x_won==false && o_won==false && plus_won==false){

    		// diagonal check
    		int x_count=0;
    		int o_count=0;
    		int plus_count=0;

    		// left  diagonal
    		for(int i=0,j=2;i<v1.size();i++,j--){

    			if(v1[i][j]=='X'){
    				x_count++;
    			}
    			else if(v1[i][j]=='O'){
    				o_count++;
    			}
    			else if(v1[i][j]=='+'){
    				plus_count++;
    			}
    		}

    		if(x_count==3){
    			x_won=true;
    			cout<<"X"<<endl;
    			//break;
    		}
    		else if(o_count==3){
    			o_won=true;
    			cout<<"O"<<endl;
    			//break;
    		}
    		else if(plus_count==3){
    			plus_won=true;
    			cout<<"+"<<endl;
    			//break;
    		}
    		else{
    			cout<<"DRAW"<<endl;
    		}
    		
    	}
    

    	t--;
    }

    return 0;
}
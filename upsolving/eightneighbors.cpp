//problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X
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


    int n,m;
    cin>>n>>m;

    vector<string> v1(n);
    // string s;
    // cin>>s;
    for(int i=0;i<n;i++){
    	cin>>v1[i];
    }
    // cout<<s<<endl;
    int row,col;
    cin>>row>>col;

    // for(auto x:v1){
    // 	cout<<x<<endl;
    // }

    row--;
    col--;

   	/* total calculations=8. l,ltd,lbd,r,rtd,rbd,top,bottom (3+3+1+1)=8
   		All left col -left,left top diag,left bot diag =3
   		All right col- right, right top diag,rbd=3
   		all top row cal-top=1
   		all bottom row cal- bottom=1
	*/
    // cout<<row<<" "<<col<<endl;
    v1[row][col]='x';
    if(col-1<0){

    	// shob left side ar baad such as l,ltd,lbd

    	if(row-1<0){
    		// 0-1=-1
    		//shob top baad
    		// t baad so 8-4=4
    		//check r,rtd,rbd,bottom
    		// ex: 1 1
    		if(v1[row][col]==v1[row][col+1] && v1[row][col]==v1[row+1][col] && v1[row][col]==v1[row+1][col+1]){
    			cout<<"yes"<<endl;
    		}
    		else{
    			cout<<"no"<<endl;
    		}
    	}
    	else if(row+1>=n){

    		// 3 row hole and row=2 hole 2+1=3 
    		// so bottom baad
    		// check right,top,top right diagonal
    		if(v1[row][col]==v1[row][col+1] && v1[row][col]==v1[row-1][col] && v1[row][col]==v1[row-1][col+1]){
    			cout<<"yes"<<endl;
    		}
    		else{
    			cout<<"no"<<endl;
    		} 
    	}
    	else{

    		// top bottom duitai thakbe
    		if(v1[row][col]==v1[row][col+1] && v1[row][col]==v1[row-1][col] && v1[row][col]==v1[row+1][col] && v1[row][col]==v1[row-1][col+1] && v1[row][col]==v1[row+1][col+1]){
    			cout<<"yes"<<endl;
    		}
    		else{
    			cout<<"no"<<endl;
    		} 
    	}
    }
    else if(col+1>=m){

    	// shob right side ar baad such as r,trd,brd

    	if(row-1<0){
    		// 0-1=-1
    		//shob top baad
    		// t baad so 8-4=4
    		//check r,rtd,rbd,bottom
    		// ex: 1 1
    		if(v1[row][col]==v1[row][col-1] && v1[row][col]==v1[row+1][col] && v1[row][col]==v1[row+1][col-1]){
    			cout<<"yes"<<endl;
    		}
    		else{
    			cout<<"no"<<endl;
    		}
    	}
    	else if(row+1>=n){

    		// 3 row hole and row=2 hole 2+1=3 
    		// so bottom baad
    		// check right,top,top right diagonal
    		if(v1[row][col]==v1[row][col-1] && v1[row][col]==v1[row-1][col] && v1[row][col]==v1[row-1][col-1]){
    			cout<<"yes"<<endl;
    		}
    		else{
    			cout<<"no"<<endl;
    		} 
    	}
    	else{

    		// top bottom duitai thakbe
    		if(v1[row][col]==v1[row][col-1] && v1[row][col]==v1[row+1][col] && v1[row][col]==v1[row-1][col] && v1[row][col]==v1[row-1][col-1] && v1[row][col]==v1[row+1][col-1]){
    			cout<<"yes"<<endl;
    		}
    		else{
    			cout<<"no"<<endl;
    		} 
    	}
    }
    else{

    	// majkhane ekdom left and bottom duitai ase
    	// so shob thakbe just check korte hobe top ar bottom thakbe ki na

    	if(row-1<0){
    		// 0-1=-1
    		//shob top baad
    		// t baad so 8-4=4
    		//check r,rtd,rbd,bottom
    		// ex: 1 1
    		if(v1[row][col]==v1[row][col-1] && v1[row][col]==v1[row][col+1] && v1[row][col]==v1[row+1][col] && v1[row][col]==v1[row+1][col-1] && v1[row][col]==v1[row+1][col+1]){
    			cout<<"yes"<<endl;
    		}
    		else{
    			cout<<"no"<<endl;
    		}
    	}
    	else if(row+1>=n){

    		// 3 row hole and row=2 hole 2+1=3 
    		// so bottom baad
    		// check right,top,top right diagonal
    		if(v1[row][col]==v1[row][col-1] && v1[row][col]==v1[row][col+1] && v1[row][col]==v1[row-1][col] && v1[row][col]==v1[row-1][col-1] && v1[row][col]==v1[row-1][col+1]){
    			cout<<"yes"<<endl;
    		}
    		else{
    			cout<<"no"<<endl;
    		} 
    	}
    	else{

    		// top bottom duitai thakbe
    		if(v1[row][col]==v1[row][col-1] && v1[row][col]==v1[row][col+1] && v1[row][col]==v1[row-1][col] && v1[row][col]==v1[row+1][col] && v1[row][col]==v1[row-1][col-1] && v1[row][col]==v1[row-1][col+1] && v1[row][col]==v1[row+1][col-1] && v1[row][col]==v1[row+1][col+1]){
    			cout<<"yes"<<endl;
    		}
    		else{
    			cout<<"no"<<endl;
    		} 
    	}
    }

    return 0;
}
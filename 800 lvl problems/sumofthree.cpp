//problem link:https://codeforces.com/problemset/problem/1886/A
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

    	int n;
    	cin>>n;
    	//int i,j,k;

    	if(n<=6){
    		cout<<"NO"<<endl;
    	}
    	else{

    		bool found=false;
    		int i,j,z;
    		for( i=1;i<=20;i++){

    			for( j=1;j<=20;j++){

    				if(i+j>=n){
    					continue;
    				}
    				// check the diff
    				 z=n-(i+j);

    				if(i==j || i==z || j==z){
    					continue;
    				}

    				if(i%3==0 || j%3==0 || z%3==0){
    					continue;
    				}

    				found=true;
    				goto end;
    				
    			}
    		}
    		end:
    		if(found){
    			cout<<"YES"<<endl;
    			cout<<i<<" "<<j<<" "<<z<<endl;
    		}
    		else{
    		cout<<"NO"<<endl;
    		}


    		// bool found=false;
    		// for(i=1;i<n;i++){
    		// 	if(i%3==0){
    		// 		continue;
    		// 	}
    		// 	int sum=i;

    		// 	for(j=i+1;j<n;j++){
    		// 		if(j%3==0){
    		// 		continue;
    		// 		}
    		// 		sum+=j;

    		// 		for(k=j+1;k<n;k++){
    		// 			if(k%3==0){
    		// 			continue;
    		// 			}

    		// 			sum+=k;
    		// 			if(sum==n){
    		// 				found=true;
    		// 				//cout<<"YES"<<endl;
    		// 				//cout<<i<<" "<<j<<" "<<k<<endl;
    		// 				//break;
    		// 				goto end;
    		// 			}
    		// 			else{
    		// 				sum-=k;
    		// 			}
    		// 		}
    		// 		sum-=j;
    		// 	}
    		// 	sum-=i;
    		// }
    		// end:
	    	// if(found){
	    	// 	cout<<"YES"<<endl;
	    	// 	cout<<i<<" "<<j<<" "<<k<<endl;
	    	// }
	    	// else{
	    	// 	cout<<"NO"<<endl;
	    	// }
    	}

    	t--;
    }

    return 0;
}
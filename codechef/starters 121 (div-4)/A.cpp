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
#define debug(x) cout<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
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

    	int n;
    	cin>>n;


    	if(n==1){
    		cout<<1<<" "<<1<<endl;
    	}
    	else if(n==2){
    		cout<<1<<" "<<1<<endl;
    	}
    	else if(n%2!=0){

    		//int max_val=1;
    		int max_count=0;
    		int min_count=0;
    		for(int i=1;i<=n;i+=2){

    			max_count++;
    		}

    		for(int i=2;i<=n;i+=2){

    			min_count++;
    		}

    		cout<<max_count<<" ";
    		cout<<min_count<<endl;
    	}
    	else{

    		int max_count=0;
    		int min_count=0;
    		for(int i=1;i<=n;i+=2){

    			max_count++;
    		}

    		for(int i=2;i<=n;i+=3){

    			min_count++;
    		}

    		cout<<max_count<<" ";
    		cout<<min_count<<endl;
    	}	


    	t--;
    }
    

    return 0;
}
#include<iostream>
#include<numeric>
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

    	// m- sits on each row
    	// total row=2, so total seats=2*m
    	// a=first row te boshte chai
    	// 2nd row te boshte chai
    	ll m,a,b,c;
    	cin>>m>>a>>b>>c;

    	ll total_seats=2ll*m;
    	ll total_stud=a+b+c;

    	if(m>=total_stud){

    		cout<<total_stud<<endl;
    	}
    	else{

    		// always a,b age concern karon c to jekono jagai boshbe

    		if(a>=m){

    			//cout<<"HERE"<<endl;
    			ll count=m;

    			if(b>=m){

    				count+=m;
    				cout<<count<<endl;
    			}
    			else{

    				count+=b;
    				ll remain=total_seats-count;
    				//debug(count)
    				//debug(remain)
    				count+=min(remain,c);
    				cout<<count<<endl;
    			}
    		}
    		else if(b>=m){

    			ll count=m;

    			if(a>=m){

    				count+=m;
    				cout<<count<<endl;
    			}
    			else{

    				count+=a;
    				ll remain=total_seats-count;
    				//debug(remain)
    				count+=min(remain,c);
    				cout<<count<<endl;
    			}
    		}
    		else{

    			// a<m && b<m

    			if(a>=b){

    				ll count=a;

    				count+=b;

    				ll remain=(2ll*m)-(a+b);

    				count+=min(remain,c);
    				cout<<count<<endl;
    			}
    			else{

    				ll count=b;

    				count+=a;

    				ll remain=(2ll*m)-(a+b);

    				count+=min(remain,c);
    				cout<<count<<endl;

    			}
    		}
    	}


    	t--;
    }

    return 0;
}
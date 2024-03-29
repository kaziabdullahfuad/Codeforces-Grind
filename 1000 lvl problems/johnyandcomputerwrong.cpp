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

    	ll a,b;
    	cin>>a>>b;

    	if(a==b){
    		cout<<0<<endl;
    	}
    	else if(a<b){

    		// dekho b divide kore a ar shoman kora jai ki na.

    		// no of 2 count  rakhar jonno
    		ll two_count=0;;
    		debug(b)
    		cout<<"DIVIDING"<<endl;
    		while(b%2==0){
    			debug(b)
    			b/=2;
    			two_count++;
    		}
    		debug(b) debug(two_count)

    		if(b==1){
    			ll a_count=0;
    			while(a%2==0){
    				a/=2;
    				a_count++;
    			}
    			//debug(a)
    			if(a==1){
    				//debug(two_count) debug(a_count)
    				ll target=two_count-a_count;
    				//debug(target)
    				ll operations=0;

    				operations+=target/3;
	    			target=target%3;

	    			//debug(operations) debug(target)

	    			operations+=target/2;
	    			target=target%2;

	    			//debug(operations) debug(target)

	    			operations+=target/1;
	    			target=target%1;

	    			//debug(operations) debug(target)
	    			cout<<operations<<endl;

    			}
    			else{
    				cout<<-1<<endl;
    			}
    		}
    		else if(b!=a){
    			cout<<-1<<endl;
    		}
    		else{

    			//cout<<two_count<<endl;

    			// now 2 gula shorate hobe
    			// 2^1=2, 2^2=2*2=4 , 2^3=2*2*2=8
    			ll operations=0;

    			operations+=two_count/3;
    			two_count=two_count%3;

    			//debug(operations) debug(two_count)

    			operations+=two_count/2;
    			two_count=two_count%2;

    			//debug(operations) debug(two_count)

    			operations+=two_count/1;
    			two_count=two_count%1;

    			//debug(operations) debug(two_count)
    			cout<<operations<<endl;
    		}
    	}
    	else{
    		// a>b
    		// a theke shob 2 baad dile b

    		ll a_twocount=0;

    		while(a%2==0){
    			a/=2;
    			a_twocount++;
    		}

    		if(a==1){

    			ll b_twocount=0;

    			while(b%2==0){
    				b/=2;
    				b_twocount++;
    			}

    			if(b!=1){
    				cout<<-1<<endl;
    			}
    			else{

    			ll operations=0;
    			ll target=a_twocount-b_twocount;

    			operations+=target/3;
    			target=target%3;

    			//debug(operations) debug(target)

    			operations+=target/2;
    			target=target%2;

    			//debug(operations) debug(target)

    			operations+=target/1;
    			target=target%1;

    			//debug(operations) debug(target)
    			cout<<operations<<endl;

    			}
    		}
    		else if(a!=b){
    			cout<<-1<<endl;
    		}
    		else{

    			ll operations=0;

    			operations+=a_twocount/3;
    			a_twocount=a_twocount%3;

    			//debug(operations) debug(a_twocount)

    			operations+=a_twocount/2;
    			a_twocount=a_twocount%2;

    			//debug(operations) debug(a_twocount)

    			operations+=a_twocount/1;
    			a_twocount=a_twocount%1;

    			//debug(operations) debug(a_twocount)
    			cout<<operations<<endl;

    		}
    	}

    	t--;
    }

    return 0;
}
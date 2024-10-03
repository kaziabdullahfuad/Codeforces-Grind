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

   ll n;
   cin>>n;
   vector<ll> v1(n);
   map<ll,ll> m1;
   for(int i=0;i<n;i++){
   		cin>>v1[i];
   		m1[v1[i]]++;
   }
   
  // sort(all(v1),greater<ll>());

   //printVector(v1);

  
   ll count=0;
   
   count+=m1[4];

   ll no_three=m1[3];
   ll no_two=m1[2];
   ll no_one=m1[1];

   if(no_three==no_one){

   		count+=no_three;

   		count+=(no_two+1)/2;
   		cout<<count<<endl;
   }
   else if(no_three>no_one){

   		count+=no_three;
   		//cout<<count<<endl;
   		count+=(no_two+1)/2;
   		cout<<count<<endl;
   }
   else{

   		// 1, 3 ar che boro
   		// prothome shob 3 nibo
   		count+=no_three;
   		no_one-=no_three;
   		// now 2 and 1 ar khela

   		if(no_two%2==0){

   			// tahole shob 2 ar jora nibo
   			count+=(no_two/2);
   			count+=(no_one+3)/4;

   			cout<<count<<endl;
   		}
   		else{
   			// ar mane shob 2 jora niya o ekta 1 ase

   			count+=(no_two)/2;
   			//debug(count)
   			// now 2 diye koita 1 nawa jai
   			ll koita_one=min(no_one,2ll);
   			count++;
   			//debug(no_one)
   			//debug(koita_one)
   			no_one-=koita_one;
   			//debug(no_one)

   			count+=(no_one+3)/4;
   			//debug(count)
   			cout<<count<<endl;
   		}
   }
   

    return 0;
}
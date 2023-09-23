#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printVector(vector<int>v1){
	
	vector<int>::iterator it;

	for(it=v1.begin();it!=v1.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}
void print2dvec(vector<vector<int>> v2){
	
	for(auto row:v2){

		for(auto col:row){
			cout<<col<<" ";
		}
		cout<<endl;
	}
}
class Solution{
	
	public:


};
int main()
{
	
	int t;
	cin>>t;

	while(t){

		long long int n;
		long long int k;
		cin>>n;
		cin>>k;

		string s;
		cin>>s;
		// cout<<n<<endl;
		// cout<<k<<endl;
		int count=0;
		bool first_flag=false;
		int left;
		for(int i=0;i<s.size();i++){

			if(s[i]=='B'){
				count++;
				if(!first_flag){
					first_flag=true;
					left=i;
				}
			}
		}
		// cout<<s<<endl;
		// cout<<count<<endl;

		if(count==0){
			cout<<0<<endl;
		}
		
		int counter=1;
		int got_it=0;
		int done=0;
		int counter_plus=counter+k;
		while(left<s.size()){

			// cout<<"LEft "<<left<<endl;
			// cout<<"Counter "<<counter<<endl;
			// cout<<"got it "<< got_it<<endl;
			if(s[left]=='B'){
				got_it+=1;

			}

			if(counter==k || left==s.size()-1){
				counter=0;
				if(got_it>0){
					done++;
				}
			}
			if(got_it==count){
				break;
			}

			counter++;
			left++;
		}

		cout<<"MAIN ONE: "<<done<<endl;

		t--;
	}
	return 0;
}
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
		else{
		int counter=1;
		int got_it=0;
		int done=0;
		int counter_plus=counter+k;
		bool amni_flag=false;
		while(left<s.size()){

			amni_flag=false;
			if(s[left]=='B'){
				amni_flag=true;
				//cout<<"LEFT:"<<left<<endl;
				int len=left+k;
				while(left<len){

					if(left>=s.size()){
						break;
					}
					if(s[left]=='B'){
						got_it++;
					}
					left++;
				}

				if(got_it>0){
				done++;
				}

			}

			

			if(amni_flag==false){
				left++;
			}
			
		}

		cout<<done<<endl;
	}

		t--;
	}
	return 0;
}
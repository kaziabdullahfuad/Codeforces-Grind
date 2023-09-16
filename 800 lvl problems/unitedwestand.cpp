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

		int n;
		cin>>n;
		vector<int> a(n);


		for(int i=0;i<a.size();i++){
			int val;
			cin>>val;
			a[i]=val;
		}
		//printVector(a);
		int odd=0;
		int even=0;
		int max_val=0;
		int first_ele=a[0];
		bool distinct=false;

		for(int i=0;i<a.size();i++){

			if(a[i]%2==0){
				even++;
			}
			else{
				odd++;
			}

			if(a[i]>max_val){
				max_val=a[i];
			}

			if(first_ele!=a[i]){
				distinct=true;
			}
		}

		//cout<<odd<<"\n"<<even<<"\n"<<max_val<<endl;

		if(odd==0 || even==0){

			vector<int> b;
			vector<int> c;

			if(distinct==false){
				cout<<-1<<"\n";
			}
			else{

				for(int i=0;i<a.size();i++){

					if(a[i]<max_val){
						b.push_back(a[i]);
					}
					else{
						c.push_back(a[i]);
					}
				}

			cout<<b.size()<<" "<<c.size()<<"\n";

			printVector(b);
			printVector(c);

			}

			

		}
		else{

			vector<int> b;
			vector<int> c;

			for(int i=0;i<a.size();i++){

				if(a[i]%2==0){
					c.push_back(a[i]);
				}
				else{

					b.push_back(a[i]);
				}
			}

			cout<<b.size()<<" "<<c.size()<<"\n";

			printVector(b);
			printVector(c);
		}


		t--;
	}

	return 0;
}
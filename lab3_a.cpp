#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<fstream>
#include<vector>
using namespace std;

int main(){
	int i=0,num=0,sum=0;
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	inFile>>num;
	vector<int>v1(num);
	for(i=0;i<num;i++){
		inFile>>v1[i];
	}
	sort(v1.begin(),v1.end());
	for(i=num-1;i>num-6;i--){
		sum=sum+v1[i];
	}
	cout<<sum<<endl;
	inFile.close();
	return 0;
}

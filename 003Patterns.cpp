#include <iostream>

using namespace std;

void pattern1();
void pattern2();

int main(){
//	pattern1();
	pattern2();
}

void pattern1(){
	int N = 5;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void pattern2(){
	int N = 5;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

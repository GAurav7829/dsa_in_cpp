#include <iostream>

using namespace std;

void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void pattern8();
void pattern9();
void pattern10();
void pattern11();
void pattern12();
void pattern13();
void pattern14();
void pattern15();
void pattern16();
void pattern17();
void pattern18();
void pattern19();
void pattern20();
void pattern21();
void pattern22();
void pattern23();
void pattern24();
void pattern25();
void pattern26();
void pattern27();
void pattern28();


int main(){
//	pattern1();
//	pattern2();
//	pattern3();
//	pattern4();
//	pattern5();
//	pattern6();
//	pattern7();
//	pattern8();
//	pattern9();
//	pattern10();
//	pattern11();
//	pattern12();
//	pattern13();
//	pattern14();
//	pattern15();
//	pattern16();
//	pattern17();
//	pattern18();
//	pattern19();
//	pattern20();
//	pattern21();
//	pattern22();
//	pattern23();
//	pattern24();
//	pattern25();
//	pattern26();
//	pattern27();
	pattern28();
}

void pattern1(){
	/*
		* * * * *
		* * * * *
		* * * * *
		* * * * *
		* * * * *
	*/
	int N = 5;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void pattern2(){
	/*
		1 1 1 1 1
		2 2 2 2 2
		3 3 3 3 3
		4 4 4 4 4
		5 5 5 5 5
	*/
	int N = 5;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

void pattern3(){
	/*
		1 2 3 4 5
		1 2 3 4 5
		1 2 3 4 5
		1 2 3 4 5
		1 2 3 4 5
	*/
	int N = 5;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void pattern4(){
	/*
		5 4 3 2 1
		5 4 3 2 1
		5 4 3 2 1
		5 4 3 2 1
		5 4 3 2 1
	*/
	int N = 5;
	for(int i=1; i<=N; i++){
		for(int j=N; j>=1; j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void pattern5(){
	/*
		1 2 3
		4 5 6
		7 8 9
	*/
	int N = 3;
	int count = 1;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
}

void pattern6(){
	/*
		*
		* *
		* * *
		* * * *
		* * * * *
	*/
	int N = 5;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void pattern7(){
	/*
		1
		2 2
		3 3 3
		4 4 4 4
		5 5 5 5 5
	*/
	int N = 5;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=i; j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

void pattern8(){
	/*
		1
		2       3
		4       5       6
		7       8       9       10
		11      12      13      14      15
	*/
	int N = 5;
	int count = 1;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=i; j++){
			cout<<count<<"\t";
			count++;
		}
		cout<<endl;
	}
}

void pattern9(){
	/*
		1
		2       3
		3       4       5
		4       5       6       7
		5       6       7       8       9
	*/
	int N = 5;
	int count = 1;
	for(int i=1; i<=N; i++){
		count = i;
		for(int j=1; j<=i; j++){
			cout<<count<<"\t";
			count++;
		}
		cout<<endl;
	}
}

void pattern10(){
	/*
		1
		2       1
		3       2       1
		4       3       2       1
		5       4       3       2       1
	*/
	int N = 5;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=i; j++){
			cout<<i-j+1<<"\t";
		}
		cout<<endl;
	}
}

void pattern11(){
	/*
		AAA
		BBB
		CCC
	*/
	int N = 3;
	char ch = 'A';
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout<<ch;
		}
		cout<<endl;
		ch++;
	}
}

void pattern12(){
	/*
		ABC
		ABC
		ABC
	*/
	int N = 3;
	for(int i=0; i<N; i++){
		char ch = 'A';
		for(int j=0; j<N; j++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
}

void pattern13(){
	/*
		ABC
		DEF
		GHI
	*/
	int N = 3;
	char ch = 'A';
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
}

void pattern14(){
	/*
		ABC
		BCD
		CDE
	*/
	int N = 3;
	for(int i=0; i<N; i++){
		char ch = 'A'+i;
		for(int j=0; j<N; j++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
}

void pattern15(){
	/*
		A
		BB
		CCC
	*/
	int N = 3;
	char ch = 'A';
	for(int i=0; i<N; i++){
		for(int j=0; j<=i; j++){
			cout<<ch;
		}
		cout<<endl;
		ch++;
	}
}

void pattern16(){
	/*
		ABC
		DEF
		GHI
	*/
	int N = 3;
	char ch = 'A';
	for(int i=0; i<N; i++){
		for(int j=0; j<=i; j++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
}

void pattern17(){
	/*
		A
		B       C
		C       D       E
		D       E       F       G
		E       F       G       H       I
	*/
	int N = 5;
	for(int i=0; i<N; i++){
		char ch = 'A' + i;
		for(int j=0; j<=i; j++){
			cout<<ch<<"\t";
			ch++;
		}
		cout<<endl;
	}
}

void pattern18(){
	/*
		E
		D       E
		C       D       E
		B       C       D       E
		A       B       C       D       E
	*/
	int N = 5;
	for(int i=N; i>0; i--){
		char ch = 'A' + i - 1;
		for(int j=N; j>=i; j--){
			cout<<ch<<"\t";
			ch++;
		}
		cout<<endl;
	}
}

void pattern19(){
	/*
		ABC
		BCD
		CDE
	*/
	int N = 3;
	for(int i=0; i<N; i++){
		char ch = 'A' + i;
		for(int j=0; j<N; j++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
}

void pattern20(){
	/*
		    *
		   **
		  ***
		 ****
		*****
	*/
	int N = 5;
	for(int i=0; i<N; i++){
		for(int space = N - i - 1; space>0; space--){
			cout<<" ";
		}
		for(int j=0; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern21(){
	/*
		*****
		****
		***
		**
		*
	*/
	int N = 5;
	for(int i=0; i<N; i++){
		for(int star = N - i; star>0; star--){
			cout<<"*";
		}
		for(int space=0; space<i; space++){
			cout<<" ";
		}
		cout<<endl;
	}
}

void pattern22(){
	/*
		*****
		 ****
		  ***
		   **
		    *
	*/
	int N = 5;
	for(int i=0; i<N; i++){
		for(int space=0; space<i; space++){
			cout<<" ";
		}
		for(int star = N - i; star>0; star--){
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern23(){
	/*
		11111
		 2222
		  333
		   44
		    5
	*/
	int N = 5;
	for(int i=0; i<N; i++){
		for(int space=0; space<i; space++){
			cout<<" ";
		}
		for(int star = N - i; star>0; star--){
			cout<<i+1;
		}
		cout<<endl;
	}
}

void pattern24(){
	/*
		    1
		   22
		  333
		 4444
		55555
	*/
	int N = 5;
	for(int i=0; i<N; i++){
		for(int space = N - i - 1; space>0; space--){
			cout<<" ";
		}
		for(int j=0; j<=i; j++){
			cout<<i+1;
		}
		cout<<endl;
	}
}

void pattern25(){
	/*
		12345
		 2345
		  345
		   45
		    5
	*/
	int N = 5;
	for(int i=0; i<N; i++){
		for(int space=0; space<i; space++){
			cout<<" ";
		}
		int out = i+1;
		for(int star = N - i; star>0; star--){
			cout<<out;
			out++;
		}
		cout<<endl;
	}
}

void pattern26(){
	/*
		                        1
		                2       3
		        4       5       6
		7       8       9       10
	*/
	int N = 4;
	int count = 1;
	for(int i=0; i<N; i++){
		for(int space = N - i - 1; space>0; space--){
			cout<<"\t";
		}
		for(int j=0; j<=i; j++){
			cout<<count<<"\t";
			count++;
		}
		cout<<endl;
	}
}

void pattern27(){
	/*
		   1
		  121
		 12321
		1234321
	*/
	int N = 4;
	for(int row=1; row<=N; row++){
		//spaces
		for(int space=N-row; space>0; space--){
			cout<<" ";
		}
		//start triangle
		for(int start=1; start<=row-1; start++){
			cout<<start;
		}
		//end triangle
		for(int end=row; end>=1; end--){
			cout<<end;
		}
		cout<<endl;
	}
}

void pattern28(){
	/*
		1234554321
		1234**4321
		123****321
		12******21
		1********1
	*/
	int N = 5;
	for(int row=1; row<=N; row++){
		for(int i=1; i<=N-row+1; i++){
			cout<<i;
		}
		for(int i=N; i>=N-row+2; i--){
			cout<<"**";
		}
		for(int i=N-row+1; i>=1; i--){
			cout<<i;
		}
		cout<<endl;
	}
}

#include <iostream>

using namespace std;

void ifElseCondition();
void inputExample();
void aToZExample();
void whileLoop();
void sumOfEvenNumbers();
void FahrenheitToCelsius();
void primeNumber();

int main(){
//	ifElseCondition();
//	inputExample();
//	aToZExample();
//	whileLoop();
//	sumOfEvenNumbers();
//	FahrenheitToCelsius();
	primeNumber();
}

void ifElseCondition(){
	int price = 20;
	
	if(price<20){
		cout<<"Price Less Than 20"<<endl;
	} else{
		cout<<"Price Greater Than OR Equal To 20"<<endl;
	}
	
	if(price==20){
		cout<<"price is 20"<<endl;
	}else if(price<20){
		cout<<"price < 20"<<endl;
	}else{
		cout<<"price > 20"<<endl;
	}
}

void inputExample(){
	int a, b;
	cout<<"Enter value is a and b : ";
	cin>>a>>b;
	cout<<"Value of a and b is "<<a<<" and "<<b<<endl;
}

void aToZExample(){
	char ch;
	cout<<"Enter Character : ";
	cin>>ch;
	int ascii = ch;
	if(ascii>='a' && ascii<='z'){
		cout<<"Character lies between 'a' and 'z'";
	}else if(ascii>='A' && ascii<='Z'){
		cout<<"Character lies between 'A' and 'Z'";
	}else if(ascii>='0' && ascii<='9'){
		cout<<"Character lies between '0' and '9'";
	}else{
		cout<<"N/A";
	}
}

void whileLoop(){
	cout<<"While Loop Example"<<endl;
	int i=1;
	int sum = 0;
	while(i<=10){
		cout<<i<<" ";
		sum+=i;
		
		i++;
	}
	cout<<endl;
	cout<<"SUM of Ist 10 digits is "<<sum<<endl;
	//sum = (n/2)*(Ist+Last)
	cout<<"SUM of Ist 10 digits is "<<(10/2)*(1+10)<<endl;
	
	
}

void sumOfEvenNumbers(){
	int i=1;
	int sum = 0;
	while(i<=10){
		if(i%2==0)
			sum+=i;
		i++;
	}
	
	cout<<"SUM of Even Numbers is "<<sum<<endl;
}

void FahrenheitToCelsius(){
	double F;
	cout<<"Enter Fahrenheit : ";
	cin>>F;
	
	float C = ((F-32)*5)/9;
	
	cout<<"Celsius : "<<C;
}

void primeNumber(){
	for(int i=2; i<10; i++){
		bool flag = true;
		for(int j=2; j<=(i/2); j++){
			if(i%j==0){
				flag = false;
				break;
			}
		}
		if(flag){
			cout<<i<<" ";
		}
	}
}

#include<iostream>
using namespace std;


int fibo(int n){
 if(n<=0){
	return 0;
 }
 else if(n==1){
	return 1;
 }
 int a = 0;
 int b = 1;
 int c;

//calculate Fibonacci

for(int i=2; i<=n; ++i){
c = a+b;
a=b;
b=c;
}


return b;

}

int main(){
 int n;
 cout<<"Enter the position n: ";
 cin>>n;

 int nthFibo = fibo(n);
 cout<<"The " << n << "-th Fibonacci number is : " <<nthFibo<< endl;
 return 0;

}
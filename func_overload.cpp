// function overloading 
#include<iostream>
using namespace std;
int fun(int a, int b){
	return a+b;
}

int fun(int a, int b, int c){
	return a+b-c;
}

int fun(int a){
	x = a;
	return x;
}

int main(){
	void fun(20);
	void fun(30,20,10);
	void fun(10,20);
	return 0;
}

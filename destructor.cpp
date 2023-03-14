// destructor 
#include<iostream>
using namespace std;
class box{
	public:
		
	~box(){
		cout<<"This is an destructor\n";
	}
	
	box(){
		cout<<"This is an constructor\n";
	}
};
int main(){
	box obj;
}

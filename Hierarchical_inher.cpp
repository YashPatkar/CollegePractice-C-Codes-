// Hierarchical inheritance
#include<iostream>
using namespace std;
class first_class{
	public:
		first_class(){
		cout<<"this is from first class"<<endl;
		}
};

class second_class:public first_class{};

class third_class:public first_class{};

int main(){
	second_class obj1;
	third_class obj2;
	return 0;
}
	
	
	
	
	
	
	
	


// multilevel inheritance
#include<iostream>
using namespace std;
class first_class{
	public:
		first_class(){
		cout<<"this is from first class"<<endl;
		}
};
class second_class:public first_class{
		public:
		second_class(){
		cout<<"this is from second class"<<endl;
		}
};
class third_class:public second_class{
		public:
		third_class(){
		cout<<"this is from third class"<<endl;
		}
};
int main(){
	third_class obj;
	return 0;
}
	
	
	
	
	
	
	
	


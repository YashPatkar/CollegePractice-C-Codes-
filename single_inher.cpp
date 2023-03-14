// single inheritance
#include<iostream>
using namespace std;
class parent_class{
	public:
		parent_class(){
		cout<<"this from parent class"<<endl;
		}
};
class child_class:public parent_class{
		public:
		child_class(){
		cout<<"this from child class"<<endl;
		}
};
int main(){
	child_class obj;
}

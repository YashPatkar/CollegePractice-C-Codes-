//virtual base class
#include <iostream>
using namespace std;
class demo1{
	public:
		void fun(){
			cout<<"this an \"fun\" function from class demo1\n";
			}
};

class demo2:public virtual demo1{
};

class demo3:virtual public demo1{
};

class demo4:public demo2, demo3{
};

int main(){
	demo1 obj;
	obj.fun();
}



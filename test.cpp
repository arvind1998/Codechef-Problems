#include<iostream>
#include<string>
using namespace std;

class myClass
{
	
	public:
		myClass(string z){
			setname(z);
		}	
		void setname(string x){
			name = x;
			
		}
		string getname(){
			return name;
		}
	private:
		string name;
};
int main()
{
	myClass bo1("ARVIND");
	myClass bo2("RAMADURAI");
	cout<<bo1.getname()<<endl;	
	cout<<bo2.getname()<<endl;
	return 0;
}

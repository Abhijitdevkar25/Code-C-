#include<iostream>
using namespace std;

class temp{
	int x;
	public:
		temp add(temp& a)
		{
			temp t3;
			t3.x=a.x+this->x;
			return t3;
		}
		void get()
		{
			cout<<"Enter numbers: "<<endl;
			cin>>this->x;
		}
		void show()
		{
			cout<<"Addition is: "<<x<<endl;
		}
};

int main()
{
	temp t1, t2;
	t1.get();
	t2.get();
	temp t4= t1.add(t2);
	t4.show();
}

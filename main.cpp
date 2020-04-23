#include <iostream>
using namespace std;

class c;
typedef int (c::* c_member_function_pointer)(size_t x);

class c
{
public:
	void proceed(void)
	{
		(this->*(this->ptr))(12345);
	}

protected:
	int f(size_t x = 1)
	{
		cout << x << endl;
		return 1;
	}

	c_member_function_pointer ptr = &c::f;
	bool b;
};

int main(void)
{
	c c_instance;
	c_instance.proceed();

	return 0;
}
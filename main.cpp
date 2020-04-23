#include <iostream>
using namespace std;

class c;
typedef int (c::* c_member_function_pointer)(void);

class c
{
public:
	void proceed(void)
	{
		if(ptr != 0)
			(this->*(this->ptr))();
	}

protected:
	int f(void)
	{
		cout << batch_size << endl;
		return 1;
	}

	c_member_function_pointer ptr = &c::f;
	size_t batch_size = 10;
};

int main(void)
{
	c c_instance;
	c_instance.proceed();

	return 0;
}
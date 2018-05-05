#include <iostream>
using namespace std;

class B
{
	private:
		int *arr;
	public:
		B(int n) : arr{new int[n]{}} {}
		int& operator[](int index);
};

int& B::operator[](int index)
{
	return arr[index];
}

int main(int argc, char** argv)
{
	B b{5};
	b[1] = 15;
	cout << b[1] << '\n';
	cin.get();
	cin.get();
}


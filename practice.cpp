#include <iostream>
using namespace std;

class FirstClass
{
	public:
		char name[30];
		int age;
	public:
		void getName();
		void getAge();
};
void FirstClass :: getName(void)
{
	cout << "Enter name";
	cin >> name;
}
void FirstClass :: getAge(void)
{
	cout << "Enter age";
	cin >> age;
}

int main()
{
	FirstClass *f = new FirstClass;
	f->getName();
	f->getAge();

	int *trial = new int(10);
	cout << "The trial value is " << *trial << "\n";

	delete(f);
	delete(trial);

	cout << "The name is " << f->name << "and the age is " << f->age << "\n";
	cout << "The value now is " << *trial << "\n";
}

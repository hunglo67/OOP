#include<iostream>

using namespace std;
class student
{
public:

	student() {
		cout << "Constructor" << endl;
	}
	~student() {
		cout << "Destructor";
	}
};
int main()
{
	student();
	return 0;
}

	 

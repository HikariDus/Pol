#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string shop[3]{ "name", "price", "count" };
	string list[4]{ "potato", "tomato", "apple", "fish"};
	int price[4]{ 14, 10, 7, 45 };
	int count[4]{ 20, 15, 25, 0 };
	int wallet = 91;

	//while (true) {
		cout << "your money = " << wallet << "\n";
		cout << "name\t" << "count\t" << "price\n";
		for (int i = 0; i < 3; i++)
		{
			cout << list[i] << "\t" << price[i] << "\t" << count[i] << "\n";
		}
		cout << "choose a product\n";
		cin >>
}
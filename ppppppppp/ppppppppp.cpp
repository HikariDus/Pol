#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string list[4]{ "potato", "tomato", "apple", "fish" };
	int price[4]{ 14, 10, 7, 45 };
	int count[4]{ 20, 15, 25, 0 };
	int wallet = 91;

	while (true)
	{
		cout << "Your money = " << wallet << "\n";
		cout << "name\t" << "count\t" << "price\n";

		for (int i = 0; i < 3; i++)
		{
			cout << list[i] << "\t" << count[i] << "\t" << price[i] << "\n";
		}
		cout << "choose product (or type 'exit')\n";
		string productname;
		cin >> productname;

		if (productname == "exit")
		{
			break;
		}
		int productindex = -1;
		for (int i = 0; i < 3; i++)
		{
			if (list[i] == productname)
			{
				productindex = i;
				break;
			}
		}
		if (productindex == -1)
		{
			cout << "Product not found. Try again\n";
			continue;
		}
		cout << "Enter quantity for purchase: ";
		int	quantity;
		cin >> quantity;

		if (quantity <= 0)
		{
			"Incorrect quantity\n";
			continue;
		}

		if (count[productindex] < quantity)
		{
			cout << "Not enough quantity for purchase\n";
			continue;
		}
		int totalPrice = price[productindex] * quantity;
		if (wallet < totalPrice)
		{
			cout << "Not enough money for purchase\n";
			continue;
		}
		count[productindex] -= quantity;
		wallet -= totalPrice;
		cout << "Purchase successful!\n";
	}	
	cout << "Thank you for purchase!\n Your money = " << wallet << "\n";
	return 0;
}


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string list[4]{ "potato", "tomato", "apple", "fish" };
//    int price[4]{ 14, 10, 7, 45 };
//    int count[4]{ 20, 15, 25, 0 };
//    int wallet = 91;
//
//    while (true) {
//        cout << "\nyour money = " << wallet << "\n";
//        cout << "name\t" << "count\t" << "price\n";
//
//        for (int i = 0; i < 3; i++) {
//            cout << list[i] << "\t" << count[i] << "\t" << price[i] << "\n";
//        }
//
//        cout << "choose product (or 'exit'): ";
//        string productName;
//        cin >> productName;
//
//        if (productName == "exit") {
//            break;
//        }
//
//        // Поиск продукта по названию
//        int productIndex = -1;
//        for (int i = 0; i < 3; i++) {
//            if (list[i] == productName) {
//                productIndex = i;
//                break;
//            }
//        }
//
//        if (productIndex == -1) {
//            cout << "product not found. try again.\n";
//            continue;
//        }
//
//        cout << "enter quantity for purchase: ";
//        int quantity;
//        cin >> quantity;
//
//        if (quantity <= 0) {
//            cout << "incorrect quantity.\n";
//            continue;
//        }
//
//        if (count[productIndex] < quantity) {
//            cout << "not enough quantity for purchase.\n";
//            continue;
//        }
//
//        int totalPrice = price[productIndex] * quantity;
//        if (wallet < totalPrice) {
//            cout << "not enough money.\n";
//            continue;
//        }
//
//        // Обновление данных
//        count[productIndex] -= quantity;
//        wallet -= totalPrice;
//
//        cout << "purchase succseful!\n";
//    }
//
//    cout << "thank you for purchase! your money: " << wallet << "\n";
//    return 0;
//}
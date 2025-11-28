#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

struct location {
	string name;
	string item;
};
struct items {
	string name;
	string description;
};
struct inventory {
	string name;
	int quantity;
};

vector <location> place;
vector <items> item;
vector <inventory> bag;
int main() {
	place.push_back ({ "hall", "letter"});
	place.push_back ({ "cabinet", "pen"});
	place.push_back({ "kitchen", "knife" });
	place.push_back({ "corridor", "empty box" });
	item.push_back({ "letter", "sealed letter, need something sharp to open it" });
	item.push_back({ "pen","just a pen" });
	item.push_back({ "knife","kitchen knife, can cut something" });
	item.push_back({ "empty box", "what you want to find in empty box?" });

	string move;
	int choise;
	while (true)
	{
		cout << "choose where to go\n";

		for (int i = 0; i < place.size(); i++) {
			cout << place[i].name << "\n";
		}
		cin >> move;


		for (int i = 0; i < place.size(); i++) {
			bool flag = false;

			if (place[i].name == move) {
				flag = true;
				cout << "you've entered" << "\t" << move << "\n";
				cout << "what you want to do?\n" << "1. search for items\n2. move to another room\n";

				cin >> choise;

				if (choise == 1) {
					if (place[i].item != "none")
						cout << "you've found a\t" << place[i].item << "\n";
					bag.push_back({ place[i].item, 1 });
					place[i].item = "none";
				}

				else if (place[i].item == "none") {
					cout << "there is nothing in this room\n";
					break;
				}
			}
			if (choise == 2) {
				break;
			}



			if (move == "bag") {
				cout << "your inventory\n";
				for (int i = 0; i < bag.size(); i++) {
					cout << bag[i].name << "\t" << bag[i].quantity << "\n";
				}
				break;
			}


			if (i == place.size() - 1 && !flag && move != "bag")
			{
				cout << "you don't know such place\n";
				flag = false;
				break;
			}

		}

	}

}

























//struct product {
//	string name;
//	int count;
//	int price;
//};
//struct bas {
//	string name;
//	int count;
//	int price;
//};
//vector<product> shop;
//vector<bas> basket;
//int main()
//{
//	shop.push_back({ "apple", 5, 100 });
//	shop.push_back({ "cheese", 10, 75 });
//	shop.push_back({ "meat", 21, 500 });
//	int wallet = 2350;
//	string productuser;
//	int productCount;
//
//	while (true)
//	{
//		
//		cout << "\nYour money = " << wallet << "\n";
//		cout << "Select product for purchase or type 'bask' for your basket\n";
//		
//		
//		for (int i = 0; i < shop.size(); i++) {
//			cout << shop[i].name << "\t" << shop[i].count << "\t" << shop[i].price << "\n";
//
//		}
//		cin >> productuser;
//
//
//		for (int i = 0; i < shop.size(); i++)
//		{
//			bool flag = false;
//
//			if (shop[i].name == productuser)
//			{
//				flag = true;
//				cout << "Select quantity for purchase\n";
//				cin >> productCount;
//
//
//
//
//				if (shop[i].count >= productCount && wallet >= productCount * shop[i].price)
//				{
//					//cout << "YES quantity\n";
//					cout << "\nCHECK: \t " << productCount * shop[i].price << "\n";
//					shop[i].count -= productCount;
//					wallet -= productCount * shop[i].price;
//					basket.push_back({ productuser, productCount, shop[i].price });
//					
//				}
//				else
//				{
//					cout << "wrong quantity or NO MONEY\n " << productCount * shop[i].price << " > " << wallet << endl << shop[i].count << ">" << productCount << "\n";
//				}
//
//				break;
//			
//				
//				
//			}
//
//
//			if (i == shop.size() - 1 && !flag && productuser != "bask") {
//
//				cout << "Wrong product, try again\n";
//				flag = false;
//				break;
//			}
//
//				
//			
//		}
//
//			 if (productuser == "bask") {
//
//				cout << "your basket:\n";
//				for (int i = 0; i < basket.size(); i++) {
//					cout << basket[i].name << "\t" << basket[i].count << "\n";
//				}
//			 }
//
//
//	}
//
//
//}



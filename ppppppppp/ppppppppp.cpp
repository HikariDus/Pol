#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

    

    void dialog();







/// <summary>
/// /
/// </summary>


int main()
{
    std::string user;
    std::string comp;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        int t = rand() % 3;
        if (t == 1) {
            comp = "kam";
        }
        else if (t == 2) {
            comp = "scis";
        }
        else {
            comp = "pap";
        }

        std::cout << "choose kam, scis or pap\n";
        std::cin >> user;
        
        if (user ==  comp ) {
                std::cout << "tie\n";
                std::cout << comp;
        }
        else if (user == "kam" and comp == "csis" or user == "scis" and comp == "pap" or user == "pap" and comp == "kam") {

                std::cout << "win\n";
                std::cout << comp;
        }
        else {
                std::cout << "lose\n";
                std::cout << comp;

        }
              
    }
}
    
    
    
    
    
    
    
    




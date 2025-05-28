#include <iostream>
#include <string>

    std:: string user;

    void dialog();







void game() {

    std::cout << "choose kam, no or bum\n";
    std::string a;

    std::string r[3]{ "kam", "no", "bum" };
    for (int i = 1;i < 4;)
    {
        int t = rand() % 3;
        std::cin >> a;
        if (a == "no" && r[t] == "bum" || a == "kam" && r[t] == "no" || a == "bum" && r[t] == "kam") {
            std::cout << "you won\n";
            i++;
        }
        else if (a == r[t]) {
            std::cout << "tie\n";
        }
        else {
            std::cout << "you lose\n";
        }
        std::cout << "TEST \t " << t << "\n";
    }

}
/// <summary>
/// /
/// </summary>
void start() {

    std::cout << "Hi oleg, popy myl?\n";
    std::cin >> user;
   
        if( user == "yes") {
            std::cout << "Molodec\n";
        }
        else if (user == "no") {
            std::cout << "gryaznulya\n";
            dialog();
        }
        else {
            std::cout << "wrong input. write yes or no\n";
        }

}

void dialog() {

    std::cout << "MORNING: You are sosal?\n";

    std::cin >> user;

    if (user == "sosal?") {
        std::cout << "GOOOD JOB\n";

        game();

    }
    else {
        std::cout << "LOH\n";
    }

}

int main()
{
    srand(time(NULL));
    start();
    //game();
}


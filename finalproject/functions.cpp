#include "functions.h"
#include <iostream>
#include <string>
#include <Windows.h>

void mainMenu() {
    std::cout << "Welcome! Here are some useless tools and other miscellaneous demonstrations for you to try.\n\n";
    Sleep(2000);

    std::cout << "\033[34m1) A Barebones Homage to No, I'm Not a Human by Trioskaz\033[0m\n";
    std::cout << "\033[35m2) A stupidly basic exponent calculator that a child could code in Notepad++\033[0m\n";
    std::cout << "\033[31m3) BMI calculator (Wow, that's never been done before and totally isn't something you can just find on the Web.)\033[0m\n";

}
bool checkStatus(std::string playerAnswer) {

    // The game will first check the user input upon being asked "Are you alone?"

    std::cin >> playerAnswer;
    if (playerAnswer == "yes") {
        return true;
    }
    else if (playerAnswer == "no") {
        return false;
    }
}
bool checkGuestsInHouse(std::string guestsInHouse) {

    // If the player passes the first check, the second check will make sure that the player isn't "lying" to the Pale Visitor.

    std::cin >> guestsInHouse;
    if (guestsInHouse == "yes") {
        return true;
    }
    else if (guestsInHouse == "no") {
        return false;
    }
}
bool checkVisitorsInHouse(int humansInHouse) {

    // The player still has one more check to pass, which is to ensure that at least one of these guests are human.

    std::cin >> humansInHouse;
    if (humansInHouse > 0) {
        return true;
    }
    else {
        return false;
    }
}
void triggerEnding6() {
    std::cout << "This is the part where the Pale Visitor breaks into your house and kills you. (Ending 6)\n";
}
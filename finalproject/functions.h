#pragma once
#include <string>
#include <iostream>

void mainMenu();

bool checkStatus(std::string playerAnswer);

bool checkGuestsInHouse(std::string guestsInHouse);

bool checkVisitorsInHouse(int humansInHouse);

void triggerEnding6();
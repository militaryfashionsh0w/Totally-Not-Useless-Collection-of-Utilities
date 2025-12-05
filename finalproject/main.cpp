#include "functions.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <cmath>



int main() {
	mainMenu();
	int userSelection{};
	std::cin >> userSelection;

	if (userSelection == 1) {

		/* This is a demonstration of the Pale Visitor's "test" in No, I'm Not a Human.
		I am assuming that whoever is reading this doesn't care for the context or plot behind
		this particular point in the game that I am showcasing. When I was playing this game I noticed
		that the game essentially performs 3 checks when the Pale Visitor arrives at the player character's door.
		I was intrigued by this and wanted to re-create the Pale Visitor's "test" and showcase how these three checks work. */

		system("cls");
		std::cout << "\033[35mWelcome to my demonstration of a small segment of the game: \033[36mNo, I'm Not a Human \033[34m(Trioskaz).\033[0m\n";
		Sleep(3000);
		std::cout << "Demo beginning in 3...";
		Sleep(1000);
		system("cls");
		std::cout << "Demo beginning in 2...";
		Sleep(1000);
		system("cls");
		std::cout << "Demo beginning in 1...";
		Sleep(1000);
		system("cls");
		std::cout << "\033[31m\"Sooooooooo...\"\n";
		Sleep(2000);
		std::cout << "\"You alone?\" \033[0m(yes/no)\n";

		std::string playerAnswer;
		bool areYouAlone = checkStatus(playerAnswer);
		if (areYouAlone == true) {
			triggerEnding6();
			std::cout << "\033[31mWell, you invited him in...\033[0m\n";
		}
		else if (areYouAlone == false) {

			std::cout << "Does the player have guests in their house? (yes/no)\n";

			std::string guestsInHouse;
			bool areThereActuallyGuests = checkGuestsInHouse(guestsInHouse);
			if (areThereActuallyGuests == false) {
				triggerEnding6();
				std::cout << "\033[31mHe already knows the answer to the question. No point in lying to him.\033[0m\n";
			}
			else if (areThereActuallyGuests == true) {

				std::cout << "How many of these guests are human?\n";

				int humansInHouse{};
				bool humanGuests = checkVisitorsInHouse(humansInHouse);
				if (humanGuests == false) {
					triggerEnding6();
					std::cout << "Oops! All Visitors!\n";
				}
				else if (humanGuests == true) {
					std::cout << "\033[34m\"It's your lucky night.\"\033[0m\n(Player character survives and continues normal gameplay.)\n";
				}
			}

		}
		Sleep(3000);
		system("cls");
		mainMenu();
		std::cin >> userSelection;
	}

	if (userSelection == 2) {
		system("cls");
		float baseNumber{};
		float exponent{};

		while (true) {

			std::cout << "Enter your base number (can be an integer or decimal number). 0 to quit to main menu.\n";
			std::cin >> baseNumber;
			if (baseNumber == 0) {
				system("cls");
				break;
			}
				std::cout << "\nTo what power would you like to raise this number?\n";
				std::cin >> exponent;
				float solution = pow(baseNumber, exponent);
				std::cout << "\n" << baseNumber << "^" << exponent << " is " << solution << "\n";
				system("pause");
				system("cls");
		}
	}
	mainMenu();
	std::cin >> userSelection;

	if (userSelection == 3) {
		system("cls");
		int measurementSystem{};
		std::cout << "Select your measurement system:\n\n";
		std::cout << "1) Metric\n2) Imperial\n\n";
		std::cin >> measurementSystem;
		Sleep(1000);
		system("cls");
		if (measurementSystem == 1) {
			double weightKg{};
			double heightCm{};

			std::cout << "Enter your weight (kg).\n\n";
			std::cin >> weightKg;
			std::cout << "\nEnter your height (cm).\n\n";
			std::cin >> heightCm;
			double bmi = weightKg / pow(heightCm, 2);
			std::cout << "\n\nYour BMI is: " << bmi << "\n";
			if (bmi < 29.9 && bmi > 25.0) {
				std::cout << "This puts you in the \033[33mOverweight\033[0m category.\n";
			}
			else if (bmi < 25.0 && bmi > 18.5) {
				std::cout << "This puts you in the \033[32mNormal (Healthy Weight)\033[0m category.\n";
			}
			else if (bmi > 29.9) {
				std::cout << "This puts you in the \033[31mObese\033[0m category.\n";
			}
			else if (bmi < 18.5 && bmi > 16.0) {
				std::cout << "This puts you in the \033[33mUnderweight\033[0m category.\n";
			}
			else if (bmi < 16.0) {
				std::cout << "This puts you in the \033[31mSeverely Underweight\033[0m category.";
			}
		}
		else if (measurementSystem == 2) {
			double weightLbs{};
			double heightInches{};

			std::cout << "Enter your weight (lbs).\n\n";
			std::cin >> weightLbs;
			std::cout << "\nEnter your height (inches).\n\n";
			std::cin >> heightInches;
			double bmi = (703 * weightLbs) / pow(heightInches, 2);
			std::cout << "\n\nYour BMI is: " << bmi << "\n";
			if (bmi < 29.9 && bmi > 25.0) {
				std::cout << "This puts you in the \033[33mOverweight\033[0m category.\n";
			}
			else if (bmi < 25.0 && bmi > 18.5) {
				std::cout << "This puts you in the \033[32mNormal (Healthy Weight)\033[0m category.\n";
			}
			else if (bmi > 29.9) {
				std::cout << "This puts you in the \033[31mObese\033[0m category.\n";
			}
			else if (bmi < 18.5 && bmi > 16.0) {
				std::cout << "This puts you in the \033[33mUnderweight\033[0m category.\n";
			}
			else if (bmi < 16.0) {
				std::cout << "This puts you in the \033[31mSeverely Underweight\033[0m category.";
			}
		}
		else {
			std::cout << "Invalid input.\n";
		}

		Sleep(2000);
		system("cls");
		mainMenu();
		std::cin >> userSelection;
	}

}
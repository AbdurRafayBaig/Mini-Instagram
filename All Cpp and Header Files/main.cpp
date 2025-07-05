#include <iostream>
#include <string>
#include "instagram.h"
using namespace std;
int main()
{
	cout << "\t\t\t\t|---------------------------------------------------------|\n";
	cout << "\t\t\t\t|\t\tWelcome To Our Instagram                  |" << endl;
	cout << "\t\t\t\t|\t\tHere Are It's Some Designers -->          |" << endl;
	cout << "\t\t\t\t|\t\t1. Abdur Rafay Baig                       |" << endl;
	cout << "\t\t\t\t|\t\t2. Ammar Ahmad                            |" << endl;
	cout << "\t\t\t\t|\t\t3. Muhammad Amir                          |" << endl;
	cout << "\t\t\t\t|---------------------------------------------------------|" << endl;

    Instagram* instagram = new Instagram();
    instagram->showMenu();
    return 0;
}
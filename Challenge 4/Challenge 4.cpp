// Challenge 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;

    while (true)
    {
		//Checks for a valid input.

        cout << "Enter some text: ";

        if (!getline(cin, text))
        {
            break;
        }

       
        if (text.empty())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cerr << "[!] ERROR: Invalid input, nothing entered. Try again." << endl;
            continue;
        }

        // Creates the top border

        for (int i = 0; i < text.length() * 4 + 1; i++)
        {
            if (i % 4 == 0)
            {
                cout << "+";
            }
            else if (i % 2 == 1)
            {
                cout << "=";
            }
            else
            {
                cout << "-";
            }
        }

        cout << endl;

        // Generate the tabulated text
        for (char character : text)
        {
            cout << "| " << character << " ";
        }

        cout << "|" << endl;

		// Creates the bottom border
        for (int i = 0; i < text.length() * 4 + 1; i++)
        {
            if (i % 4 == 0)
            {
                cout << "+";
            }
            else if (i % 2 == 1)
            {
                cout << "=";
            }
            else
            {
                cout << "-";
            }
        }

        cout << endl;
    }

    return 0;
}
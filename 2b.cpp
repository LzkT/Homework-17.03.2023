#include <iostream>
#include <fstream> 
#include <windows.h>
#include <cmath>
using namespace std;

static int arr[33];

int function(char ch)
{
    if (((int)ch >= -64) && ((int)ch <= -1))
    {
        if (((int)ch >= -64) && ((int)ch <= -58))
        {
            cout << char(64 + (int(ch) - 7));
        }
        else
        {
            cout << char(int(ch) - 7);
        };
    }
    else
    {
        cout << ch;
    };

    return 0;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream f;
    f.open("C:\\Users\\Елизавета\\source\\repos\\2b\\tt1.txt");

    if (!f.is_open())
    {
        cout << "Треш";
    };

    char ch;

    while (f.get(ch))
    {
        function(ch);
    };
    f.close();
    cout << endl << endl << endl;
};

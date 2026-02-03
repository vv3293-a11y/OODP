#include <iostream>
#include <string>
using namespace std;

int main()
{
    string colors[] = {"Red", "Yellow", "Black"};

    for (string col : colors)
    {
        cout << col << endl;
    }

    return 0;
}

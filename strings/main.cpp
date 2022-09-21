#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Strings" << endl;

    string input = "";
    string name = "James";
    string surname = "Baxter";

    cout << name << " " << surname << endl;

    getline(cin,input);
    cout << input << endl;

    return 0;
}

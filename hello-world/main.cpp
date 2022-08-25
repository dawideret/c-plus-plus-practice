#include <iostream>

using namespace std;

int main() {

    bool a = true;
    bool b = false;

    char c = 'A';

    int d = 1000000000;
    short int e = 10000;
    long int f = 1000000000;
    double g = 10.101;
    float h = 10.101;

    cout << d + f * e / h / g / (999 * 999) << std::endl; // just trying out some random math.

    typedef int awesomeShortcutNameForIntegers;

    awesomeShortcutNameForIntegers i = 100;

    enum testing_enumerators {zero, one, two, three, four, five, six, seven, eight, nine} my_enum, number;
    my_enum = four; // value is set to '4' as the index of 'four' is '4'.

    cout << my_enum << std::endl;


    cout << "C++ is Awesome " << "\n" << a << "\n" << b << "\n"
         << c << "\n" << d << "\n" << e << "\n" << f << "\n"
         << g << "\n" << h << std::endl;

    return 0;
}

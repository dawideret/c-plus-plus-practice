#include <iostream>

using namespace std;

int main() {
    int nums[3];
    nums[0] = 3;
    nums[1] = 7;
    nums[2] = 11;

    int single_l_nums[5] = {31, 59, 591, 1824, 68001};

    int simplest_nums[] = {1, 2, 3, 5, 7};

    for(int i=0;i<3;i++) {
        cout << nums[i] << endl;
    }

    cout << "\n" << endl;

    for(int i=0;i<5;i++) {
        cout << single_l_nums[i] << endl;
    }

    cout << "\n" << endl;

    for(int i=0;i<5;i++) {
        cout << simplest_nums[i] << endl;
    }

    char letters[] = {'a','b','c','d','e'};

    return 0;
}

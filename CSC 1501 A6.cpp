

#include <iostream>
using std::cout; using std::cin; using std::endl;
int main()
{
    int sum = 0, count = 0;
    int input;
    cin >> input;
    for (int i = 1; i <= input; i++) {
        sum += i;
        cout << sum << " + ";
        count++;
    }
    cout << "\nLooping operations: " << count << endl;
    cout << endl;
    cout << (input * (input + 1)) / 2 << endl;
    cout << "Formula operations: 3" << endl;
}


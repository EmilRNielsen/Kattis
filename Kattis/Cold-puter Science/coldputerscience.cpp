#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cases, temperature, negatives = 0;
    cin >> cases;
    while (cin >> temperature)
        if (temperature < 0)
            negatives++;
    cout << negatives;
    return 0;
}

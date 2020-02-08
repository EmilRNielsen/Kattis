#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cases, current;
    cin >> cases;
    while (cin >> current)
        current % 2 ? cout << current << " is odd" << endl : cout << current << " is even" << endl;
    return 0;
}

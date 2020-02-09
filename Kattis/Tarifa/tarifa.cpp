#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, n, p, reserve = 0;
    cin >> x >> n;
    while (cin >> p) {
        reserve += x - p;
    }
    cout << reserve + x;
    return 0;
}

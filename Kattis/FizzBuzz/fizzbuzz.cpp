#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y, n;
    cin >> x >> y >> n;
    for (int i = 1; i < n + 1; i++) {
        int xdiv = i % x, ydiv = i % y;
        if (!xdiv && !ydiv)
            cout << "FizzBuzz";
        else if (!xdiv)
            cout << "Fizz";
        else if(!ydiv)
            cout << "Buzz";
        else      
            cout << i;
        cout << endl;
    }

    return 0;
}

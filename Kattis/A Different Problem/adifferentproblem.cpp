#include <iostream>
#include <cstdlib>
using namespace std;

long long diff(long long first, long long second) {
    return abs(first - second);
}

int main() {
    long long first, second;
    while (cin >> first >> second) {
        cout << diff(first,second) << endl;
    }
    
    return 0;
}

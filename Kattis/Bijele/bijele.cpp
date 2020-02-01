#include <iostream>
using namespace std;

int main() {
    int p[] =  {1,1,2,2,2,8};
    int i;
    int x;
    for(i = 0; i < 6; i++) {
        cin >> x;
        cout << p[i] - x << " ";
    }
    return 0;
}
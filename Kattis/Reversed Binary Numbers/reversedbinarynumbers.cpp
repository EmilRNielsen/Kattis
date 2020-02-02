#include <algorithm>
#include <iostream>
#include <bitset>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string binary = bitset<32>(n).to_string();
    int i = 0;
    while (binary.at(i) != '1') i++;
    string trimmed = binary.substr(i);
    reverse(trimmed.begin(),trimmed.end());
    unsigned long decimal = bitset<32>(trimmed).to_ulong();
    cout << decimal;
    return 0;
}

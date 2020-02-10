#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n, power, sum = 0;
    string p;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> p;
        power = stoi(p.substr(p.length()-1,1));
        sum += pow(stoi(p.substr(0,p.length()-1)),power);
    }
    cout << sum;
    return 0;
}

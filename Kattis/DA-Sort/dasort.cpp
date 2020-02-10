#include <iostream>
using namespace std;

int main() {
    int datasets;
    cin >> datasets;
    int currentDataset, length;
    for(int i = 1; i < datasets + 1; i++) {
        cin >> currentDataset;
        cin >> length;
        int j = 0;
        int current;
        cin >> current;
        int temp;
        int deletesNeeded;
        while(j < length) {
            cin >> temp;
            if(temp >= current) {
                current = temp;
                j++;
            } else if
        }
    }
    return 0;
}

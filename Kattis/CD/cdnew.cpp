#include <stdio.h>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    while (true) {
        int i,j,temp;
        scanf("%d %d",&n,&m);
        if(n == 0 || m == 0) {
            return 0;
        }
        list<int> jackCDs;;
        for (int i = 0; i < n; i++) {
            scanf("%d",&temp);
            jackCDs.push_back(temp);
        }
        int both = 0;
        for (int i = 0; i < m; i++) {
            scanf("%d",&temp);
            if(jackCDs.empty())
                continue;
            while (true) { 
                if(jackCDs.empty())
                    break;
                if (jackCDs.front() == temp) {
                    both++;
                    jackCDs.pop_front();
                    break;
                } else if(jackCDs.front() < temp) {
                    jackCDs.pop_front();
                } else {
                    break; 
                }
            }
        }
        printf("%d\n",both);
        
    }
    return 0;
}



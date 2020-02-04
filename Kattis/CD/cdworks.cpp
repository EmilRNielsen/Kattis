#include <stdio.h>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    int n, m; 
    while (true) {
        int temp;
        scanf("%d %d",&n,&m);
        if(n == 0 || m == 0) {
            return 0;
        }
        list<int> jackCDs, jillCDs, both;
        for (int i = 0; i < n; i++) {
            scanf("%d",&temp);
            jackCDs.push_back(temp);
        }
        for (int i = 0; i < m; i++) {
            scanf("%d",&temp);
            jillCDs.push_back(temp);
        }

        set_intersection(jackCDs.begin(),jackCDs.end(),jillCDs.begin(),jillCDs.end(),back_inserter(both));
        printf("%d\n",both.size());
    }
    
    return 0;
}

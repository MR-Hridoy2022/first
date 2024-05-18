#include <stdio.h>
#include <string.h>

int maxPrefixLength(char p[], char q[], int e, int d) {
    int last_occurrence[2] = {-1, -1}; 
    int k = 0; 
    for (int i = 0; i < d; i++) {
        if (q[i] == '0' || q[i] == '1') {
            if (last_occurrence[q[i] - '0'] < i && k < e && p[k] == q[i]) {
                k++; 
            }
        }
    }
    
    return k;
}

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        int e, d;
        scanf("%d %d", &e, &d); 
        
        char p[e+1], q[d+1];
        scanf("%s", p); 
        scanf("%s", q); 
        
        int result = maxPrefixLength(p, q, e, d); 
        
        printf("%d\n", result); 
    }

    return 0;
}

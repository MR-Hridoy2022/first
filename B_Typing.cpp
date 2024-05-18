#include <stdio.h>
#include <string.h>

void findCorrectPositions(const char* S, const char* T) {
    int sPtr = 0, tPtr = 0;

    while (S[sPtr] != '\0' && T[tPtr] != '\0') {
        if (S[sPtr] == T[tPtr]) {
            printf("%d ", tPtr + 1); // Position is 1-indexed
            sPtr++;
        }
        tPtr++;
    }
}

int main() {
    char S[200001], T[200001];
    scanf("%s %s", S, T);

    findCorrectPositions(S, T);

    printf("\n");

    return 0;
}

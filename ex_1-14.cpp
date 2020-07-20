#include <stdio.h>

#define MAX_NUMBER_OF_CHARACTERS 127

int main() {
    int c;
    int asciTable[MAX_NUMBER_OF_CHARACTERS];
    
    for (int i = 0; i <= MAX_NUMBER_OF_CHARACTERS; ++i) {
        asciTable[i] = 0;
    }
    
    while((c = getchar()) != EOF) {
        if(c != '\n' || c != '\t' || c != 32) {
            ++asciTable[c];
        }
    }
    
    for (int i = 0; i <= MAX_NUMBER_OF_CHARACTERS; ++i) {
        if(asciTable[i] > 0) {
            putchar(i);
            putchar(' ');
            
            for(int j = 0; j <= asciTable[i]; ++j) {
                putchar('*');
            }
            putchar('\n');
        }
    }
}
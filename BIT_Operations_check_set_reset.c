#include <stdio.h>

#define CNUM 6  // number input to check
#define CBIT 0  // checking bit number - which bit or how many bit

#define SNUM 2  // number input to set
#define SBIT 1  // setting bit number - which bit or how many bit
#define SPOS 0  // setting bit position

#define RNUM 2  // number input to clear or reset
#define RBIT 15 // clearing or resetting bit number - which bit and how many bit
#define RPOS 0  // clearing or resetting bit position

// Printing binary format of a given number
void printBinary(int n)
{
    for (int i = sizeof(n)*2 - 1; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n\n");
}

void main(void)
{
    int num;
    printBinary(CNUM);
    printBinary(SNUM);
    printBinary(RNUM);

    printf("Bit Checking\n");
    // To check particular Bit is set or reset - use (& 1)
    printf("%d\n\n",((CNUM >> CBIT) & 1));

    printf("Bit Setting\n");
    // To set particular Bit - use |
    num = SNUM;
    num |= (SBIT << SPOS);
    printBinary(num);

    printf("Bit Resetting\n");
    // To reset particular Bit - use &, ~
    num = RNUM;
    num &= ~(RBIT << RPOS);
    printBinary(num);
}

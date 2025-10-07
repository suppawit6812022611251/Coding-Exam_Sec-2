#include <stdio.h>
void inputdata(){
    float aa,bb;
    char ch[2],ac[2];

    printf("***Transaction Fee Calculator***\n");
    
    printf("Enter number transactions (3-12): ");
    scanf("%f", &aa);
    

    printf("Enter Channel Type for TXN 1(O,B,A): ");
    scanf("%c", &ch);

    
    printf("\n...(input continues)...\n");

    printf("Enter Channel Type for TXN 5(O,B,A): ");
    scanf("%c", &ac);
    
    printf("Enter Total Transaction Value: ");
    scanf("%f", &bb);

    printf("\n---Fee Summary---\n");
}

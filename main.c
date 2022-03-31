#include <stdio.h>
#include <stdlib.h>
void Edit(int *M)
{
    (*M)++;
}

int main() {
    int X;
    printf("Please Enter The Number X \n ");
    scanf("%d", &X);
    printf(" The Number Before Calling \n %d", X);
    Edit(&X);
    printf(" \n The Number After Calling \n %d", X);
    return 0;
}

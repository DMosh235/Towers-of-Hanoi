#include <stdio.h>
#include <stdlib.h>

int towers(int start, int end, int n);

int main()
{
    int numDisks = 0;
    printf("How many disks? ");
    scanf("%d", &numDisks);

    towers(2, 3, numDisks);

    return 0;

}


int towers(int start, int end, int n)
{
    if(n == 0) return;

    towers(start, 6-start-end, n - 1);
    printf("Move disk %d from tower %d to tower %d \n", n, start, end);
    towers(6-start-end, end, n-1);

}

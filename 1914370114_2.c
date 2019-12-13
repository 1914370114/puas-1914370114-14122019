#include <stdio.h>
int main()
{
    int c = 4;
    for (int i=1;i<=c;i++){
        for (int j=1;j<=i;j++){printf("*");}
    printf("\n");}
    for (int i=1;i<=c;i++){
         for (int j=2;j<=i;j++){printf("*");}
    printf("\n");}
    for (int i=1;i<=c;i++){
         for (int j=3;j<=i;j++){printf("*");}
    printf("\n");}
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    printf("Enter a number of s: ");
    scanf("%d",&s);
    sum(s);
    return 0;
}

void sum(int s){
int sum=0;

for (int i=0;i<s;i++){
    sum+=i;

}

printf("Sum of numbers up to s: %d ",sum);
}

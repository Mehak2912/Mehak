#print the sum of first n numbers using do while loop

#include <stdio.h>
int main(){
    int i=1;
    int n;
    int sum =0;
    printf("enter a number:");
    scanf("%d",&n);
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    printf("%d\n",sum);
return 0;    
}

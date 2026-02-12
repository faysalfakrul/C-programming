#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int j,i,sum=0;
    for( i=1, j=n; i<=n && j>=1; i++,j--){
        sum=sum+i;
         printf("%d\n", j);
    }
    printf("The sum is: %d\n ", sum);

  //  for(i=n;i>=1;i--){
 //       printf("%d\n", i);
  //  }
return 0;
}

#include<stdio.h>
int main() {
  int r,c=1,s,i,j,n;
  printf("Enter number of rows : ");
  scanf("%d",&r);
  for(i=0;i<r;i++){
    for(s=r;s>i;s--)
    printf(" ");
    n=1;
    for(j=0;j<=i;j++) {
       printf("%d ",n);
       n=n*(i-j)/(j+1);
    }
    printf("\n");
  }
}

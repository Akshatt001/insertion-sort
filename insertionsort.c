#include<stdio.h>
int main(){
int i, j, count, t, n[25];
printf("Size of array: ");
scanf("%d",&count);
printf("Enter %d elements: ", count);
// This loop would store the input ns in array
for(i=0;i<count;i++)
scanf("%d",&n[i]);
// Implementation of insertion sort algorithm
for(i=1;i<count;i++)
{
t=n[i];
j=i-1;
while((t<n[j])&&(j>=0))
{
n[j+1]=n[j];
j=j-1;
}
n[j+1]=t;
}
printf("Sorted array: ");
for(i=0;i<count;i++)
printf(" %d",n[i]);
return 0;
}
#include<stdio.h>




binsearch(int x, int y[], int n){

int start,end,mid,counter;

start=0;
end=n-1;
mid=n/2;


while((y[mid]!=x) && start<=end){

mid=(end+start)/2;
(x<y[mid])?(end=mid-1):(start=mid+1);



}

if(y[mid]==x)
return mid;
else 
return -1;



}

main()
{


int sorted_arr[]={2,3,5,6,7,8,9,12,15,22};



printf("Element found in location:%d\n\n",binsearch(3,sorted_arr,10));



}

#include<stdio.h>




binsearch(int x, int y[], int n){

int start,end,mid;

start=0;
end=n-1;
mid=n/2;

while(start<=end){


if(x<y[mid])
end=mid-1;
else if(x>y[mid])
start=mid+1;
else
return mid;
mid=(end+start)/2;


}



}

main()
{


int sorted_arr[]={2,3,5,6,7,8,9,12,15,22};



printf("Element found in location:%d\n\n",binsearch(12,sorted_arr,10));



}

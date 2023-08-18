#include<stdio.h>
int binarysearch(int a[],int key,int lb,int ub)
{
    
    if(lb<=ub)
    {
    int middle=(lb+ub)/2;
    if(a[middle]==key)
    {
        return middle;
    }
    else  if(a[middle]>key)
    {
        ub=middle-1;
    }
    else 
    {
        lb=middle+1;
    }
    binarysearch(a,key,lb,ub);
}
else
    return -1;
}
void main()
{
   int a[]={10,20,30,40,50,60,70,80};
   int lb,ub;
   int size=sizeof(a)/sizeof(a[0]),key=80;
   int index=binarysearch(a,key,0,size-1);
   if(index==-1)
   printf("%d is not present",key);
   else
   {
      printf("%d is found at %d",key,index+1);
   }
}


#include <iostream>
#include "array_tools.h"


int reverse_array(int a[],int size)
{
  int temp;
 for (int x=0,y=size-1; y>size/2 ;x++,y--)
  {
    temp = a[y];
    a[y]=a[x];
    a[x]=temp;
  }
  return 0;
}

int rotate_array(int a[],int size)
{
  int step;
  char choice;
  std::cout<<"\nEnter steps to rotate array\n";
  std::cin>>step;
  if (step>size)
  {
   std::cout<<"Raotaion can't be grater than array";
   return 0;
  }
  std::cout<<"\nPress 'R' to Right shift and 'L' for left shift\n";
  std::cin>>choice;
  if(choice=='R' || choice=='r')
  {
    int aray[step];
    for(int x=0;x<step;x++)
    {
      aray[x]=a[x];
    }
    for(int x=step,y=0;x<size;x++,y++)
    {
      a[y]=a[x];
    }
    for(int x=size-1,y=step-1;   y>=0   ;x--,y--)
    {
      a[x]=aray[y];
    }
  }
}

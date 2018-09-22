#include <iostream>
#include "array_tools.h"


int reverse_array(int a[],int size)
{
  int temp;
 for (int x=0,y=size-1; x!=y ;x++,y--)
  {
    temp = a[y];
    a[y]=a[x];
    a[x]=temp;
  }
  return 0;
}

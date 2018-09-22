#include<iostream>
#include"array_tools.h"


int output_array(int a[],int size)
{
  int st;
  for (st = 0; st < size; st++)
  {
    std::cout << a[st] << '\n';
  }
}

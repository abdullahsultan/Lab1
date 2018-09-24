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
      aray[x]=a[x];
    for(int x=step,y=0;x<size;x++,y++)
      a[y]=a[x];
    for(int x=size-1,y=step-1;   y>=0   ;x--,y--)
      a[x]=aray[y];
  }
  else if (choice=='L' || choice=='l')
  {
    int aray[step];
    for(int x=size-1,y=step-1;y>=0;x--,y--)
     aray[y]=a[x];
    for(int x=(size-step)-1,y=size-1;  x>=0  ;x--,y--)
     a[y]=a[x];
    for(int x=0; x<step ;x++)
     a[x]=aray[x];
  }
  else
  std::cout<<"\nInvalid choice";
}


int sort_array(int a[],int size)
{
  int temp;
  for(int x=0;x<size;x++)
  {
    for(int y=x+1;y<size;y++)
    {
      if(a[x]>a[y])
      {temp=a[x];
      a[x]=a[y];
      a[y]=temp;}
    }
  }

}

int search_array(int a[],int size,int item,int keeper)
{
   if(a[keeper]==item)
   std::cout<<"\nYour searched item is at "<< keeper<<"\n";
   else if(keeper>size)
   {std::cout << "\nYour searched item not found" << '\n';
   return 0;}

   else
   {keeper++;
   search_array(a,size,item,keeper);}
}

int sorted_search_array(int a[],int size,int key)
{
  int fst,lst;
  while(true)
  {
      if(a[(fst+lst)/2]==key)
      {
          std::cout<<"Searched key is at"<<(fst+lst)/2;
          break;
      }
      if(a[size-1]==key)

      {
          std::cout<<"Key is at "<<size-1<<std::endl;
          break;
      }

      if(key > a[(fst+lst)/2])
          fst=(fst+lst)/2;
      if(key < a[(fst+lst)/2])
          lst=(fst+lst)/2;
      if((fst+lst)/2==fst)
      {
          std::cout<<"Key not found \n";
          break;
      }
  }
}

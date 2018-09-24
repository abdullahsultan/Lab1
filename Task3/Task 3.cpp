#include<iostream>
#include "array_tools.h"
using namespace std;
int main()
{
  int size,a,choice;
  cout<<"Enter size of array"<<endl;
  cin>>size;
  int my_array[size];
  for(a=0;a<size;a++)
  {
    cout<<"Enter value No "<<a<<endl;
    cin>>my_array[a];
  }
  cout<<" Enter 1 to Reverse Array \n Enter 2 to Rotate Array \n Enter 3 to Sort array \n Enter 4 to Search Array\n";
  cin>>choice;
  switch (choice)
  {
    case 1:
    reverse_array(my_array,size);
    output_array(my_array,size);
    break;
    case 2:
    rotate_array(my_array,size);
    output_array(my_array,size);
    break;
    case 3:
    sort_array(my_array,size);
    output_array(my_array,size);
    break;
    case 4:
    {
      int item,keeper=0;
      std::cout<<"Enter number to be searched \n \n \n";
      std::cin>>item;
      for(int x=0,y=x+1;y<size;x++,y++)
      {
        if(my_array[x]>my_array[y])
        {std::cout<<"Your array is not sorted \n";
        keeper=0;
          search_array(my_array,size,item,keeper);
        return 0;}
      }
      cout<<"Your array is sorted applying Binary Search \n";
      sorted_search_array(my_array,size,item);
      break;
    }
    default:
    cout << "Invalid choice" << '\n';

  }

  return 0;
}

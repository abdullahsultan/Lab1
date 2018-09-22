#include<iostream>
#include "array_tools.h"
using namespace std;
int main(int argc, char const *argv[])
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
  cout<<" Enter 1 to Reverse Array \n Enter 2 to Rotate Array \n Enter 3 to Sort array \n Enter 4 to Search Array(Unsorted) \n Enter 5 to Serach Array(Sorted) \n";
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
/*    case 3:
    sort_array(my_array,size);
    break;
    case 4:
    search_array(my_array,size);
    break;
    case 5:
    sorted_search_array(my_array,size);
    break; */
    default:
    cout << "Invalid choice" << '\n';

  }

  return 0;
}

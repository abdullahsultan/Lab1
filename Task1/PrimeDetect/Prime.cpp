#include<iostream>
using namespace std;
main()
{
  start:
  int input,a,counter=0;
  char st;
  cout<<"Enter a number"<<endl;
  cin>>input;
  for(a=1;a<input;a++)
  {
    if(input%a==0)
    counter++;
  }
  if(counter>1)
  cout<<"Not a prime \n";
  else
  cout<<"Prime \n";

  cout<<"Do you want to try again?(y) \n";
  cin>>st;
  if(st=='y')
   goto start;


}

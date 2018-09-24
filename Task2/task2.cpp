#include<iostream>
using namespace std;
int yearly_savings(int years,int savings,int intrests,int total);
int main()
{
  int years,savings,intrests,total=0,x;
  cout<<"Enter number of years \n";
  cin>>years;
  x=yearly_savings(years,savings,intrests,total);
  cout<<"\n Total savings of "<<years<<" years = "<<x<<endl;
}


int yearly_savings(int years,int savings,int intrests,int total)
{
  int x,i;
  cout<<"Enter intrests '%'";
  cin>>intrests;
  for(x=1;x<=years;x++)
  {
  cout<<"Enter savings of year "<<x<<endl;
  cin>>savings;
  i=(savings*intrests)/100;
  total=savings+total+i;
  }
  return total;
}
//  total=((savings*intrests)/100)+savings+total 

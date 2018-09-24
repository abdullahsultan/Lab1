#include<iostream>
using namespace std;
int yearly_savings();
int years;
int main()
{
  cout<<"Enter number of years \n";
  cin>>years;
  int x=yearly_savings();
  cout<<"\n Total savings of "<<years<<" years = "<<x<<endl;
}


int yearly_savings()
{
  int savings,intrests,total=0;
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

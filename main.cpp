#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  vector<string> list;
  int numItems = 0;
  char input;
  string item;
do 
  { 
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input; 
  if(input=='a' || input =='A')
    {

      
    cout<<"What is the item?\n";
    cin>>item;
    list.push_back (item);
    
       
    }
  }
while(input != 'q' &&  input != 'Q');
if (input == 'q' || input == 'Q')
{
  if (list.size() == 0)
  {
    cout<<"No items to buy!"<<endl;
  }
  else
  cout<<"==ITEMS TO BUY==\n";
  numItems=list.size();
 
  for (int counter=0; counter < list.size(); counter++)
    {
    cout<<counter + 1<<". "<<list.at(counter)<<endl;
    }

}


  return 0;
}

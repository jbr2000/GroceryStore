#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string trash;
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
    if (numItems>4)
      {
      cin>>trash;
      cout<<"You'll need a bigger list!\n";
      }
    else
      {
    cin>>list[numItems];
    numItems++;
      }  
    }
  }
while(input != 'q' &&  input != 'Q');


  return 0;
}

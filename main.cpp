//Kevin Buffardi and class
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string said;  
  int len;
  char letters;

  cout<<"What do you say?\n";
  getline(cin,said);
  len = said.length();
  
  cout<<"As a shout, you said:\n";

  for(int index=0;index<len;index++)
    {
      if (said[index] > 90) 
        {        
          letters = said[index]-32;
          cout<<letters;
        }
      else
        {
          letters = said[index];
          cout<<letters;
        }
    }
  cout<<endl;
  
  return 0;
}

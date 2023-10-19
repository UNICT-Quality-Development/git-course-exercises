#include <iostream>
using namespace std;


void verify()
{
  int x;
 
  int count=0;
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  cout<<"Inserisci il numero da verificare all'interno dell'array:  ";
  cin>>x;
  cout<<endl;

  for(int i=0;i<10;i++)
  {
    if(x==N[i])
    {
      
      count++;

    }
    
     
  }

  cout<<"Il valore  "<<x<<" è presente "<<count<<"  volte nell'array "<<endl;

}

int main()
{
  // placeholder
  //int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  verify();



  return 0;
}

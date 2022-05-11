#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   int num;
   srand(time(NULL));
   num = rand();

   cout << num << endl;
}

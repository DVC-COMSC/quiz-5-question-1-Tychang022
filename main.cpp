#include    <iostream>
using namespace std;

int main()
{
   int numRows;
   cout << "Enter a number \n";
   cin >> numRows;

   if (numRows <= 0){
      cout << "Number of rows must be postive." << endl;
      exit(0);
   }
   for (int i = 1; i <= numRows; i++){
      char letter = 'A';
      for (int j = 1; i <= numRows; j++){
         cout << letter << " ";
         letter++;
      }
      cout << endl;
   }
   return 0;
}

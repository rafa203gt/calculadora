#include <iostream>
using namespace std;
int main() {
int a , b , sum = 0 , multi = 0 , divi = 0 , resta = 0 ;
    cout << "Put a number:\n" ; cin>> a;
    cout <<"Put another one:\n";  cin >> b;
   sum = a + b;
   resta = a - b;
   multi = a * b;
   divi = a / b ;
  cout << "\nThe sum is :" <<sum  ; 
  cout << "\nThe resta is :" <<resta  ; 
  cout << "\nThe multi is :" <<multi  ; 
  cout << "\nThe divi is :" <<divi  ; 
    system ("pause");
    return 0;
}

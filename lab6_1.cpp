#include<iostream>
using namespace std;

int main(){
    
    int i;
    int Odd = 0;
    int Even = 0;
    
    cout << "Enter an integer: ";
    
    while (cin>>i && i != 0){
    
      if(i %2 == 0)
      {
          Even++;
      }
      else
      {
          Odd++;
      }
      
    cout << "Enter an integer: ";
    
    }
  
    cout << "#Even numbers = " << Even<<"\n";
    cout << "#Odd numbers = " << Odd << "\n";
    return 0;
}

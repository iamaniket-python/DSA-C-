#include <iostream>
using namespace std;

int largest(int a,int b, int c) {
   if ( a>= b && a>=c)
      return a;
   else if ( b>= a && b>=c)
      return b;
   else
      return c;

}

int main() {
   int a,b,c;

   cout<<"ENter first Number";
   cin>>a;

   cout<<"Enter a second number";
   cin>>b;

   cout<<"Enter a third Number";
   cin>>c;

   cout<<"Highest Number"<<largest(a,b,c);
   return 0;

}
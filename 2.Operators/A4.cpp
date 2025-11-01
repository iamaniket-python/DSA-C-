#include <iostream>
using namespace std;

int main() {
   int x=200;
   int y=50;
   int z=100;

   if (x >y && y>z) {
      cout<<"hello \n";
   }

   if (z >y && z<x) {
      cout<<" c++ \n";
   }

   if ((y+200) <x && (y+150)<z) {
      cout<<" hello c++ \n";
   }
}

// output = c++
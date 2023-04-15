#include <iostream>
using namespace std;

int main() {
   float a=0,b=0,x=0,y=0;
   cin >> a >> b >> x >> y;
   float z=0; 
   if((x<0) and (y>0)) {
      z = a*x-b*y;
      cout<< z;
   } 
   else if((x>=0) and (y<=0)){
      z = a*x*x-b*y;
      cout<< z;
   }
   else {  
   z = a*x+b*y*y;
   cout << z;  
 }
   return 0;
}

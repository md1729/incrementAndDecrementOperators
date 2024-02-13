/*   front and end increment and decrement operators

Variable++ :end increment
Variable-- :end decrement
++Variable :front increment
--Variable :front decrement

*/

#include<iostream>

using namespace std;
main(){
int a =10;
int b =4;
int c ;
//c=a-- +b;
c=--a+b++;
//c=a--
//a+=1;
//a=a+1;
cout<<"c"<<c<<endl;
cout<<"a"<<a<<endl;
cout<<"b"<<b<<endl;	
	
}


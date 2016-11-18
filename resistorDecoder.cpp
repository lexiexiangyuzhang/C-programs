#include <iostream>
using namespace std;

int main() {
	char a,b,c,d;
	cout << "Engter the four resistor color codes: ";
	cin >>a >>b >>c >>d;
	float q =0, e = 0, g=0, f =0;
	int x,y;
	switch (a){
	  case 'k':
	  {x=0;}
	  break;

	  case 'n':
	  {x = 1;}
	  break;
	        
	  case 'R':
	  {x = 2;}
	  break;
	 
	  case 'O':
	  {x = 3;}
	  break;

	  case 'Y':
	  {x = 4;}
	  break;

	  case 'G':
	  {x = 5;}
	  break;

	  case 'B':
	  {x = 6;}
	  break;
	 
	  case 'V':
	  {x = 7;}
	  break;

	  case 'y':
	  {x = 8;}
	  break;
	
	  case 'W':
	  {x = 9;}
	  break;
      
      default:
	  {x = 0;}}

	  
      switch (b){
	  case 'k':
	  {y=0;}
	  break;

	  case 'n':
	  {y= 1;}
	  break;
      
	  case 'R':
	  {y = 2;}
	  break;

	  case 'O':
	  {y = 3;}
	  break;

	  case 'Y':
	  {y = 4;}
	  break;

	  case 'G':
	  {y = 5;}
	  break;

	  case 'B':
	  {y = 6;}
	  break;

	  case 'V':
	  {y = 7;}
	  break;

	  case 'y':
	  {y = 8;}
	  break;

	  case 'W':
	  {y = 9;}
	  break;

	  default:
	  {y = 0;}}

	switch (c){
	  case 'k':
	  {q =1;}
      break;	 

	  case 'n':{
	  q =10;}
      break;

	  case 'R':
	  {q =100;}
      break;

	  case 'O':
	  {q =1000;}
      break;

	  case 'Y':
	  {q =10000;}
      break;

	  case 'G':
	  {q =100000;}
      break;	 

	  case 'B':
	  {q =1000000;}
      break;

	  case 'V':
	  {q =10000000;}
      break;	 

	  case 'y':
	  {q =100000000;}
      break;	  

	  case 'W':
	  {q =1000000000;}
      break;	  

      case 'd':
      {q =0.1;}
      break;

      case 'S':
      {q =0.01;}
      break;

      default:{
      q=0;}}
     

 e= (10*x+y)*q;

switch (d){
	  case 'k':
	  case 'O':
	  case 'Y':
	  case 'W':
	  case 'N':
	  {g=0.2;}
	  break;
	
      case 'n':
	  {g=0.01;}
	  break;
	        
	  case 'R':
	  {g= 0.02;}
	  break;
	  
	  case 'G':
	  {g =0.005;}
	  break;
	  
	  case 'B':
	  {g = 0.0025;}
	  break;
	  
	  case 'V':
	  {g = 0.001;}
	  break;
	  
	  case 'y':
	  {g = 0.0005;}
	  break;

      case 'd':
      {g =0.05;}
      break;
    
      case 'S':
      {g = 0.01;}
      break;

      default:
      {g=0 ;}}
      

f=e*g;
bool n = (x == 0) || (y == 0) || (q == 0) ||(g == 0);
if (n){
	cerr << "Error: Invalid color code entered!" <<endl;
}
else {
cout << "Resistance is " <<e <<" ohms (+/- " << f << " ohms tolerance)" << endl;}
return 0;
}





		  

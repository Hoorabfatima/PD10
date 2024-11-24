#include <iostream>
#include <string>
using namespace std;
float calRotations(string directions[], int n);
int main()
{
 int n ;
 cout<<"Enter the number of directions:";
 cin>>n;
 string directions[n];
 cout<<"Enter directions:";
 for(int i=0;i<n;i++)
 {
  cin>>directions[i];
 }
 float rotations = calRotations(directions, n);
 cout<<"Rotations made "<<rotations;
}
float calRotations(string directions[], int n) 
{
  int totalDegs = 0;
  float r;
    for(int i=0;i<n;i++) 
  {
    if(directions[i]=="right")
   {
    totalDegs+=90; 
   }
    else if(directions[i]=="left")
   {
    totalDegs-=90;
   }
  }
  if(totalDegs==360||totalDegs==-1)
  {
   r=1;
  }
  else if(totalDegs==90||totalDegs==-90)
  {
   r=0.25;
  }
  else if(totalDegs==180||totalDegs==-180)
  {
   r = 0.5;
  }
  else if(totalDegs>360)
  {
   r=totalDegs/360;
  }
  else
  {
   r=0.75;
  }
  return r;
}


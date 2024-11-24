#include<iostream>
using namespace std;
bool check(int number[], int);
int main()
{
  int length,temp; 
  cout<<"Enter array length: ";
  cin>>length;
  int number[length];
  cout<<"Enter array: ";
  for(int i=0; i<length; i++)
 {
  cin>>number[i];
 }
 for(int i=0; i<length-1; i++)
 {
   for(int j=0; j<length-i-1; j++)
  {
  if(number[j]>number[j+1])
  {
   temp=number[j];
   number[j]=number[j+1];
   number[j+1]=temp;
  }
 }
 }
 cout<<check(number,length);
}
bool check(int number[], int length)
{
  for(int k=0; k<length-1; k++)
 {
  if(number[k+1]-number[k]!=1)
  {
   return false;
  }
  if(number[k]==number[k+1])
   return false;
 }
return true;
}
//Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
//For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
//Bonus: Can you do this in one pass?
#include<stdio.h>
int main()
{
int a[10]={5,10,7,15};
int n,c,b,i,k=12,temp=0,found=0;
n=0,i=0;
while(a[i])
{
 n++;
 i++;
 }
 b=a[0];//take 1st value
 for(i=1;i<n;i++)
 {
  c=a[i];//take 2nd value
  temp=b+c;//add it with 1st value
  if(temp>k)//if k < added val
  {
   if(c<b)//keep the small value
   b=c;
  }
  else if(temp<k)//if not
  {
  if(c>b)//keep the larger one
  b=c;
  }
  else//if found k in array
  {
  printf("true");
  found=1;
  }
  }
  if(found)//if not found
  printf("false");
  return 0;
  }

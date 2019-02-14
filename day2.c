
// Given an array of integers, return a new array such that each element at index i of the new array
// is the product of all the numbers in the original array except the one at i.
//
// For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24].
// If our input was [3, 2, 1], the expected output would be [2, 3, 6].
//
// Follow-up: what if you can't use division?
#include<stdio.h>
int main()
{
  int given[10]={1,2,3,4,5},new[10]=0;
  int i,preval,nextval,n=5;
  preval=1;
  for(i=0;i<n;i++)
  {
    new[i]=preval;
    preval=preval*given[i];
  }
  nextval=1;
  for(i=(n-1);i>=0;i--)
  {
    new[i]=new[i]*nextval;
    nextval=nextval*given[i];
  }
  for(i=0;i<n;i++)
  printf("%d\n",new[i] );
}

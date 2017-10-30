/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"
#include<stdio.h>
/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
 
   int middle;
   int start=0;
   int end=n- 1;
  
   while(start<=end){
   middle=(start+end)/2;
   if(value==values[middle]){
   return true;
   }
   if(values[middle]<value){
   start=middle + 1;
 
   }
   if(values[middle]>value){
   end=middle - 1;
   }
   
   }
  return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{

    for(int i=0;i<n-1;i++)
    {
    int mini=values[i];
    int po=i;
    for(int j=i+1;j<n;j++){
    if(values[j]<mini)
    {
    mini=values[j];
    po=j;
    }
    }
    int temp=values[i];
    values[i]=values[po];
    values[po]=temp;
    }

}

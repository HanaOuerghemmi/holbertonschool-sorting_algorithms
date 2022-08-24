#include "sort.h"
void quicksort(int *array,int first,int last,size_t sizeArray)
{
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(array[i]<=array[pivot]&&i<last)
         i++;
         while(array[j]>array[pivot])
         j--;
         if(i<j){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
         }
      }
      temp=array[pivot];
      array[pivot]=array[j];
      array[j]=temp;
      quicksort(array,first,j-1,sizeArray);
      quicksort(array,j+1,last,sizeArray);
			print_array(array, sizeArray);
   }
}
void quick_sort(int *array, size_t size)
{
    int last = size - 1 ;
    int first = 0;
    quicksort(array,first,last,size);
    
}

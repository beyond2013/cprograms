//An O(n) Algorithm for searching x in n by n array where elements
//increase from left to right and top to bottom
/*
1,3,4,9
2,4,5,16
7,8,15,17
8,10,23,54
*/

#include <stdio.h>
 
int search(int mat[4][4], int n, int x)
{
   int i = 0, j = n-1;  //set indexes for top right element
   while ( i < n && j >= 0 )
   {
      if ( mat[i][j] == x )
      {
         printf("\n Found at %d, %d", i+1, j+1);
         return 1;
      }
      if ( mat[i][j] > x )
        j--;
      else //  if mat[i][j] < x
        i++;
   }
 
   printf("\n Element not found");
   return 0;  // if ( i==n || j== -1 )
}
 
// driver program to test above function
int main()
{
  int mat[4][4] = { {1,3,4,9},
                    {2,4,5,16},
                    {7,8,15,17},
                    {8,10,23,54},
                  };
  search(mat, 4, 4);
  getchar();
  return 0;
}

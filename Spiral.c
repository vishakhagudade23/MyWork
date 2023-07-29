//**************** Spiral ****************
/*
#include<stdio.h>
int main()
{
  
  int n;;
  printf("Enter rows/columns: ");
  scanf("%d",&n);
  
  int arr[n][n];              //taking input
  for(int i=0; i<n; i++){
     for(int j=0; j<n; j++){
       scanf("%d",&arr[i][j]);
     }
   }
  printf("\n");
  int minc = 0;    
  int maxc = n-1;
  int minr = 0;
  int maxr = n-1;
  int count = 0; 
  int num_of_elm = n*n;
  
  while(count <= num_of_elm)
  {
 
    for(int j=minc; j<=maxc; j++)
    {
      printf("%d ",arr[minr][j]);
      count++;
    }
    
    if(count >= num_of_elm) break;
    minr++;
    for(int i=minr; i<=maxr; i++)
    {
      printf("%d ",arr[i][maxc]);
      count++;
    }
    
    if(count >= num_of_elm) break;
    maxc--;
    for(int i=maxc; i>=minc; i--)
    {
      printf("%d ",arr[maxr][i]);
      count++;
    }
    
    if(count >= num_of_elm) break;
    maxr--;
    for(int i=maxr; i>=minr; i--)
    {
      printf("%d ",arr[i][minc]);
      count++;
    }
    minc++;
  }
  return 0;
}
*/

//********* printing in new array**************
#include<stdio.h>
int main()
{
  
  int n;;
  printf("Enter rows/columns: ");
  scanf("%d",&n);
  
  int arr[n][n];              //taking input
  for(int i=0; i<n; i++){
     for(int j=0; j<n; j++){
       scanf("%d",&arr[i][j]);
     }
   }
  printf("\n");
  
  int minc = 0;    
  int maxc = n-1;
  int minr = 0;
  int maxr = n-1;
  int count = 0; 
  int num_of_elm = n*n;
  
  int brr[n][n];
  
 while(count <= num_of_elm)
  {
 
    for(int j=minc; j<=maxc; j++)
    {
      brr[minr][j] = arr[minr][j];
      count++;
    }
    
    if(count >= num_of_elm) break;
    minr++;
    for(int i=minr; i<=maxr; i++)
    {
      brr[i][maxc] = arr[i][maxc];
      count++;
    }
    
    if(count >= num_of_elm) break;
    maxc--;
    for(int i=maxc; i>=minc; i--)
    {
      brr[maxr][i] = arr[maxr][i];
      count++;
    }
    
    if(count >= num_of_elm) break;
    maxr--;
    for(int i=maxr; i>=minr; i--)
    {
      brr[i][minc] = arr[i][minc];
      count++;
    }
    minc++;
  }
  
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      printf("%d ",brr[i][j]);
    }
    printf("\n");
  }
  return 0;
}






























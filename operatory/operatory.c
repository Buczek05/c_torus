#include<stdio.h>
int main(int argc, char *argv[])
{
  int i=0,j=0,k=0,w;
  int x=10, y=5;
  x*=y++; // x = 50
  printf("x=%d\n",x); // x=50

  x=10;
  y=5;
  x*=++y; // 10 * 6
  printf("x=%d\n",x); // x=60

  k=i++; // k = 0, i = 1
  printf ("k=i++   --- k=%d  i=%d\n",k,i); // k=i++   --- k=0  i=1
 
  k=++i; // k = 2, i = 2
  printf ("k=++i   --- k=%d  i=%d\n\n\n",k,i); // k=++i   --- k=2  i=2

  i=6;
  j=3;
  k=1;
  w=((++i %2)&&((j+=k)%2)); // i = 7; 7%2 = 1 && j = 4; 4%2 = 0; w = 0
  printf ("((++i %%2)&&((j+=k)%%2))   --- w=%d  i=%d  j=%d  k=%d\n\n\n",w,i,j,k); // ((++i %%2)&&((j+=k)%%2))   --- w=0  i=7  j=4  k=1
  
  w=(i<j)?i:j; // w = j = 4
  printf ("w=(i<j)?i:j;   --- w=%d  i=%d  j=%d  \n\n\n",w,i,j); // w=(i<j)?i:j;   --- w=4  i=7  j=4
   
  w=!(i>j)||((i<j)&&(i>k)); // 0 || ( 0 && 1) w = 0
  printf("w=!(i>j)||((i<j)&&(i>k))  ----w=%d\n\n",w); //w = 0

 // i = 00111 j = 00100 
  w=i|j; // w = 00111 = 7
  printf("w=i|j ----------------w=%d  i=%d  j=%d\n\n",w,i,j);
 
 // i = 00111 j = 00100 
  w=i&j; //w = 4
  printf("w=i&j ----------------w=%d  i=%d  j=%d\n\n",w,i,j);
  
 // i = 00111 j = 00100; 11 = 01011
  w=i|j+i&j; //7|11&4 = 7|0 = 7
  printf("w=i|j + i&j-----------w=%d  i=%d  j=%d\n\n",w,i,j);
  

// 
  w=i||j+i&&j; //7||11&&4 = 1 = w
  printf("w=i||j + i&&j---------w=%d  i=%d  j=%d\n\n",w,i,j);
  
 // i = 00111 j = 00100 
  w=i^j; //w = 00011 = 3
  printf("w=i^j ----------------w=%d  i=%d  j=%d\n\n",w,i,j);
  
// i = 00111 j = 00100 k = 00001
// j & i = 00100 = 4
  w=i^j & i^k; // 7^4^1 = 3^1 = 2; w = 2
  printf("w=i^j & i^k -----------w=%d  i=%d  j=%d k=%d\n\n",w,i,j,k);
  

// 011 & 110 = 010 = 2
  w=(i^j) & (i^k);// w = 2
  printf("w=(i^j) & (i^k) -------w=%d  i=%d  j=%d  k=%d\n\n",w,i,j,k);
  

  j=--i*5; // j = 30; i = 6
  printf("j=--i*5  -------------j=%d  i=%d\n\n",j,i);
   
  j=i--*5; // j = 30; i = 5
  printf("j=i--*5  -------------j=%d  i=%d\n\n",j,i);
   
  j*=--i; // j = 120; i = 4
  printf("j*=--i  --------------j=%d  i=%d\n\n",j,i);
   
  j*=i--; // j = 480; i = 3
  printf("j*=i--  ---------------j=%d  i=%d\n\n",j,i);
   
  w=!(i&&k);// w = 0
  printf(" w=!(i&&k) ------ w=%d  i=%d  k=%d\n\n",w,i,k);
   
  j=2;
  i=1;
  w=(j+=1,i+=1,k=(j++>=i),i<<j);// j = 3; i = 2; k = 1; j= 4; i = 100000 = 32; w = 32
  printf("j=2  i=1  w=(j+=1,i+=1,k=(j++>=i),i<<j)   w=%d  j=%d  i=%d  k=%d\n\n\n",w,j,i,k);
   
  w=(1,44,55,11,7); // w = 7
  printf("w=(1,44,55,11,7)  w=%d\n",w);
   
  w=w>>2; // w = 111 >> 2 = 1 = 1
  printf("w=w>>2  w=%d\n",w);
   
  w=w<<2; // w = 001 << 2 = 100 = 4
  printf("w=w<<2  w=%d\n\n",w);
   
double a=-5;
double *b=&a; // b = &a = *b = -5
int c=*b/2+2; // c = -5 / 2 + 2 = -2.5 + 2 = 0.5 (to int) = 0// c = 0
printf ("c=%d  a=%lf  *b=%lf\n",c,a,*b); // c = 0; a = -4 *b = -5
  
  i=1;
  while (i<=5)
  {
        printf("%d ",i); // 1 2 3 4 5
        i++;
  }
    
  printf("\n\n");
  i=1;
  while (i<=5)
  {
        i++;
        printf("%d ",i);  // 2 3 4 5 6
 }
     
  
  return 0;
}

#include<stdio.h>
#include<math.h>
double sine(float,int);
double cosine(float,int);
void main()
{
    int n,x;
    printf("Enter number of terms : ");
	scanf("%d", &n);
	printf("Enter number of degrees : ");
	scanf("%d", &x);
    float v=(x*3.14)/180;
    printf("The sin value is : %.6lf",sine(v,n));//sin(x) = x - x3/3! + x5/5! - x7/7! + ....
    printf("The cosine value is : %.6lf",cosine(v,n));//cos(x) = 1 - x2/2! + x4/4! - x6/6! + ..... 
}
double sine(float v,int n)
{
  double sin=0.0;int sign=1,pro=1;
  for(int i=1;i<=2*n+1;i=i+2)
  {
    for( int j=1;j<=i;j++)
    pro=pro*j;
    sin=sin+sign*(pow(v,i)/pro);
    pro=1;
    sign=sign*-1;

  }
  return(sin);
}
double cosine(float v,int n)
{
  double cosin=1.0;int sign=-1,pro=1;
  for(int i=2;i<=2*n;i=i+2)
  {
    for( int j=1;j<=i;j++)
    pro=pro*j;
    cosin=cosin+sign*(pow(v,i)/pro);
    pro=1;
    sign=sign*-1;

  }
  return(cosin);
}
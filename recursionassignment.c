Question =1
/*
// C program to find LCM of two numbers
#include <stdio.h>
 
// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Function to return LCM of two numbers
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
 
// Driver program to test above function
int main()
{
    int a = 15, b = 20;
    printf("LCM of %d and %d is %d ", a, b, lcm(a, b));
    return 0;
}*/

Question=2
/*
#include<stdio.h>

int main()
{
    int num1 = 36, num2 = 60, hcf = 1;
    
    for(int i = 1; i <= num1 || i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    
    printf("The HCF: %d", hcf);
    
    return 0;
}
*/
Question =3
/*
#include <stdio.h>

int main() {

  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}
*/
Question =5
/*
#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int n,i = 3, count, c;

    printf("\nEnter the number of prime numbers required :  ");
    scanf("%d", &n);

    if(n >= 1)
    {
        printf("\n\nFirst %d prime numbers are :  ", n);
        printf("2 ");
    }

    // iteration for n prime numbers
    // i is the number to be checked in each iteration starting from 3
    for(count = 2; count <= n; i++)  
    {
        // iteration to check c is prime or not
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i)  // c is prime
        {
            printf("%d ", i);
            count++;    // increment the count of prime numbers
        }

    }
    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
*/
Question =6
/*#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int n,i = 3, count, c;

    printf("\nEnter the number of prime numbers required :  ");
    scanf("%d", &n);

    if(n >= 1)
    {
        printf("\n\nFirst %d prime numbers are :  ", n);
        printf("2 ");
    }

    // iteration for n prime numbers
    // i is the number to be checked in each iteration starting from 3
    for(count = 2; count <= n; i++)  
    {
        // iteration to check c is prime or not
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i)  // c is prime
        {
            printf("%d ", i);
            count++;    // increment the count of prime numbers
        }

    }
    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}*/
Q=7
/*#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }
 */
Q=8
/*
#include
int main()
{
int rows, coef = 1, space, i, j;
printf(“\nEnter the number of rows : “);
scanf(“%d”,&rows);
printf(“\n”);

for(i=0; i<rows; i++)
{
for(space=1; space <= rows-i; space++)
printf(” “);

for(j=0; j <= i; j++)
{
if (j==0 || i==0)
coef = 1;
else
coef = coef*(i-j+1)/j;

printf(“%4d”, coef);
}
printf(“\n\n”);
}

return 0;
}
*/
Question=9
/*
#include<stdio.h>
int main()
{
    float number, square;
    printf("Please Enter any integer Value : ");
    scanf("%f", &number);
    square = number * number;
    printf("square of a given number %.2f is  =  %.2f", number, square);
    return 0;
*/
Qu=10
/*
#include <stdio.h>

int fact(int);
void main()
{
    int sum;
    sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
	printf("\n\n Function : find the sum of 1!/1+2!/2+3!/3+4!/4+5!/5 :\n");
	printf("----------------------------------------------------------\n");    
    printf("The sum of the series is : %d\n\n",sum);
}

int fact(int n)
    {
        int num=0,f=1;
        while(num<=n-1)
        {
            f =f+f*num;
            num++;
        }
    return f;
    }
    *\
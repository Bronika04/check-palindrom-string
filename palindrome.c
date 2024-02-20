#include<stdio.h>
int (reversef(int n))
{
    int reverse = 0;
    while (n!=0)
    {
    
     reverse=reverse*10+(n%10);
    n=n/10;

}
return reverse;

}
int main()
{
    int arr[5]={121,321,1441,789,13331};
    int count=0;
    for (int i=0;i<5;i++)
    { 
        int x=arr[i];
        arr[i]=reversef(arr[i]);
        if (arr[i]==x)
       { 
        printf("\n palindrome is %d ",x);
        count=count+1; 
        }
        }
        printf("\n total no of palindrome %d",count);
        return 0;
}
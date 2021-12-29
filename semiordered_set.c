#include<stdio.h>

int main()
{
  int n;
  int c=0;
  scanf("%i",&n);
  int numbers [n];
  *(numbers+n) = 999999999;
  for(int i=0;i<n;i++)
  {
    scanf("%i",(numbers+i));
  }
  for(int i = 1;i<=n;i++)
  {
    if (numbers[i-1] > numbers[i])
    {
      c++;
    }
  }
  if(c == 2)
  {
    printf("YES");
  }
  else{
    printf("NO");
  }

}

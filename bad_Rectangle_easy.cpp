#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int answer=0;
  if ( (n % 2) == 0)
  {
    answer = round(pow(n,2) / 48);
  }
  else
  {
    answer = round(pow((n+3),3) / 48);
  }
   cout << answer;


}

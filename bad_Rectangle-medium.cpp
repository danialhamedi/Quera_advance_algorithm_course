#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  long long answer=0;
  if ( (n % 2) == 0)
  {
    answer = round(pow(n,2) / 48);
  }
  else
  {
    answer = round(pow((n+3),2) / 48);
  }
  long long m = pow(10,9) + 7;
  answer = answer % m ;
   cout << answer;


}

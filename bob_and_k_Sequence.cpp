#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main()
{
  int n;
  int k;
  cin >> n;
  cin >> k;
  int min = 999999999;
  vector<int> numbers (n);
  for(int i=0;i<n;i++)
  {
    cin >> numbers[i];
  }

  for(int x = -100000;x<=100000;x++)
  {
    int result = 0;
    for(int j = 1;j<=n;j++)
    {

      result += abs( (x+(j*k) - numbers[j-1]) );
    }
    if (result < min){min = result;}
  }

cout << min;
}

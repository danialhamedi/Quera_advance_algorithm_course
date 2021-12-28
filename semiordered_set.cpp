#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int num;
  cin >> num;
  vector<int> numbers(num);
  int check=0;
  numbers[num]=99999999;
  for(int i=0;i<num;i++)
  {
    cin>>numbers[i];
  }
  for(int i=0;i<num;i++)
  {
    if(numbers[i] > numbers[i+1])
    {
      check++;
    }
  }
  if(check==2)
  {
    cout << "YES";
  }
  else{
    cout << "NO";
  }
}

#include<iostream>
#include<vector>
int main()
{
  int number_of_person;
  int number_of_days;
  std::cin >> number_of_person;
  std::cin >> number_of_days;
  std::vector<int> day (number_of_days);
  std::vector<int> person_temp (number_of_person);
  for (int i=0;i<number_of_person;i++)
  {
    std::cin >> person_temp[i];
  }
  for(int i=0;i<number_of_days;i++)
  {
    std::cin >> day[i];
  }
  ////////////////////////////////////////////////////////
  for (int i =0;i<number_of_days;i++)
  {
    int sad_person = 0;
    for(int j = 0;j<number_of_person;j++)
    {
      if(person_temp[j] < day[i])
      {
        sad_person++;
      }
    }
    std::cout << sad_person<<"\n";
  }
}

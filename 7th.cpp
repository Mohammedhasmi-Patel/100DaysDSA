#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n;
  cout << "Enter size of array" << endl;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  vector<int> another(n);
  another[n - 1] = v[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    another[i] = another[i + 1] + v[i];
  }

  return 0;
}
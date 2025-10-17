#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i)
  {
    string s;
    cin >> s;

    if (s.length() > 10)
    {
      int middle = (int)s.length() - 2;
      string result = string(1, s[0]) + to_string(middle) + s.back();
      cout << result << '\n';
    }
    else
    {
      cout << s << '\n';
    }
  }

  return 0;
}

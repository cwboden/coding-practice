/**
 * PROMPT: find the index in string where the first extra ) or ( parentheses 
 * is, or return the length of string if parentheses are balanced.
 *
 * @author Carson Boden
 */

#include <string>
#include <deque>

int main(int argc, char* argv[])
{
  std::string str = argv[1];
  std::deque<int, int> checker;

  for (int i = 0; i < str.size(); ++i) {

    if (str[i] == '(') {
      checker.push(str[i], i);
    }
    else if (str[i] == ')') {
      if (checker.empty()) {
        return i;
      }

      checker.pop();
    }
  }

  if (!deque.empty()) {
    return deque.front()->second;
  }

  return 0;
}

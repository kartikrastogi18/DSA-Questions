class Solution {
public:
    bool string_isdigit(string str)
    {
        for (char c: str)
        {
            if (isdigit(c))
            {
                return true;
            }
        }
        return false;
    }

    int evalRPN(vector<string>& tokens)
    {
        stack<int> result;
        for (string s: tokens)
        {
            if (string_isdigit(s))
            {
                result.push(stoi(s));
            }
            else
            {
                int b = result.top();
                result.pop();
                int a = result.top();
                result.pop();
                if (s == "+")
                {
                    result.push(a + b);
                }
                if (s == "-")
                {
                    result.push(a - b);
                }
                if (s == "*")
                {
                    result.push(a * b);
                }
                if (s == "/")
                {
                    result.push(a / b);
                }
            }
        }
        return result.top();
    }
};
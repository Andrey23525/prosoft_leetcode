#include "problems.h"

int LeetCode::calculate(std::string s)
{
    std::vector<int> signs { 1 };
    long long result = 0;
    int sign = 1;

    const auto stringSize = s.size();
    for(std::size_t i = 0; i < stringSize; ++i) {
        const char currentChar = s[i];

        if(currentChar == ' ') {
            continue;
        }

        switch(currentChar) {
            case '+': {
                sign = signs.back();
                break;
            }
            case '-': {
                sign = -signs.back();
                break;
            }
            case '(': {
                signs.push_back(sign);
                break;
            }
            case ')': {
                signs.pop_back();
                break;
            }
            default: {
                long long num = 0;
                while(i < stringSize && s[i] >= '0' && s[i] <= '9') {
                    num = num * 10 + (s[i] - '0'); // - '0' is char to int operation
                    ++i;
                }
                --i;
                result += sign * num;
            }
        };
    }

    return static_cast<int>(result);
}
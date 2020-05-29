/*
    * Since the size of array was so small (<= 100) a bruteforce solution will get accepted too.
    * Suggested Reading : Algorithm analysis, worst case AC algorithm for given input of size 'n'.
    * We have used two nested loops and we check for every element if it is divisible by 'k'.
    * We use the modulo (%) operator to find the remainder. If remainder is 0 it means number is divisible.
    * Time Complexity : O(n * n), where 'n' is the size of the given array.
    * Space Complexity : O(1), because we're using only a single extra variable.
    * A 2-pointer solution can be made too which can be used after sorting to reduce the complexity to O(n * lgn).
*/

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the divisibleSumPairs function below.
int divisibleSumPairs(int n, int k, vector<int> ar) {
    int res = 0;
    
    for (int i = 0; i < (int)ar.size(); ++i)
        for (int j = i + 1; j < (int)ar.size(); ++j)
            if ((ar[i] + ar[j]) % k == 0)
                ++res;
    
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split_string(ar_temp_temp);

    vector<int> ar(n);

    for (int i = 0; i < n; i++) {
        int ar_item = stoi(ar_temp[i]);

        ar[i] = ar_item;
    }

    int result = divisibleSumPairs(n, k, ar);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

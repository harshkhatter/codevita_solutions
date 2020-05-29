/*
    * This question uses a very popular technique known as sliding window technique
    * Here we process a 'window' of elements, in our question the size of window is 'm'
    * In each iteration we first remove the last element from last window & 
    * add the newest element in our window
    * Time Complexity : O(s.size()) / O(n) where n is the number of elements in 's' array
    * We are doing a single linear scan, so linear time complexity
    * Space Complexity : O(1) or constant space, because we use only two extra variables
*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the birthday function below.
int birthday(vector<int> s, int d, int m) {
    int res = 0, curr = 0;                              //'res' is used to store our result &
                                                        //'curr' is used to store our current window sum
    
    for (int i = 0; i < m; ++i) {                       //This is the first loop in which we find 'curr'
        curr += s[i];                                   //for first window in range [0, m)
    }
    if (curr == d)                                      //If curr equals 'd' then we increase 'res' by 1
        ++res;
    
    for (int i = 1; i <= (int)s.size() - m; ++i) {      //This loop is used to iterate from 2nd to last window
        curr += s[i + m - 1];                           //For each window last element has to be removed from it
        curr -= s[i - 1];                               //Here new element is being added in the window
        if (curr == d)
            ++res;                                      //If 'curr' equals 'd' then we increase 'res' by 1
    }
    
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s_temp_temp;
    getline(cin, s_temp_temp);

    vector<string> s_temp = split(rtrim(s_temp_temp));

    vector<int> s(n);

    for (int i = 0; i < n; i++) {
        int s_item = stoi(s_temp[i]);

        s[i] = s_item;
    }

    string dm_temp;
    getline(cin, dm_temp);

    vector<string> dm = split(rtrim(dm_temp));

    int d = stoi(dm[0]);

    int m = stoi(dm[1]);

    int result = birthday(s, d, m);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

/*
    * Suggested Reading : STL in C++
    * The basic idea here is that we have to count the frequency of occurance of each bird.
    * There are only 5 kinds of birds so we use an array of size 6 initialised with 0s.
    * First we calculate the frequency of each bird, after that we find the bird with highest frequency.
    * Time Complexity : O(n)
    * Space Complexity : O(1), since we're using an extra array of constant size(i.e. 6) & two extra variables.
*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
    int res = -1, mx = -1;
    vector<int> f(6, 0);                    //Initialised an array with size 6 i.e. [0,5], & each element equal to 0
    
    for (int x : arr)                       //For each element in array 'arr'                           
        ++f[x];                         
    
    for (int i = 0; i < 5; ++i) {
        if (f[i] > mx) {
            mx = f[i];                      //Whenever a bird with more frequency is encountered we update 'mx'
            res = i;                        //and 'res' according to it.
        }
    }
    
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(arr_count);/*
    * Suggested Reading : STL in C++
    * The basic idea here is that we have to count the frequency of occurance of each bird.
    * There are only 5 kinds of birds so we use an array of size 6 initialised with 0s.
    * First we calculate the frequency of each bird, after that we find the bird with highest frequency.
    * Time Complexity : O(n)
    * Space Complexity : O(1), since we're using an extra array of constant size(i.e. 6) & two extra variables.
*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
    int res = -1, mx = -1;
    vector<int> f(6, 0);                    //Initialised an array with size 6 i.e. [0,5], & each element equal to 0
    
    for (int x : arr)                       //For each element in array 'arr'                           
        ++f[x];                         
    
    for (int i = 1; i <= 5; ++i) {
        if (f[i] > mx) {
            mx = f[i];                      //Whenever a bird with more frequency is encountered we update 'mx'
            res = i;                        //and 'res' according to it.
        }
    }
    
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

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


    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

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

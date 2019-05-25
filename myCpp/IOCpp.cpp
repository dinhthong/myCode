#include <bits/stdc++.h>

using namespace std;

void replace_all(string& str, const string& from, const string& to)
{
    size_t pos = 0;
    while((pos = str.find(from, pos)) != string::npos)
    {
        str.replace(pos, from.length(), to);
        pos += to.length();
    }
}

int main()
{
    ifstream in;
    ofstream out;
    char c;
    string str;

    in.open("proj5_3_input.txt");
    while(in.get(c))
        str.push_back(c);
    in.close();

    replace_all(str, "C ", "C++ ");

    out.open("proj5_3_output.txt");
    out << str;
    out.close();

    return 0;
  }

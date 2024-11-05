#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void rotateClockwise(string &s);
void rotateAntiClockwise(string &s);
int main()
{
    string s;
    cout << "Enter a string" << endl;
    getline(cin, s);

    string s2;
    cout << "Enter either clockwise string or anticlockwise string " << endl;
    getline(cin, s2);
    int n;
    cout << "Enter no of times you rotated" << endl;
    cin >> n;

    string clockwise = s, anticlockwise = s;
    for (int i = 0; i < n; i++)
    {
        rotateClockwise(clockwise);
    }
    if (clockwise == s2)
    {
        cout << "String matched in clockwise orientation" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        rotateAntiClockwise(anticlockwise);
    }
    if (anticlockwise == s2)
    {
        cout << "String matched in anticlockwise orientation" << endl;
        return 0;
    }

    cout<<"String not matched"<<endl;
    return 1;
}

void rotateClockwise(string &s)
{
    char c = s[s.size() - 1];
    int index = s.size() - 2;
    while (index >= 0)
    {
        s[index + 1] = s[index];
        index--;
    }
    s[0] = c;
}

void rotateAntiClockwise(string &s)
{
    char c = s[0];
    int index = 1;
    while (index <= s.size() - 1)
    {
        s[index - 1] = s[index];
        index++;
    }
    s[s.size() - 1] = c;
}
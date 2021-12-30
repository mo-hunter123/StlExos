#include <iostream>
#include <list>
#include <deque>
#include <sstream>
#include <algorithm>
#include <string>
#include <stack>
#include <functional>
using namespace std; 

void exo1_qst1(const string& str) {
    
    deque <string> dStrs;
    list <string> lStrs; 

    stringstream ss(str); 
    string mot; 

    while (ss >> mot)
        dStrs.push_back(mot); 

    while (!dStrs.empty())
    {
        lStrs.push_back(dStrs.front()); 
        dStrs.pop_front(); 
    }
    
    for (auto l : lStrs) {
        cout << l << endl; 
    }
    cout << endl;

    auto it1 = lStrs.begin();
    auto it2 = lStrs.end();

    lStrs.sort(); 
    
    for (auto l : lStrs) {
        cout << l << endl;
    }
}



bool check_equals(char a, char b) {
    return a == b;
}

template <typename T>
bool exo1_qst2(const string& str, function <bool(T, T)> func) {
    stack <T> s;
    bool isPalindrome = true;

    // reversing a string using the stack 

    for (int i = 0; i < str.length(); i++) {
        s.push(str.at(i)); 
    }
    // we will printing the reversed string but while we are printig we have to check the palindrome 
    // callback function 

    int i = 0; 
    while (!s.empty()) {
        cout << s.top(); 
        if (!func(s.top(), str.at(i)))
            isPalindrome = false;
        s.pop();
        i++; 
    }
    return isPalindrome; 
}

int main()
{
    string str = "hello olleh as"; 
    
    exo1_qst1(str);

    if (exo1_qst2<char>(str, &check_equals))
        cout << "\nIs Palindrome \n"; 

    else 
        cout << "\nnot a Palindrome \n";
}
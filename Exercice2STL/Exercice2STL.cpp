#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <vector>
using namespace std; 




int main()
{
    list <string> strList;
    strList.push_back("Meoat1");
    strList.push_back("Muot2");
    strList.push_back("Moiit3");
    strList.push_back("Maeot4");
    strList.push_back("Moyut5");
    strList.push_back("Mote6po");
    strList.push_back("Motqwe7");

    string str234 = "hello"; 
    
    // transformer les voyelles vers *
    transform(strList.begin(), strList.end(), strList.begin(), [](string& str) {
        string he = "";
        for (int i = 0; i < str.size(); i++) {

            if (str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o'
                || str.at(i) == 'u' || str.at(i) == 'y')
                he += '*';
            else
                he += str.at(i);
        }

        return he;
        });


    // majuscule 
    transform(strList.begin(), strList.end(), strList.begin(), [](string& str) {
        transform(str.begin(), str.end(), str.begin(), [](char& c) {
            return toupper(c);
            });
        return str; 
        });



        
    for (string c : strList) {
        std::cout << c << endl; 
    }
    std::cout << endl; 

}

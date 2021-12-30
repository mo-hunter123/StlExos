#include <iostream>
#include "Personne.h"
#include <unordered_map>
using namespace std; 

void printUnMuMap(unordered_multimap <string, Personne*> map) {
    auto it = map.begin(); 
    for (; it != map.end(); ++it) {
        cout << "< " << it->first << ", ";
        it->second->print(); 
        cout << " >" << endl; 

    }
}


int main()
{
    unordered_multimap <string, Personne*> Map; 

    Map.insert(make_pair("moh", new Personne("moh", "add1", "098")));
    Map.insert(make_pair("use", new Personne("use", "add2", "018")));
    Map.insert(make_pair("uti", new Personne("uti", "add3", "038")));
    Map.insert(make_pair("oka", new Personne("oka", "add4", "058")));
    Map.insert(make_pair("moh", new Personne("moh", "add5", "1298")));
    Map.insert(make_pair("use", new Personne("use", "add6", "098")));
    Map.insert(make_pair("moh", new Personne("moh", "add1", "098")));
    printUnMuMap(Map);


    auto it = Map.begin(); 
    for (; it != Map.end(); ++it) {
        auto it2 = it++;
        it--; 

        for (; it2 != Map.end(); ++it2) {
            if (it->first > it2->first) {
                swap(it->first, it2->first);
                swap(it->second, it2->second);
            }
        }

    }

    cout << "\n----------------\n"; 
    printUnMuMap(Map); 
}

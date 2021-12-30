#pragma once
#include <string>
#include <iostream>
#include <unordered_map>


using namespace std; 

class Personne
{
private: 
	string nom; 
	string addresse;
	string numTele; 

public: 
	Personne(string nom, string add, string num) {
		this->nom = nom; 
		this->addresse = add; 
		this->numTele = num; 
	}

	void print() const {
		cout << this->nom << ", " << this->addresse << ", " << this->numTele;
	}

};


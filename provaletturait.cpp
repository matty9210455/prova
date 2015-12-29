#include<iostream>
#include<fstream>
#include<vector>
#include<stdlib.h>
#include<string>

using namespace std;

int main (int argc, char* argv[]){

    vector<int> iteration;
    
    //iterazioni

    int value;

    //apertura e controllo file
    ifstream f("prova.txt");
    string s;
    if(!f){//check file giusto
            cout<<"file non esiste"<<endl;
            return 0;
    }
 char virgol(',');

    //numero iterazioni
    getline(f,s);
    for(string::iterator it=s.begin();it<s.end();it++){//iterazioni
            value=atoi(&(*it));
            iteration.push_back(value);
			while((*it)!=','&& it<s.end()) it++;
    
	}
	
	for(int i=0; i<iteration.size();i++)
		cout<<iteration[i]<<" ";
		cout<<endl;
		return 0;
	}

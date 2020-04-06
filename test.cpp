#include <iostream>
#include <regex>
#include <string>
#include <fstream>
#include <sstream>
 
  using namespace std;
 	
	ifstream plik1;
    ofstream plik2;
 	
 	string input;
    regex regularne("[0-9]{2}-[0-9]{3}");
void open()
{
    plik1.open("C:\\Users\\Eryk\\Desktop\\files\\tenteges\\x.txt");
    plik2.open("C:\\Users\\Eryk\\Desktop\\files\\tenteges\\y.txt");
}

void check()
	{

    while(!plik1.eof()){ //czyta plik linia po linii
        getline(plik1,input); //czyta napis z pliku
                if (regex_match(input,regularne)) //back po podstawieniu zmniejszy siê o 1 z ostatniej na przedostatni¹ itd.
                	{
        				plik2 << input << "\n";
					}
				else
					{
        				//;
					}
				
					
					   
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void close()
{
    plik1.close();
    plik2.close();
}
int main() {
	open();
	check();
	close();
    return 0;
}

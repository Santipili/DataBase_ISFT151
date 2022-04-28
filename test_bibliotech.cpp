#include <iostream>
#include <map>
#include <fstream>
using namespace std;

class book{
    private:
       //string path;
    public:
        string title;
        string author;
        string topic;
        book();
        ~book();       
};

int main() {
    map<int, book> library;

    book* new_book;
    new_book = new book;
    char coma;
    int* key_test;

    //-----Leo un archivo y creo en un mapa-------
    ifstream book_list;
    book_list.open("archivo.csv");
    book_list >> *key_test; //esto es para el mapa
    book_list.get(coma);
    getline(book_list, new_book->title, ',');
    getline(book_list, new_book->author, ',');
    getline(book_list, new_book->topic, ',');
 //  book_list.getline(new_book->topic, ',');    //por que asi no me lo toma???
    //MAPA
    library.insert(make_pair(*key_test, *new_book));

    book_list.close();

    //-----Guardo el mapa en un archivo--------
    ofstream book_listout;
    book_listout.open("archivo.csv", ios_base::app);
    
    map<int, book>::iterator it = library.begin();
    for (it=library.begin(); it!=library.end(); ++it){
        book_listout << it->first << "," << it->second.title << "," << it->second.author << "," << it->second.topic << "\n";
    }

    book_listout.close();
    

    
    return 0;
}
//
// Created by utec on 13/11/19.
//

#include "miscelanius.h"
#include "claseBook.h"


claseBook::claseBook(t_texto name, t_numero numero, t_texto isbn) :
    claseVolumen(name,numero),isbn_code{isbn}
    {}

void claseBook::show() {
    cout<<"Nombre :"<<name<<endl;
    cout<<"Numero :"<<numero<<endl;
    cout<<"Codigo ISBN :"<<isbn_code<<endl;
}

//
// Created by utec on 13/11/19.
//

#include "miscelanius.h"
#include "claseNewPaper.h"

claseNewPaper::claseNewPaper(t_texto name, t_numero numero, t_texto issn):
    claseVolumen(name,numero),issn_code{issn}
    {}

void claseNewPaper::show() {
    cout<<"Nombre :"<<name<<endl;
    cout<<"Numero :"<<numero<<endl;
    cout<<"Codigo ISBN :"<<issn_code<<endl;

}

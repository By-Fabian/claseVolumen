//
// Created by utec on 13/11/19.
//

#ifndef CLASEVOLUMEN_CLASEBOOK_H
#define CLASEVOLUMEN_CLASEBOOK_H

#include "miscelanius.h"
#include "claseVolumen.h"

class claseBook: public claseVolumen {
private:
    t_texto isbn_code;
public:
    claseBook(t_texto name,t_numero numero,t_texto isbn);
    void show() override ;
};


#endif //CLASEVOLUMEN_CLASEBOOK_H

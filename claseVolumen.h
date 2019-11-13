//
// Created by utec on 13/11/19.
//

#ifndef CLASEVOLUMEN_CLASEVOLUMEN_H
#define CLASEVOLUMEN_CLASEVOLUMEN_H


#include "miscelanius.h"

class claseVolumen {
protected:
    t_texto name;
    t_numero numero;
public:
    claseVolumen(t_texto name, t_numero numero);
    virtual void show()=0;
    ~claseVolumen()= default;
};

#endif //CLASEVOLUMEN_CLASEVOLUMEN_H

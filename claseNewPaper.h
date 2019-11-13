//
// Created by utec on 13/11/19.
//

#ifndef CLASEVOLUMEN_CLASENEWPAPER_H
#define CLASEVOLUMEN_CLASENEWPAPER_H

#include "miscelanius.h"
#include "claseVolumen.h"

class claseNewPaper:public  claseVolumen{
private:
    t_texto issn_code;
public:
    claseNewPaper(t_texto name,t_numero numero,t_texto issn);
    void show() override ;

};


#endif //CLASEVOLUMEN_CLASENEWPAPER_H

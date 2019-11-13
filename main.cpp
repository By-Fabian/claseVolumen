#include "miscelanius.h"
#include "claseVolumen.h"
#include "claseBook.h"
#include "claseNewPaper.h"

int main() {
    claseNewPaper N1 ("El peruano",100,"ABC123");
    claseBook B1 ("Como aprender a programr en 1 minuto",1,"XYZ321");

    vector<claseVolumen*> vectorVolumenes = {&N1,&B1};

    for (auto f: vectorVolumenes) {
        f->show();
        cout<<endl;
    }
    return 0;
}
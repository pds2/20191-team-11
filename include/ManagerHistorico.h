#ifndef MAN_HISTORICO
#define MAN_HISTORICO

#include "../include/Manager.h"
#include "../include/Historico.h"
#include <map>

class ManagerHistorico : public Manager<Historico> {
    public:
        ManagerHistorico();
        ManagerHistorico(string,map<int,Historico*>);
        ~ManagerHistorico();
    };

#endif
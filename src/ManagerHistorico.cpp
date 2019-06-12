#include "../include/ManagerHistorico.h"
#include "../include/Manager.h"

ManagerHistorico::ManagerHistorico() : Manager<Historico>() {}

ManagerHistorico::ManagerHistorico(string nome,map<int,Historico*> funcionarios) : Manager<Historico>(nome,funcionarios){}

ManagerHistorico::~ManagerHistorico(){}
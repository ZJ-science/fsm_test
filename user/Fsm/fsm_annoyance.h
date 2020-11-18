#ifndef _FSM_ANNOYANCE_H_
#define _FSM_ANNOYANCE_H_

#include "controlFSM.h"

class Fsm_annoyance:public Fsm_list{
public:
   // Fsm_annoyance(string str):Fsm_list.s(str){}
    int enter() override;
    int transition() override;
    void run() override;
    int quit() override;
private:
    string s; //私有
};








#endif

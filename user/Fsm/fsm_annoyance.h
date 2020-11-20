#ifndef _FSM_ANNOYANCE_H_
#define _FSM_ANNOYANCE_H_

//#include "controlFSM.h"
#include"Fsm_states.h"

class Fsm_annoyance:public Fsm_list{
public:
  Fsm_annoyance():s("annoyance"),time(1.47){}
    int enter() override;
    int quit() override;
    void run() override;
    int transition() override;
    
    
private:
    string s; //私有
    float time;
};








#endif

#ifndef _FSM_REPRESSION_H_
#define _FSM_REPRESSION_H_

//#include "controlFSM.h"
#include"Fsm_states.h"

class Fsm_repression:public Fsm_list{
public:
  Fsm_repression():s("repression"),time(0.123){}
  int enter() override;
  int quit() override;
  void run() override;
  int transition() override;
private:
  string s;
  float time;
};








#endif

#ifndef _FSM_HAPPY_H_
#define _FSM_HAPPY_H_

//#include "controlFSM.h"
#include"Fsm_states.h"

class Fsm_happy:public Fsm_list{
public:
  Fsm_happy():s("happy"),time(0.789){}
  int enter() override;
  int quit() override;
  void run() override;
  int transition() override;
private:
  string s;
  float time;
};








#endif

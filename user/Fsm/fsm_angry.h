#ifndef _FSM_ANGRY_H_
#define _FSM_ANGRY_H_

//#include "controlFSM.h"
#include"Fsm_states.h"


class Fsm_angry:public Fsm_list{
public:
  Fsm_angry():s("angry"),time(0.56){}
  int enter() override;
  int transition() override;
  void run() override;
  int quit() override;
private:
  string s;
  float time;
};





#endif

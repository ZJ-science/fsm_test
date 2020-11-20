#ifndef _FSM_SAD_H_
#define _FSM_SAD_H_
//#include "controlFSM.h"
#include"Fsm_states.h"

class Fsm_sad:public Fsm_list{
public:
  Fsm_sad():s("sad"),time(1.23){}
  int enter() override;
  int quit() override;
  void run() override;
  int transition() override;
private:
  string s;
  float time;
};





#endif

#ifndef _CONTROL_FSM_H_
#define _CONTROL_FSM_H_

#include<iostream>
#include "Fsm_states.h"
#include "fsm_angry.h"
#include "fsm_annoyance.h"
#include "fsm_happy.h"
#include "fsm_repression.h"
#include "fsm_sad.h"

using namespace std;

enum class emotion {//心情  带作用域限制的枚举
  HAPPY,
  ANGRY,
  ANNOYANCE,
  REPRESSION,
  SAD
};

struct fsm_zj_lists {
  Fsm_list* fsm_zj;
  Fsm_angry* _angry;
  Fsm_annoyance* _annoyance;
  Fsm_happy* _happy;
  Fsm_repression* _repression;
  Fsm_sad* _sad;
};


class control_fsm {
public:
    control_fsm();
    void run();
    Fsm_list* currentState;
    Fsm_list* nextState;
    Fsm_list* getNextState(char name);
    fsm_zj_lists _lists;
    control_fsm* code_zj;
    
};










#endif



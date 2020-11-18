#ifndef _CONTROL_FSM_H_
#define _CONTROL_FSM_H_

#include<iostream>

using namespace std;

enum class emotion {//心情
  HAPPY,
  ANGRY,
  ANNOYANCE,
  REPRESSION,
  SAD
};

class fsm_list{
public:
    fsm_list(string str){this->s = str;}
    virtual enter() = 0;
    virtual transition() = 0;
    virtual run() = 0;
    virtual quit() = 0;
    
    
private:
    string s;
    
    
};










#endif



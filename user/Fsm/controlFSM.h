#ifndef _CONTROL_FSM_H_
#define _CONTROL_FSM_H_

#include<iostream>

using namespace std;

enum class emotion {//心情  带作用域限制的枚举
  HAPPY,
  ANGRY,
  ANNOYANCE,
  REPRESSION,
  SAD
};

class fsm_list{
public:
    fsm_list(string str){this->s = str;}
    virtual int enter() = 0;
    virtual int transition() = 0;
    virtual void run() = 0;
    virtual int quit() = 0;
    
    
private:
    string s;
    
    
};

class control_fsm {
public:
    control_fsm();
    void run();
    
};










#endif



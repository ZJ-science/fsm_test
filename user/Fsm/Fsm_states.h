#ifndef _FSM_STATES_H_
#define _FSM_STATES_H_

#include<iostream>
using namespace std;


class Fsm_list{
public:
    //Fsm_list(string str):s(str){};
    virtual int enter() = 0;
    virtual int transition() = 0;
    virtual void run() = 0;
    virtual int quit() = 0;
    
    
private:
    string s;
    
    
};





#endif

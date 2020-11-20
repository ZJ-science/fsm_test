#include"controlFSM.h"


control_fsm::control_fsm()
{
  
   //cout<<"control_fsm"<<endl;
  _lists.fsm_zj = nullptr;
  _lists._happy= new Fsm_happy;
  _lists._angry = new Fsm_angry;
  _lists._annoyance = new Fsm_annoyance;
  _lists._repression = new Fsm_repression;
  _lists._sad = new Fsm_sad;
  
   this->currentState = _lists._happy;
   this->nextState = _lists._happy;
   /*cout<<"currentState:"<<currentState<<endl;
   cout<<"nextState:"<<nextState<<endl;
   cout<<"_list.fsm_zj:"<<_lists.fsm_zj<<endl;*/
}

void control_fsm::run()
{
  
  
  if(this->currentState!=this->nextState)
  {
    //currentState->enter();
    currentState->quit();
    currentState->transition();
    currentState = nextState;
  }
  else//正常运行
  {
    currentState->enter();
    currentState->run();
  }
  
  //cout<<"control_fsm::run()"<<endl;
}

Fsm_list* control_fsm::getNextState(char name)
{
  //cout<<"456"<<endl;
  switch (name){
     case 'E':
      return _lists._angry;
      break;
     case 'D':
      return _lists._annoyance;
      break;
     case 'A':
       return _lists._happy;
       break;
     case 'C':
       return _lists._repression;
       break;
     case 'B':
       return _lists._sad;
       break;
     default:
       return _lists._happy;
       break;
  }
  
}




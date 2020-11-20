#include "../include/main_helper.h"
#include<iostream>
#include <thread>
#include<mutex>//互斥锁


void task_change_msg()
{
  mutex m;
  char ss;
  for(;;)
  {
      m.lock();
      cout<<"请选择：A.开心 B.伤心 C.压抑 D.烦恼 E.愤怒"<<endl;
      //getline(cin,ss);
      cin>>ss;
      cout<<ss<<endl;
      code_zj->nextState=code_zj->getNextState(ss);
      code_zj->run();
      m.unlock();
  }

}

void task_fsm()
{
  //code_zj = new control_fsm;
  /*for(;;)
  {
    code_zj->run();
  }*/
  
}


int main_helper()
{
  
  control_fsm zj;
  code_zj = new control_fsm;
  thread task_1(task_change_msg);  
  thread task_2(task_fsm);//两个线程，目前这里有问题
  task_1.join();
  task_2.join();
  //zj.run();
    
  return 0;
}



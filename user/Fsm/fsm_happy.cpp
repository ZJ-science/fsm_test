#include "fsm_happy.h"

int Fsm_happy::enter()
{
  cout<<"进入开心模式～"<<endl;
  return 0;
}

int Fsm_happy::quit()
{
  cout<<"离开开心模式～"<<endl;
  return 0;
}


void Fsm_happy::run()
{
   cout<<"我现在开心了"<<endl;
}

int Fsm_happy::transition()
{
  return 0;
}


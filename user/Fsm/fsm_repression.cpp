#include"fsm_repression.h"

int Fsm_repression::enter()
{
  cout<<"进入了压抑模式～"<<endl;
  return 0;
}

int Fsm_repression::quit()
{
  cout<<"离开了压抑模式～"<<endl;
  return 0;
}

void Fsm_repression::run()
{
  cout<<"我已经压抑了："<<endl;
}

int Fsm_repression::transition()
{
  return 0;
}









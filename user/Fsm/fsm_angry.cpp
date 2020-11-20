#include "fsm_angry.h"

int Fsm_angry::enter()
{
  cout<<"进入生气模式～"<<endl;
  return 0;
}

int Fsm_angry::quit()
{
  cout<<"离开生气模式～"<<endl;
  return 0;
}

void Fsm_angry::run()
{
  cout<<"我现在生气了"<<endl;

}

int Fsm_angry::transition()
{
  return 0;
}





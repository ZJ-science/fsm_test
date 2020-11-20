#include"fsm_sad.h"

int Fsm_sad::enter()
{
  cout<<"进入了伤心模式～"<<endl;
  return 0;
}

int Fsm_sad::quit()
{
  cout<<"离开了伤心模式～"<<endl;
  return 0;
}

void Fsm_sad::run()
{
  cout<<"我现在已经伤心了："<<endl;
}

int Fsm_sad::transition()//过渡
{
  return 0;
}





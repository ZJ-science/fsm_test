#include"fsm_annoyance.h"

int Fsm_annoyance::enter()
{
  cout<<"进入烦恼模式～"<<endl;
  
  return 0;
}

void Fsm_annoyance::run()
{
   cout<<"我现在的心情是烦恼～"<<endl;
}

int Fsm_annoyance::quit()
{
  cout<<"离开烦恼模式～"<<endl;
  return 0;
}

int Fsm_annoyance::transition()
{/*
  switch ():
    case */
  return 0;
}




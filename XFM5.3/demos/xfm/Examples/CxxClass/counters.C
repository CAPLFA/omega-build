#include "Counter.h"
#include "RC.h"

main(int argc, char** argv)
{
  Widget toplevel = FmAppInitialize(0, "Counters", 0, 0, &argc, argv, 0, 0, 0);

  RC rc("rc", toplevel);
  Counter c1("c1", rc);
  Counter c2("c2", rc);
  
  
  c1.setLabel("Green");
  c1.setOrigin(10); // Green starts with a bonus of ten points
  c1.reset();
  
  c2.setLabel("Blue");

  c1.show();
  c2.show();
  rc.show();
  FmShowWidget(toplevel);

  FmLoop();
}

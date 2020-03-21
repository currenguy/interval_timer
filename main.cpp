#include "WorkoutA.h"

int main(int argc, char** argv)
{
  WorkoutA* a = new WorkoutA();
  a->startBeginnerWorkout();
  delete a;
  return 0;
}

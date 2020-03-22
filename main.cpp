#include "WorkoutA.h"
#include "WorkoutB.h"

int main(int argc, char** argv)
{
  char type = '-';
  char difficulty = '-';
  WorkoutA* a = new WorkoutA();
  WorkoutB* b = new WorkoutB();

  while (type != 'A' && type != 'B')
  {
    cout << "Workout [A] or Workout [B]?: ";
    cin >> type;
    type = toupper(type);
  }
  while (difficulty != 'A' && difficulty != 'B')
  {
    cout << "Beginner [B] or Advanced [A]?: ";
    cin >> difficulty;
    difficulty = toupper(difficulty);
  }

  if (type == 'A')
  {
    if (difficulty == 'B')
    {
      a->startBeginnerWorkout();
    }
    else
    {
      a->startAdvancedWorkout();
    }
  }
  else
  {
    if (difficulty == 'B')
    {
      b->startBeginnerWorkout();
    }
    else
    {
      b->startAdvancedWorkout();
    }
  }

  cout << endl << "WORKOUT COMPLETED" << endl << endl;
  delete a;
  delete b;

  return 0;
}

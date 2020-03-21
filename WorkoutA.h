#ifndef WORKOUTA_H
#define WORKOUTA_H

#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

class WorkoutA
{
  public:
    WorkoutA();
    ~WorkoutA();
    string getNumber(int n);
    void startBeginnerWorkout();
    void startAdvancedWorkout();

  private:
    string beginnerExercises[16];
    string advancedExercises[16];
};

#endif

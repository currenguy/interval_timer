#ifndef WORKOUTB_H
#define WORKOUTB_H

#include <iostream>
#include <chrono>
#include <thread>
#include <cctype>
using namespace std;

class WorkoutB
{
  public:
    WorkoutB();
    ~WorkoutB();
    string getNumber(int n);
    void startBeginnerWorkout();
    void startAdvancedWorkout();

  private:
    string beginnerExercises[16];
    string advancedExercises[16];
};

#endif

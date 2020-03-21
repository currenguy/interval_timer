#include "WorkoutA.h"

WorkoutA::WorkoutA()
{
  //Setting Beginner Exercise List
  beginnerExercises[0] = "Alternating Single Leg Box Squats (High Box)";
  beginnerExercises[1] = "1 1/2 Bottomed Out Squats";
  beginnerExercises[2] = "Jump Squats";
  beginnerExercises[3] = "Power Pushaways";
  beginnerExercises[4] = "Knee Rotational Pushups";
  beginnerExercises[5] = "Knee Cobra Pushups";
  beginnerExercises[6] = "Alternating Heel Touch Squats (Kickstand)";
  beginnerExercises[7] = "Alternating Sprinter Lunges";
  beginnerExercises[8] = "Pylo Sprinter Lunges";
  beginnerExercises[9] = "Seated Pullups";
  beginnerExercises[10] = "Bodyweight Sliding Pulldowns";
  beginnerExercises[11] = "Inverted Chin Curls";
  beginnerExercises[12] = "Reverse Corkscrews";
  beginnerExercises[13] = "Black Widow Knee Slides";
  beginnerExercises[14] = "Levitation Crunches";
  beginnerExercises[15] = "Angels and Devils";

  //Setting Advanced Exercise List
  advancedExercises[0] = "Alternating Single Leg Box Squats (Low Box)";
  advancedExercises[1] = "1 1/2 Bottomed Out Squats";
  advancedExercises[2] = "Jump Squats";
  advancedExercises[3] = "Handstand Pushups";
  advancedExercises[4] = "Rotational Pushups";
  advancedExercises[5] = "Cobra Pushups";
  advancedExercises[6] = "Alternating Heel Touch Squats";
  advancedExercises[7] = "Alternating Sprinter Lunges";
  advancedExercises[8] = "Pylo Sprinter Lunges";
  advancedExercises[9] = "Pullups";
  advancedExercises[10] = "Human Pullovers";
  advancedExercises[11] = "Inverted Chin Curls";
  advancedExercises[12] = "Reverse Corkscrews";
  advancedExercises[13] = "Black Widow Knee Slides";
  advancedExercises[14] = "Levitation Crunches";
  advancedExercises[15] = "Angels and Devils";
}

WorkoutA::~WorkoutA()
{
  cout << "WORKOUT COMPLETED" << endl;
}

string WorkoutA::getNumber(int n)
{
  string s = "";
  switch(n)
  {
    case 0:
      s += " _______ \n";
      s += "|  _    |\n";
      s += "| | |   |\n";
      s += "| | |   |\n";
      s += "| |_|   |\n";
      s += "|       |\n";
      s += "|_______|\n";
      break;
    case 1:
      s += " ____ \n";
      s += "|    |\n";
      s += " |   |\n";
      s += " |   |\n";
      s += " |   |\n";
      s += " |   |\n";
      s += " |___|\n";
      break;
    case 2:
      s += " _______ \n";
      s += "|       |\n";
      s += "|____   |\n";
      s += " ____|  |\n";
      s += "| ______|\n";
      s += "| |_____ \n";
      s += "|_______|\n";

      break;
    case 3:
      s += " _______ \n";
      s += "|       |\n";
      s += "|___    |\n";
      s += " ___|   |\n";
      s += "|___    |\n";
      s += " ___|   |\n";
      s += "|_______|\n";
      break;
    case 4:
      s += " _   ___ \n";
      s += "| | |   |\n";
      s += "| |_|   |\n";
      s += "|       |\n";
      s += "|___    |\n";
      s += "    |   |\n";
      s += "    |___|\n";
      break;
    case 5:
      s += " _______ \n";
      s += "|       |\n";
      s += "|   ____|\n";
      s += "|  |____ \n";
      s += "|_____  |\n";
      s += " _____| |\n";
      s += "|_______|\n";
      break;
    case 6:
      s += " ___     \n";
      s += "|   |    \n";
      s += "|   |___ \n";
      s += "|    _  |\n";
      s += "|   | | |\n";
      s += "|   |_| |\n";
      s += "|_______|\n";
      break;
    case 7:
      s += " _______ \n";
      s += "|       |\n";
      s += "|___    |\n";
      s += "    |   |\n";
      s += "    |   |\n";
      s += "    |   |\n";
      s += "    |___|\n";
      break;
    case 8:
      s += "  _____  \n";
      s += " |  _  | \n";
      s += " | |_| | \n";
      s += "|   _   |\n";
      s += "|  | |  |\n";
      s += "|  |_|  |\n";
      s += "|_______|\n";
      break;
    case 9:
      s += " _______ \n";
      s += "|  _    |\n";
      s += "| | |   |\n";
      s += "| |_|   |\n";
      s += "|___    |\n";
      s += "    |   |\n";
      s += "    |___|\n";
      break;
    case 10:
      s += " ____   _______ \n";
      s += "|    | |  _    |\n";
      s += " |   | | | |   |\n";
      s += " |   | | | |   |\n";
      s += " |   | | |_|   |\n";
      s += " |   | |       |\n";
      s += " |___| |_______|\n";
      break;
    case 11:
      s += " ____   ____ \n";
      s += "|    | |    |\n";
      s += " |   |  |   |\n";
      s += " |   |  |   |\n";
      s += " |   |  |   |\n";
      s += " |   |  |   |\n";
      s += " |___|  |___|\n";
      break;
    case 12:
      s += " ____   _______ \n";
      s += "|    | |       |\n";
      s += " |   | |____   |\n";
      s += " |   |  ____|  |\n";
      s += " |   | | ______|\n";
      s += " |   | | |_____ \n";
      s += " |___| |_______|\n";
      break;
    case 13:
      s += " ____   _______ \n";
      s += "|    | |       |\n";
      s += " |   | |___    |\n";
      s += " |   |  ___|   |\n";
      s += " |   | |___    |\n";
      s += " |   |  ___|   |\n";
      s += " |___| |_______|\n";
      break;
    case 14:
      s += " ____   _   ___ \n";
      s += "|    | | | |   |\n";
      s += " |   | | |_|   |\n";
      s += " |   | |       |\n";
      s += " |   | |___    |\n";
      s += " |   |     |   |\n";
      s += " |___|     |___|\n";
      break;
    case 15:
      s += " ____   _______ \n";
      s += "|    | |       |\n";
      s += " |   | |   ____|\n";
      s += " |   | |  |____ \n";
      s += " |   | |_____  |\n";
      s += " |   |  _____| |\n";
      s += " |___| |_______|\n";
      break;
    case 16:
      s += " ____   ___     \n";
      s += "|    | |   |    \n";
      s += " |   | |   |___ \n";
      s += " |   | |    _  |\n";
      s += " |   | |   | | |\n";
      s += " |   | |   |_| |\n";
      s += " |___| |_______|\n";
      break;
    case 17:
      s += " ____   _______ \n";
      s += "|    | |       |\n";
      s += " |   | |___    |\n";
      s += " |   |     |   |\n";
      s += " |   |     |   |\n";
      s += " |   |     |   |\n";
      s += " |___|     |___|\n";
      break;
    case 18:
      s += " ____    _____  \n";
      s += "|    |  |  _  | \n";
      s += " |   |  | |_| | \n";
      s += " |   | |   _   |\n";
      s += " |   | |  | |  |\n";
      s += " |   | |  |_|  |\n";
      s += " |___| |_______|\n";
      break;
    case 19:
      s += " ____   _______ \n";
      s += "|    | |  _    |\n";
      s += " |   | | | |   |\n";
      s += " |   | | |_|   |\n";
      s += " |   | |___    |\n";
      s += " |   |     |   |\n";
      s += " |___|     |___|\n";
      break;
    case 20:
      break;
    case 21:
      break;
    case 22:
      break;
    case 23:
      break;
    case 24:
      break;
    case 25:
      break;
    case 26:
      break;
    case 27:
      break;
    case 28:
      break;
    case 29:
      break;
    case 30:
      break;
    case 31:
      break;
    case 32:
      break;
    case 33:
      break;
    case 34:
      break;
    case 35:
      break;
    case 36:
      break;
    case 37:
      break;
    case 38:
      break;
    case 39:
      break;
    case 40:
      break;
    case 41:
      break;
    case 42:
      break;
    case 43:
      break;
    case 44:
      break;
    case 45:
      break;
    case 46:
      break;
    case 47:
      break;
    case 48:
      break;
    case 49:
      break;
    case 50:
      break;
    case 51:
      break;
    case 52:
      break;
    case 53:
      break;
    case 54:
      break;
    case 55:
      break;
    case 56:
      break;
    case 57:
      break;
    case 58:
      break;
    case 59:
      break;
    default:
      break;
  }
  return s;
}

void WorkoutA::startBeginnerWorkout()
{
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\nSTARTING WORKOUT\n\n\n" << endl;
  std::this_thread::sleep_for(2s);
  for (int i = 0; i < 16; ++i)
  {
    for (int j = 59; j > -1; --j)
    {
      cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n" << this->getNumber(j) << endl;
      cout << beginnerExercises[i] << endl;
      if (i < 15)
      {
        cout << "\tUp Next: " << beginnerExercises[i+1] << endl;
      }
      else
      {
        cout << "\tLast Workout!" << endl;
      }
      std::this_thread::sleep_for(.1s);
    }
  }
}

void WorkoutA::startAdvancedWorkout()
{

}

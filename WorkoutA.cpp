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
      s += " _______  _______ \n";
      s += "|       ||  _    |\n";
      s += "|____   || | |   |\n";
      s += " ____|  || | |   |\n";
      s += "| ______|| |_|   |\n";
      s += "| |_____ |       |\n";
      s += "|_______||_______|\n";
      break;
    case 21:
      s += " _______  ____ \n";
      s += "|       ||    |\n";
      s += "|____   | |   |\n";
      s += " ____|  | |   |\n";
      s += "| ______| |   |\n";
      s += "| |_____  |   |\n";
      s += "|_______| |___|\n";
      break;
    case 22:
      s += " _______  _______ \n";
      s += "|       ||       |\n";
      s += "|____   ||____   |\n";
      s += " ____|  | ____|  |\n";
      s += "| ______|| ______|\n";
      s += "| |_____ | |_____ \n";
      s += "|_______||_______|\n";
      break;
    case 23:
      s += " _______  _______ \n";
      s += "|       ||       |\n";
      s += "|____   ||___    |\n";
      s += " ____|  | ___|   |\n";
      s += "| ______||___    |\n";
      s += "| |_____  ___|   |\n";
      s += "|_______||_______|\n";
      break;
    case 24:
      s += " _______  _   ___ \n";
      s += "|       || | |   |\n";
      s += "|____   || |_|   |\n";
      s += " ____|  ||       |\n";
      s += "| ______||___    |\n";
      s += "| |_____     |   |\n";
      s += "|_______|    |___|\n";
      break;
    case 25:
      s += " _______  _______ \n";
      s += "|       ||       |\n";
      s += "|____   ||   ____|\n";
      s += " ____|  ||  |____ \n";
      s += "| ______||_____  |\n";
      s += "| |_____  _____| |\n";
      s += "|_______||_______|\n";
      break;
    case 26:
      s += " _______  ___     \n";
      s += "|       ||   |    \n";
      s += "|____   ||   |___ \n";
      s += " ____|  ||    _  |\n";
      s += "| ______||   | | |\n";
      s += "| |_____ |   |_| |\n";
      s += "|_______||_______|\n";
      break;
    case 27:
      s += " _______  _______ \n";
      s += "|       ||       |\n";
      s += "|____   ||___    |\n";
      s += " ____|  |    |   |\n";
      s += "| ______|    |   |\n";
      s += "| |_____     |   |\n";
      s += "|_______|    |___|\n";
      break;
    case 28:
      s += " _______   _____  \n";
      s += "|       | |  _  | \n";
      s += "|____   | | |_| | \n";
      s += " ____|  ||   _   |\n";
      s += "| ______||  | |  |\n";
      s += "| |_____ |  |_|  |\n";
      s += "|_______||_______|\n";
      break;
    case 29:
      s += " _______  _______ \n";
      s += "|       ||  _    |\n";
      s += "|____   || | |   |\n";
      s += " ____|  || |_|   |\n";
      s += "| ______||___    |\n";
      s += "| |_____     |   |\n";
      s += "|_______|    |___|\n";
      break;
    case 30:
      s += " _______  _______ \n";
      s += "|       ||  _    |\n";
      s += "|___    || | |   |\n";
      s += " ___|   || | |   |\n";
      s += "|___    || |_|   |\n";
      s += " ___|   ||       |\n";
      s += "|_______||_______|\n";
      break;
    case 31:
      s += " _______  ____ \n";
      s += "|       ||    |\n";
      s += "|___    | |   |\n";
      s += " ___|   | |   |\n";
      s += "|___    | |   |\n";
      s += " ___|   | |   |\n";
      s += "|_______| |___|\n";
      break;
    case 32:
      s += " _______  _______ \n";
      s += "|       ||       |\n";
      s += "|___    ||____   |\n";
      s += " ___|   | ____|  |\n";
      s += "|___    || ______|\n";
      s += " ___|   || |_____ \n";
      s += "|_______||_______|\n";
      break;
    case 33:
      s += " _______  _______ \n";
      s += "|       ||       |\n";
      s += "|___    ||___    |\n";
      s += " ___|   | ___|   |\n";
      s += "|___    ||___    |\n";
      s += " ___|   | ___|   |\n";
      s += "|_______||_______|\n";
      break;
    case 34:
      s += " _______  _   ___ \n";
      s += "|       || | |   |\n";
      s += "|___    || |_|   |\n";
      s += " ___|   ||       |\n";
      s += "|___    ||___    |\n";
      s += " ___|   |    |   |\n";
      s += "|_______|    |___|\n";
      break;
    case 35:
      s += " _______  _______ \n";
      s += "|       ||       |\n";
      s += "|___    ||   ____|\n";
      s += " ___|   ||  |____ \n";
      s += "|___    ||_____  |\n";
      s += " ___|   | _____| |\n";
      s += "|_______||_______|\n";
      break;
    case 36:
      s += " _______  ___     \n";
      s += "|       ||   |    \n";
      s += "|___    ||   |___ \n";
      s += " ___|   ||    _  |\n";
      s += "|___    ||   | | |\n";
      s += " ___|   ||   |_| |\n";
      s += "|_______||_______|\n";
      break;
    case 37:
      s += " _______  _______ \n";
      s += "|       ||       |\n";
      s += "|___    ||___    |\n";
      s += " ___|   |    |   |\n";
      s += "|___    |    |   |\n";
      s += " ___|   |    |   |\n";
      s += "|_______|    |___|\n";
      break;
    case 38:
      s += " _______   _____  \n";
      s += "|       | |  _  | \n";
      s += "|___    | | |_| | \n";
      s += " ___|   ||   _   |\n";
      s += "|___    ||  | |  |\n";
      s += " ___|   ||  |_|  |\n";
      s += "|_______||_______|\n";
      break;
    case 39:
      s += " _______  _______ \n";
      s += "|       ||  _    |\n";
      s += "|___    || | |   |\n";
      s += " ___|   || |_|   |\n";
      s += "|___    ||___    |\n";
      s += " ___|   |    |   |\n";
      s += "|_______|    |___|\n";
      break;
    case 40:
      s += " _   ___  _______ \n";
      s += "| | |   ||  _    |\n";
      s += "| |_|   || | |   |\n";
      s += "|       || | |   |\n";
      s += "|___    || |_|   |\n";
      s += "    |   ||       |\n";
      s += "    |___||_______|\n";
      break;
    case 41:
      s += " _   ___  ____ \n";
      s += "| | |   ||    |\n";
      s += "| |_|   | |   |\n";
      s += "|       | |   |\n";
      s += "|___    | |   |\n";
      s += "    |   | |   |\n";
      s += "    |___| |___|\n";
      break;
    case 42:
      s += " _   ___  _______ \n";
      s += "| | |   ||       |\n";
      s += "| |_|   ||____   |\n";
      s += "|       | ____|  |\n";
      s += "|___    || ______|\n";
      s += "    |   || |_____ \n";
      s += "    |___||_______|\n";
      break;
    case 43:
      s += " _   ___  _______ \n";
      s += "| | |   ||       |\n";
      s += "| |_|   ||___    |\n";
      s += "|       | ___|   |\n";
      s += "|___    ||___    |\n";
      s += "    |   | ___|   |\n";
      s += "    |___||_______|\n";
      break;
    case 44:
      s += " _   ___  _   ___ \n";
      s += "| | |   || | |   |\n";
      s += "| |_|   || |_|   |\n";
      s += "|       ||       |\n";
      s += "|___    ||___    |\n";
      s += "    |   |    |   |\n";
      s += "    |___|    |___|\n";
      break;
    case 45:
      s += " _   ___  _______ \n";
      s += "| | |   ||       |\n";
      s += "| |_|   ||   ____|\n";
      s += "|       ||  |____ \n";
      s += "|___    ||_____  |\n";
      s += "    |   | _____| |\n";
      s += "    |___||_______|\n";
      break;
    case 46:
      s += " _   ___  ___     \n";
      s += "| | |   ||   |    \n";
      s += "| |_|   ||   |___ \n";
      s += "|       ||    _  |\n";
      s += "|___    ||   | | |\n";
      s += "    |   ||   |_| |\n";
      s += "    |___||_______|\n";
      break;
    case 47:
      s += " _   ___  _______ \n";
      s += "| | |   ||       |\n";
      s += "| |_|   ||___    |\n";
      s += "|       |    |   |\n";
      s += "|___    |    |   |\n";
      s += "    |   |    |   |\n";
      s += "    |___|    |___|\n";
      break;
    case 48:
      s += " _   ___   _____  \n";
      s += "| | |   | |  _  | \n";
      s += "| |_|   | | |_| | \n";
      s += "|       ||   _   |\n";
      s += "|___    ||  | |  |\n";
      s += "    |   ||  |_|  |\n";
      s += "    |___||_______|\n";
      break;
    case 49:
      s += " _   ___  _______ \n";
      s += "| | |   ||  _    |\n";
      s += "| |_|   || | |   |\n";
      s += "|       || |_|   |\n";
      s += "|___    ||___    |\n";
      s += "    |   |    |   |\n";
      s += "    |___|    |___|\n";
      break;
    case 50:
      s += " _______  _______ \n";
      s += "|       ||  _    |\n";
      s += "|   ____|| | |   |\n";
      s += "|  |____ | | |   |\n";
      s += "|_____  || |_|   |\n";
      s += " _____| ||       |\n";
      s += "|_______||_______|\n";
      break;
    case 51:
      s += " _______  ____ \n";
      s += "|       ||    |\n";
      s += "|   ____| |   |\n";
      s += "|  |____  |   |\n";
      s += "|_____  | |   |\n";
      s += " _____| | |   |\n";
      s += "|_______| |___|\n";
      break;
    case 52:
      s += " _______  _______ \n";
      s += "|       ||       |\n";
      s += "|   ____||____   |\n";
      s += "|  |____  ____|  |\n";
      s += "|_____  || ______|\n";
      s += " _____| || |_____ \n";
      s += "|_______||_______|\n";
      break;
    case 53:
      s += " _______  _______ \n";
      s += "|       ||       |\n";
      s += "|   ____||___    |\n";
      s += "|  |____  ___|   |\n";
      s += "|_____  ||___    |\n";
      s += " _____| | ___|   |\n";
      s += "|_______||_______|\n";
      break;
    case 54:
      s += " _______  _   ___ \n";
      s += "|       || | |   |\n";
      s += "|   ____|| |_|   |\n";
      s += "|  |____ |       |\n";
      s += "|_____  ||___    |\n";
      s += " _____| |    |   |\n";
      s += "|_______|    |___|\n";
      break;
    case 55:
      s += " _______  _______ \n";
      s += "|       ||       |\n";
      s += "|   ____||   ____|\n";
      s += "|  |____ |  |____ \n";
      s += "|_____  ||_____  |\n";
      s += " _____| | _____| |\n";
      s += "|_______||_______|\n";
      break;
    case 56:
      s += " _______  ___     \n";
      s += "|       ||   |    \n";
      s += "|   ____||   |___ \n";
      s += "|  |____ |    _  |\n";
      s += "|_____  ||   | | |\n";
      s += " _____| ||   |_| |\n";
      s += "|_______||_______|\n";
      break;
    case 57:
      s += " _______  _______ \n";
      s += "|       ||       |\n";
      s += "|   ____||___    |\n";
      s += "|  |____     |   |\n";
      s += "|_____  |    |   |\n";
      s += " _____| |    |   |\n";
      s += "|_______|    |___|\n";
      break;
    case 58:
      s += " _______   _____  \n";
      s += "|       | |  _  | \n";
      s += "|   ____| | |_| | \n";
      s += "|  |____ |   _   |\n";
      s += "|_____  ||  | |  |\n";
      s += " _____| ||  |_|  |\n";
      s += "|_______||_______|\n";
      break;
    case 59:
      s += " _______  _______ \n";
      s += "|       ||  _    |\n";
      s += "|   ____|| | |   |\n";
      s += "|  |____ | |_|   |\n";
      s += "|_____  ||___    |\n";
      s += " _____| |    |   |\n";
      s += "|_______|    |___|\n";
      break;
    default:
      s += "error";
      break;
  }
  return s;
}

void WorkoutA::startBeginnerWorkout()
{
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nSTARTING WORKOUT\n\n\n\n\n" << endl;
  std::this_thread::sleep_for(2s);
  for (int i = 3; i > 0; --i)
  {
    cout << "\n\n\n\n\n\n\n" << this->getNumber(i) << "\n\n\n\n\n" << endl;
    std::this_thread::sleep_for(1s);
  }
  for (int i = 0; i < 16; ++i)
  {
    for (int j = 59; j > -1; --j)
    {
      //Timer
      cout << "\n\n\n\n\n\n\n\n\n" << this->getNumber(j) << endl;

      //Exercise Name
      cout << (i+1) << ". " << beginnerExercises[i] << endl << endl;;
      if (i < 15)
      {
        cout << "\t-> Up Next: " << beginnerExercises[i+1] << endl;
      }
      else
      {
        cout << "\tLast Workout!" << endl;
      }
      std::this_thread::sleep_for(1s);
    }
  }
}

void WorkoutA::startAdvancedWorkout()
{

}

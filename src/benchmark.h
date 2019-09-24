#include "world.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>
#include "timing.h"


/*              OUTPUT FUNCTIONS               */
void displayIterationPerformance(int step, TimeCost timeCost);
void displayTotalPerformance(int step, TimeCost timeCost);

/*            CORRECTNESS FUNCTIONS            */
bool checkForCorrectness(std::string implementation, const World & refW, const World & w, std::string referenceAnswerDir, int numParticles, StepParameters stepParams);

/**
 * 
 * Audio Operations implementation file
 * Author: Segopotso Makhutja
 * Date: April 2019
 * 
 */

#include "Ops.hpp"
#include <iostream>
#include <sstream>

using namespace std;
using namespace MKHSEG001;

// error handling.
void Ops::printUsage()
{
      cout << " .. less than 10,Enter correct format of commands " << endl;
      cout << "samp -r sampleRateInHz -b bitCount -c noChannels [-o outFileName] [<ops>] Soundfile [SoundFile2]" << endl;
      cout << "where ops is either of the following:" << endl;
      cout << "-add s1 s2" << endl;
      cout << "-cut r1 r2" << endl;
      cout << "-radd r1 r2 s1 s2" << endl;
      cout << "-cat s1 s2" << endl;
      cout << "-v r1 r2" << endl;
      cout << "-rev s1" << endl;
      cout << "-rms s1" << endl;
      cout << "-norm r1 r2" << endl;
      cout << "-fadein n" << endl;
      cout << "-fadeout n" << endl;
}

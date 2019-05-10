/**
 * 
 * Audio Operations H file
 * Author: Segopotso Makhutja
 * Date: May 2019
 * 
 */

#include "Audio.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#ifndef OPS_H
#define OPS_H

using namespace std;
namespace MKHSEG001
{
    class Ops
    {
        private:
            string operation;
            
        public:
            void printUsage(void);
    };
} // namespace Ops

#endif

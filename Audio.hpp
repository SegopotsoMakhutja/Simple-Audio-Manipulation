#ifndef AUDIO_H
#define AUDIO_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <memory>
#include <algorithm>
#include <cstdint>
#include <utility>
#include <type_traits>

using namespace std;

namespace MKHSEG001
{
    template <typename T, int ch>
    class Audio;
    
    template <typename T, int ch>
    class Audio
    {
        private:
            vector<T> data;    // sample data -e
            int sampleRate;    // eg 44100 -r
            int numBits;       // 8bits or 16bits -b
            int channel;       // mono or stereo -c
            long size;         // size of file.
            //double size;        // size of file.

        public:
            /** start special memeber functions **/
            // constructors
            Audio(int sRate, vector<T> t, int bit, int ch);
            Audio(string fileName);
            Audio();

            ~Audio(); // destructor
            Audio(const Audio &rhs); //copy constructor
            Audio &operator = (const Audio &rhs); //assignment operator
            Audio(Audio &&rhs); //move constructor
            Audio &operator = (Audio &&rhs); //move assignment operator.
            /** end special member functions **/

            /** start operator overloading **/
            Audio operator + (const Audio &rhs); // add files
            Audio operator | (const Audio &rhs); // Concatenate files
            Audio operator ^ (pair<int, int> r); // cut file across a range 
            Audio operator * (pair<float, float> m); // Change the volume of the file by factor m
            bool operator == (const Audio &rhs);
            /** end operator overloading **/
            
            /** start program methods **/
            void fadein(double val); // extra credit
            void fadeout(double val); // extra credit
            void reverse();
            double rmsComputation();
            Audio normalize(pair<double, double> rms);
            Audio add(Audio &rhs, pair<int, int> f);
            vector<T> getData() const;
            /** end program methods **/
            
            /** start file operations **/
            bool load(string fileName); // load file
            void save(string fileName); // save file
            /** end file operations **/
    };

} // namespace MKHSEG001

#endif
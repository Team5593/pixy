//
// begin license header
//
// This file is part of Pixy CMUcam5 or "Pixy" for short
//
// All Pixy source code is provided under the terms of the
// GNU General Public License v2 (http://www.gnu.org/licenses/gpl-2.0.html).
// Those wishing to use Pixy source code, software and/or
// technologies under different licensing terms should contact us at
// cmucam@cs.cmu.edu. Such licensing terms are available for
// all portions of the Pixy codebase presented here.
//
// end license header
//

#include "utils/mutex.hpp"

std::string util::mutex::implementation()
{
  #ifdef __USING_CXX11__
  return std::string("C++11");
  #elif  __USING_BOOST__
  return std::string("BOOST"); 
  #endif
}

void util::mutex::lock()
{
  mutex_.lock();
}

void util::mutex::unlock()
{
  mutex_.unlock();
}

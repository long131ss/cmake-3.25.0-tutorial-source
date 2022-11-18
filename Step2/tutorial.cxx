// A simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <string>

#include "TutorialConfig.h"

// TODO 11: Only include MathFunctions if USE_MYMATH is defined
#ifdef USE_MYMATH
// TODO 5: Include MathFunctions.h
//在CMakeLists.txt 文件里面因为我们知道了头文件所在的的搜索路径，所以，在这里可以直接引入头文件
#include "MathFunctions.h"
#endif

using namespace std;
int main(int argc, char* argv[])
{
  if (argc < 2) {
    // report version
    std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  // convert input to double
  const double inputValue = std::stod(argv[1]);

#ifdef USE_MYMATH
  // TODO 12: Use mysqrt if USE_MYMATH is defined and sqrt otherwise
  // TODO 6: Replace sqrt with mysqrt
  const double outputValue = mysqrt(inputValue);
  std::cout << "USE_MYMATH The square root of " << inputValue << " is " << outputValue
            << std::endl;
#else
  // calculate square root
  const double outputValue = sqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
#endif
  return 0;
}

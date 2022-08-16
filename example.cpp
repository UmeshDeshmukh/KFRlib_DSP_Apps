#include <kfr/base.hpp>
#ifdef HAVE_DFT
#include <kfr/dft.hpp>
#endif
#include <kfr/dsp.hpp>
#include <kfr/io.hpp>

using namespace kfr;

#ifndef PYTHON_IS_INSTALLED
#define PYTHON_IS_INSTALLED 1
#endif

int main()
{
    // Show KFR version
    println(library_version());
  return 0;
}	

#include <chrono>
#include <functional>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

#include "canvas/Utilities/InputTag.h"
#include "gallery/event.h"

#include "TFile.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TInterpreter.h"
#include "TROOT.h"

using namespace art;
using namespace std;
using namespace std::chrono;

void 
nutau_energies(std::string const& filenae)
{

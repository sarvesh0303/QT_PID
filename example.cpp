#include <iostream>
#include "ExtractValue/extractvalue.h"
#include <stdio.h>

using namespace std;
using namespace rapidxml;

main() {
	ExtractValue exv("UI/pid.xml");
	double af = exv.doublereturn("d");
	printf("%lf\n",af);
}
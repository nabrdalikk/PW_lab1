#include "LaborkaConfig.h"

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include "math.h"
#endif

#ifdef USE_TRIGONOMETRY_DEGREE
result = cos_degree(45.0);
#else
result = cos(pi/4.0);
#endif

int main()
{
return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
	int i=2, j=3, k;
	double x=1.5, z=2.3, w, v, y;
	w = pow(((x+2)/i),1./3) * pow(sin(x*x + z*z), i);
	v = (log(x*x) + 2*(x*x) + 1./(z*z)) / ((x+z) * i) + ((double)i/j);
	y = (x*log(x*x+1))/2 * pow(sin(2*(x*x) - 1), 2);	
	printf("\tk=%d\tx=%lf\n",k,x);
	printf("\tw=%lf\tv=%lf\ty=%lf\n", w, v, y);
	return 0;
}

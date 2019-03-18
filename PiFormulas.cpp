#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    /***** Complete this program. *****/
	double atan_pi= (4*atan(1)); /**** calculating arctan***/
    cout << setprecision(15) << "pi   = " << atan_pi << " = 4*arctan(1)" << endl;

    cout << endl;
    cout << "Ramanujan's pi formulas:" << endl;

    /**** splitting  formula 22 into parts****/
    double num22A = ( (3 + sqrt(5)) * (2+sqrt(2)) );
    double num22B = ( (5+ (2*sqrt(10))) + ( sqrt(61 + (20*sqrt(10))))  );

    /**** splitting  formula 31 into parts for easy computation****/
    double num31A = pow ( (5+sqrt(29)) / (sqrt(2)) , 3 );
    double num31B = ( (5* (sqrt(29))) + (11*sqrt(6)) );
    double num31C = pow ( (sqrt((9+ (3 * sqrt(6))) /4))  +  (sqrt( (5+ (3 * sqrt(6))) /4)) , 6);

    /***** rmj for Ramanujan's Formula****/
    double rmj18 = (12/sqrt(190)) * log ( ((2 * sqrt(2)) + sqrt(10) ) * ((3 + sqrt(10))) ) ;
    double rmj15 = (12/sqrt(130)) * log ( ((2+sqrt(5)) * (3+sqrt(13)) / (sqrt(2))  )    ) ;
    double rmj16 = (24/sqrt(142)) * log ( ( sqrt((10+ (11 * sqrt(2)))/4) ) + ( sqrt((10+ (7 * sqrt(2)))/4) )  );
    double rmj22 = (12/sqrt(310)) * log (  (num22A*num22B) / 4  );
    double rmj31 = (4/(sqrt(522)))* log (num31A * num31B * num31C);

    /****** Printing Ramanujan's Formula's***/
    cout <<setprecision(16)<< "pi15 = " << rmj15 << endl ;
    cout <<setprecision(16)<< "pi16 = " << rmj16 << endl ;
    cout <<setprecision(16)<< "pi18 = " << rmj18 << endl ;
    cout <<setprecision(16)<< "pi22 = " << rmj22 << endl ;
    cout <<setprecision(16)<< "pi31 = " << rmj31 << endl ;
    cout << endl;

    /*****Starting Euler's Part***/
    float eupi = pow((4 * atan(1)), 2) / 6 ;

    cout << setprecision(8) << "Euler's infinite sum for pi*pi/6 = " << eupi << endl;

    	float i=1;
    	float n=0;
    	float eu_conv=0; /**** Euler's Convergence Series Declaration****/
    	float it=1;

    	while ((1/n) >= (1/pow(10,8)))
    	{
    		n=n+i; /**** Creating denominator for series****/
    		eu_conv= eu_conv+(1/n);
    		i=i+2; /**** Creates odd numbers****/
    		it++;  /**** Keeping Track of Iterations***/

    	}

    cout << "                      Converged to " << eu_conv
         << " after " << it << " iterations" << endl;

    float eu_estimate = sqrt((eu_conv*6));
    float  eu_error = atan_pi-eu_estimate; /**** Calculating the difference from Euler's and 4 arctan ****/

    cout << endl;
    cout << "Euler's estimate for pi = " << eu_estimate << endl;
    cout << "                  error = " << eu_error << endl;
}

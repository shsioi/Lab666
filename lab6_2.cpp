#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std ;

double deg2rad(double degree) ;
double rad2deg(double radian) ;
double findXComponent(double L1, double A1, double L2, double A2) ;
double findYComponent(double L1, double A1, double L2, double A2) ;
double pythagoras(double Rx, double Ry) ;
void showResult(double R, double Dir_deg) ;

int main()
{
    double l1, l2, a1, a2, xcomp, ycomp, result_vec_length, result_vec_direction ;

    cout << "Enter length of the first vector: " ;
    cin >> l1 ;
    cout << "Enter direction of the first vector (deg): " ;
    cin >> a1 ;

    cout << "Enter length of the second vector: " ;
    cin >> l2 ;
    cout << "Enter direction of the second vector (deg): " ;
    cin >> a2 ;

    double a1_rad = deg2rad(a1) ;
    double a2_rad = deg2rad(a2) ;

    xcomp = findXComponent(l1, a1_rad, l2, a2_rad) ;
    ycomp = findYComponent(l1, a1_rad, l2, a2_rad) ;

    result_vec_length = pythagoras(xcomp, ycomp) ;

    result_vec_direction = rad2deg(atan2(ycomp, xcomp)) ;

    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl ;
    showResult(result_vec_length, result_vec_direction) ;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl ;

    return 0 ;
}

double deg2rad(double degree)
{
    return degree * (M_PI / 180.0) ;
}

double rad2deg(double radian)
{
    return radian * (180.0 / M_PI) ;
}

double findXComponent(double L1, double A1, double L2, double A2)
{
    return (L1 * cos(A1)) + (L2 * cos(A2)) ;
}

double findYComponent(double L1, double A1, double L2, double A2)
{
    return (L1 * sin(A1)) + (L2 * sin(A2)) ;
}

double pythagoras(double Rx, double Ry)
{
    return sqrt(pow(Rx, 2) + pow(Ry, 2)) ;
}

void showResult(double R, double Dir_deg)
{
    cout << "Length of the resultant vector = " << R << endl ;
    cout << "Direction of the resultant vector (deg) = " << Dir_deg << endl ;
}
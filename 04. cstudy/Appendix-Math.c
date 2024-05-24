#include <math.h>

double fabs(double x);          // x의 절댓값 반환
double ceil(double x);          // x보다 작지 않은 최소 크기의 정수 반환
double floor(double x);         // x보다 크기 않은 최대 크기의 정수 반환
double exp(double x);           // e^x값 반환(e는 오일러 수)
double pow(double x, double y); // x^y값 반환
double log(double x);           // log e x 값 반환
double log10(double x);         // log 10 x 값 반환
double sqrt(double x);          // x의 제곱근 반환

double cos(double x); // x의 삼각(trigonometric) 코사인 값 반환
double sin(double x); // x의 삼각 사인 값 반환
double tan(double x); // x의 삼각 탄젠트 값 반환

double cosh(double x); // x의 쌍곡선(hyperbolic) 코사인 값 반환
double sinh(double x); // x의 쌍곡선 사인 값 반환
double tanh(double x); // x의 쌍곡선 탄젠트 값 반환

double acos(double x); // x의 삼각 아크코사인 값 반환
double asin(double x); // x의 삼각 아크사인 값 반환
double atan(double x); // x의 삼각 아크탄젠트 값 반환

double acosh(double x); // x의 쌍곡선 아크코사인 값 반환
double asinh(double x); // x의 쌍곡선 아크사인 값 반환
double atanh(double x); // x의 쌍곡선 아크탄젠트 값 반환

#include <stdlib.h>

int abs(int x);    // x의 절댓값 반환
long labs(long x); // x의 절댓값 반환
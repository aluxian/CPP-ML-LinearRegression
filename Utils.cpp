#include <cmath>
#include "Utils.h"

double Utils::array_sum(double arr[], int len) {
    double s = 0;

    for (int i = 0; i < len; ++i) {
        s += arr[i];
    }

    return s;
}

double *Utils::array_pow(double arr[], int len, int power) {
    double *arr2 = new double[len];

    for (int i = 0; i < len; ++i) {
        arr2[i] = pow(arr[i], power);
    }

    return arr2;
}

double *Utils::array_multiplication(double arr1[], double arr2[], int len) {
    double *arr = new double[len];

    for (int i = 0; i < len; ++i) {
        arr[i] = arr1[i] * arr2[i];
    }

    return arr;
}

double *Utils::array_diff(double arr1[], double arr2[], int len) {
    double *arr = new double[len];

    for (int i = 0; i < len; ++i) {
        arr[i] = arr1[i] - arr2[i];
    }

    return arr;
}

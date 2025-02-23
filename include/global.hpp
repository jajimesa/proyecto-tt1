//$Header$
//------------------------------------------------------------------------------
// Global
//------------------------------------------------------------------------------
/**
 * @file global.hpp
 * @author Javier Jiménez Santana
 * @date 23/04/2024
 */
//------------------------------------------------------------------------------

#ifndef _GLOBAL_
#define _GLOBAL_

#include "matrix.hpp"
#include "SAT_Const.hpp"
#include "Mjday.hpp"

typedef struct {
    double Mjd_UTC, Mjd_TT;
    int n, m, sun, moon, planets;
} Param;

class Global {
public:
    static Param AuxParam;
    static Matrix *eopdata;
    static Matrix *Cnm;
    static Matrix *Snm;
    static Matrix *PC;
    static Matrix *obs;

    static void initAuxParam();
    static void eop19620101(int c);
    static void GGM03S(int c);
    static void DE430Coeff(int c);
    static void GEOMS3();
};

#endif
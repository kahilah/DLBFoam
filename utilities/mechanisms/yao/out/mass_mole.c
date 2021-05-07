#include "mass_mole.h"

/** Function converting species mole fractions to mass fractions.
 *
 * \param[in]  X  array of species mole fractions
 * \param[out] Y  array of species mass fractions
 */
void mole2mass (const double * X, double * Y) {

  // mole fraction of final species
  double X_N;
  X_N = 1.0 - (X[0] + X[1] + X[2] + X[3] + X[4] + X[5] + X[6] + X[7] + X[8]
                + X[9] + X[10] + X[11] + X[12] + X[13] + X[14] + X[15] + X[16]
                + X[17] + X[18] + X[19] + X[20] + X[21] + X[22] + X[23]
                + X[24] + X[25] + X[26] + X[27] + X[28] + X[29] + X[30]
                + X[31] + X[32] + X[33] + X[34] + X[35] + X[36] + X[37]
                + X[38] + X[39] + X[40] + X[41] + X[42] + X[43] + X[44]
                + X[45] + X[46] + X[47] + X[48] + X[49] + X[50] + X[51]
                + X[52]);
  // average molecular weight
  double mw_avg = 0.0;
  mw_avg += X[0] * 3.9948000000000000e+01;
  mw_avg += X[1] * 1.0079400000000001e+00;
  mw_avg += X[2] * 1.5999400000000000e+01;
  mw_avg += X[3] * 1.7007339999999999e+01;
  mw_avg += X[4] * 3.3006740000000001e+01;
  mw_avg += X[5] * 2.0158800000000001e+00;
  mw_avg += X[6] * 1.8015280000000001e+01;
  mw_avg += X[7] * 3.4014679999999998e+01;
  mw_avg += X[8] * 3.1998799999999999e+01;
  mw_avg += X[9] * 1.4026879999999998e+01;
  mw_avg += X[10] * 1.4026879999999998e+01;
  mw_avg += X[11] * 1.5034820000000000e+01;
  mw_avg += X[12] * 1.6042760000000001e+01;
  mw_avg += X[13] * 2.9018339999999998e+01;
  mw_avg += X[14] * 3.0026280000000000e+01;
  mw_avg += X[15] * 3.1034219999999998e+01;
  mw_avg += X[16] * 2.8010399999999997e+01;
  mw_avg += X[17] * 4.4009799999999998e+01;
  mw_avg += X[18] * 2.6037879999999998e+01;
  mw_avg += X[19] * 2.7045819999999999e+01;
  mw_avg += X[20] * 2.8053759999999997e+01;
  mw_avg += X[21] * 2.9061699999999998e+01;
  mw_avg += X[22] * 3.0069640000000000e+01;
  mw_avg += X[23] * 4.3045220000000000e+01;
  mw_avg += X[24] * 4.1072699999999998e+01;
  mw_avg += X[25] * 4.2080640000000002e+01;
  mw_avg += X[26] * 4.3088580000000000e+01;
  mw_avg += X[27] * 5.6064160000000001e+01;
  mw_avg += X[28] * 5.5099579999999996e+01;
  mw_avg += X[29] * 5.6107519999999994e+01;
  mw_avg += X[30] * 5.7115459999999999e+01;
  mw_avg += X[31] * 6.9126459999999994e+01;
  mw_avg += X[32] * 7.0134399999999999e+01;
  mw_avg += X[33] * 7.1142339999999990e+01;
  mw_avg += X[34] * 8.4161280000000005e+01;
  mw_avg += X[35] * 8.5169219999999996e+01;
  mw_avg += X[36] * 9.8188159999999996e+01;
  mw_avg += X[37] * 9.9196100000000001e+01;
  mw_avg += X[38] * 1.1221503999999999e+02;
  mw_avg += X[39] * 1.1322297999999999e+02;
  mw_avg += X[40] * 1.2624191999999999e+02;
  mw_avg += X[41] * 1.2724985999999998e+02;
  mw_avg += X[42] * 1.4026880000000000e+02;
  mw_avg += X[43] * 1.4127673999999999e+02;
  mw_avg += X[44] * 1.7033843999999999e+02;
  mw_avg += X[45] * 1.6933050000000000e+02;
  mw_avg += X[46] * 1.6933050000000000e+02;
  mw_avg += X[47] * 1.6933050000000000e+02;
  mw_avg += X[48] * 1.6832256000000001e+02;
  mw_avg += X[49] * 2.0132929999999999e+02;
  mw_avg += X[50] * 2.0132929999999999e+02;
  mw_avg += X[51] * 2.3332810000000001e+02;
  mw_avg += X[52] * 2.1632076000000001e+02;
  mw_avg += X_N * 2.8013480000000001e+01;

  // calculate mass fractions
  Y[0] = X[0] * 3.9948000000000000e+01 / mw_avg;
  Y[1] = X[1] * 1.0079400000000001e+00 / mw_avg;
  Y[2] = X[2] * 1.5999400000000000e+01 / mw_avg;
  Y[3] = X[3] * 1.7007339999999999e+01 / mw_avg;
  Y[4] = X[4] * 3.3006740000000001e+01 / mw_avg;
  Y[5] = X[5] * 2.0158800000000001e+00 / mw_avg;
  Y[6] = X[6] * 1.8015280000000001e+01 / mw_avg;
  Y[7] = X[7] * 3.4014679999999998e+01 / mw_avg;
  Y[8] = X[8] * 3.1998799999999999e+01 / mw_avg;
  Y[9] = X[9] * 1.4026879999999998e+01 / mw_avg;
  Y[10] = X[10] * 1.4026879999999998e+01 / mw_avg;
  Y[11] = X[11] * 1.5034820000000000e+01 / mw_avg;
  Y[12] = X[12] * 1.6042760000000001e+01 / mw_avg;
  Y[13] = X[13] * 2.9018339999999998e+01 / mw_avg;
  Y[14] = X[14] * 3.0026280000000000e+01 / mw_avg;
  Y[15] = X[15] * 3.1034219999999998e+01 / mw_avg;
  Y[16] = X[16] * 2.8010399999999997e+01 / mw_avg;
  Y[17] = X[17] * 4.4009799999999998e+01 / mw_avg;
  Y[18] = X[18] * 2.6037879999999998e+01 / mw_avg;
  Y[19] = X[19] * 2.7045819999999999e+01 / mw_avg;
  Y[20] = X[20] * 2.8053759999999997e+01 / mw_avg;
  Y[21] = X[21] * 2.9061699999999998e+01 / mw_avg;
  Y[22] = X[22] * 3.0069640000000000e+01 / mw_avg;
  Y[23] = X[23] * 4.3045220000000000e+01 / mw_avg;
  Y[24] = X[24] * 4.1072699999999998e+01 / mw_avg;
  Y[25] = X[25] * 4.2080640000000002e+01 / mw_avg;
  Y[26] = X[26] * 4.3088580000000000e+01 / mw_avg;
  Y[27] = X[27] * 5.6064160000000001e+01 / mw_avg;
  Y[28] = X[28] * 5.5099579999999996e+01 / mw_avg;
  Y[29] = X[29] * 5.6107519999999994e+01 / mw_avg;
  Y[30] = X[30] * 5.7115459999999999e+01 / mw_avg;
  Y[31] = X[31] * 6.9126459999999994e+01 / mw_avg;
  Y[32] = X[32] * 7.0134399999999999e+01 / mw_avg;
  Y[33] = X[33] * 7.1142339999999990e+01 / mw_avg;
  Y[34] = X[34] * 8.4161280000000005e+01 / mw_avg;
  Y[35] = X[35] * 8.5169219999999996e+01 / mw_avg;
  Y[36] = X[36] * 9.8188159999999996e+01 / mw_avg;
  Y[37] = X[37] * 9.9196100000000001e+01 / mw_avg;
  Y[38] = X[38] * 1.1221503999999999e+02 / mw_avg;
  Y[39] = X[39] * 1.1322297999999999e+02 / mw_avg;
  Y[40] = X[40] * 1.2624191999999999e+02 / mw_avg;
  Y[41] = X[41] * 1.2724985999999998e+02 / mw_avg;
  Y[42] = X[42] * 1.4026880000000000e+02 / mw_avg;
  Y[43] = X[43] * 1.4127673999999999e+02 / mw_avg;
  Y[44] = X[44] * 1.7033843999999999e+02 / mw_avg;
  Y[45] = X[45] * 1.6933050000000000e+02 / mw_avg;
  Y[46] = X[46] * 1.6933050000000000e+02 / mw_avg;
  Y[47] = X[47] * 1.6933050000000000e+02 / mw_avg;
  Y[48] = X[48] * 1.6832256000000001e+02 / mw_avg;
  Y[49] = X[49] * 2.0132929999999999e+02 / mw_avg;
  Y[50] = X[50] * 2.0132929999999999e+02 / mw_avg;
  Y[51] = X[51] * 2.3332810000000001e+02 / mw_avg;
  Y[52] = X[52] * 2.1632076000000001e+02 / mw_avg;

} // end mole2mass

/** Function converting species mass fractions to mole fractions.
 *
 * \param[in]  Y  array of species mass fractions
 * \param[out] X  array of species mole fractions
 */
void mass2mole (const double * Y, double * X) {

  // mass fraction of final species
  double Y_N;
  Y_N = 1.0 - (Y[0] + Y[1] + Y[2] + Y[3] + Y[4] + Y[5] + Y[6] + Y[7] + Y[8]
                + Y[9] + Y[10] + Y[11] + Y[12] + Y[13] + Y[14] + Y[15] + Y[16]
                + Y[17] + Y[18] + Y[19] + Y[20] + Y[21] + Y[22] + Y[23]
                + Y[24] + Y[25] + Y[26] + Y[27] + Y[28] + Y[29] + Y[30]
                + Y[31] + Y[32] + Y[33] + Y[34] + Y[35] + Y[36] + Y[37]
                + Y[38] + Y[39] + Y[40] + Y[41] + Y[42] + Y[43] + Y[44]
                + Y[45] + Y[46] + Y[47] + Y[48] + Y[49] + Y[50] + Y[51]
                + Y[52]);
  // average molecular weight
  double mw_avg = 0.0;
  mw_avg += Y[0] / 3.9948000000000000e+01;
  mw_avg += Y[1] / 1.0079400000000001e+00;
  mw_avg += Y[2] / 1.5999400000000000e+01;
  mw_avg += Y[3] / 1.7007339999999999e+01;
  mw_avg += Y[4] / 3.3006740000000001e+01;
  mw_avg += Y[5] / 2.0158800000000001e+00;
  mw_avg += Y[6] / 1.8015280000000001e+01;
  mw_avg += Y[7] / 3.4014679999999998e+01;
  mw_avg += Y[8] / 3.1998799999999999e+01;
  mw_avg += Y[9] / 1.4026879999999998e+01;
  mw_avg += Y[10] / 1.4026879999999998e+01;
  mw_avg += Y[11] / 1.5034820000000000e+01;
  mw_avg += Y[12] / 1.6042760000000001e+01;
  mw_avg += Y[13] / 2.9018339999999998e+01;
  mw_avg += Y[14] / 3.0026280000000000e+01;
  mw_avg += Y[15] / 3.1034219999999998e+01;
  mw_avg += Y[16] / 2.8010399999999997e+01;
  mw_avg += Y[17] / 4.4009799999999998e+01;
  mw_avg += Y[18] / 2.6037879999999998e+01;
  mw_avg += Y[19] / 2.7045819999999999e+01;
  mw_avg += Y[20] / 2.8053759999999997e+01;
  mw_avg += Y[21] / 2.9061699999999998e+01;
  mw_avg += Y[22] / 3.0069640000000000e+01;
  mw_avg += Y[23] / 4.3045220000000000e+01;
  mw_avg += Y[24] / 4.1072699999999998e+01;
  mw_avg += Y[25] / 4.2080640000000002e+01;
  mw_avg += Y[26] / 4.3088580000000000e+01;
  mw_avg += Y[27] / 5.6064160000000001e+01;
  mw_avg += Y[28] / 5.5099579999999996e+01;
  mw_avg += Y[29] / 5.6107519999999994e+01;
  mw_avg += Y[30] / 5.7115459999999999e+01;
  mw_avg += Y[31] / 6.9126459999999994e+01;
  mw_avg += Y[32] / 7.0134399999999999e+01;
  mw_avg += Y[33] / 7.1142339999999990e+01;
  mw_avg += Y[34] / 8.4161280000000005e+01;
  mw_avg += Y[35] / 8.5169219999999996e+01;
  mw_avg += Y[36] / 9.8188159999999996e+01;
  mw_avg += Y[37] / 9.9196100000000001e+01;
  mw_avg += Y[38] / 1.1221503999999999e+02;
  mw_avg += Y[39] / 1.1322297999999999e+02;
  mw_avg += Y[40] / 1.2624191999999999e+02;
  mw_avg += Y[41] / 1.2724985999999998e+02;
  mw_avg += Y[42] / 1.4026880000000000e+02;
  mw_avg += Y[43] / 1.4127673999999999e+02;
  mw_avg += Y[44] / 1.7033843999999999e+02;
  mw_avg += Y[45] / 1.6933050000000000e+02;
  mw_avg += Y[46] / 1.6933050000000000e+02;
  mw_avg += Y[47] / 1.6933050000000000e+02;
  mw_avg += Y[48] / 1.6832256000000001e+02;
  mw_avg += Y[49] / 2.0132929999999999e+02;
  mw_avg += Y[50] / 2.0132929999999999e+02;
  mw_avg += Y[51] / 2.3332810000000001e+02;
  mw_avg += Y[52] / 2.1632076000000001e+02;
  mw_avg += Y_N / 2.8013480000000001e+01;
  mw_avg = 1.0 / mw_avg;

  // calculate mole fractions
  X[0] = Y[0] * mw_avg / 3.9948000000000000e+01;
  X[1] = Y[1] * mw_avg / 1.0079400000000001e+00;
  X[2] = Y[2] * mw_avg / 1.5999400000000000e+01;
  X[3] = Y[3] * mw_avg / 1.7007339999999999e+01;
  X[4] = Y[4] * mw_avg / 3.3006740000000001e+01;
  X[5] = Y[5] * mw_avg / 2.0158800000000001e+00;
  X[6] = Y[6] * mw_avg / 1.8015280000000001e+01;
  X[7] = Y[7] * mw_avg / 3.4014679999999998e+01;
  X[8] = Y[8] * mw_avg / 3.1998799999999999e+01;
  X[9] = Y[9] * mw_avg / 1.4026879999999998e+01;
  X[10] = Y[10] * mw_avg / 1.4026879999999998e+01;
  X[11] = Y[11] * mw_avg / 1.5034820000000000e+01;
  X[12] = Y[12] * mw_avg / 1.6042760000000001e+01;
  X[13] = Y[13] * mw_avg / 2.9018339999999998e+01;
  X[14] = Y[14] * mw_avg / 3.0026280000000000e+01;
  X[15] = Y[15] * mw_avg / 3.1034219999999998e+01;
  X[16] = Y[16] * mw_avg / 2.8010399999999997e+01;
  X[17] = Y[17] * mw_avg / 4.4009799999999998e+01;
  X[18] = Y[18] * mw_avg / 2.6037879999999998e+01;
  X[19] = Y[19] * mw_avg / 2.7045819999999999e+01;
  X[20] = Y[20] * mw_avg / 2.8053759999999997e+01;
  X[21] = Y[21] * mw_avg / 2.9061699999999998e+01;
  X[22] = Y[22] * mw_avg / 3.0069640000000000e+01;
  X[23] = Y[23] * mw_avg / 4.3045220000000000e+01;
  X[24] = Y[24] * mw_avg / 4.1072699999999998e+01;
  X[25] = Y[25] * mw_avg / 4.2080640000000002e+01;
  X[26] = Y[26] * mw_avg / 4.3088580000000000e+01;
  X[27] = Y[27] * mw_avg / 5.6064160000000001e+01;
  X[28] = Y[28] * mw_avg / 5.5099579999999996e+01;
  X[29] = Y[29] * mw_avg / 5.6107519999999994e+01;
  X[30] = Y[30] * mw_avg / 5.7115459999999999e+01;
  X[31] = Y[31] * mw_avg / 6.9126459999999994e+01;
  X[32] = Y[32] * mw_avg / 7.0134399999999999e+01;
  X[33] = Y[33] * mw_avg / 7.1142339999999990e+01;
  X[34] = Y[34] * mw_avg / 8.4161280000000005e+01;
  X[35] = Y[35] * mw_avg / 8.5169219999999996e+01;
  X[36] = Y[36] * mw_avg / 9.8188159999999996e+01;
  X[37] = Y[37] * mw_avg / 9.9196100000000001e+01;
  X[38] = Y[38] * mw_avg / 1.1221503999999999e+02;
  X[39] = Y[39] * mw_avg / 1.1322297999999999e+02;
  X[40] = Y[40] * mw_avg / 1.2624191999999999e+02;
  X[41] = Y[41] * mw_avg / 1.2724985999999998e+02;
  X[42] = Y[42] * mw_avg / 1.4026880000000000e+02;
  X[43] = Y[43] * mw_avg / 1.4127673999999999e+02;
  X[44] = Y[44] * mw_avg / 1.7033843999999999e+02;
  X[45] = Y[45] * mw_avg / 1.6933050000000000e+02;
  X[46] = Y[46] * mw_avg / 1.6933050000000000e+02;
  X[47] = Y[47] * mw_avg / 1.6933050000000000e+02;
  X[48] = Y[48] * mw_avg / 1.6832256000000001e+02;
  X[49] = Y[49] * mw_avg / 2.0132929999999999e+02;
  X[50] = Y[50] * mw_avg / 2.0132929999999999e+02;
  X[51] = Y[51] * mw_avg / 2.3332810000000001e+02;
  X[52] = Y[52] * mw_avg / 2.1632076000000001e+02;

} // end mass2mole

/** Function calculating density from mole fractions.
 *
 * \param[in]  temp  temperature
 * \param[in]  pres  pressure
 * \param[in]  X     array of species mole fractions
 * \return     rho  mixture mass density
 */
double getDensity (const double temp, const double pres, const double * X) {

  // mole fraction of final species
  double X_N;
  X_N = 1.0 - (X[0] + X[1] + X[2] + X[3] + X[4] + X[5] + X[6] + X[7] + X[8]
                + X[9] + X[10] + X[11] + X[12] + X[13] + X[14] + X[15] + X[16]
                + X[17] + X[18] + X[19] + X[20] + X[21] + X[22] + X[23]
                + X[24] + X[25] + X[26] + X[27] + X[28] + X[29] + X[30]
                + X[31] + X[32] + X[33] + X[34] + X[35] + X[36] + X[37]
                + X[38] + X[39] + X[40] + X[41] + X[42] + X[43] + X[44]
                + X[45] + X[46] + X[47] + X[48] + X[49] + X[50] + X[51]
                + X[52]);
  // average molecular weight
  double mw_avg = 0.0;
  mw_avg += X[0] * 3.9948000000000000e+01;
  mw_avg += X[1] * 1.0079400000000001e+00;
  mw_avg += X[2] * 1.5999400000000000e+01;
  mw_avg += X[3] * 1.7007339999999999e+01;
  mw_avg += X[4] * 3.3006740000000001e+01;
  mw_avg += X[5] * 2.0158800000000001e+00;
  mw_avg += X[6] * 1.8015280000000001e+01;
  mw_avg += X[7] * 3.4014679999999998e+01;
  mw_avg += X[8] * 3.1998799999999999e+01;
  mw_avg += X[9] * 1.4026879999999998e+01;
  mw_avg += X[10] * 1.4026879999999998e+01;
  mw_avg += X[11] * 1.5034820000000000e+01;
  mw_avg += X[12] * 1.6042760000000001e+01;
  mw_avg += X[13] * 2.9018339999999998e+01;
  mw_avg += X[14] * 3.0026280000000000e+01;
  mw_avg += X[15] * 3.1034219999999998e+01;
  mw_avg += X[16] * 2.8010399999999997e+01;
  mw_avg += X[17] * 4.4009799999999998e+01;
  mw_avg += X[18] * 2.6037879999999998e+01;
  mw_avg += X[19] * 2.7045819999999999e+01;
  mw_avg += X[20] * 2.8053759999999997e+01;
  mw_avg += X[21] * 2.9061699999999998e+01;
  mw_avg += X[22] * 3.0069640000000000e+01;
  mw_avg += X[23] * 4.3045220000000000e+01;
  mw_avg += X[24] * 4.1072699999999998e+01;
  mw_avg += X[25] * 4.2080640000000002e+01;
  mw_avg += X[26] * 4.3088580000000000e+01;
  mw_avg += X[27] * 5.6064160000000001e+01;
  mw_avg += X[28] * 5.5099579999999996e+01;
  mw_avg += X[29] * 5.6107519999999994e+01;
  mw_avg += X[30] * 5.7115459999999999e+01;
  mw_avg += X[31] * 6.9126459999999994e+01;
  mw_avg += X[32] * 7.0134399999999999e+01;
  mw_avg += X[33] * 7.1142339999999990e+01;
  mw_avg += X[34] * 8.4161280000000005e+01;
  mw_avg += X[35] * 8.5169219999999996e+01;
  mw_avg += X[36] * 9.8188159999999996e+01;
  mw_avg += X[37] * 9.9196100000000001e+01;
  mw_avg += X[38] * 1.1221503999999999e+02;
  mw_avg += X[39] * 1.1322297999999999e+02;
  mw_avg += X[40] * 1.2624191999999999e+02;
  mw_avg += X[41] * 1.2724985999999998e+02;
  mw_avg += X[42] * 1.4026880000000000e+02;
  mw_avg += X[43] * 1.4127673999999999e+02;
  mw_avg += X[44] * 1.7033843999999999e+02;
  mw_avg += X[45] * 1.6933050000000000e+02;
  mw_avg += X[46] * 1.6933050000000000e+02;
  mw_avg += X[47] * 1.6933050000000000e+02;
  mw_avg += X[48] * 1.6832256000000001e+02;
  mw_avg += X[49] * 2.0132929999999999e+02;
  mw_avg += X[50] * 2.0132929999999999e+02;
  mw_avg += X[51] * 2.3332810000000001e+02;
  mw_avg += X[52] * 2.1632076000000001e+02;
  mw_avg += X_N * 2.8013480000000001e+01;

  return pres * mw_avg / (8.31446210e+03 * temp);
} // end getDensity


/**
 *  @file ByteToolkit.h
 *  @author Sheng Di
 *  @date July, 2017
 *  @brief Header file for the ByteToolkit.c.
 *  (C) 2016 by Mathematics and Computer Science (MCS), Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#ifndef _ByteToolkit_H
#define _ByteToolkit_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

//ByteToolkit.c
int bytesToInt_bigEndian(unsigned char* bytes);
void intToBytes_bigEndian(unsigned char *b, unsigned int num);
long bytesToLong_bigEndian(unsigned char* b);
void longToBytes_bigEndian(unsigned char *b, unsigned long num);
long doubleToOSEndianLong(double value);
int floatToOSEndianInt(float value);
short getExponent_float(float value);
short getPrecisionReqLength_float(float precision);
short getExponent_double(double value);
short getPrecisionReqLength_double(double precision);
unsigned char numberOfLeadingZeros_Int(int i);
unsigned char numberOfLeadingZeros_Long(long i);
unsigned char getLeadingNumbers_Int(int v1, int v2);
unsigned char getLeadingNumbers_Long(long v1, long v2);
short bytesToShort(unsigned char* bytes);
int bytesToInt(unsigned char* bytes);
long bytesToLong(unsigned char* bytes);
float bytesToFloat(unsigned char* bytes);
void floatToBytes(unsigned char *b, float num);
double bytesToDouble(unsigned char* bytes);
void doubleToBytes(unsigned char *b, double num);
int extractBytes(unsigned char* byteArray, size_t k, int validLength);
int getMaskRightCode(int m);
int getLeftMovingCode(int kMod8);
int getRightMovingSteps(int kMod8, int resiBitLength);
int getRightMovingCode(int kMod8, int resiBitLength);
unsigned short* convertByteDataToShortArray(unsigned char* bytes, size_t byteLength);
void convertShortArrayToBytes(unsigned short* states, size_t stateLength, unsigned char* bytes);
size_t bytesToSize(unsigned char* bytes);
void sizeToBytes(unsigned char* outBytes, size_t size);

#ifdef __cplusplus
}
#endif

#endif /* ----- #ifndef _ByteToolkit_H  ----- */


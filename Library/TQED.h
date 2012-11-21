/*
  TQED.h - Quadrature decoder library for Arduino using I2C
  Revision 1.1
  Copyright (c) 2012 Adriaan Swanepoel.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#ifndef TQED_h
#define TQED_h

#include <inttypes.h>

#define COUNTERREG    0x0A
#define RESETREG      0x01
#define CENTERREG     0x02
#define SETADDRESSREG 0x03
#define RETRYCOUNT    3

class TQED
{
private:
    uint8_t deviceaddress;
	
public:
    TQED(uint8_t address);
    uint16_t getCount();
    bool centerCount();
    bool resetCount();
    bool setAddress(uint8_t newaddress);
};

#endif
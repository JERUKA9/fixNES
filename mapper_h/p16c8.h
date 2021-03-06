/*
 * Copyright (C) 2017 FIX94
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#ifndef p16c8_h_
#define p16c8_h_

void p16c8init(uint8_t *prgROM, uint32_t prgROMsize, 
			uint8_t *prgRAM, uint32_t prgRAMsize,
			uint8_t *chrROM, uint32_t chrROMsize);
void m174_init(uint8_t *prgROM, uint32_t prgROMsize, 
			uint8_t *prgRAM, uint32_t prgRAMsize,
			uint8_t *chrROM, uint32_t chrROMsize);
uint8_t p16c8get8(uint16_t addr, uint8_t val);
uint8_t p1632c8get8(uint16_t addr, uint8_t val);
uint8_t m97_get8(uint16_t addr, uint8_t val);
uint8_t m180_get8(uint16_t addr, uint8_t val);
uint8_t m200_get8(uint16_t addr, uint8_t val);
uint8_t m231_get8(uint16_t addr, uint8_t val);
uint8_t m232_get8(uint16_t addr, uint8_t val);
void m2_set8(uint16_t addr, uint8_t val);
void m57_set8(uint16_t addr, uint8_t val);
void m58_set8(uint16_t addr, uint8_t val);
void m61_set8(uint16_t addr, uint8_t val);
void m62_set8(uint16_t addr, uint8_t val);
void m70_set8(uint16_t addr, uint8_t val);
void m71_set8(uint16_t addr, uint8_t val);
void m78a_set8(uint16_t addr, uint8_t val);
void m78b_set8(uint16_t addr, uint8_t val);
void m89_set8(uint16_t addr, uint8_t val);
void m93_set8(uint16_t addr, uint8_t val);
void m94_set8(uint16_t addr, uint8_t val);
void m97_set8(uint16_t addr, uint8_t val);
void m152_set8(uint16_t addr, uint8_t val);
void m174_set8(uint16_t addr, uint8_t val);
void m180_set8(uint16_t addr, uint8_t val);
void m200_set8(uint16_t addr, uint8_t val);
void m202_set8(uint16_t addr, uint8_t val);
void m203_set8(uint16_t addr, uint8_t val);
void m212_set8(uint16_t addr, uint8_t val);
void m226_set8(uint16_t addr, uint8_t val);
void m231_set8(uint16_t addr, uint8_t val);
void m232_set8(uint16_t addr, uint8_t val);
uint8_t p16c8chrGet8(uint16_t addr);
void p16c8chrSet8(uint16_t addr, uint8_t val);

#endif

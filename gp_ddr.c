#include "gp_api.h"

struct gp_ddr_cmd hero2_ddr_init_seq[] = {
	{SEQ_WRITE, 0x701700DC, 0x1B111000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170110, 0x3F770000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170114, 0x00068300},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B111001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B111000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170090, 0x00204830},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170094, 0x00204830},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170158, 0x00007EE5},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004004, 0x00042175},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004008, 0x48B7B6A3},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x6000400C, 0x01FF3472},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004010, 0x000000A3},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004020, 0x000000A0},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x00000060},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004024, 0x00020035},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x00000008},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0000000C},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01020000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01030000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01010000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01001520},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x00000010},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x00000008},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0000000E},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x00000020},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x00000004},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004020, 0x00000040},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x00000026},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0000000F},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70009018, 0xFFFFFFFF},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70009004, 0x00000000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70009028, 0xFFFFFFFF},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70009000, 0x00000000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7000902C, 0x00000001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7000A018, 0xFFFFFFFF},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7000A004, 0x00000000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7000A028, 0xFFFFFFFF},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7000A000, 0x00000000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7000A02C, 0x00000001},
	{SEQ_DELAY},
	{SEQ_DONE},
};

struct gp_ddr_cmd hero2_alt_ddr_init_seq[] = {
	{SEQ_WRITE, 0x70170000, 0x09113000},
	{SEQ_WRITE, 0x701700E4, 0x13111000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170000, 0x09113001},
	{SEQ_WRITE, 0x701700E4, 0x13111001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170068, 0x3},
	{SEQ_WRITE, 0x701700DC, 0x1B111000},
	{SEQ_WRITE, 0x70170110, 0x3F770000},
	{SEQ_WRITE, 0x70170110, 0x00068300},
	{SEQ_WRITE, 0x701700DC, 0x1B111001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B111000},
	{SEQ_WRITE, 0x70170090, 0x00204830},
	{SEQ_WRITE, 0x70170094, 0x00204830},
	{SEQ_WRITE, 0x70170158, 0x00007EE5},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004004, 0x00042175},
	{SEQ_WRITE, 0x60004008, 0x48B7B6A3},
	{SEQ_WRITE, 0x6000400C, 0x01FF3472},
	{SEQ_WRITE, 0x60004010, 0x000000A3},
	{SEQ_WRITE, 0x60004020, 0x00000047},
	{SEQ_WRITE, 0x60004028, 0x00000060},
	{SEQ_WRITE, 0x60004024, 0x00020035},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0C},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01020000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01030000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01010000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01001520},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x10},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x08},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0E},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01010000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x20},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x4},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x26},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004024, 0x35},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0F},
	{SEQ_DELAY},
	{SEQ_DONE},
};

struct gp_ddr_cmd hero3black_ddr_init_seq[] = {
	{SEQ_WRITE, 0x70170000, 0x11111100},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170000, 0x11111101},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700E4, 0x11111100},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700E4, 0x11111101},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B111000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170110, 0x3F770000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170114, 0x00068300},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B111001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B111000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170068, 0x3},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170090, 0x4028},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170094, 0x4028},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700F0, 0x4028},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700F4, 0x4028},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7017023C, 0x7FE7},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170240, 0x7FE7},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170244, 0x7FE7},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170248, 0x7FE7},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170158, 0x12E50000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x6000402C, 0xC0000000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004004, 0x00084879},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004008, 0x48B836A3},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x6000400C, 0x01FF637A},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004010, 0xA3},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004030, 0xE4},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004020, 0xFF},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x60},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004024, 0x0002002D},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x8},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0C},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01020000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01030000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01010040},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01001520},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x10},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x8},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0xE},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x20},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x4},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004020, 0x5F},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x26},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0xF},
	{SEQ_DELAY},
	{SEQ_DONE},
};

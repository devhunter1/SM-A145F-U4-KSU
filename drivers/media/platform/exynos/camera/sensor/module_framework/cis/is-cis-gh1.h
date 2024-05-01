/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2018 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_GH1_H
#define IS_CIS_GH1_H

#include "is-cis.h"

#define EXT_CLK_Mhz (26)

#define SENSOR_GH1_MAX_WIDTH		(7296)
#define SENSOR_GH1_MAX_HEIGHT		(5472)

#define SENSOR_GH1_FINE_INTEGRATION_TIME_MIN                0x100
#define SENSOR_GH1_FINE_INTEGRATION_TIME_MAX                0x100
#define SENSOR_GH1_COARSE_INTEGRATION_TIME_MIN              0x4
#define SENSOR_GH1_COARSE_INTEGRATION_TIME_MAX_MARGIN       0x5
#define SENSOR_GH1_POST_INIT_SETTING_MAX	30

#define USE_GROUP_PARAM_HOLD	(0)

enum gh1_endian {
	GH1_LITTLE_ENDIAN = 0,	/* Default */
	GH1_BIG_ENDIAN = 1,
};

enum sensor_gh1_mode_enum {
		SENSOR_GH1_7296X5472_15FPS = 0,
		SENSOR_GH1_3648X2736_30FPS,
		SENSOR_GH1_3968X2232_30FPS,
		SENSOR_GH1_3968X2232_60FPS,
		SENSOR_GH1_1984X1116_240FPS,
		SENSOR_GH1_1824X1368_30FPS,
		SENSOR_GH1_1984X1116_30FPS,
		SENSOR_GH1_2944x2208_30FPS,
		SENSOR_GH1_3216x1808_30FPS,
		SENSOR_GH1_912X684_120FPS,
		SENSOR_GH1_3968X2232_120FPS,
		SENSOR_GH1_3648X2736_30FPS_SECURE,
};

const u32 sensor_gh1_pre_xtc[] = {
	0x6028, 0x2000, 0x02,
	0x602A, 0x4450, 0x02,
	0x6F12, 0x123D, 0x02,
	0x602A, 0x42C2, 0x02,
	0x6F12, 0x0000, 0x02,
};

static bool sensor_gh1_support_wb_gain[] = {
	true, //SENSOR_GH1_7296X5472_15FPS = 0,
	false, //SENSOR_GH1_3648X2736_30FPS = 1,
	false, //SENSOR_GH1_3968X2232_30FPS = 2,
	false, //SENSOR_GH1_3968X2232_60FPS = 3,
	false, //SENSOR_GH1_1984X1116_240FPS = 4,
	false, //SENSOR_GH1_1824X1368_30FPS = 5,
	false, //SENSOR_GH1_1984X1116_30FPS = 6,
	false, //SENSOR_GH1_2944x2208_30FPS = 7,
	false, //SENSOR_GH1_3216x1808_30FPS = 8,
	false, //SENSOR_GH1_912X684_120FPS = 9,
	false, //SENSOR_GH1_3968X2232_120FPS = 10,
};

#endif
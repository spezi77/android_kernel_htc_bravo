<<<<<<< HEAD
/* Copyright (c) 2008-2013, The Linux Foundation. All rights reserved.
=======
/* Copyright (c) 2008-2011, The Linux Foundation. All rights reserved.
>>>>>>> db8715f... drivers: gpu: update to .38
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef __Z180_H
#define __Z180_H

#include "kgsl_device.h"

#define DEVICE_2D_NAME "kgsl-2d"
#define DEVICE_2D0_NAME "kgsl-2d0"
#define DEVICE_2D1_NAME "kgsl-2d1"

#define Z180_DEFAULT_PWRSCALE_POLICY  NULL

/* Wait a maximum of 10 seconds when trying to idle the core */
#define Z180_IDLE_TIMEOUT (20 * 1000)
struct z180_ringbuffer {
	unsigned int prevctx;
	struct kgsl_memdesc      cmdbufdesc;
};

struct z180_device {
	struct kgsl_device dev;    /* Must be first field in this struct */
	int current_timestamp;
	int timestamp;
	struct z180_ringbuffer ringbuffer;
	spinlock_t cmdwin_lock;
};

#endif /* __Z180_H */

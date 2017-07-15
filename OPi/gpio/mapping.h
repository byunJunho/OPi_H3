/*
 *
 * This file is part of pyA20.
 * mapping.h is python GPIO extension.
 *
 * Copyright (c) 2014 Stefan Mavrodiev @ OLIMEX LTD, <support@olimex.com>
 *
 * pyA20 is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef __MAPPING_H
#define __MAPPING_H

#include "gpio_lib.h"

/**
Structure that describe all gpio
*/
typedef struct _pin {
    char name[10];          // The processor pin
    int offset;             // Memory offset for the pin
    int pin_number;         // Number on the connector
}pin_t;

typedef struct _gpio {
    char connector_name[10];
    pin_t pins[41];
}gpio_t;


gpio_t gpio[] = {
	{"gpio1",
        {
            {   "IO2",   SUNXI_GPA(12),   3  },	// I2C SDA
            {   "IO3",   SUNXI_GPA(11),   5  },	// I2C SCL
            {   "IO4",   SUNXI_GPA(6),    7  }, // PWM       
            {   "IO17",  SUNXI_GPA(1),   11  },
            {   "IO27",  SUNXI_GPA(0),   13  },
            {   "IO22",  SUNXI_GPA(3),   15  },
            {   "IO10",  SUNXI_GPC(0),   19  },	// SPI MOSI
			{   "IO9",   SUNXI_GPC(1),   21  },	// SPI MISO
            {   "IO11",  SUNXI_GPC(2),   23  },	// SPI CLK
            {   "IO31",  SUNXI_GPA(19),  27  },
            {   "IO5",   SUNXI_GPA(7),   29  },
            {   "IO6",   SUNXI_GPA(8),   31  },
            {   "IO13",  SUNXI_GPA(9),   33  },
            {   "IO19",  SUNXI_GPA(10),  35  },
            {   "IO26",  SUNXI_GPA(20),  37  },
            {   "IO14",  SUNXI_GPA(13),   8  },	// UART TX
            {   "IO15",  SUNXI_GPA(14),  10  },	// UART RX
            {   "IO18",  SUNXI_GPD(14),  12  },
            {   "IO23",  SUNXI_GPC(4),   16  },
            {   "IO24",  SUNXI_GPC(7),   18  },
            {   "IO25",  SUNXI_GPA(2),   22  },
            {   "IO8",   SUNXI_GPC(3),   24  },	// SPI CSO
            {   "IO7",   SUNXI_GPA(21),  26  },
            {   "IO32",  SUNXI_GPA(18),  28  },
            {   "IO12",  SUNXI_GPG(8),   32  },
            {   "IO16",  SUNXI_GPG(9),   36  },
            {   "IO20",  SUNXI_GPG(6),   38  },
            {   "IO21",  SUNXI_GPG(7),   40  },
            {
                {   0,  0,  0}
            },
        }
    },
	{"LED",
        {
            {   "STATUS_LED",  SUNXI_GPA(15),  2 },
            {
                {   0,  0,  0}
            },
        }
    },
};
#endif

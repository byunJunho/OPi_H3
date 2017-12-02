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
	{"gpin",
        {
            {   "IO2",   SUNXI_GPA(12),   3  },    // I2C SDA.0
            {   "IO3",   SUNXI_GPA(11),   5  },    // I2C SCL.0
            {   "IO4",   SUNXI_GPA(6),    7  },    // PWM       
            {   "IO17",  SUNXI_GPA(1),   11  },    // UART RX.2
            {   "IO27",  SUNXI_GPA(0),   13  },    // UART TX.2
            {   "IO22",  SUNXI_GPA(3),   15  },    // UART CTS.2
            {   "IO10",  SUNXI_GPC(0),   19  },    // SPI MOSI.0
            {   "IO9",   SUNXI_GPC(1),   21  },    // SPI MISO.1
            {   "IO11",  SUNXI_GPC(2),   23  },    // SPI CLK.1
            {   "IO31",  SUNXI_GPA(19),  27  },    // I2C SDA.1
            {   "IO5",   SUNXI_GPA(7),   29  },
            {   "IO6",   SUNXI_GPA(8),   31  },
            {   "IO13",  SUNXI_GPA(9),   33  },
            {   "IO19",  SUNXI_GPA(10),  35  },
            {   "IO26",  SUNXI_GPA(20),  37  },
            {   "IO14",  SUNXI_GPA(13),   8  },    // UART TX.3
            {   "IO15",  SUNXI_GPA(14),  10  },    // UART RX.3
            {   "IO18",  SUNXI_GPD(14),  12  },
            {   "IO23",  SUNXI_GPC(4),   16  },
            {   "IO24",  SUNXI_GPC(7),   18  },
            {   "IO25",  SUNXI_GPA(2),   22  },    // UART RTS.2
            {   "IO8",   SUNXI_GPC(3),   24  },    // SPI CSO.1
            {   "IO7",   SUNXI_GPA(21),  26  },
            {   "IO32",  SUNXI_GPA(18),  28  },    // I2C SCL.1
            {   "IO12",  SUNXI_GPG(8),   32  },    // UART RTS.1
            {   "IO16",  SUNXI_GPG(9),   36  },    // UART CTS.1
            {   "IO20",  SUNXI_GPG(6),   38  },    // UART TX.1
            {   "IO21",  SUNXI_GPG(7),   40  },    // UART RX.1
            {   "SLED",  SUNXI_GPA(15),   2  },
            {
                { 0, 0, 0 }
            },
        }
    },
	{"socp",
        {
            {   "PA12",   SUNXI_GPA(12),   3  },    // I2C SDA.0
            {   "PA11",   SUNXI_GPA(11),   5  },    // I2C SCL.0
            {   "PA6",    SUNXI_GPA(6),    7  },    // PWM       
            {   "PA1",    SUNXI_GPA(1),   11  },    // UART RX.2
            {   "PA0",    SUNXI_GPA(0),   13  },    // UART TX.2
            {   "PA3",    SUNXI_GPA(3),   15  },    // UART CTS.2
            {   "PC0",    SUNXI_GPC(0),   19  },    // SPI MOSI.0
            {   "PC1",    SUNXI_GPC(1),   21  },    // SPI MISO.1
            {   "PC2",    SUNXI_GPC(2),   23  },    // SPI CLK.1
            {   "PA19",   SUNXI_GPA(19),  27  },    // I2C SDA.1
            {   "PA7",    SUNXI_GPA(7),   29  },
            {   "PA8",    SUNXI_GPA(8),   31  },
            {   "PA9",    SUNXI_GPA(9),   33  },
            {   "PA10",   SUNXI_GPA(10),  35  },
            {   "PA20",   SUNXI_GPA(20),  37  },
            {   "PA13",   SUNXI_GPA(13),   8  },    // UART TX.3
            {   "PA14",   SUNXI_GPA(14),  10  },    // UART RX.3
            {   "PD14",   SUNXI_GPD(14),  12  },
            {   "PC4",    SUNXI_GPC(4),   16  },
            {   "PC7",    SUNXI_GPC(7),   18  },
            {   "PA2",    SUNXI_GPA(2),   22  },    // UART RTS.2
            {   "PC3",    SUNXI_GPC(3),   24  },    // SPI CSO.1
            {   "PA21",   SUNXI_GPA(21),  26  },
            {   "PA18",   SUNXI_GPA(18),  28  },    // I2C SCL.1
            {   "PG8",    SUNXI_GPG(8),   32  },    // UART RTS.1
            {   "PG9",    SUNXI_GPG(9),   36  },    // UART CTS.1
            {   "PG6",    SUNXI_GPG(6),   38  },    // UART TX.1
            {   "PG7",    SUNXI_GPG(7),   40  },    // UART RX.1
            {   "PA15",   SUNXI_GPA(15),   2  },
            {
                { 0, 0, 0 }
            },
        }
    },
};
#endif

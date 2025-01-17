/* Copyright 2018 Qiang Yu <yuq825@gmail.com>
 * SPDX-License-Identifier: MIT
 */

#ifndef __LIMA_DLBU_H__
#define __LIMA_DLBU_H__

struct lima_ip;
struct lima_device;

void lima_dlbu_enable(struct lima_device *dev, int num_pp);
void lima_dlbu_disable(struct lima_device *dev);

void lima_dlbu_set_reg(struct lima_ip *ip, u32 *reg);

int lima_dlbu_init(struct lima_ip *ip);
void lima_dlbu_fini(struct lima_ip *ip);

#endif

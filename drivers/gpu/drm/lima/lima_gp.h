/* Copyright 2017-2018 Qiang Yu <yuq825@gmail.com>
 * SPDX-License-Identifier: MIT
 */

#ifndef __LIMA_GP_H__
#define __LIMA_GP_H__

struct lima_ip;
struct lima_device;

int lima_gp_init(struct lima_ip *ip);
void lima_gp_fini(struct lima_ip *ip);

int lima_gp_pipe_init(struct lima_device *dev);
void lima_gp_pipe_fini(struct lima_device *dev);

#endif

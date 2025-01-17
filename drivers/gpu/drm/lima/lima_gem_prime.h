/* Copyright 2018 Qiang Yu <yuq825@gmail.com>
 * SPDX-License-Identifier: MIT
 */

#ifndef __LIMA_GEM_PRIME_H__
#define __LIMA_GEM_PRIME_H__

struct drm_gem_object *lima_gem_prime_import_sg_table(
	struct drm_device *dev, struct dma_buf_attachment *attach,
	struct sg_table *sgt);
struct sg_table *lima_gem_prime_get_sg_table(struct drm_gem_object *obj);
struct reservation_object *lima_gem_prime_res_obj(struct drm_gem_object *obj);

#endif

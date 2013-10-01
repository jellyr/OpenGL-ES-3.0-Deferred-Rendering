/*! @file mesh.h
 *  @brief Geometry definition
 *  @copyright Copyright (c) 2013 Kyle Weicht. All rights reserved.
 */
#ifndef __mesh_h__
#define __mesh_h__

#include <stdint.h>
#include <stddef.h>
#include "vertex.h"

typedef struct Mesh Mesh;

Mesh* create_mesh(const Vertex* vertex_data, size_t vertex_data_size,
                  const uint32_t* index_data, size_t index_data_size,
                  int index_count);
void draw_mesh(const Mesh* mesh);
void _destroy_mesh(Mesh* mesh);

#endif /* include guard */
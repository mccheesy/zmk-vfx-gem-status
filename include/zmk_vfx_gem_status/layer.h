#pragma once

#include <lvgl.h>
#include <zmk_vfx_gem_status/util.h>

struct layer_status_state {
    uint8_t index;
    const char *label;
};

void draw_layer_status(lv_obj_t *canvas, const struct status_state *state);
/*************************************************************************/
/*  godot_nativearvr.h                                                   */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           GODOT ENGINE                                */
/*                      https://godotengine.org                          */
/*************************************************************************/
/* Copyright (c) 2007-2017 Juan Linietsky, Ariel Manzur.                 */
/* Copyright (c) 2014-2017 Godot Engine contributors (cf. AUTHORS.md)    */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/
#ifndef GODOT_NATIVEARVR_H
#define GODOT_NATIVEARVR_H

#include <gdnative/gdnative.h>

#ifdef __cplusplus
extern "C" {
#endif

// helper functions to access ARVRServer data
godot_real GDAPI godot_arvr_get_worldscale();
godot_transform GDAPI godot_arvr_get_reference_frame();

// helper functions for rendering
void GDAPI godot_arvr_blit(godot_int p_eye, godot_rid *p_render_target, godot_rect2 *p_rect);
godot_int GDAPI godot_arvr_get_texid(godot_rid *p_render_target);

// helper functions for updating ARVR controllers
godot_int GDAPI godot_arvr_add_controller(char *p_device_name, godot_int p_hand, godot_bool p_tracks_orientation, godot_bool p_tracks_position);
void GDAPI godot_arvr_remove_controller(godot_int p_controller_id);
void GDAPI godot_arvr_set_controller_transform(godot_int p_controller_id, godot_transform *p_transform, godot_bool p_tracks_orientation, godot_bool p_tracks_position);
void GDAPI godot_arvr_set_controller_button(godot_int p_controller_id, godot_int p_button, godot_bool p_is_pressed);
void GDAPI godot_arvr_set_controller_axis(godot_int p_controller_id, godot_int p_axis, godot_real p_value, godot_bool p_can_be_negative);

#ifdef __cplusplus
}
#endif

#endif /* !GODOT_NATIVEARVR_H */
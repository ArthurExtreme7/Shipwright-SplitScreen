#ifndef LOCAL_MP_HUD_LAYOUT_H
#define LOCAL_MP_HUD_LAYOUT_H

#include <stdint.h>

// Set to 1 to re-enable the in-game Local Multiplayer HUD layout editor sliders.
// When disabled, the hardcoded offsets in z_parameter.c are used instead.
#define LOCAL_MP_HUD_LAYOUT_EDITOR 0

#define LOCAL_MP_HUD_ELEMENT_HEARTS 0
#define LOCAL_MP_HUD_ELEMENT_SWORD 1
#define LOCAL_MP_HUD_ELEMENT_ITEMS 2
#define LOCAL_MP_HUD_ELEMENT_MAGIC 3
#define LOCAL_MP_HUD_ELEMENT_COUNT 4

#define LOCAL_MP_HUD_AXIS_X 0
#define LOCAL_MP_HUD_AXIS_Y 1

// Returns the per-player HUD offset for the given element/axis.
// hasMagic selects the layout tuned for a player with or without a magic meter.
int16_t LocalMP_GetHudOffset(uint8_t controllerPort, uint8_t element, uint8_t axis, uint8_t hasMagic);

#endif

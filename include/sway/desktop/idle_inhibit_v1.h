
#ifndef _SWAY_DESKTOP_IDLE_INHIBIT_V1_H
#define _SWAY_DESKTOP_IDLE_INHIBIT_V1_H
#include <wlr/types/wlr_idle_inhibit_v1.h>
#include "sway/server.h"

struct sway_idle_inhibitor_v1 {
	struct sway_server *server;

	struct wl_listener destroy;
};

#endif

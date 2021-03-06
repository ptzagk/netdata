// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef NETDATA_API_ALLMETRICS_H
#define NETDATA_API_ALLMETRICS_H

#include "../rrd2json.h"
#include "shell/allmetrics_shell.h"

extern int web_client_api_request_v1_allmetrics(RRDHOST *host, struct web_client *w, char *url);

#endif //NETDATA_API_ALLMETRICS_H

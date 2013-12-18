/**
 * \file time_util.c
 * \brief Utilitaires temps (implémentation)
 * \author MEYER Jérémy
 * \author RAZANAJATO Harenome
 * \date 2013
 * \copyright WTFPL version 2
 */
/* This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://www.wtfpl.net/ for more details.
 */

#ifndef __TIME_UTIL_H
#define __TIME_UTIL_H

#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>

struct timeval diff_timeval(struct timeval start, struct timeval end);

long double extract_time(struct timeval time);

void print_timeval(struct timeval time);

#endif /* __TIME_UTIL_H */
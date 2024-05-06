/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>

#include <nanopb_test.h>

int main(void)
{
	printf("Hello World! %s\n", CONFIG_BOARD_TARGET);

	nanopb_test();

	return 0;
}

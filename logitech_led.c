#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#define DRIVER_AUTHOR "Brian Erikson <briankerikson@gmail.com>"
#define DRIVER_DESC "A Logitech G610 keyboard driver"

int init_module(void) {
	printk(KERN_INFO "Hello World\n");
	return 0;
}

void cleanup_module(void) {
	printk(KERN_INFO "Goodbye World\n");
}

MODULE_LICENSE("MIT");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

/*
 *  This module uses /dev/testdevice.  The MODULE_SUPPORTED_DEVICE macro might
 *  be used in the future to help automatic configuration of modules, but is
 *  currently unused other than for documentation purposes.
 */
//MODULE_SUPPORTED_DEVICE("testdevice");

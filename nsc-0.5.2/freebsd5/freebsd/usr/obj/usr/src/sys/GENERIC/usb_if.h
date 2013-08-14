/*
 * This file is produced automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   /usr/src/sys/dev/usb/usb_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */


#ifndef _usb_if_h_
#define _usb_if_h_

/** @brief Unique descriptor for the USB_RECONFIGURE() method */
extern struct kobjop_desc usb_reconfigure_desc;
/** @brief A function implementing the USB_RECONFIGURE() method */
typedef int usb_reconfigure_t(device_t dev);

static __inline int USB_RECONFIGURE(device_t dev)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,usb_reconfigure);
	return ((usb_reconfigure_t *) _m)(dev);
}

#endif /* _usb_if_h_ */

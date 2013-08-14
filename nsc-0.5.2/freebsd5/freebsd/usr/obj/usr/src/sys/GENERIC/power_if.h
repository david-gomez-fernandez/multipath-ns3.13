/*
 * This file is produced automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   /usr/src/sys/dev/pccard/power_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */


#ifndef _power_if_h_
#define _power_if_h_

/** @brief Unique descriptor for the POWER_ENABLE_SOCKET() method */
extern struct kobjop_desc power_enable_socket_desc;
/** @brief A function implementing the POWER_ENABLE_SOCKET() method */
typedef int power_enable_socket_t(device_t dev, device_t child);

static __inline int POWER_ENABLE_SOCKET(device_t dev, device_t child)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,power_enable_socket);
	return ((power_enable_socket_t *) _m)(dev, child);
}

/** @brief Unique descriptor for the POWER_DISABLE_SOCKET() method */
extern struct kobjop_desc power_disable_socket_desc;
/** @brief A function implementing the POWER_DISABLE_SOCKET() method */
typedef int power_disable_socket_t(device_t dev, device_t child);

static __inline int POWER_DISABLE_SOCKET(device_t dev, device_t child)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,power_disable_socket);
	return ((power_disable_socket_t *) _m)(dev, child);
}

#endif /* _power_if_h_ */

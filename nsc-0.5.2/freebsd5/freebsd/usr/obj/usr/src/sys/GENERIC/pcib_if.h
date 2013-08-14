/*
 * This file is produced automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   /usr/src/sys/dev/pci/pcib_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */


#ifndef _pcib_if_h_
#define _pcib_if_h_

/** @brief Unique descriptor for the PCIB_MAXSLOTS() method */
extern struct kobjop_desc pcib_maxslots_desc;
/** @brief A function implementing the PCIB_MAXSLOTS() method */
typedef int pcib_maxslots_t(device_t dev);

static __inline int PCIB_MAXSLOTS(device_t dev)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,pcib_maxslots);
	return ((pcib_maxslots_t *) _m)(dev);
}

/** @brief Unique descriptor for the PCIB_READ_CONFIG() method */
extern struct kobjop_desc pcib_read_config_desc;
/** @brief A function implementing the PCIB_READ_CONFIG() method */
typedef u_int32_t pcib_read_config_t(device_t dev, u_int bus, u_int slot,
                                     u_int func, u_int reg, int width);

static __inline u_int32_t PCIB_READ_CONFIG(device_t dev, u_int bus, u_int slot,
                                           u_int func, u_int reg, int width)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,pcib_read_config);
	return ((pcib_read_config_t *) _m)(dev, bus, slot, func, reg, width);
}

/** @brief Unique descriptor for the PCIB_WRITE_CONFIG() method */
extern struct kobjop_desc pcib_write_config_desc;
/** @brief A function implementing the PCIB_WRITE_CONFIG() method */
typedef void pcib_write_config_t(device_t dev, u_int bus, u_int slot,
                                 u_int func, u_int reg, u_int32_t value,
                                 int width);

static __inline void PCIB_WRITE_CONFIG(device_t dev, u_int bus, u_int slot,
                                       u_int func, u_int reg, u_int32_t value,
                                       int width)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,pcib_write_config);
	((pcib_write_config_t *) _m)(dev, bus, slot, func, reg, value, width);
}

/** @brief Unique descriptor for the PCIB_ROUTE_INTERRUPT() method */
extern struct kobjop_desc pcib_route_interrupt_desc;
/** @brief A function implementing the PCIB_ROUTE_INTERRUPT() method */
typedef int pcib_route_interrupt_t(device_t pcib, device_t dev, int pin);

static __inline int PCIB_ROUTE_INTERRUPT(device_t pcib, device_t dev, int pin)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)pcib)->ops,pcib_route_interrupt);
	return ((pcib_route_interrupt_t *) _m)(pcib, dev, pin);
}

#endif /* _pcib_if_h_ */

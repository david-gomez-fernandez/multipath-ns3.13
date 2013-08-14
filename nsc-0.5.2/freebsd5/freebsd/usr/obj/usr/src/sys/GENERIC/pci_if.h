/*
 * This file is produced automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   /usr/src/sys/dev/pci/pci_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */


#ifndef _pci_if_h_
#define _pci_if_h_

/** @brief Unique descriptor for the PCI_READ_CONFIG() method */
extern struct kobjop_desc pci_read_config_desc;
/** @brief A function implementing the PCI_READ_CONFIG() method */
typedef u_int32_t pci_read_config_t(device_t dev, device_t child, int reg,
                                    int width);

static __inline u_int32_t PCI_READ_CONFIG(device_t dev, device_t child, int reg,
                                          int width)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,pci_read_config);
	return ((pci_read_config_t *) _m)(dev, child, reg, width);
}

/** @brief Unique descriptor for the PCI_WRITE_CONFIG() method */
extern struct kobjop_desc pci_write_config_desc;
/** @brief A function implementing the PCI_WRITE_CONFIG() method */
typedef void pci_write_config_t(device_t dev, device_t child, int reg,
                                u_int32_t val, int width);

static __inline void PCI_WRITE_CONFIG(device_t dev, device_t child, int reg,
                                      u_int32_t val, int width)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,pci_write_config);
	((pci_write_config_t *) _m)(dev, child, reg, val, width);
}

/** @brief Unique descriptor for the PCI_GET_POWERSTATE() method */
extern struct kobjop_desc pci_get_powerstate_desc;
/** @brief A function implementing the PCI_GET_POWERSTATE() method */
typedef int pci_get_powerstate_t(device_t dev, device_t child);

static __inline int PCI_GET_POWERSTATE(device_t dev, device_t child)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,pci_get_powerstate);
	return ((pci_get_powerstate_t *) _m)(dev, child);
}

/** @brief Unique descriptor for the PCI_SET_POWERSTATE() method */
extern struct kobjop_desc pci_set_powerstate_desc;
/** @brief A function implementing the PCI_SET_POWERSTATE() method */
typedef int pci_set_powerstate_t(device_t dev, device_t child, int state);

static __inline int PCI_SET_POWERSTATE(device_t dev, device_t child, int state)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,pci_set_powerstate);
	return ((pci_set_powerstate_t *) _m)(dev, child, state);
}

/** @brief Unique descriptor for the PCI_ENABLE_BUSMASTER() method */
extern struct kobjop_desc pci_enable_busmaster_desc;
/** @brief A function implementing the PCI_ENABLE_BUSMASTER() method */
typedef int pci_enable_busmaster_t(device_t dev, device_t child);

static __inline int PCI_ENABLE_BUSMASTER(device_t dev, device_t child)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,pci_enable_busmaster);
	return ((pci_enable_busmaster_t *) _m)(dev, child);
}

/** @brief Unique descriptor for the PCI_DISABLE_BUSMASTER() method */
extern struct kobjop_desc pci_disable_busmaster_desc;
/** @brief A function implementing the PCI_DISABLE_BUSMASTER() method */
typedef int pci_disable_busmaster_t(device_t dev, device_t child);

static __inline int PCI_DISABLE_BUSMASTER(device_t dev, device_t child)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,pci_disable_busmaster);
	return ((pci_disable_busmaster_t *) _m)(dev, child);
}

/** @brief Unique descriptor for the PCI_ENABLE_IO() method */
extern struct kobjop_desc pci_enable_io_desc;
/** @brief A function implementing the PCI_ENABLE_IO() method */
typedef int pci_enable_io_t(device_t dev, device_t child, int space);

static __inline int PCI_ENABLE_IO(device_t dev, device_t child, int space)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,pci_enable_io);
	return ((pci_enable_io_t *) _m)(dev, child, space);
}

/** @brief Unique descriptor for the PCI_DISABLE_IO() method */
extern struct kobjop_desc pci_disable_io_desc;
/** @brief A function implementing the PCI_DISABLE_IO() method */
typedef int pci_disable_io_t(device_t dev, device_t child, int space);

static __inline int PCI_DISABLE_IO(device_t dev, device_t child, int space)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,pci_disable_io);
	return ((pci_disable_io_t *) _m)(dev, child, space);
}

/** @brief Unique descriptor for the PCI_ASSIGN_INTERRUPT() method */
extern struct kobjop_desc pci_assign_interrupt_desc;
/** @brief A function implementing the PCI_ASSIGN_INTERRUPT() method */
typedef int pci_assign_interrupt_t(device_t dev, device_t child);

static __inline int PCI_ASSIGN_INTERRUPT(device_t dev, device_t child)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,pci_assign_interrupt);
	return ((pci_assign_interrupt_t *) _m)(dev, child);
}

#endif /* _pci_if_h_ */

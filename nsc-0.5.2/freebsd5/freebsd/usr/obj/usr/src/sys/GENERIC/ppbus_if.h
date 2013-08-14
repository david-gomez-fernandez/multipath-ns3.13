/*
 * This file is produced automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   /usr/src/sys/dev/ppbus/ppbus_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */


#ifndef _ppbus_if_h_
#define _ppbus_if_h_

/** @brief Unique descriptor for the PPBUS_IO() method */
extern struct kobjop_desc ppbus_io_desc;
/** @brief A function implementing the PPBUS_IO() method */
typedef u_char ppbus_io_t(device_t dev, int opcode, u_char *addr, int cnt,
                          u_char byte);

static __inline u_char PPBUS_IO(device_t dev, int opcode, u_char *addr, int cnt,
                                u_char byte)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,ppbus_io);
	return ((ppbus_io_t *) _m)(dev, opcode, addr, cnt, byte);
}

/** @brief Unique descriptor for the PPBUS_EXEC_MICROSEQ() method */
extern struct kobjop_desc ppbus_exec_microseq_desc;
/** @brief A function implementing the PPBUS_EXEC_MICROSEQ() method */
typedef int ppbus_exec_microseq_t(device_t dev,
                                  struct ppb_microseq **ppb_microseq);

static __inline int PPBUS_EXEC_MICROSEQ(device_t dev,
                                        struct ppb_microseq **ppb_microseq)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,ppbus_exec_microseq);
	return ((ppbus_exec_microseq_t *) _m)(dev, ppb_microseq);
}

/** @brief Unique descriptor for the PPBUS_RESET_EPP() method */
extern struct kobjop_desc ppbus_reset_epp_desc;
/** @brief A function implementing the PPBUS_RESET_EPP() method */
typedef int ppbus_reset_epp_t(device_t dev);

static __inline int PPBUS_RESET_EPP(device_t dev)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,ppbus_reset_epp);
	return ((ppbus_reset_epp_t *) _m)(dev);
}

/** @brief Unique descriptor for the PPBUS_SETMODE() method */
extern struct kobjop_desc ppbus_setmode_desc;
/** @brief A function implementing the PPBUS_SETMODE() method */
typedef int ppbus_setmode_t(device_t dev, int mode);

static __inline int PPBUS_SETMODE(device_t dev, int mode)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,ppbus_setmode);
	return ((ppbus_setmode_t *) _m)(dev, mode);
}

/** @brief Unique descriptor for the PPBUS_ECP_SYNC() method */
extern struct kobjop_desc ppbus_ecp_sync_desc;
/** @brief A function implementing the PPBUS_ECP_SYNC() method */
typedef int ppbus_ecp_sync_t(device_t dev);

static __inline int PPBUS_ECP_SYNC(device_t dev)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,ppbus_ecp_sync);
	return ((ppbus_ecp_sync_t *) _m)(dev);
}

/** @brief Unique descriptor for the PPBUS_READ() method */
extern struct kobjop_desc ppbus_read_desc;
/** @brief A function implementing the PPBUS_READ() method */
typedef int ppbus_read_t(device_t dev, char *buf, int len, int how);

static __inline int PPBUS_READ(device_t dev, char *buf, int len, int how)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,ppbus_read);
	return ((ppbus_read_t *) _m)(dev, buf, len, how);
}

/** @brief Unique descriptor for the PPBUS_WRITE() method */
extern struct kobjop_desc ppbus_write_desc;
/** @brief A function implementing the PPBUS_WRITE() method */
typedef int ppbus_write_t(device_t dev, char *buf, int len, int how);

static __inline int PPBUS_WRITE(device_t dev, char *buf, int len, int how)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,ppbus_write);
	return ((ppbus_write_t *) _m)(dev, buf, len, how);
}

#endif /* _ppbus_if_h_ */

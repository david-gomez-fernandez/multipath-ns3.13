/*
 * This file is produced automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   /usr/src/sys/dev/pccard/card_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */


#ifndef _card_if_h_
#define _card_if_h_

/** @brief Unique descriptor for the CARD_SET_RES_FLAGS() method */
extern struct kobjop_desc card_set_res_flags_desc;
/** @brief A function implementing the CARD_SET_RES_FLAGS() method */
typedef int card_set_res_flags_t(device_t dev, device_t child, int restype,
                                 int rid, u_long value);

static __inline int CARD_SET_RES_FLAGS(device_t dev, device_t child,
                                       int restype, int rid, u_long value)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,card_set_res_flags);
	return ((card_set_res_flags_t *) _m)(dev, child, restype, rid, value);
}

/** @brief Unique descriptor for the CARD_GET_RES_FLAGS() method */
extern struct kobjop_desc card_get_res_flags_desc;
/** @brief A function implementing the CARD_GET_RES_FLAGS() method */
typedef int card_get_res_flags_t(device_t dev, device_t child, int restype,
                                 int rid, u_long *value);

static __inline int CARD_GET_RES_FLAGS(device_t dev, device_t child,
                                       int restype, int rid, u_long *value)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,card_get_res_flags);
	return ((card_get_res_flags_t *) _m)(dev, child, restype, rid, value);
}

/** @brief Unique descriptor for the CARD_SET_MEMORY_OFFSET() method */
extern struct kobjop_desc card_set_memory_offset_desc;
/** @brief A function implementing the CARD_SET_MEMORY_OFFSET() method */
typedef int card_set_memory_offset_t(device_t dev, device_t child, int rid,
                                     u_int32_t cardaddr, u_int32_t *deltap);

static __inline int CARD_SET_MEMORY_OFFSET(device_t dev, device_t child,
                                           int rid, u_int32_t cardaddr,
                                           u_int32_t *deltap)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,card_set_memory_offset);
	return ((card_set_memory_offset_t *) _m)(dev, child, rid, cardaddr, deltap);
}

/** @brief Unique descriptor for the CARD_GET_MEMORY_OFFSET() method */
extern struct kobjop_desc card_get_memory_offset_desc;
/** @brief A function implementing the CARD_GET_MEMORY_OFFSET() method */
typedef int card_get_memory_offset_t(device_t dev, device_t child, int rid,
                                     u_int32_t *offset);

static __inline int CARD_GET_MEMORY_OFFSET(device_t dev, device_t child,
                                           int rid, u_int32_t *offset)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,card_get_memory_offset);
	return ((card_get_memory_offset_t *) _m)(dev, child, rid, offset);
}

/** @brief Unique descriptor for the CARD_ATTACH_CARD() method */
extern struct kobjop_desc card_attach_card_desc;
/** @brief A function implementing the CARD_ATTACH_CARD() method */
typedef int card_attach_card_t(device_t dev);

static __inline int CARD_ATTACH_CARD(device_t dev)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,card_attach_card);
	return ((card_attach_card_t *) _m)(dev);
}

/** @brief Unique descriptor for the CARD_DETACH_CARD() method */
extern struct kobjop_desc card_detach_card_desc;
/** @brief A function implementing the CARD_DETACH_CARD() method */
typedef int card_detach_card_t(device_t dev);

static __inline int CARD_DETACH_CARD(device_t dev)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,card_detach_card);
	return ((card_detach_card_t *) _m)(dev);
}

/** @brief Unique descriptor for the CARD_GET_FUNCTION() method */
extern struct kobjop_desc card_get_function_desc;
/** @brief A function implementing the CARD_GET_FUNCTION() method */
typedef int card_get_function_t(device_t dev, device_t child, int *func);

static __inline int CARD_GET_FUNCTION(device_t dev, device_t child, int *func)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,card_get_function);
	return ((card_get_function_t *) _m)(dev, child, func);
}

/** @brief Unique descriptor for the CARD_ACTIVATE_FUNCTION() method */
extern struct kobjop_desc card_activate_function_desc;
/** @brief A function implementing the CARD_ACTIVATE_FUNCTION() method */
typedef int card_activate_function_t(device_t dev, device_t child);

static __inline int CARD_ACTIVATE_FUNCTION(device_t dev, device_t child)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,card_activate_function);
	return ((card_activate_function_t *) _m)(dev, child);
}

/** @brief Unique descriptor for the CARD_DEACTIVATE_FUNCTION() method */
extern struct kobjop_desc card_deactivate_function_desc;
/** @brief A function implementing the CARD_DEACTIVATE_FUNCTION() method */
typedef int card_deactivate_function_t(device_t dev, device_t child);

static __inline int CARD_DEACTIVATE_FUNCTION(device_t dev, device_t child)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,card_deactivate_function);
	return ((card_deactivate_function_t *) _m)(dev, child);
}

/** @brief Unique descriptor for the CARD_COMPAT_PROBE() method */
extern struct kobjop_desc card_compat_probe_desc;
/** @brief A function implementing the CARD_COMPAT_PROBE() method */
typedef int card_compat_probe_t(device_t dev);

static __inline int CARD_COMPAT_PROBE(device_t dev)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,card_compat_probe);
	return ((card_compat_probe_t *) _m)(dev);
}

/** @brief Unique descriptor for the CARD_COMPAT_ATTACH() method */
extern struct kobjop_desc card_compat_attach_desc;
/** @brief A function implementing the CARD_COMPAT_ATTACH() method */
typedef int card_compat_attach_t(device_t dev);

static __inline int CARD_COMPAT_ATTACH(device_t dev)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,card_compat_attach);
	return ((card_compat_attach_t *) _m)(dev);
}

/** @brief Unique descriptor for the CARD_COMPAT_DO_PROBE() method */
extern struct kobjop_desc card_compat_do_probe_desc;
/** @brief A function implementing the CARD_COMPAT_DO_PROBE() method */
typedef int card_compat_do_probe_t(device_t bus, device_t dev);

static __inline int CARD_COMPAT_DO_PROBE(device_t bus, device_t dev)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)bus)->ops,card_compat_do_probe);
	return ((card_compat_do_probe_t *) _m)(bus, dev);
}

/** @brief Unique descriptor for the CARD_COMPAT_DO_ATTACH() method */
extern struct kobjop_desc card_compat_do_attach_desc;
/** @brief A function implementing the CARD_COMPAT_DO_ATTACH() method */
typedef int card_compat_do_attach_t(device_t bus, device_t dev);

static __inline int CARD_COMPAT_DO_ATTACH(device_t bus, device_t dev)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)bus)->ops,card_compat_do_attach);
	return ((card_compat_do_attach_t *) _m)(bus, dev);
}

/** @brief Unique descriptor for the CARD_DO_PRODUCT_LOOKUP() method */
extern struct kobjop_desc card_do_product_lookup_desc;
/** @brief A function implementing the CARD_DO_PRODUCT_LOOKUP() method */
typedef struct pccard_product * card_do_product_lookup_t(device_t bus,
                                                         device_t dev,
                                                         const struct pccard_product *tab, size_t ent_size, pccard_product_match_fn matchfn);

static __inline struct pccard_product * CARD_DO_PRODUCT_LOOKUP(device_t bus,
                                                               device_t dev,
                                                               const struct pccard_product *tab, size_t ent_size, pccard_product_match_fn matchfn)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)bus)->ops,card_do_product_lookup);
	return ((card_do_product_lookup_t *) _m)(bus, dev, tab, ent_size, matchfn);
}

/** @brief Unique descriptor for the CARD_COMPAT_MATCH() method */
extern struct kobjop_desc card_compat_match_desc;
/** @brief A function implementing the CARD_COMPAT_MATCH() method */
typedef int card_compat_match_t(device_t dev);

static __inline int CARD_COMPAT_MATCH(device_t dev)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)dev)->ops,card_compat_match);
	return ((card_compat_match_t *) _m)(dev);
}

#endif /* _card_if_h_ */

/*
 * This file is produced automatically.
 * Do not modify anything in here by hand.
 *
 * Created from $FreeBSD: src/sys/tools/vnode_if.awk,v 1.40 2004/04/07 04:19:52 imp Exp $
 */

#include <sys/param.h>
#include <sys/systm.h>
#include <sys/vnode.h>

struct vnodeop_desc vop_default_desc = {
	1,			/* special case, vop_default => 1 */
	"default",
	0,
	NULL,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_islocked_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_islocked_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_islocked_desc = {
	0,
	"vop_islocked",
	0,
	vop_islocked_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_islocked_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_lookup_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_lookup_args,a_dvp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_lookup_desc = {
	0,
	"vop_lookup",
	0,
	vop_lookup_vp_offsets,
	VOPARG_OFFSETOF(struct vop_lookup_args,a_vpp),
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_lookup_args,a_cnp),
	NULL,
};

static int vop_cachedlookup_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_cachedlookup_args,a_dvp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_cachedlookup_desc = {
	0,
	"vop_cachedlookup",
	0,
	vop_cachedlookup_vp_offsets,
	VOPARG_OFFSETOF(struct vop_cachedlookup_args,a_vpp),
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_cachedlookup_args,a_cnp),
	NULL,
};

static int vop_create_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_create_args,a_dvp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_create_desc = {
	0,
	"vop_create",
	0,
	vop_create_vp_offsets,
	VOPARG_OFFSETOF(struct vop_create_args,a_vpp),
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_create_args,a_cnp),
	NULL,
};

static int vop_whiteout_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_whiteout_args,a_dvp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_whiteout_desc = {
	0,
	"vop_whiteout",
	0,
	vop_whiteout_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_whiteout_args,a_cnp),
	NULL,
};

static int vop_mknod_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_mknod_args,a_dvp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_mknod_desc = {
	0,
	"vop_mknod",
	0,
	vop_mknod_vp_offsets,
	VOPARG_OFFSETOF(struct vop_mknod_args,a_vpp),
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_mknod_args,a_cnp),
	NULL,
};

static int vop_open_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_open_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_open_desc = {
	0,
	"vop_open",
	0,
	vop_open_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_open_args,a_cred),
	VOPARG_OFFSETOF(struct vop_open_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_close_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_close_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_close_desc = {
	0,
	"vop_close",
	0,
	vop_close_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_close_args,a_cred),
	VOPARG_OFFSETOF(struct vop_close_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_access_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_access_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_access_desc = {
	0,
	"vop_access",
	0,
	vop_access_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_access_args,a_cred),
	VOPARG_OFFSETOF(struct vop_access_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_getattr_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_getattr_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_getattr_desc = {
	0,
	"vop_getattr",
	0,
	vop_getattr_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_getattr_args,a_cred),
	VOPARG_OFFSETOF(struct vop_getattr_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_setattr_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_setattr_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_setattr_desc = {
	0,
	"vop_setattr",
	0,
	vop_setattr_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_setattr_args,a_cred),
	VOPARG_OFFSETOF(struct vop_setattr_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_read_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_read_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_read_desc = {
	0,
	"vop_read",
	0,
	vop_read_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_read_args,a_cred),
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_write_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_write_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_write_desc = {
	0,
	"vop_write",
	0,
	vop_write_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_write_args,a_cred),
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_lease_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_lease_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_lease_desc = {
	0,
	"vop_lease",
	0,
	vop_lease_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_lease_args,a_cred),
	VOPARG_OFFSETOF(struct vop_lease_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_ioctl_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_ioctl_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_ioctl_desc = {
	0,
	"vop_ioctl",
	0,
	vop_ioctl_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_ioctl_args,a_cred),
	VOPARG_OFFSETOF(struct vop_ioctl_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_poll_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_poll_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_poll_desc = {
	0,
	"vop_poll",
	0,
	vop_poll_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_poll_args,a_cred),
	VOPARG_OFFSETOF(struct vop_poll_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_kqfilter_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_kqfilter_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_kqfilter_desc = {
	0,
	"vop_kqfilter",
	0,
	vop_kqfilter_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_revoke_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_revoke_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_revoke_desc = {
	0,
	"vop_revoke",
	0,
	vop_revoke_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_fsync_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_fsync_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_fsync_desc = {
	0,
	"vop_fsync",
	0,
	vop_fsync_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_fsync_args,a_cred),
	VOPARG_OFFSETOF(struct vop_fsync_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_remove_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_remove_args,a_dvp),
	VOPARG_OFFSETOF(struct vop_remove_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_remove_desc = {
	0,
	"vop_remove",
	0,
	vop_remove_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_remove_args,a_cnp),
	NULL,
};

static int vop_link_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_link_args,a_tdvp),
	VOPARG_OFFSETOF(struct vop_link_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_link_desc = {
	0,
	"vop_link",
	0,
	vop_link_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_link_args,a_cnp),
	NULL,
};

static int vop_rename_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_rename_args,a_fdvp),
	VOPARG_OFFSETOF(struct vop_rename_args,a_fvp),
	VOPARG_OFFSETOF(struct vop_rename_args,a_tdvp),
	VOPARG_OFFSETOF(struct vop_rename_args,a_tvp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_rename_desc = {
	0,
	"vop_rename",
	VDESC_VP0_WILLRELE|VDESC_VP1_WILLRELE|VDESC_VP2_WILLRELE|VDESC_VP3_WILLRELE,
	vop_rename_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_rename_args,a_fcnp),
	NULL,
};

static int vop_mkdir_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_mkdir_args,a_dvp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_mkdir_desc = {
	0,
	"vop_mkdir",
	0,
	vop_mkdir_vp_offsets,
	VOPARG_OFFSETOF(struct vop_mkdir_args,a_vpp),
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_mkdir_args,a_cnp),
	NULL,
};

static int vop_rmdir_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_rmdir_args,a_dvp),
	VOPARG_OFFSETOF(struct vop_rmdir_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_rmdir_desc = {
	0,
	"vop_rmdir",
	0,
	vop_rmdir_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_rmdir_args,a_cnp),
	NULL,
};

static int vop_symlink_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_symlink_args,a_dvp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_symlink_desc = {
	0,
	"vop_symlink",
	0,
	vop_symlink_vp_offsets,
	VOPARG_OFFSETOF(struct vop_symlink_args,a_vpp),
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_symlink_args,a_cnp),
	NULL,
};

static int vop_readdir_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_readdir_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_readdir_desc = {
	0,
	"vop_readdir",
	0,
	vop_readdir_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_readdir_args,a_cred),
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_readlink_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_readlink_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_readlink_desc = {
	0,
	"vop_readlink",
	0,
	vop_readlink_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_readlink_args,a_cred),
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_inactive_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_inactive_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_inactive_desc = {
	0,
	"vop_inactive",
	0,
	vop_inactive_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_inactive_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_reclaim_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_reclaim_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_reclaim_desc = {
	0,
	"vop_reclaim",
	0,
	vop_reclaim_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_reclaim_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_lock_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_lock_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_lock_desc = {
	0,
	"vop_lock",
	0,
	vop_lock_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_lock_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_unlock_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_unlock_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_unlock_desc = {
	0,
	"vop_unlock",
	0,
	vop_unlock_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_unlock_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_bmap_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_bmap_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_bmap_desc = {
	0,
	"vop_bmap",
	0,
	vop_bmap_vp_offsets,
	VOPARG_OFFSETOF(struct vop_bmap_args,a_vpp),
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_strategy_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_strategy_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_strategy_desc = {
	0,
	"vop_strategy",
	0,
	vop_strategy_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_specstrategy_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_specstrategy_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_specstrategy_desc = {
	0,
	"vop_specstrategy",
	0,
	vop_specstrategy_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_getwritemount_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_getwritemount_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_getwritemount_desc = {
	0,
	"vop_getwritemount",
	0,
	vop_getwritemount_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_print_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_print_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_print_desc = {
	0,
	"vop_print",
	0,
	vop_print_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_pathconf_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_pathconf_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_pathconf_desc = {
	0,
	"vop_pathconf",
	0,
	vop_pathconf_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_advlock_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_advlock_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_advlock_desc = {
	0,
	"vop_advlock",
	0,
	vop_advlock_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_reallocblks_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_reallocblks_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_reallocblks_desc = {
	0,
	"vop_reallocblks",
	0,
	vop_reallocblks_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_getpages_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_getpages_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_getpages_desc = {
	0,
	"vop_getpages",
	0,
	vop_getpages_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_putpages_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_putpages_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_putpages_desc = {
	0,
	"vop_putpages",
	0,
	vop_putpages_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_freeblks_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_freeblks_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_freeblks_desc = {
	0,
	"vop_freeblks",
	0,
	vop_freeblks_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_getacl_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_getacl_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_getacl_desc = {
	0,
	"vop_getacl",
	0,
	vop_getacl_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_getacl_args,a_cred),
	VOPARG_OFFSETOF(struct vop_getacl_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_setacl_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_setacl_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_setacl_desc = {
	0,
	"vop_setacl",
	0,
	vop_setacl_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_setacl_args,a_cred),
	VOPARG_OFFSETOF(struct vop_setacl_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_aclcheck_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_aclcheck_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_aclcheck_desc = {
	0,
	"vop_aclcheck",
	0,
	vop_aclcheck_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_aclcheck_args,a_cred),
	VOPARG_OFFSETOF(struct vop_aclcheck_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_closeextattr_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_closeextattr_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_closeextattr_desc = {
	0,
	"vop_closeextattr",
	0,
	vop_closeextattr_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_closeextattr_args,a_cred),
	VOPARG_OFFSETOF(struct vop_closeextattr_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_getextattr_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_getextattr_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_getextattr_desc = {
	0,
	"vop_getextattr",
	0,
	vop_getextattr_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_getextattr_args,a_cred),
	VOPARG_OFFSETOF(struct vop_getextattr_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_listextattr_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_listextattr_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_listextattr_desc = {
	0,
	"vop_listextattr",
	0,
	vop_listextattr_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_listextattr_args,a_cred),
	VOPARG_OFFSETOF(struct vop_listextattr_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_openextattr_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_openextattr_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_openextattr_desc = {
	0,
	"vop_openextattr",
	0,
	vop_openextattr_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_openextattr_args,a_cred),
	VOPARG_OFFSETOF(struct vop_openextattr_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_deleteextattr_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_deleteextattr_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_deleteextattr_desc = {
	0,
	"vop_deleteextattr",
	0,
	vop_deleteextattr_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_deleteextattr_args,a_cred),
	VOPARG_OFFSETOF(struct vop_deleteextattr_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_setextattr_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_setextattr_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_setextattr_desc = {
	0,
	"vop_setextattr",
	0,
	vop_setextattr_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_setextattr_args,a_cred),
	VOPARG_OFFSETOF(struct vop_setextattr_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_createvobject_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_createvobject_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_createvobject_desc = {
	0,
	"vop_createvobject",
	0,
	vop_createvobject_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_createvobject_args,a_cred),
	VOPARG_OFFSETOF(struct vop_createvobject_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_destroyvobject_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_destroyvobject_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_destroyvobject_desc = {
	0,
	"vop_destroyvobject",
	0,
	vop_destroyvobject_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_getvobject_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_getvobject_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_getvobject_desc = {
	0,
	"vop_getvobject",
	0,
	vop_getvobject_vp_offsets,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	VDESC_NO_OFFSET,
	NULL,
};

static int vop_setlabel_vp_offsets[] = {
	VOPARG_OFFSETOF(struct vop_setlabel_args,a_vp),
	VDESC_NO_OFFSET
};
struct vnodeop_desc vop_setlabel_desc = {
	0,
	"vop_setlabel",
	0,
	vop_setlabel_vp_offsets,
	VDESC_NO_OFFSET,
	VOPARG_OFFSETOF(struct vop_setlabel_args,a_cred),
	VOPARG_OFFSETOF(struct vop_setlabel_args,a_td),
	VDESC_NO_OFFSET,
	NULL,
};


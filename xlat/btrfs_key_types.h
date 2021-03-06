/* Generated by ./xlat/gen.sh from ./xlat/btrfs_key_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BTRFS_INODE_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_INODE_ITEM_KEY) && HAVE_DECL_BTRFS_INODE_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_INODE_ITEM_KEY) == (1), "BTRFS_INODE_ITEM_KEY != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_INODE_ITEM_KEY 1
#endif
#if defined(BTRFS_INODE_REF_KEY) || (defined(HAVE_DECL_BTRFS_INODE_REF_KEY) && HAVE_DECL_BTRFS_INODE_REF_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_INODE_REF_KEY) == (12), "BTRFS_INODE_REF_KEY != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_INODE_REF_KEY 12
#endif
#if defined(BTRFS_INODE_EXTREF_KEY) || (defined(HAVE_DECL_BTRFS_INODE_EXTREF_KEY) && HAVE_DECL_BTRFS_INODE_EXTREF_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_INODE_EXTREF_KEY) == (13), "BTRFS_INODE_EXTREF_KEY != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_INODE_EXTREF_KEY 13
#endif
#if defined(BTRFS_XATTR_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_XATTR_ITEM_KEY) && HAVE_DECL_BTRFS_XATTR_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_XATTR_ITEM_KEY) == (24), "BTRFS_XATTR_ITEM_KEY != 24");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_XATTR_ITEM_KEY 24
#endif
#if defined(BTRFS_ORPHAN_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_ORPHAN_ITEM_KEY) && HAVE_DECL_BTRFS_ORPHAN_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_ORPHAN_ITEM_KEY) == (48), "BTRFS_ORPHAN_ITEM_KEY != 48");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_ORPHAN_ITEM_KEY 48
#endif
#if defined(BTRFS_DIR_LOG_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_DIR_LOG_ITEM_KEY) && HAVE_DECL_BTRFS_DIR_LOG_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_DIR_LOG_ITEM_KEY) == (60), "BTRFS_DIR_LOG_ITEM_KEY != 60");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_DIR_LOG_ITEM_KEY 60
#endif
#if defined(BTRFS_DIR_LOG_INDEX_KEY) || (defined(HAVE_DECL_BTRFS_DIR_LOG_INDEX_KEY) && HAVE_DECL_BTRFS_DIR_LOG_INDEX_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_DIR_LOG_INDEX_KEY) == (72), "BTRFS_DIR_LOG_INDEX_KEY != 72");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_DIR_LOG_INDEX_KEY 72
#endif
#if defined(BTRFS_DIR_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_DIR_ITEM_KEY) && HAVE_DECL_BTRFS_DIR_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_DIR_ITEM_KEY) == (84), "BTRFS_DIR_ITEM_KEY != 84");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_DIR_ITEM_KEY 84
#endif
#if defined(BTRFS_DIR_INDEX_KEY) || (defined(HAVE_DECL_BTRFS_DIR_INDEX_KEY) && HAVE_DECL_BTRFS_DIR_INDEX_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_DIR_INDEX_KEY) == (96), "BTRFS_DIR_INDEX_KEY != 96");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_DIR_INDEX_KEY 96
#endif
#if defined(BTRFS_EXTENT_DATA_KEY) || (defined(HAVE_DECL_BTRFS_EXTENT_DATA_KEY) && HAVE_DECL_BTRFS_EXTENT_DATA_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_EXTENT_DATA_KEY) == (108), "BTRFS_EXTENT_DATA_KEY != 108");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_EXTENT_DATA_KEY 108
#endif
#if defined(BTRFS_EXTENT_CSUM_KEY) || (defined(HAVE_DECL_BTRFS_EXTENT_CSUM_KEY) && HAVE_DECL_BTRFS_EXTENT_CSUM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_EXTENT_CSUM_KEY) == (128), "BTRFS_EXTENT_CSUM_KEY != 128");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_EXTENT_CSUM_KEY 128
#endif
#if defined(BTRFS_ROOT_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_ROOT_ITEM_KEY) && HAVE_DECL_BTRFS_ROOT_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_ROOT_ITEM_KEY) == (132), "BTRFS_ROOT_ITEM_KEY != 132");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_ROOT_ITEM_KEY 132
#endif
#if defined(BTRFS_ROOT_BACKREF_KEY) || (defined(HAVE_DECL_BTRFS_ROOT_BACKREF_KEY) && HAVE_DECL_BTRFS_ROOT_BACKREF_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_ROOT_BACKREF_KEY) == (144), "BTRFS_ROOT_BACKREF_KEY != 144");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_ROOT_BACKREF_KEY 144
#endif
#if defined(BTRFS_ROOT_REF_KEY) || (defined(HAVE_DECL_BTRFS_ROOT_REF_KEY) && HAVE_DECL_BTRFS_ROOT_REF_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_ROOT_REF_KEY) == (156), "BTRFS_ROOT_REF_KEY != 156");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_ROOT_REF_KEY 156
#endif
#if defined(BTRFS_EXTENT_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_EXTENT_ITEM_KEY) && HAVE_DECL_BTRFS_EXTENT_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_EXTENT_ITEM_KEY) == (168), "BTRFS_EXTENT_ITEM_KEY != 168");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_EXTENT_ITEM_KEY 168
#endif
#if defined(BTRFS_METADATA_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_METADATA_ITEM_KEY) && HAVE_DECL_BTRFS_METADATA_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_METADATA_ITEM_KEY) == (169), "BTRFS_METADATA_ITEM_KEY != 169");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_METADATA_ITEM_KEY 169
#endif
#if defined(BTRFS_TREE_BLOCK_REF_KEY) || (defined(HAVE_DECL_BTRFS_TREE_BLOCK_REF_KEY) && HAVE_DECL_BTRFS_TREE_BLOCK_REF_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_TREE_BLOCK_REF_KEY) == (176), "BTRFS_TREE_BLOCK_REF_KEY != 176");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_TREE_BLOCK_REF_KEY 176
#endif
#if defined(BTRFS_EXTENT_DATA_REF_KEY) || (defined(HAVE_DECL_BTRFS_EXTENT_DATA_REF_KEY) && HAVE_DECL_BTRFS_EXTENT_DATA_REF_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_EXTENT_DATA_REF_KEY) == (178), "BTRFS_EXTENT_DATA_REF_KEY != 178");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_EXTENT_DATA_REF_KEY 178
#endif
#if defined(BTRFS_EXTENT_REF_V0_KEY) || (defined(HAVE_DECL_BTRFS_EXTENT_REF_V0_KEY) && HAVE_DECL_BTRFS_EXTENT_REF_V0_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_EXTENT_REF_V0_KEY) == (180), "BTRFS_EXTENT_REF_V0_KEY != 180");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_EXTENT_REF_V0_KEY 180
#endif
#if defined(BTRFS_SHARED_BLOCK_REF_KEY) || (defined(HAVE_DECL_BTRFS_SHARED_BLOCK_REF_KEY) && HAVE_DECL_BTRFS_SHARED_BLOCK_REF_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_SHARED_BLOCK_REF_KEY) == (182), "BTRFS_SHARED_BLOCK_REF_KEY != 182");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_SHARED_BLOCK_REF_KEY 182
#endif
#if defined(BTRFS_SHARED_DATA_REF_KEY) || (defined(HAVE_DECL_BTRFS_SHARED_DATA_REF_KEY) && HAVE_DECL_BTRFS_SHARED_DATA_REF_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_SHARED_DATA_REF_KEY) == (184), "BTRFS_SHARED_DATA_REF_KEY != 184");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_SHARED_DATA_REF_KEY 184
#endif
#if defined(BTRFS_BLOCK_GROUP_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_BLOCK_GROUP_ITEM_KEY) && HAVE_DECL_BTRFS_BLOCK_GROUP_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_BLOCK_GROUP_ITEM_KEY) == (192), "BTRFS_BLOCK_GROUP_ITEM_KEY != 192");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_BLOCK_GROUP_ITEM_KEY 192
#endif
#if defined(BTRFS_FREE_SPACE_INFO_KEY) || (defined(HAVE_DECL_BTRFS_FREE_SPACE_INFO_KEY) && HAVE_DECL_BTRFS_FREE_SPACE_INFO_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_FREE_SPACE_INFO_KEY) == (198), "BTRFS_FREE_SPACE_INFO_KEY != 198");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_FREE_SPACE_INFO_KEY 198
#endif
#if defined(BTRFS_FREE_SPACE_EXTENT_KEY) || (defined(HAVE_DECL_BTRFS_FREE_SPACE_EXTENT_KEY) && HAVE_DECL_BTRFS_FREE_SPACE_EXTENT_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_FREE_SPACE_EXTENT_KEY) == (199), "BTRFS_FREE_SPACE_EXTENT_KEY != 199");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_FREE_SPACE_EXTENT_KEY 199
#endif
#if defined(BTRFS_FREE_SPACE_BITMAP_KEY) || (defined(HAVE_DECL_BTRFS_FREE_SPACE_BITMAP_KEY) && HAVE_DECL_BTRFS_FREE_SPACE_BITMAP_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_FREE_SPACE_BITMAP_KEY) == (200), "BTRFS_FREE_SPACE_BITMAP_KEY != 200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_FREE_SPACE_BITMAP_KEY 200
#endif
#if defined(BTRFS_DEV_EXTENT_KEY) || (defined(HAVE_DECL_BTRFS_DEV_EXTENT_KEY) && HAVE_DECL_BTRFS_DEV_EXTENT_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_DEV_EXTENT_KEY) == (204), "BTRFS_DEV_EXTENT_KEY != 204");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_DEV_EXTENT_KEY 204
#endif
#if defined(BTRFS_DEV_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_DEV_ITEM_KEY) && HAVE_DECL_BTRFS_DEV_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_DEV_ITEM_KEY) == (216), "BTRFS_DEV_ITEM_KEY != 216");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_DEV_ITEM_KEY 216
#endif
#if defined(BTRFS_CHUNK_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_CHUNK_ITEM_KEY) && HAVE_DECL_BTRFS_CHUNK_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_CHUNK_ITEM_KEY) == (228), "BTRFS_CHUNK_ITEM_KEY != 228");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_CHUNK_ITEM_KEY 228
#endif
#if defined(BTRFS_QGROUP_STATUS_KEY) || (defined(HAVE_DECL_BTRFS_QGROUP_STATUS_KEY) && HAVE_DECL_BTRFS_QGROUP_STATUS_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_QGROUP_STATUS_KEY) == (240), "BTRFS_QGROUP_STATUS_KEY != 240");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_QGROUP_STATUS_KEY 240
#endif
#if defined(BTRFS_QGROUP_INFO_KEY) || (defined(HAVE_DECL_BTRFS_QGROUP_INFO_KEY) && HAVE_DECL_BTRFS_QGROUP_INFO_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_QGROUP_INFO_KEY) == (242), "BTRFS_QGROUP_INFO_KEY != 242");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_QGROUP_INFO_KEY 242
#endif
#if defined(BTRFS_QGROUP_LIMIT_KEY) || (defined(HAVE_DECL_BTRFS_QGROUP_LIMIT_KEY) && HAVE_DECL_BTRFS_QGROUP_LIMIT_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_QGROUP_LIMIT_KEY) == (244), "BTRFS_QGROUP_LIMIT_KEY != 244");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_QGROUP_LIMIT_KEY 244
#endif
#if defined(BTRFS_QGROUP_RELATION_KEY) || (defined(HAVE_DECL_BTRFS_QGROUP_RELATION_KEY) && HAVE_DECL_BTRFS_QGROUP_RELATION_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_QGROUP_RELATION_KEY) == (246), "BTRFS_QGROUP_RELATION_KEY != 246");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_QGROUP_RELATION_KEY 246
#endif
#if defined(BTRFS_BALANCE_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_BALANCE_ITEM_KEY) && HAVE_DECL_BTRFS_BALANCE_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_BALANCE_ITEM_KEY) == (248), "BTRFS_BALANCE_ITEM_KEY != 248");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_BALANCE_ITEM_KEY 248
#endif
#if defined(BTRFS_TEMPORARY_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_TEMPORARY_ITEM_KEY) && HAVE_DECL_BTRFS_TEMPORARY_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_TEMPORARY_ITEM_KEY) == (248), "BTRFS_TEMPORARY_ITEM_KEY != 248");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_TEMPORARY_ITEM_KEY 248
#endif
#if defined(BTRFS_DEV_STATS_KEY) || (defined(HAVE_DECL_BTRFS_DEV_STATS_KEY) && HAVE_DECL_BTRFS_DEV_STATS_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_DEV_STATS_KEY) == (249), "BTRFS_DEV_STATS_KEY != 249");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_DEV_STATS_KEY 249
#endif
#if defined(BTRFS_PERSISTENT_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_PERSISTENT_ITEM_KEY) && HAVE_DECL_BTRFS_PERSISTENT_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_PERSISTENT_ITEM_KEY) == (249), "BTRFS_PERSISTENT_ITEM_KEY != 249");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_PERSISTENT_ITEM_KEY 249
#endif
#if defined(BTRFS_DEV_REPLACE_KEY) || (defined(HAVE_DECL_BTRFS_DEV_REPLACE_KEY) && HAVE_DECL_BTRFS_DEV_REPLACE_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_DEV_REPLACE_KEY) == (250), "BTRFS_DEV_REPLACE_KEY != 250");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_DEV_REPLACE_KEY 250
#endif
#if defined(BTRFS_UUID_KEY_SUBVOL) || (defined(HAVE_DECL_BTRFS_UUID_KEY_SUBVOL) && HAVE_DECL_BTRFS_UUID_KEY_SUBVOL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_UUID_KEY_SUBVOL) == (251), "BTRFS_UUID_KEY_SUBVOL != 251");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_UUID_KEY_SUBVOL 251
#endif
#if defined(BTRFS_UUID_KEY_RECEIVED_SUBVOL) || (defined(HAVE_DECL_BTRFS_UUID_KEY_RECEIVED_SUBVOL) && HAVE_DECL_BTRFS_UUID_KEY_RECEIVED_SUBVOL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_UUID_KEY_RECEIVED_SUBVOL) == (252), "BTRFS_UUID_KEY_RECEIVED_SUBVOL != 252");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_UUID_KEY_RECEIVED_SUBVOL 252
#endif
#if defined(BTRFS_STRING_ITEM_KEY) || (defined(HAVE_DECL_BTRFS_STRING_ITEM_KEY) && HAVE_DECL_BTRFS_STRING_ITEM_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_STRING_ITEM_KEY) == (253), "BTRFS_STRING_ITEM_KEY != 253");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_STRING_ITEM_KEY 253
#endif
#if defined(UINT32_MAX) || (defined(HAVE_DECL_UINT32_MAX) && HAVE_DECL_UINT32_MAX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((UINT32_MAX) == (-1U), "UINT32_MAX != -1U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define UINT32_MAX -1U
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat btrfs_key_types[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat btrfs_key_types[] = {
 XLAT_TYPE(uint64_t, BTRFS_INODE_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_INODE_REF_KEY),
 XLAT_TYPE(uint64_t, BTRFS_INODE_EXTREF_KEY),
 XLAT_TYPE(uint64_t, BTRFS_XATTR_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_ORPHAN_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_DIR_LOG_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_DIR_LOG_INDEX_KEY),
 XLAT_TYPE(uint64_t, BTRFS_DIR_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_DIR_INDEX_KEY),
 XLAT_TYPE(uint64_t, BTRFS_EXTENT_DATA_KEY),
 XLAT_TYPE(uint64_t, BTRFS_EXTENT_CSUM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_ROOT_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_ROOT_BACKREF_KEY),
 XLAT_TYPE(uint64_t, BTRFS_ROOT_REF_KEY),
 XLAT_TYPE(uint64_t, BTRFS_EXTENT_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_METADATA_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_TREE_BLOCK_REF_KEY),
 XLAT_TYPE(uint64_t, BTRFS_EXTENT_DATA_REF_KEY),
 XLAT_TYPE(uint64_t, BTRFS_EXTENT_REF_V0_KEY),
 XLAT_TYPE(uint64_t, BTRFS_SHARED_BLOCK_REF_KEY),
 XLAT_TYPE(uint64_t, BTRFS_SHARED_DATA_REF_KEY),
 XLAT_TYPE(uint64_t, BTRFS_BLOCK_GROUP_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_FREE_SPACE_INFO_KEY),
 XLAT_TYPE(uint64_t, BTRFS_FREE_SPACE_EXTENT_KEY),
 XLAT_TYPE(uint64_t, BTRFS_FREE_SPACE_BITMAP_KEY),
 XLAT_TYPE(uint64_t, BTRFS_DEV_EXTENT_KEY),
 XLAT_TYPE(uint64_t, BTRFS_DEV_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_CHUNK_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_QGROUP_STATUS_KEY),
 XLAT_TYPE(uint64_t, BTRFS_QGROUP_INFO_KEY),
 XLAT_TYPE(uint64_t, BTRFS_QGROUP_LIMIT_KEY),
 XLAT_TYPE(uint64_t, BTRFS_QGROUP_RELATION_KEY),
 XLAT_TYPE(uint64_t, BTRFS_BALANCE_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_TEMPORARY_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_DEV_STATS_KEY),
 XLAT_TYPE(uint64_t, BTRFS_PERSISTENT_ITEM_KEY),
 XLAT_TYPE(uint64_t, BTRFS_DEV_REPLACE_KEY),
 XLAT_TYPE(uint64_t, BTRFS_UUID_KEY_SUBVOL),
 XLAT_TYPE(uint64_t, BTRFS_UUID_KEY_RECEIVED_SUBVOL),
 XLAT_TYPE(uint64_t, BTRFS_STRING_ITEM_KEY),
 XLAT_TYPE(uint64_t, UINT32_MAX),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */

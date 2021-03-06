/* Generated by ./xlat/gen.sh from ./xlat/bpf_prog_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_PROG_TYPE_UNSPEC) || (defined(HAVE_DECL_BPF_PROG_TYPE_UNSPEC) && HAVE_DECL_BPF_PROG_TYPE_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_UNSPEC) == (0), "BPF_PROG_TYPE_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_UNSPEC 0
#endif
#if defined(BPF_PROG_TYPE_SOCKET_FILTER) || (defined(HAVE_DECL_BPF_PROG_TYPE_SOCKET_FILTER) && HAVE_DECL_BPF_PROG_TYPE_SOCKET_FILTER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SOCKET_FILTER) == (1), "BPF_PROG_TYPE_SOCKET_FILTER != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SOCKET_FILTER 1
#endif
#if defined(BPF_PROG_TYPE_KPROBE) || (defined(HAVE_DECL_BPF_PROG_TYPE_KPROBE) && HAVE_DECL_BPF_PROG_TYPE_KPROBE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_KPROBE) == (2), "BPF_PROG_TYPE_KPROBE != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_KPROBE 2
#endif
#if defined(BPF_PROG_TYPE_SCHED_CLS) || (defined(HAVE_DECL_BPF_PROG_TYPE_SCHED_CLS) && HAVE_DECL_BPF_PROG_TYPE_SCHED_CLS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SCHED_CLS) == (3), "BPF_PROG_TYPE_SCHED_CLS != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SCHED_CLS 3
#endif
#if defined(BPF_PROG_TYPE_SCHED_ACT) || (defined(HAVE_DECL_BPF_PROG_TYPE_SCHED_ACT) && HAVE_DECL_BPF_PROG_TYPE_SCHED_ACT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SCHED_ACT) == (4), "BPF_PROG_TYPE_SCHED_ACT != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SCHED_ACT 4
#endif
#if defined(BPF_PROG_TYPE_TRACEPOINT) || (defined(HAVE_DECL_BPF_PROG_TYPE_TRACEPOINT) && HAVE_DECL_BPF_PROG_TYPE_TRACEPOINT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_TRACEPOINT) == (5), "BPF_PROG_TYPE_TRACEPOINT != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_TRACEPOINT 5
#endif
#if defined(BPF_PROG_TYPE_XDP) || (defined(HAVE_DECL_BPF_PROG_TYPE_XDP) && HAVE_DECL_BPF_PROG_TYPE_XDP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_XDP) == (6), "BPF_PROG_TYPE_XDP != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_XDP 6
#endif
#if defined(BPF_PROG_TYPE_PERF_EVENT) || (defined(HAVE_DECL_BPF_PROG_TYPE_PERF_EVENT) && HAVE_DECL_BPF_PROG_TYPE_PERF_EVENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_PERF_EVENT) == (7), "BPF_PROG_TYPE_PERF_EVENT != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_PERF_EVENT 7
#endif
#if defined(BPF_PROG_TYPE_CGROUP_SKB) || (defined(HAVE_DECL_BPF_PROG_TYPE_CGROUP_SKB) && HAVE_DECL_BPF_PROG_TYPE_CGROUP_SKB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_CGROUP_SKB) == (8), "BPF_PROG_TYPE_CGROUP_SKB != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_CGROUP_SKB 8
#endif
#if defined(BPF_PROG_TYPE_CGROUP_SOCK) || (defined(HAVE_DECL_BPF_PROG_TYPE_CGROUP_SOCK) && HAVE_DECL_BPF_PROG_TYPE_CGROUP_SOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_CGROUP_SOCK) == (9), "BPF_PROG_TYPE_CGROUP_SOCK != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_CGROUP_SOCK 9
#endif
#if defined(BPF_PROG_TYPE_LWT_IN) || (defined(HAVE_DECL_BPF_PROG_TYPE_LWT_IN) && HAVE_DECL_BPF_PROG_TYPE_LWT_IN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_LWT_IN) == (10), "BPF_PROG_TYPE_LWT_IN != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_LWT_IN 10
#endif
#if defined(BPF_PROG_TYPE_LWT_OUT) || (defined(HAVE_DECL_BPF_PROG_TYPE_LWT_OUT) && HAVE_DECL_BPF_PROG_TYPE_LWT_OUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_LWT_OUT) == (11), "BPF_PROG_TYPE_LWT_OUT != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_LWT_OUT 11
#endif
#if defined(BPF_PROG_TYPE_LWT_XMIT) || (defined(HAVE_DECL_BPF_PROG_TYPE_LWT_XMIT) && HAVE_DECL_BPF_PROG_TYPE_LWT_XMIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_LWT_XMIT) == (12), "BPF_PROG_TYPE_LWT_XMIT != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_LWT_XMIT 12
#endif
#if defined(BPF_PROG_TYPE_SOCK_OPS) || (defined(HAVE_DECL_BPF_PROG_TYPE_SOCK_OPS) && HAVE_DECL_BPF_PROG_TYPE_SOCK_OPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SOCK_OPS) == (13), "BPF_PROG_TYPE_SOCK_OPS != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SOCK_OPS 13
#endif
#if defined(BPF_PROG_TYPE_SK_SKB) || (defined(HAVE_DECL_BPF_PROG_TYPE_SK_SKB) && HAVE_DECL_BPF_PROG_TYPE_SK_SKB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SK_SKB) == (14), "BPF_PROG_TYPE_SK_SKB != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SK_SKB 14
#endif
#if defined(BPF_PROG_TYPE_CGROUP_DEVICE) || (defined(HAVE_DECL_BPF_PROG_TYPE_CGROUP_DEVICE) && HAVE_DECL_BPF_PROG_TYPE_CGROUP_DEVICE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_CGROUP_DEVICE) == (15), "BPF_PROG_TYPE_CGROUP_DEVICE != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_CGROUP_DEVICE 15
#endif
#if defined(BPF_PROG_TYPE_SK_MSG) || (defined(HAVE_DECL_BPF_PROG_TYPE_SK_MSG) && HAVE_DECL_BPF_PROG_TYPE_SK_MSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_SK_MSG) == (16), "BPF_PROG_TYPE_SK_MSG != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_SK_MSG 16
#endif
#if defined(BPF_PROG_TYPE_RAW_TRACEPOINT) || (defined(HAVE_DECL_BPF_PROG_TYPE_RAW_TRACEPOINT) && HAVE_DECL_BPF_PROG_TYPE_RAW_TRACEPOINT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_PROG_TYPE_RAW_TRACEPOINT) == (17), "BPF_PROG_TYPE_RAW_TRACEPOINT != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_PROG_TYPE_RAW_TRACEPOINT 17
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_prog_types in mpers mode

# else

static
const struct xlat bpf_prog_types[] = {
 [BPF_PROG_TYPE_UNSPEC] = XLAT(BPF_PROG_TYPE_UNSPEC),
 [BPF_PROG_TYPE_SOCKET_FILTER] = XLAT(BPF_PROG_TYPE_SOCKET_FILTER),
 [BPF_PROG_TYPE_KPROBE] = XLAT(BPF_PROG_TYPE_KPROBE),
 [BPF_PROG_TYPE_SCHED_CLS] = XLAT(BPF_PROG_TYPE_SCHED_CLS),
 [BPF_PROG_TYPE_SCHED_ACT] = XLAT(BPF_PROG_TYPE_SCHED_ACT),
 [BPF_PROG_TYPE_TRACEPOINT] = XLAT(BPF_PROG_TYPE_TRACEPOINT),
 [BPF_PROG_TYPE_XDP] = XLAT(BPF_PROG_TYPE_XDP),
 [BPF_PROG_TYPE_PERF_EVENT] = XLAT(BPF_PROG_TYPE_PERF_EVENT),
 [BPF_PROG_TYPE_CGROUP_SKB] = XLAT(BPF_PROG_TYPE_CGROUP_SKB),
 [BPF_PROG_TYPE_CGROUP_SOCK] = XLAT(BPF_PROG_TYPE_CGROUP_SOCK),
 [BPF_PROG_TYPE_LWT_IN] = XLAT(BPF_PROG_TYPE_LWT_IN),
 [BPF_PROG_TYPE_LWT_OUT] = XLAT(BPF_PROG_TYPE_LWT_OUT),
 [BPF_PROG_TYPE_LWT_XMIT] = XLAT(BPF_PROG_TYPE_LWT_XMIT),
 [BPF_PROG_TYPE_SOCK_OPS] = XLAT(BPF_PROG_TYPE_SOCK_OPS),
 [BPF_PROG_TYPE_SK_SKB] = XLAT(BPF_PROG_TYPE_SK_SKB),
 [BPF_PROG_TYPE_CGROUP_DEVICE] = XLAT(BPF_PROG_TYPE_CGROUP_DEVICE),
 [BPF_PROG_TYPE_SK_MSG] = XLAT(BPF_PROG_TYPE_SK_MSG),
 [BPF_PROG_TYPE_RAW_TRACEPOINT] = XLAT(BPF_PROG_TYPE_RAW_TRACEPOINT),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */

/* Generated by ./xlat/gen.sh from ./xlat/packet_diag_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat packet_diag_attrs in mpers mode

# else

static
const struct xlat packet_diag_attrs[] = {
 XLAT(PACKET_DIAG_INFO),
 XLAT(PACKET_DIAG_MCLIST),
 XLAT(PACKET_DIAG_RX_RING),
 XLAT(PACKET_DIAG_TX_RING),
 XLAT(PACKET_DIAG_FANOUT),
 XLAT(PACKET_DIAG_UID),
 XLAT(PACKET_DIAG_MEMINFO),
 XLAT(PACKET_DIAG_FILTER),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */

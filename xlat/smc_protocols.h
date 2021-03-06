/* Generated by ./xlat/gen.sh from ./xlat/smc_protocols.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(MCPROTO_SMC) || (defined(HAVE_DECL_MCPROTO_SMC) && HAVE_DECL_MCPROTO_SMC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MCPROTO_SMC) == (0), "MCPROTO_SMC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MCPROTO_SMC 0
#endif
#if defined(SMCPROTO_SMC6) || (defined(HAVE_DECL_SMCPROTO_SMC6) && HAVE_DECL_SMCPROTO_SMC6)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SMCPROTO_SMC6) == (1), "SMCPROTO_SMC6 != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SMCPROTO_SMC6 1
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat smc_protocols in mpers mode

# else

static
const struct xlat smc_protocols[] = {
 [MCPROTO_SMC] = XLAT(MCPROTO_SMC),
 [SMCPROTO_SMC6] = XLAT(SMCPROTO_SMC6),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */

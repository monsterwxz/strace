/* Generated by ./xlat/gen.sh from ./xlat/pr_unalign_flags.in; do not edit. */

static const struct xlat pr_unalign_flags[] = {
#if !(defined(PR_UNALIGN_NOPRINT) || (defined(HAVE_DECL_PR_UNALIGN_NOPRINT) && HAVE_DECL_PR_UNALIGN_NOPRINT))
# define PR_UNALIGN_NOPRINT 1
#endif
 XLAT(PR_UNALIGN_NOPRINT),
#if !(defined(PR_UNALIGN_SIGBUS) || (defined(HAVE_DECL_PR_UNALIGN_SIGBUS) && HAVE_DECL_PR_UNALIGN_SIGBUS))
# define PR_UNALIGN_SIGBUS 2
#endif
 XLAT(PR_UNALIGN_SIGBUS),
 XLAT_END
};
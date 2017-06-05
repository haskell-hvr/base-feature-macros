#if !defined(HS_BASE_FEATURE_MACROS_H)
#define HS_BASE_FEATURE_MACROS_H

#if !defined(MIN_VERSION_base)
#error MIN_VERSION_base macro not defined
#endif

/* @since 0.1 */
#define HAVE_APPLICATIVE_MONAD                  MIN_VERSION_base(4,8,0)

/* @since 0.1 */
#define HAVE_FOLDABLE_TRAVERSABLE_IN_PRELUDE    MIN_VERSION_base(4,8,0)

/* @since 0.1 */
#define HAVE_MONOID_IN_PRELUDE                  MIN_VERSION_base(4,8,0)

/* @since 0.1 */
#define HAVE_NATURAL_IN_BASE                    MIN_VERSION_base(4,8,0)

/* @since 0.1 */
#define HAVE_SEMIGROUP_IN_BASE                  MIN_VERSION_base(4,9,0)

/* @since 0.1 */
#define HAVE_MONAD_FAIL                         MIN_VERSION_base(4,9,0)

#endif

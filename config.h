/* Please read the comments below carefully before you proceed!
 *
 * This file is for system that can not run `configure' script i.e. Win32
 * platforms. If you are running a Unix box, MingW32 or Cygwin please run
 *./configure instead and use the auto-generated config.h file.
 */

#ifndef CONFIG_H
#define CONFIG_H

/* package's version */
#define CMDLINE_PARSER_VERSION "20061005"

#if defined(__BORLANDC__)
#    define CXX_COMPILER "bcc"
#elif defined(__INTEL_COMPILER)
#    define CXX_COMPILER "intelcc"
#elif defined(_MSC_VER)
#    define CXX_COMPILER "msvc"
#elif defined(__GNUC__)
#    define CXX_COMPILER "gcc"
#else
#    define CXX_COMPILER "unknown-cc"
#endif

/* package name */
#define CMDLINE_PARSER_PACKAGE "maxent" "-" CXX_COMPILER

#endif // CONFIG_H

/* -*- C++ -*- */
// $Id$

// The following configuration file is designed to work for the SGI
// Indigo2EX running IRIX 6.2 platform using the SGI C++ Compiler.

// In order to have support for multi-threading, several patches must
// be applied to the stock Irix 6.2 kernel, involving changes that
// bring this kernel up to POSIX 1003.c compatibility.  These patches
// are updated frequently, so you should ask your support contact or
// search SGI's web site (http://www.sgi.com) for the latest version.

#if !defined (ACE_CONFIG_H)
#define ACE_CONFIG_H

#define ACE_HAS_IRIX62_THREADS

// Needed for the threading stuff?
#include /**/ <sched.h>
#include /**/ <task.h>
#define PTHREAD_MIN_PRIORITY PX_PRIO_MIN
#define PTHREAD_MAX_PRIORITY PX_PRIO_MAX

// ACE supports threads.
#define ACE_HAS_THREADS

// Platform supports getpagesize() call.
#define ACE_HAS_GETPAGESIZE

//Sockets may be called in multi-threaded programs
#define ACE_HAS_MT_SAFE_SOCKETS

// Compiler/platform has thread-specific storage
#define ACE_HAS_THREAD_SPECIFIC_STORAGE

// Compile using multi-thread libraries
#define ACE_MT_SAFE

// Platform supports the tid_t type (e.g., AIX and Irix 6.2)
#define ACE_HAS_TID_T

// Platform has no implementation of pthread_condattr_setpshared(),
// even though it supports pthreads! (like Irix 6.2)
#define ACE_LACKS_CONDATTR_PSHARED

// IRIX 6.2 supports some variant of POSIX Pthreads, is it stock DCE?
#define ACE_HAS_PTHREADS
#define ACE_LACKS_RWLOCK_T

// Platform/compiler has the sigwait(2) prototype
#define ACE_HAS_SIGWAIT

// Platform supports System V IPC (most versions of UNIX, but not Win32)
#define ACE_HAS_SYSV_IPC			

// Platform requires void * for mmap().
#define ACE_HAS_VOIDPTR_MMAP

// Platform supports recvmsg and sendmsg.
#define ACE_HAS_MSG

// Compiler/platform contains the <sys/syscall.h> file.
#define ACE_HAS_SYSCALL_H

// Compiler/platform supports alloca()
#define ACE_HAS_ALLOCA 

// Compiler/platform has <alloca.h>
#define ACE_HAS_ALLOCA_H

// Irix needs to define bzero() in this odd file <bstring.h>
#define ACE_HAS_BSTRING

// Compiler/platform has the getrusage() system call.
#define ACE_HAS_GETRUSAGE

// Denotes that Irix has second argument to gettimeofday() which is
// variable (...)
#define ACE_HAS_IRIX_GETTIMEOFDAY

// Platform supports POSIX O_NONBLOCK semantics.
#define ACE_HAS_POSIX_NONBLOCK 

// Platform supports POSIX timers via timestruc_t.
#define ACE_HAS_POSIX_TIME 
#define ACE_HAS_SVR4_TIME

// Compiler/platform has correctly prototyped header files.
#define ACE_HAS_CPLUSPLUS_HEADERS 

// Platform contains <poll.h>.
#define ACE_HAS_POLL 

// No multi-threading so use poll() call 
// - for easier debugging, if nothing else 
// #define ACE_USE_POLL

// Platform supports the /proc file system.
#define ACE_HAS_PROC_FS 

// Explicit dynamic linking permits "lazy" symbol resolution.
#define ACE_HAS_RTLD_LAZY_V 

// Compiler/platform defines the sig_atomic_t typedef.
#define ACE_HAS_SIG_ATOMIC_T 

// Platform supports SVR4 extended signals.
#define ACE_HAS_SIGINFO_T
#define ACE_HAS_UCONTEXT_T

// Compiler supports the ssize_t typedef.
#define ACE_HAS_SSIZE_T 

// Platform supports STREAMS.
#define ACE_HAS_STREAMS 

// Platform supports STREAM pipes (note that this is disabled by
// default, see the manual page on pipe(2) to find out how to enable
// it). 
// #define ACE_HAS_STREAM_PIPES 

// Compiler/platform supports strerror ().
#define ACE_HAS_STRERROR 

// Compiler/platform supports struct strbuf.
#define ACE_HAS_STRBUF_T 

// Compiler/platform supports SVR4 dynamic linking semantics.
#define ACE_HAS_SVR4_DYNAMIC_LINKING 

// Prototypes for both signal() and struct sigaction are consistent.
#define ACE_HAS_CONSISTENT_SIGNAL_PROTOTYPES

// Compiler/platform supports sys_siglist array.
#define ACE_HAS_SYS_SIGLIST 

// Platform provides <sys/filio.h> header.
#define ACE_HAS_SYS_FILIO_H 

// Compiler/platform defines a union semun for SysV shared memory.
#define ACE_HAS_SEMUN 

// Platform supports IP multicast
#define ACE_HAS_IP_MULTICAST

// Defines the page size of the system.
#define ACE_PAGE_SIZE 4096

// Turns off the tracing feature.
#if !defined (ACE_NTRACE)
#define ACE_NTRACE 1
#endif /* ACE_NTRACE */


#endif /* ACE_CONFIG_H */

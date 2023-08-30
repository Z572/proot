#include "syscall/sysnum.h"

static const Sysnum sysnums_riscv64[] = {
	[ 0 ] = PR_io_setup,
	[ 1 ] = PR_io_destroy,
	[ 2 ] = PR_io_submit,
	[ 3 ] = PR_io_cancel,
	[ 4 ] = PR_io_getevents,
	[ 5 ] = PR_setxattr,
	[ 6 ] = PR_lsetxattr,
	[ 7 ] = PR_fsetxattr,
	[ 8 ] = PR_getxattr,
	[ 9 ] = PR_lgetxattr,
	[ 10 ] = PR_fgetxattr,
	[ 11 ] = PR_listxattr,
	[ 12 ] = PR_llistxattr,
	[ 13 ] = PR_flistxattr,
	[ 14 ] = PR_removexattr,
	[ 15 ] = PR_lremovexattr,
	[ 16 ] = PR_fremovexattr,
	[ 17 ] = PR_getcwd,
	[ 18 ] = PR_lookup_dcookie,
	[ 19 ] = PR_eventfd2,
	[ 20 ] = PR_epoll_create1,
	[ 21 ] = PR_epoll_ctl,
	[ 22 ] = PR_epoll_pwait,
	[ 23 ] = PR_dup,
	[ 24 ] = PR_dup3,
	[ 25 ] = PR_fcntl64,
	[ 26 ] = PR_inotify_init1,
	[ 27 ] = PR_inotify_add_watch,
	[ 28 ] = PR_inotify_rm_watch,
	[ 29 ] = PR_ioctl,
	[ 30 ] = PR_ioprio_set,
	[ 31 ] = PR_ioprio_get,
	[ 32 ] = PR_flock,
	[ 33 ] = PR_mknodat,
	[ 34 ] = PR_mkdirat,
	[ 35 ] = PR_unlinkat,
	[ 36 ] = PR_symlinkat,
	[ 37 ] = PR_linkat,
	[ 38 ] = PR_renameat,
	[ 39 ] = PR_umount,
	[ 40 ] = PR_mount,
	[ 41 ] = PR_pivot_root,
	[ 42 ] = PR_nfsservctl,
	[ 43 ] = PR_statfs64,
	[ 44 ] = PR_fstatfs64,
	[ 45 ] = PR_truncate64,
	[ 46 ] = PR_ftruncate64,
	[ 47 ] = PR_fallocate,
	[ 48 ] = PR_faccessat,
	[ 49 ] = PR_chdir,
	[ 50 ] = PR_fchdir,
	[ 51 ] = PR_chroot,
	[ 52 ] = PR_fchmod,
	[ 53 ] = PR_fchmodat,
	[ 54 ] = PR_fchownat,
	[ 55 ] = PR_fchown,
	[ 56 ] = PR_openat,
	[ 57 ] = PR_close,
	[ 58 ] = PR_vhangup,
	[ 59 ] = PR_pipe2,
	[ 60 ] = PR_quotactl,
	[ 61 ] = PR_getdents64,
	[ 62 ] = PR_lseek,
	[ 63 ] = PR_read,
	[ 64 ] = PR_write,
	[ 65 ] = PR_readv,
	[ 66 ] = PR_writev,
	[ 67 ] = PR_pread64,
	[ 68 ] = PR_pwrite64,
	[ 69 ] = PR_preadv,
	[ 70 ] = PR_pwritev,
	[ 71 ] = PR_sendfile,
	[ 72 ] = PR_pselect6,
	[ 73 ] = PR_ppoll,
	[ 74 ] = PR_signalfd4,
	[ 75 ] = PR_vmsplice,
	[ 76 ] = PR_splice,
	[ 77 ] = PR_tee,
	[ 78 ] = PR_readlinkat,
	[ 79 ] = PR_newfstatat,
    // newfstat
	[ 80 ] = PR_fstat,
	[ 81 ] = PR_sync,
	[ 82 ] = PR_fsync,
	[ 83 ] = PR_fdatasync,
	[ 84 ] = PR_sync_file_range,
	[ 85 ] = PR_timerfd_create,
	[ 86 ] = PR_timerfd_settime,
	[ 87 ] = PR_timerfd_gettime,
	[ 88 ] = PR_utimensat,
	[ 89 ] = PR_acct,
	[ 90 ] = PR_capget,
	[ 91 ] = PR_capset,
	[ 92 ] = PR_personality,
	[ 93 ] = PR_exit,
	[ 94 ] = PR_exit_group,
	[ 95 ] = PR_waitid,
	[ 96 ] = PR_set_tid_address,
	[ 97 ] = PR_unshare,
	[ 98 ] = PR_futex,
	[ 99 ] = PR_set_robust_list,
	[ 100 ] = PR_get_robust_list,
	[ 101 ] = PR_nanosleep,
	[ 102 ] = PR_getitimer,
	[ 103 ] = PR_setitimer,
	[ 104 ] = PR_kexec_load,
	[ 105 ] = PR_init_module,
	[ 106 ] = PR_delete_module,
	[ 107 ] = PR_timer_create,
	[ 108 ] = PR_timer_gettime,
	[ 109 ] = PR_timer_getoverrun,
	[ 110 ] = PR_timer_settime,
	[ 111 ] = PR_timer_delete,
	[ 112 ] = PR_clock_settime,
	[ 113 ] = PR_clock_gettime,
	[ 114 ] = PR_clock_getres,
	[ 115 ] = PR_getgroups,
	[ 116 ] = PR_syslog,
	[ 117 ] = PR_ptrace,
	[ 118 ] = PR_sched_setparam,
	[ 119 ] = PR_sched_setscheduler,
	[ 120 ] = PR_sched_getscheduler,
	[ 121 ] = PR_sched_getparam,
	[ 122 ] = PR_sched_setaffinity,
	[ 123 ] = PR_sched_getaffinity,
	[ 124 ] = PR_sched_yield,
	[ 125 ] = PR_sched_get_priority_max,
	[ 126 ] = PR_sched_get_priority_min,
	[ 127 ] = PR_sched_rr_get_interval,
	[ 128 ] = PR_restart_syscall,
	[ 129 ] = PR_kill,
	[ 130 ] = PR_tkill,
	[ 131 ] = PR_tgkill,
	[ 132 ] = PR_sigaltstack,
	[ 133 ] = PR_rt_sigsuspend,
	[ 134 ] = PR_rt_sigaction,
	[ 135 ] = PR_rt_sigprocmask,
	[ 136 ] = PR_rt_sigpending,
	[ 137 ] = PR_rt_sigtimedwait,
	[ 138 ] = PR_rt_sigqueueinfo,
	[ 139 ] = PR_rt_sigreturn,
	[ 140 ] = PR_setpriority,
	[ 141 ] = PR_getpriority,
	[ 142 ] = PR_reboot,
	[ 143 ] = PR_setregid,
	[ 144 ] = PR_setgid,
	[ 145 ] = PR_setreuid,
	[ 146 ] = PR_setuid,
	[ 147 ] = PR_setresuid,
	[ 148 ] = PR_getresuid,
	[ 149 ] = PR_setresgid,
	[ 150 ] = PR_getresgid,
	[ 151 ] = PR_setfsuid,
	[ 152 ] = PR_setfsgid,
	[ 153 ] = PR_times,
	[ 154 ] = PR_setpgid,
	[ 155 ] = PR_getpgid,
	[ 156 ] = PR_getsid,
	[ 157 ] = PR_setsid,
	[ 158 ] = PR_getgroups,
	[ 159 ] = PR_setgroups,
	[ 160 ] = PR_uname,
	[ 161 ] = PR_sethostname,
	[ 162 ] = PR_setdomainname,
	[ 163 ] = PR_getrlimit,
	[ 164 ] = PR_setrlimit,
	[ 165 ] = PR_getrusage,
	[ 166 ] = PR_umask,
	[ 167 ] = PR_prctl,
	[ 168 ] = PR_getcpu,
	[ 169 ] = PR_gettimeofday,
	[ 170 ] = PR_settimeofday,
	[ 171 ] = PR_adjtimex,
	[ 172 ] = PR_getpid,
	[ 173 ] = PR_getppid,
	[ 174 ] = PR_getuid,
	[ 175 ] = PR_geteuid,
	[ 176 ] = PR_getgid,
	[ 177 ] = PR_getegid,
	[ 178 ] = PR_gettid,
	[ 179 ] = PR_sysinfo,
	[ 180 ] = PR_mq_open,
	[ 181 ] = PR_mq_unlink,
	[ 182 ] = PR_mq_timedsend,
	[ 183 ] = PR_mq_timedreceive,
	[ 184 ] = PR_mq_notify,
	[ 185 ] = PR_mq_getsetattr,
	[ 186 ] = PR_msgget,
	[ 187 ] = PR_msgctl,
	[ 188 ] = PR_msgrcv,
	[ 189 ] = PR_msgsnd,
	[ 190 ] = PR_semget,
	[ 191 ] = PR_semctl,
	[ 192 ] = PR_semtimedop,
	[ 193 ] = PR_semop,
	[ 194 ] = PR_shmget,
	[ 195 ] = PR_shmctl,
	[ 196 ] = PR_shmat,
	[ 197 ] = PR_shmdt,
	[ 198 ] = PR_socket,
	[ 199 ] = PR_socketpair,
	[ 200 ] = PR_bind,
	[ 201 ] = PR_listen,
	[ 202 ] = PR_accept,
	[ 203 ] = PR_connect,
	[ 204 ] = PR_getsockname,
	[ 205 ] = PR_getpeername,
	[ 206 ] = PR_sendto,
	[ 207 ] = PR_recvfrom,
	[ 208 ] = PR_setsockopt,
	[ 209 ] = PR_getsockopt,
	[ 210 ] = PR_shutdown,
	[ 211 ] = PR_sendmsg,
	[ 212 ] = PR_recvmsg,
	[ 213 ] = PR_readahead,
	[ 214 ] = PR_brk,
	[ 215 ] = PR_munmap,
	[ 216 ] = PR_mremap,
	[ 217 ] = PR_add_key,
	[ 218 ] = PR_request_key,
	[ 219 ] = PR_keyctl,
	[ 220 ] = PR_clone,
	[ 221 ] = PR_execve,
	[ 222 ] = PR_mmap,
	[ 223 ] = PR_fadvise64,
	[ 224 ] = PR_swapon,
	[ 225 ] = PR_swapoff,
	[ 226 ] = PR_mprotect,
	[ 227 ] = PR_msync,
	[ 228 ] = PR_mlock,
	[ 229 ] = PR_munlock,
	[ 230 ] = PR_mlockall,
	[ 231 ] = PR_munlockall,
	[ 232 ] = PR_mincore,
	[ 233 ] = PR_madvise,
	[ 234 ] = PR_remap_file_pages,
	[ 235 ] = PR_mbind,
	[ 236 ] = PR_get_mempolicy,
	[ 237 ] = PR_set_mempolicy,
	[ 238 ] = PR_migrate_pages,
	[ 239 ] = PR_move_pages,
	[ 240 ] = PR_rt_tgsigqueueinfo,
	[ 241 ] = PR_perf_event_open,
	[ 242 ] = PR_accept4,
	[ 243 ] = PR_recvmmsg,

	[ 244 ] = PR_mq_notify,
	[ 245 ] = PR_mq_getsetattr,
	[ 246 ] = PR_kexec_load,
	[ 247 ] = PR_waitid,
	[ 248 ] = PR_add_key,
	[ 249 ] = PR_request_key,
	[ 250 ] = PR_keyctl,
	[ 251 ] = PR_ioprio_set,
	[ 252 ] = PR_ioprio_get,
	[ 253 ] = PR_inotify_init,
	[ 254 ] = PR_inotify_add_watch,
	[ 255 ] = PR_inotify_rm_watch,
	[ 256 ] = PR_migrate_pages,
	[ 257 ] = PR_openat,
	[ 258 ] = PR_mkdirat,

	[ 259 ] = PR_riscv_flush_icache,
	[ 260 ] = PR_wait4,
	[ 261 ] = PR_prlimit64,
	[ 262 ] = PR_fanotify_init,
	[ 263 ] = PR_fanotify_mark,
	[ 264 ] = PR_renameat,
	[ 265 ] = PR_linkat,
	[ 266 ] = PR_symlinkat,
	[ 267 ] = PR_readlinkat,
	[ 268 ] = PR_fchmodat,
	[ 269 ] = PR_faccessat,
	[ 270 ] = PR_select,
	[ 271 ] = PR_ppoll,
	[ 272 ] = PR_unshare,
	[ 273 ] = PR_set_robust_list,
	[ 274 ] = PR_get_robust_list,
	[ 275 ] = PR_splice,
	[ 276 ] = PR_renameat2,
    // seccomp
	[ 277 ] = PR_seccomp,
	[ 278 ] = PR_vmsplice,
	[ 279 ] = PR_move_pages,
	[ 280 ] = PR_utimensat,
	[ 281 ] = PR_epoll_pwait,
	[ 282 ] = PR_signalfd,
	[ 283 ] = PR_timerfd_create,
	[ 284 ] = PR_mlock,
	[ 285 ] = PR_fallocate,
	[ 286 ] = PR_preadv,
	[ 287 ] = PR_pwritev,
	[ 288 ] = PR_accept4,
	[ 289 ] = PR_signalfd4,
	[ 290 ] = PR_eventfd2,
	[ 291 ] = PR_statx,
	[ 292 ] = PR_dup3,
	[ 293 ] = PR_pipe2,
	[ 294 ] = PR_inotify_init1,
	[ 295 ] = PR_preadv,
	[ 296 ] = PR_pwritev,
	[ 297 ] = PR_rt_tgsigqueueinfo,
	[ 298 ] = PR_perf_event_open,
	[ 299 ] = PR_recvmmsg,
	[ 300 ] = PR_fanotify_init,
	[ 301 ] = PR_fanotify_mark,
	[ 302 ] = PR_prlimit64,
	[ 303 ] = PR_name_to_handle_at,
	[ 304 ] = PR_open_by_handle_at,
	[ 305 ] = PR_clock_adjtime,
	[ 306 ] = PR_syncfs,
	[ 307 ] = PR_sendmmsg,
	[ 308 ] = PR_setns,
	[ 309 ] = PR_getcpu,
	[ 310 ] = PR_process_vm_readv,
	[ 311 ] = PR_process_vm_writev,
	[ 312 ] = PR_kcmp,
	[ 313 ] = PR_finit_module,
	[ 314 ] = PR_sched_setattr,
	[ 315 ] = PR_sched_getattr,
	[ 316 ] = PR_renameat2,
	[ 435 ] = PR_clone3,
	[ 439 ] = PR_faccessat2
};

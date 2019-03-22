#if defined _inc_uuid
    #undef _inc_uuid
#endif

#if defined _uuid_included
    #endinput
#endif
#define _uuid_included

// uuid provides a simple UUID version 4 generator function.
#define UUID_LEN (37) // 00000000-0000-0000-0000-000000000000 + EOS

native UUID(result[], len = sizeof result);

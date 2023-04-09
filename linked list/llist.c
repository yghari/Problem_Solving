int _init()
{
    return;
    if (false)
    {
        __gmon_start__();
        return;
    }
}

long long sub_400420()
{
    unsigned long long v0;  // [bp-0x8]

    v0 = 0;
    goto *((long long *)6295568);
}

extern unsigned long long __libc_csu_fini;
extern unsigned long long __libc_csu_init;
extern unsigned long long main;

long long _start()
{
    unsigned long v0;  // [bp+0x0], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp+0x8]
    unsigned long long v2;  // rsi
    unsigned long v3;  // rax
    unsigned long long v4;  // rdx

    v2 = v0;
    v0 = v3;
    __libc_start_main(&main, v2, &v1, &__libc_csu_init, &__libc_csu_fini, v4); /* do not return */
}

// No decompilation output for function sub_400499

int deregister_tm_clones(unsigned long a0)
{
    return;
    if (false)
    {
        return;
    }
}

long long register_tm_clones(unsigned long a0)
{
    return 0;
    if (false)
    {
        return 0;
    }
}

extern char __TMC_END__;

long long __do_global_dtors_aux(unsigned int a0)
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    if (__TMC_END__ == 0)
    {
        v0 = stack_base + 0;
        __TMC_END__ = 1;
        return deregister_tm_clones(a0);
    }
    return v2;
}

extern unsigned long long __JCR_END__;

long long frame_dummy()
{
    unsigned long v0;  // [bp-0x8]

    if (__JCR_END__ == 0)
    {
        register_tm_clones(&__JCR_END__);
        return register_tm_clones(&__JCR_END__);
    }
    if (false)
    {
        v0 = stack_base + 0;
        0();
        return register_tm_clones(&__JCR_END__);
    }
    register_tm_clones(&__JCR_END__);
    return register_tm_clones(&__JCR_END__);
}

int checksum(unsigned long a0)
{
    char *v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x10]

    v0 = a0;
    for (v1 = 0; *(v0) != 0; v0 = &v0[1])
    {
        v1 += *(v0);
    }
    return v1;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern char g_4006c7;

int main(unsigned long a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x10]

    if ((unsigned int)a0 != 2)
    {
        printf("Usage: %s password\n", (unsigned int)a1->padding_0);
        return 1;
    }
    v0 = checksum(a1->field_8);
    if (v0 != 2772)
    {
        puts("Wrong password");
        return 1;
    }
    puts(&g_4006c7);
    return 0;
}

long long __libc_csu_init(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax

    if (false)
    {
        return _init();
    }
    v5 = 0;
    while (true)
    {
        v6 = *((long long *)(6295056 + rbx<8> * 8))(a0, a1, a2);
        v5 += 1;
        if (v5 == 1)
        {
            break;
        }
    }
    return v6;
}

long long __libc_csu_fini()
{
    unsigned long v1;  // rax

    return v1;
}

long long _fini()
{
    unsigned long v1;  // rax

    return v1;
}


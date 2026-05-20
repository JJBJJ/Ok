void __f46(long long* param0, long long param1) {
    int v0;
    if(((unsigned int)((param1 & 0x700000000L) == 0L) | (unsigned int)((param1 & 0x7ff8000000000000L) != 0x7ff8000000000000L)) == 0) {
        int v1 = __f22(&gvar_8);
        v0 = v1;
        *(long long*)v1 = param1;
    }
    *(int*)((int)&gvar_8 + (int)param0) = v0;
    *param0 = param1;
}

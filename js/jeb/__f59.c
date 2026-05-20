void __f59(unsigned int* param0, int param1, int param2, int param3, int param4) {
    int v0 = __rol__((param1 + param2) ^ param4, &gvar_10);
    int v1 = param3 + v0;
    int v2 = __rol__(param2 ^ v1, 12) + param1 + param2;
    *param0 = (unsigned int)(__rol__(param2 ^ v1, 12) + param1 + param2);
    int v3 = __rol__(v0 ^ v2, &gvar_8);
    *(unsigned long long*)((int)&gvar_8 + (int)param0) = (unsigned long long)(v1 + v3) | ((unsigned long long)__rol__(v0 ^ v2, &gvar_8) << &gvar_20);
    *(param0 + 1) = (unsigned int)__rol__((v1 + v3) ^ (__rol__(param2 ^ v1, 12)), 7);
}

void __f72(unsigned int* param0, unsigned int param1) {
    int v0 = __f22(0x100);
    int v1 = __f22(128);
    *(unsigned long long*)((int)&gvar_10 + (int)param0) = (unsigned long long)param1 | ((unsigned long long)&gvar_10 << &gvar_20);
    *(unsigned long long*)((int)&gvar_8 + (int)param0) = (unsigned long long)&gvar_10 | ((unsigned long long)v1 << &gvar_20);
    *(param0 + 1) = param1;
    *param0 = v0;
}

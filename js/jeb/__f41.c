int __f41(int param0, int param1) {
    int v0 = __g0 - &gvar_10;
    __g0 -= &gvar_10;
    __f40(param1, param0, v0 + &gvar_8);
    if(*((int*)((int)&gvar_8 + v0) + 1) >= 22) {
        int v1 = *(int*)((int)&gvar_8 + v0);
        __g0 = v0 + &gvar_10;
        return v1 + 10;
    }
    jump 0;
}

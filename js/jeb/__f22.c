int __f22(int param0) {
    ++*(long long*)&g10C38;
    int result = *(int*)&g10C28;
    unsigned int v0 = (unsigned int)((param0 + 15) & 0xfffffff0);
    param0 = *(int*)&g10C28 + v0;
    *(int*)&g10C28 += v0;
    *(long long*)&g10C30 += v0;
    int v1 = *(int*)&g10C24;
    while(param0 >= v1) {
        v1 = 0x640000;
        *(int*)&g10C24 = 0x640000;
        param0 = *(int*)&g10C28;
    }
    return result;
}

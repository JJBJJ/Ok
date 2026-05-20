int __f51() {
    unsigned int v0 = gvar_10808;
    v0 ^= v0 * 128;
    v0 ^= v0 >>> 1;
    v0 ^= v0 * 0x200;
    gvar_10808 = v0;
    return (int)v0;
}

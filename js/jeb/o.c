int o(int param0) {
    int v0;
    int v1;
    if(__g1 == 2) {
        --*__g2;
        param0 = **__g2;
    }
    int v2 = (unsigned int)(__g1 == 0);
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    else {
        v0 = 0;
    }
    if((unsigned int)(v0 == 0) | v2) {
        int v3 = __f29(param0);
        if(__g1 == 1) {
            **__g2 = v1;
            ++*__g2;
            **__g2 = param0;
            ++*__g2;
            return 0;
        }
        param0 = v3;
    }
    if(__g1 == 0) {
        return param0;
    }
    jump 0;
}

void p(int param0) {
    int v0;
    if(__g1 == 2) {
        --*__g2;
        param0 = **__g2;
    }
    int v1 = (unsigned int)(__g1 == 0);
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    else {
        v0 = 0;
    }
    if((unsigned int)(v0 == 0) | v1) {
        __f31(param0);
        if(__g1 == 1) {
            **__g2 = 0;
            ++*__g2;
            **__g2 = param0;
            ++*__g2;
        }
    }
}

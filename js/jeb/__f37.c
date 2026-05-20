void __f37() {
    int v0;
    int v1 = (unsigned int)(__g1 == 0);
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    else {
        v0 = 0;
    }
    if((unsigned int)(v0 == 0) | v1) {
        __f17();
        if(__g1 == 1) {
            **__g2 = 0;
            ++*__g2;
        }
    }
    if(__g1 == 0) {
        jump 0;
    }
}

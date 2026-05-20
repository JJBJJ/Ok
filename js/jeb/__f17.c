void __f17() {
    int v0;
    int v1;
    int v2;
    if(__g1 == 2) {
        --*__g2;
        v2 = **__g2;
    }
    if(__g1 == 2) {
        --*__g2;
        v1 = **__g2;
    }
    if(__g1 == 0) {
        v2 = *(int*)&g10C20;
        v0 = (unsigned int)(*(int*)&g10C20 == 0);
    }
    if(__g1 != 0) {
    loc_50000978:
        if((unsigned int)(__g1 == 0) | (unsigned int)(v1 == 0)) {
            if(*(char*)&g109F0) {
                y();
                *(char*)&g109F0 = 0;
            }
            else {
                *(int*)(v2 + 4) = __g0;
                v(v2);
            }
            if(__g1 == 1) {
                **__g2 = 0;
                ++*__g2;
                **__g2 = v2;
                ++*__g2;
            }
        }
        if(__g1 == 0) {
            return;
        }
    }
    else if(!v0) {
        int* ptr0 = *(unsigned int*)(v2 + &gvar_20);
        if(ptr0 != 0 && *ptr0 == -1204030091) {
            v2 += &gvar_18;
            goto loc_50000978;
        }
    }
    if(__g1 == 0) {
        jump 0;
    }
}

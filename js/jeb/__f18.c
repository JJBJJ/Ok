void __f18() {
    int* ptr0;
    int v0;

    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }

    if(__g1 == 0) {
        ptr0 = (unsigned int)(*(char*)&g10D80 == 0);
    }

    if(__g1 != 0) {
    loc_50000A53:
        if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
            __f17();
            if(__g1 == 1) {
                **__g2 = 0;
                ++*__g2;
            }
        }
        if(__g1 == 0) {
            return;
        }
    loc_50000A6D:
        if(__g1 == 0) {
            *(char*)&g10D80 = 1;
            return;
        }
    }
    else if(ptr0) {
        goto loc_50000A6D;
    }
    else {
        int v1 = *(int*)&g10D84;
        int* ptr1 = *(int**)&g10C20;
        *(int**)&g10D84 = *(int**)&g10C20;
        if(ptr1 != 0) {
            *ptr1 = v1;
            goto loc_50000A53;
        }
    }

    if(__g1 == 0) {
        jump 0;
    }
}

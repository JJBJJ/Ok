void __f35() {
    int v0;
    unsigned int* ptr0;
    do {
        ptr0 = *(unsigned int**)&g10C40;
        if(!ptr0) {
            return;
        }
        *(unsigned int*)&g10C40 = *ptr0;
        if(*(int*)&g10C44 == ptr0) {
            *(int*)&g10C44 = 0;
        }
        *ptr0 = 0;
        int v1 = *(int*)&g10C20;
        *(unsigned int**)&g10C20 = ptr0;
        v0 = __g0;
        if(*(unsigned char*)((unsigned int*)((int)&gvar_20 + (int)ptr0) + 1)) {
            __g0 = *(int*)((unsigned int*)((int)&gvar_8 + (int)ptr0) + 5);
            int v2 = *(int*)(ptr0 + 5);
            unsigned int v3 = *(ptr0 + 4);
            *(char*)&g109F0 = 1;
            x((int)(ptr0 + 6));
            *(unsigned int*)(v3 * 4 + (int)&gvar_40000000)(v2);
            y();
            __g0 = v0;
        }
        else {
            __g0 = *(int*)((unsigned int*)((int)&gvar_8 + (int)ptr0) + 5);
            *(int*)(*(ptr0 + 4) * 4 + (int)&gvar_40000000)(*(int*)(ptr0 + 5));
            y();
            __g0 = v0;
            *(unsigned char*)((unsigned int*)((int)&gvar_20 + (int)ptr0) + 1) = 1;
        }
        *(int*)&g10C20 = v1;
    }
    while(*(unsigned int*)((int)&gvar_18 + (int)ptr0) <= *(unsigned int*)((int)&gvar_1C + (int)ptr0));
    jump 0;
}

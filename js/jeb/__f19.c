void __f19() {
    if(*(char*)&g10D80) {
        int v0 = *(int*)&g10D84;
        if(v0) {
            *(int*)&g10D84 = *(int*)v0;
            *(int*)v0 = 0;
            __f20(v0);
            return;
        }
        *(char*)&g10D80 = 0;
        return;
    }
    jump 0;
}

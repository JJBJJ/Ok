void v(unsigned int* param0) {
    __g1 = 1;
    __g2 = param0;
    if(*(param0 + 1) < *param0) {
        jump 0;
    }
}

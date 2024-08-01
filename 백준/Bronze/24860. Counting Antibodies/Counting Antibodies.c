#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    long long Vk, Jk, Vl, Jl, Vh, Dh, Jh;

    scanf("%lld %lld", &Vk, &Jk);
    scanf("%lld %lld", &Vl, &Jl);
    scanf("%lld %lld %lld", &Vh, &Dh, &Jh);

    long long light_chain_k = Vk * Jk;
    long long light_chain_l = Vl * Jl;
    long long heavy_chain = Vh * Dh * Jh;

    long long total_variants = (light_chain_k + light_chain_l) * heavy_chain;

    printf("%lld", total_variants);

    return 0;
}
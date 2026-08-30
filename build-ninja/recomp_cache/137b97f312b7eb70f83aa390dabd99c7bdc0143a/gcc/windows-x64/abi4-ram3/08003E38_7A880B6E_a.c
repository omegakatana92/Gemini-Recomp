// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08003E38 mode=arm end=0x08003E50
#include "overlay_runtime_arm.h"

#ifdef _WIN32
#define OVL_DLLEXPORT __declspec(dllexport)
#else
#define OVL_DLLEXPORT __attribute__((visibility("default")))
#endif
#ifdef __cplusplus
#define OVL_EXPORT extern "C" OVL_DLLEXPORT
#else
#define OVL_EXPORT OVL_DLLEXPORT
#endif

const GbaOverlayCallbacks* g_ovl = 0;
OVL_EXPORT uint32_t overlay_abi(void) { return 4u; }
OVL_EXPORT void overlay_init(const GbaOverlayCallbacks* cb) { g_ovl = cb; }

OVL_EXPORT void func_08003E38(void) {
    if (gba_mod_function_entry(0x08003E38u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08003E38u);
    /* 08003E38  08003e38 A ldr r2,[r15,#0xba8] */
    g_cpu.R[15] = 0x08003E38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003E38 = 1u;
    _cyc_08003E38 = 2u;
    uint32_t _base_08003E38 = 0x08003E40u;
    uint32_t _off_08003E38;
    _off_08003E38 = 0x00000BA8u;
    uint32_t _ea_08003E38 = _base_08003E38 + _off_08003E38;
    uint32_t _post_08003E38 = _base_08003E38 + _off_08003E38;
    _cyc_08003E38 += runtime_mem_cycles(_ea_08003E38, 4u, 0u);
    uint32_t _v_08003E38;
    { uint32_t _w = bus_read_u32(_ea_08003E38 & ~3u); uint32_t _rot = (_ea_08003E38 & 3u) * 8u; _v_08003E38 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08003E38;
    g_cpu.R[15] = 0x08003E3Cu;
    runtime_tick(_cyc_08003E38);
    /* 08003E3C  08003e3c A ldr r0,[r15,#0xb28] */
    g_cpu.R[15] = 0x08003E3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003E3C = 1u;
    _cyc_08003E3C = 2u;
    uint32_t _base_08003E3C = 0x08003E44u;
    uint32_t _off_08003E3C;
    _off_08003E3C = 0x00000B28u;
    uint32_t _ea_08003E3C = _base_08003E3C + _off_08003E3C;
    uint32_t _post_08003E3C = _base_08003E3C + _off_08003E3C;
    _cyc_08003E3C += runtime_mem_cycles(_ea_08003E3C, 4u, 0u);
    uint32_t _v_08003E3C;
    { uint32_t _w = bus_read_u32(_ea_08003E3C & ~3u); uint32_t _rot = (_ea_08003E3C & 3u) * 8u; _v_08003E3C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08003E3C;
    g_cpu.R[15] = 0x08003E40u;
    runtime_tick(_cyc_08003E3C);
    /* 08003E40  08003e40 A ldr r1,[r2] */
    g_cpu.R[15] = 0x08003E40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003E40 = 1u;
    _cyc_08003E40 = 2u;
    uint32_t _base_08003E40 = g_cpu.R[2];
    uint32_t _off_08003E40;
    _off_08003E40 = 0x00000000u;
    uint32_t _ea_08003E40 = _base_08003E40 + _off_08003E40;
    uint32_t _post_08003E40 = _base_08003E40 + _off_08003E40;
    _cyc_08003E40 += runtime_mem_cycles(_ea_08003E40, 4u, 0u);
    uint32_t _v_08003E40;
    { uint32_t _w = bus_read_u32(_ea_08003E40 & ~3u); uint32_t _rot = (_ea_08003E40 & 3u) * 8u; _v_08003E40 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08003E40;
    g_cpu.R[15] = 0x08003E44u;
    runtime_tick(_cyc_08003E40);
    /* 08003E44  08003e44 A ldr r3,[r15,#0xb24] */
    g_cpu.R[15] = 0x08003E44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003E44 = 1u;
    _cyc_08003E44 = 2u;
    uint32_t _base_08003E44 = 0x08003E4Cu;
    uint32_t _off_08003E44;
    _off_08003E44 = 0x00000B24u;
    uint32_t _ea_08003E44 = _base_08003E44 + _off_08003E44;
    uint32_t _post_08003E44 = _base_08003E44 + _off_08003E44;
    _cyc_08003E44 += runtime_mem_cycles(_ea_08003E44, 4u, 0u);
    uint32_t _v_08003E44;
    { uint32_t _w = bus_read_u32(_ea_08003E44 & ~3u); uint32_t _rot = (_ea_08003E44 & 3u) * 8u; _v_08003E44 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08003E44;
    g_cpu.R[15] = 0x08003E48u;
    runtime_tick(_cyc_08003E44);
    /* 08003E48  08003e48 A mov r14,r15 */
    g_cpu.R[15] = 0x08003E48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003E48 = 1u;
    _cyc_08003E48 = 1u;
    uint32_t _rm_08003E48 = 0x08003E50u;
    uint32_t _op2_08003E48;
    uint32_t _co_08003E48;
    _op2_08003E48 = _rm_08003E48;
    _co_08003E48 = cpsr_c();
    uint32_t _r_08003E48;
    _r_08003E48 = _op2_08003E48;
    g_cpu.R[14] = _r_08003E48;
    g_cpu.R[15] = 0x08003E4Cu;
    runtime_tick(_cyc_08003E48);
    /* 08003E4C  08003e4c A bx r3 */
    g_cpu.R[15] = 0x08003E4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003E4C = 1u;
    _cyc_08003E4C = 3u;
    uint32_t _bxt_08003E4C = g_cpu.R[3];
    g_cpu.R[15] = _bxt_08003E4C & ~1u;
    if (_bxt_08003E4C & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08003E4C);
    runtime_dispatch_with_exchange(_bxt_08003E4C);
    return;
    g_cpu.R[15] = 0x08003E50u;
    runtime_tick(_cyc_08003E4C);
    /* fall-through to 0x08003E50 */
    g_cpu.R[15] = 0x08003E50u;
    runtime_dispatch(0x08003E50u);
    return;
}

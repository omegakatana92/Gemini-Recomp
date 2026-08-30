// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x000026C4 mode=thumb end=0x000026CE
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

OVL_EXPORT void func_000026C4(void) {
    if (gba_mod_function_entry(0x000026C4u, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x000026C4u);
    /* 000026C4  000026c4 T ldr r2,[r1,#0x40] */
    g_cpu.R[15] = 0x000026C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000026C4 = 1u;
    _cyc_000026C4 = 2u;
    uint32_t _base_000026C4 = g_cpu.R[1];
    uint32_t _off_000026C4;
    _off_000026C4 = 0x00000040u;
    uint32_t _ea_000026C4 = _base_000026C4 + _off_000026C4;
    uint32_t _post_000026C4 = _base_000026C4 + _off_000026C4;
    _cyc_000026C4 += runtime_mem_cycles(_ea_000026C4, 4u, 0u);
    uint32_t _v_000026C4;
    { uint32_t _w = bus_read_u32(_ea_000026C4 & ~3u); uint32_t _rot = (_ea_000026C4 & 3u) * 8u; _v_000026C4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_000026C4;
    g_cpu.R[15] = 0x000026C6u;
    runtime_tick(_cyc_000026C4);
    /* 000026C6  000026c6 T adds r3,r2,#0x1 */
    g_cpu.R[15] = 0x000026C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000026C6 = 1u;
    _cyc_000026C6 = 1u;
    uint32_t _rn_000026C6 = g_cpu.R[2];
    uint32_t _r_000026C6;
    _r_000026C6 = _rn_000026C6 + 0x00000001u;
    arm_set_nzcv_add(_rn_000026C6, 0x00000001u, _r_000026C6);
    g_cpu.R[3] = _r_000026C6;
    g_cpu.R[15] = 0x000026C8u;
    runtime_tick(_cyc_000026C6);
    /* 000026C8  000026c8 T str r3,[r1,#0x40] */
    g_cpu.R[15] = 0x000026C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000026C8 = 1u;
    _cyc_000026C8 = 1u;
    uint32_t _base_000026C8 = g_cpu.R[1];
    uint32_t _off_000026C8;
    _off_000026C8 = 0x00000040u;
    uint32_t _ea_000026C8 = _base_000026C8 + _off_000026C8;
    uint32_t _post_000026C8 = _base_000026C8 + _off_000026C8;
    _cyc_000026C8 += runtime_mem_cycles(_ea_000026C8, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x000026C8u, _ea_000026C8 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_000026C8 & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x000026CAu;
    runtime_tick(_cyc_000026C8);
    /* 000026CA  000026ca T ldrb r3,[r2] */
    g_cpu.R[15] = 0x000026CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000026CA = 1u;
    _cyc_000026CA = 2u;
    uint32_t _base_000026CA = g_cpu.R[2];
    uint32_t _off_000026CA;
    _off_000026CA = 0x00000000u;
    uint32_t _ea_000026CA = _base_000026CA + _off_000026CA;
    uint32_t _post_000026CA = _base_000026CA + _off_000026CA;
    _cyc_000026CA += runtime_mem_cycles(_ea_000026CA, 1u, 0u);
    uint32_t _v_000026CA;
    _v_000026CA = bus_read_u8(_ea_000026CA);
    g_cpu.R[3] = _v_000026CA;
    g_cpu.R[15] = 0x000026CCu;
    runtime_tick(_cyc_000026CA);
    /* 000026CC  000026cc T b 0x000026aa */
    g_cpu.R[15] = 0x000026CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000026CC = 1u;
    _cyc_000026CC = 3u;
    g_cpu.R[15] = 0x000026AAu;
    runtime_tick(_cyc_000026CC);
    runtime_dispatch(0x000026AAu);
    return;
    g_cpu.R[15] = 0x000026CEu;
    runtime_tick(_cyc_000026CC);
    /* fall-through to 0x000026CE */
    g_cpu.R[15] = 0x000026CEu;
    runtime_dispatch(0x000026CEu);
    return;
}

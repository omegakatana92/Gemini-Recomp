// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00002794 mode=thumb end=0x0000279C
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

OVL_EXPORT void func_00002794(void) {
    if (gba_mod_function_entry(0x00002794u, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00002794u);
    /* 00002794  00002794 T str r3,[r1,#0x24] */
    g_cpu.R[15] = 0x00002794u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002794 = 1u;
    _cyc_00002794 = 1u;
    uint32_t _base_00002794 = g_cpu.R[1];
    uint32_t _off_00002794;
    _off_00002794 = 0x00000024u;
    uint32_t _ea_00002794 = _base_00002794 + _off_00002794;
    uint32_t _post_00002794 = _base_00002794 + _off_00002794;
    _cyc_00002794 += runtime_mem_cycles(_ea_00002794, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00002794u, _ea_00002794 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_00002794 & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x00002796u;
    runtime_tick(_cyc_00002794);
    /* 00002796  00002796 T ldr r3,[r2,#0x4] */
    g_cpu.R[15] = 0x00002796u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002796 = 1u;
    _cyc_00002796 = 2u;
    uint32_t _base_00002796 = g_cpu.R[2];
    uint32_t _off_00002796;
    _off_00002796 = 0x00000004u;
    uint32_t _ea_00002796 = _base_00002796 + _off_00002796;
    uint32_t _post_00002796 = _base_00002796 + _off_00002796;
    _cyc_00002796 += runtime_mem_cycles(_ea_00002796, 4u, 0u);
    uint32_t _v_00002796;
    { uint32_t _w = bus_read_u32(_ea_00002796 & ~3u); uint32_t _rot = (_ea_00002796 & 3u) * 8u; _v_00002796 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_00002796;
    g_cpu.R[15] = 0x00002798u;
    runtime_tick(_cyc_00002796);
    /* 00002798  00002798 T bl.hi 0x0000179c */
    g_cpu.R[15] = 0x00002798u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002798 = 1u;
    _cyc_00002798 = 1u;
    g_cpu.R[14] = 0x0000179Cu;
    g_cpu.R[15] = 0x0000279Au;
    runtime_tick(_cyc_00002798);
    /* 0000279A  0000279a T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0000279Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000279A = 1u;
    _cyc_0000279A = 3u;
    uint32_t _blt_0000279A = (g_cpu.R[14] + 0x00000F0Eu) & ~1u;
    g_cpu.R[14] = 0x0000279Du;
    g_cpu.R[15] = _blt_0000279A;
    runtime_call_push_return(0x0000279Cu);
    runtime_tick(_cyc_0000279A);
    _cyc_0000279A = 0u;
    runtime_dispatch(_blt_0000279A);
    if (g_cpu.R[15] != 0x0000279Cu) { runtime_call_cancel_return(0x0000279Cu); return; }
    g_cpu.R[15] = 0x0000279Cu;
    runtime_tick(_cyc_0000279A);
    /* fall-through to 0x0000279C */
    g_cpu.R[15] = 0x0000279Cu;
    runtime_dispatch(0x0000279Cu);
    return;
}

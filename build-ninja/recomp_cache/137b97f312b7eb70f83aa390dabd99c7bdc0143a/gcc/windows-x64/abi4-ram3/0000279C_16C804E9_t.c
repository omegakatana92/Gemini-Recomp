// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0000279C mode=thumb end=0x000027A4
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

OVL_EXPORT void func_0000279C(void) {
    if (gba_mod_function_entry(0x0000279Cu, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0000279Cu);
    /* 0000279C  0000279c T str r3,[r1,#0x28] */
    g_cpu.R[15] = 0x0000279Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000279C = 1u;
    _cyc_0000279C = 1u;
    uint32_t _base_0000279C = g_cpu.R[1];
    uint32_t _off_0000279C;
    _off_0000279C = 0x00000028u;
    uint32_t _ea_0000279C = _base_0000279C + _off_0000279C;
    uint32_t _post_0000279C = _base_0000279C + _off_0000279C;
    _cyc_0000279C += runtime_mem_cycles(_ea_0000279C, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0000279Cu, _ea_0000279C & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_0000279C & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x0000279Eu;
    runtime_tick(_cyc_0000279C);
    /* 0000279E  0000279e T ldr r3,[r2,#0x8] */
    g_cpu.R[15] = 0x0000279Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000279E = 1u;
    _cyc_0000279E = 2u;
    uint32_t _base_0000279E = g_cpu.R[2];
    uint32_t _off_0000279E;
    _off_0000279E = 0x00000008u;
    uint32_t _ea_0000279E = _base_0000279E + _off_0000279E;
    uint32_t _post_0000279E = _base_0000279E + _off_0000279E;
    _cyc_0000279E += runtime_mem_cycles(_ea_0000279E, 4u, 0u);
    uint32_t _v_0000279E;
    { uint32_t _w = bus_read_u32(_ea_0000279E & ~3u); uint32_t _rot = (_ea_0000279E & 3u) * 8u; _v_0000279E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0000279E;
    g_cpu.R[15] = 0x000027A0u;
    runtime_tick(_cyc_0000279E);
    /* 000027A0  000027a0 T bl.hi 0x000017a4 */
    g_cpu.R[15] = 0x000027A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027A0 = 1u;
    _cyc_000027A0 = 1u;
    g_cpu.R[14] = 0x000017A4u;
    g_cpu.R[15] = 0x000027A2u;
    runtime_tick(_cyc_000027A0);
    /* 000027A2  000027a2 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x000027A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027A2 = 1u;
    _cyc_000027A2 = 3u;
    uint32_t _blt_000027A2 = (g_cpu.R[14] + 0x00000F06u) & ~1u;
    g_cpu.R[14] = 0x000027A5u;
    g_cpu.R[15] = _blt_000027A2;
    runtime_call_push_return(0x000027A4u);
    runtime_tick(_cyc_000027A2);
    _cyc_000027A2 = 0u;
    runtime_dispatch(_blt_000027A2);
    if (g_cpu.R[15] != 0x000027A4u) { runtime_call_cancel_return(0x000027A4u); return; }
    g_cpu.R[15] = 0x000027A4u;
    runtime_tick(_cyc_000027A2);
    /* fall-through to 0x000027A4 */
    g_cpu.R[15] = 0x000027A4u;
    runtime_dispatch(0x000027A4u);
    return;
}

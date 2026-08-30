// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x000027A4 mode=thumb end=0x000027A8
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

OVL_EXPORT void func_000027A4(void) {
    if (gba_mod_function_entry(0x000027A4u, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x000027A4u);
    /* 000027A4  000027a4 T str r3,[r1,#0x2c] */
    g_cpu.R[15] = 0x000027A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027A4 = 1u;
    _cyc_000027A4 = 1u;
    uint32_t _base_000027A4 = g_cpu.R[1];
    uint32_t _off_000027A4;
    _off_000027A4 = 0x0000002Cu;
    uint32_t _ea_000027A4 = _base_000027A4 + _off_000027A4;
    uint32_t _post_000027A4 = _base_000027A4 + _off_000027A4;
    _cyc_000027A4 += runtime_mem_cycles(_ea_000027A4, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x000027A4u, _ea_000027A4 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_000027A4 & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x000027A6u;
    runtime_tick(_cyc_000027A4);
    /* 000027A6  000027a6 T bx r12 */
    g_cpu.R[15] = 0x000027A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027A6 = 1u;
    _cyc_000027A6 = 3u;
    uint32_t _bxt_000027A6 = g_cpu.R[12];
    g_cpu.R[15] = _bxt_000027A6 & ~1u;
    if (_bxt_000027A6 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_000027A6);
    runtime_dispatch_with_exchange(_bxt_000027A6);
    return;
    g_cpu.R[15] = 0x000027A8u;
    runtime_tick(_cyc_000027A6);
    /* fall-through to 0x000027A8 */
    g_cpu.R[15] = 0x000027A8u;
    runtime_dispatch(0x000027A8u);
    return;
}

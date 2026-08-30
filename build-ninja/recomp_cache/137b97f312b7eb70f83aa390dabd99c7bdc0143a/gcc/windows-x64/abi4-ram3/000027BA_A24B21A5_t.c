// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x000027BA mode=thumb end=0x000027C0
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

OVL_EXPORT void func_000027BA(void) {
    if (gba_mod_function_entry(0x000027BAu, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x000027BAu);
    /* 000027BA  000027ba T mov r12,r14 */
    g_cpu.R[15] = 0x000027BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027BA = 1u;
    _cyc_000027BA = 1u;
    uint32_t _rm_000027BA = g_cpu.R[14];
    uint32_t _op2_000027BA;
    uint32_t _co_000027BA;
    _op2_000027BA = _rm_000027BA;
    _co_000027BA = cpsr_c();
    uint32_t _r_000027BA;
    _r_000027BA = _op2_000027BA;
    g_cpu.R[12] = _r_000027BA;
    g_cpu.R[15] = 0x000027BCu;
    runtime_tick(_cyc_000027BA);
    /* 000027BC  000027bc T bl.hi 0x000017c0 */
    g_cpu.R[15] = 0x000027BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027BC = 1u;
    _cyc_000027BC = 1u;
    g_cpu.R[14] = 0x000017C0u;
    g_cpu.R[15] = 0x000027BEu;
    runtime_tick(_cyc_000027BC);
    /* 000027BE  000027be T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x000027BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027BE = 1u;
    _cyc_000027BE = 3u;
    uint32_t _blt_000027BE = (g_cpu.R[14] + 0x00000F04u) & ~1u;
    g_cpu.R[14] = 0x000027C1u;
    g_cpu.R[15] = _blt_000027BE;
    runtime_call_push_return(0x000027C0u);
    runtime_tick(_cyc_000027BE);
    _cyc_000027BE = 0u;
    runtime_dispatch(_blt_000027BE);
    if (g_cpu.R[15] != 0x000027C0u) { runtime_call_cancel_return(0x000027C0u); return; }
    g_cpu.R[15] = 0x000027C0u;
    runtime_tick(_cyc_000027BE);
    /* fall-through to 0x000027C0 */
    g_cpu.R[15] = 0x000027C0u;
    runtime_dispatch(0x000027C0u);
    return;
}

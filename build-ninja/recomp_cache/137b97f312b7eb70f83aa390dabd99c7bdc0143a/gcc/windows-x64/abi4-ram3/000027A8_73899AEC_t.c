// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x000027A8 mode=thumb end=0x000027AE
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

OVL_EXPORT void func_000027A8(void) {
    if (gba_mod_function_entry(0x000027A8u, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x000027A8u);
    /* 000027A8  000027a8 T mov r12,r14 */
    g_cpu.R[15] = 0x000027A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027A8 = 1u;
    _cyc_000027A8 = 1u;
    uint32_t _rm_000027A8 = g_cpu.R[14];
    uint32_t _op2_000027A8;
    uint32_t _co_000027A8;
    _op2_000027A8 = _rm_000027A8;
    _co_000027A8 = cpsr_c();
    uint32_t _r_000027A8;
    _r_000027A8 = _op2_000027A8;
    g_cpu.R[12] = _r_000027A8;
    g_cpu.R[15] = 0x000027AAu;
    runtime_tick(_cyc_000027A8);
    /* 000027AA  000027aa T bl.hi 0x000017ae */
    g_cpu.R[15] = 0x000027AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027AA = 1u;
    _cyc_000027AA = 1u;
    g_cpu.R[14] = 0x000017AEu;
    g_cpu.R[15] = 0x000027ACu;
    runtime_tick(_cyc_000027AA);
    /* 000027AC  000027ac T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x000027ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027AC = 1u;
    _cyc_000027AC = 3u;
    uint32_t _blt_000027AC = (g_cpu.R[14] + 0x00000F16u) & ~1u;
    g_cpu.R[14] = 0x000027AFu;
    g_cpu.R[15] = _blt_000027AC;
    runtime_call_push_return(0x000027AEu);
    runtime_tick(_cyc_000027AC);
    _cyc_000027AC = 0u;
    runtime_dispatch(_blt_000027AC);
    if (g_cpu.R[15] != 0x000027AEu) { runtime_call_cancel_return(0x000027AEu); return; }
    g_cpu.R[15] = 0x000027AEu;
    runtime_tick(_cyc_000027AC);
    /* fall-through to 0x000027AE */
    g_cpu.R[15] = 0x000027AEu;
    runtime_dispatch(0x000027AEu);
    return;
}

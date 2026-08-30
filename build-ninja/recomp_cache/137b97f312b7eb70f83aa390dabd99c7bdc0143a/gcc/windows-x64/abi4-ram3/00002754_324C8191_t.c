// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00002754 mode=thumb end=0x0000275A
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

OVL_EXPORT void func_00002754(void) {
    if (gba_mod_function_entry(0x00002754u, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00002754u);
    /* 00002754  00002754 T mov r12,r14 */
    g_cpu.R[15] = 0x00002754u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002754 = 1u;
    _cyc_00002754 = 1u;
    uint32_t _rm_00002754 = g_cpu.R[14];
    uint32_t _op2_00002754;
    uint32_t _co_00002754;
    _op2_00002754 = _rm_00002754;
    _co_00002754 = cpsr_c();
    uint32_t _r_00002754;
    _r_00002754 = _op2_00002754;
    g_cpu.R[12] = _r_00002754;
    g_cpu.R[15] = 0x00002756u;
    runtime_tick(_cyc_00002754);
    /* 00002756  00002756 T bl.hi 0x0000175a */
    g_cpu.R[15] = 0x00002756u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002756 = 1u;
    _cyc_00002756 = 1u;
    g_cpu.R[14] = 0x0000175Au;
    g_cpu.R[15] = 0x00002758u;
    runtime_tick(_cyc_00002756);
    /* 00002758  00002758 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x00002758u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002758 = 1u;
    _cyc_00002758 = 3u;
    uint32_t _blt_00002758 = (g_cpu.R[14] + 0x00000F6Au) & ~1u;
    g_cpu.R[14] = 0x0000275Bu;
    g_cpu.R[15] = _blt_00002758;
    runtime_call_push_return(0x0000275Au);
    runtime_tick(_cyc_00002758);
    _cyc_00002758 = 0u;
    runtime_dispatch(_blt_00002758);
    if (g_cpu.R[15] != 0x0000275Au) { runtime_call_cancel_return(0x0000275Au); return; }
    g_cpu.R[15] = 0x0000275Au;
    runtime_tick(_cyc_00002758);
    /* fall-through to 0x0000275A */
    g_cpu.R[15] = 0x0000275Au;
    runtime_dispatch(0x0000275Au);
    return;
}

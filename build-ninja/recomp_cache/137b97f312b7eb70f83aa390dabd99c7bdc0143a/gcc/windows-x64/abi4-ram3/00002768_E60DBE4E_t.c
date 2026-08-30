// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00002768 mode=thumb end=0x0000276E
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

OVL_EXPORT void func_00002768(void) {
    if (gba_mod_function_entry(0x00002768u, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00002768u);
    /* 00002768  00002768 T mov r12,r14 */
    g_cpu.R[15] = 0x00002768u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002768 = 1u;
    _cyc_00002768 = 1u;
    uint32_t _rm_00002768 = g_cpu.R[14];
    uint32_t _op2_00002768;
    uint32_t _co_00002768;
    _op2_00002768 = _rm_00002768;
    _co_00002768 = cpsr_c();
    uint32_t _r_00002768;
    _r_00002768 = _op2_00002768;
    g_cpu.R[12] = _r_00002768;
    g_cpu.R[15] = 0x0000276Au;
    runtime_tick(_cyc_00002768);
    /* 0000276A  0000276a T bl.hi 0x0000176e */
    g_cpu.R[15] = 0x0000276Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000276A = 1u;
    _cyc_0000276A = 1u;
    g_cpu.R[14] = 0x0000176Eu;
    g_cpu.R[15] = 0x0000276Cu;
    runtime_tick(_cyc_0000276A);
    /* 0000276C  0000276c T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0000276Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000276C = 1u;
    _cyc_0000276C = 3u;
    uint32_t _blt_0000276C = (g_cpu.R[14] + 0x00000F56u) & ~1u;
    g_cpu.R[14] = 0x0000276Fu;
    g_cpu.R[15] = _blt_0000276C;
    runtime_call_push_return(0x0000276Eu);
    runtime_tick(_cyc_0000276C);
    _cyc_0000276C = 0u;
    runtime_dispatch(_blt_0000276C);
    if (g_cpu.R[15] != 0x0000276Eu) { runtime_call_cancel_return(0x0000276Eu); return; }
    g_cpu.R[15] = 0x0000276Eu;
    runtime_tick(_cyc_0000276C);
    /* fall-through to 0x0000276E */
    g_cpu.R[15] = 0x0000276Eu;
    runtime_dispatch(0x0000276Eu);
    return;
}

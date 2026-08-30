// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0800015A mode=thumb end=0x08000160
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

OVL_EXPORT void func_0800015A(void) {
    if (gba_mod_function_entry(0x0800015Au, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800015Au);
    /* 0800015A  0800015a T subs r1,r1,#0x4 */
    g_cpu.R[15] = 0x0800015Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800015A = 1u;
    _cyc_0800015A = 1u;
    uint32_t _rn_0800015A = g_cpu.R[1];
    uint32_t _r_0800015A;
    _r_0800015A = _rn_0800015A - 0x00000004u;
    arm_set_nzcv_sub(_rn_0800015A, 0x00000004u, _r_0800015A);
    g_cpu.R[1] = _r_0800015A;
    g_cpu.R[15] = 0x0800015Cu;
    runtime_tick(_cyc_0800015A);
    /* 0800015C  0800015c T bne 0x08000158 */
    g_cpu.R[15] = 0x0800015Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800015C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0800015C = 3u;
        g_cpu.R[15] = 0x08000158u;
        runtime_tick(_cyc_0800015C);
        runtime_dispatch(0x08000158u);
        return;
    }
    g_cpu.R[15] = 0x0800015Eu;
    runtime_tick(_cyc_0800015C);
    /* 0800015E  0800015e T bx r14 */
    g_cpu.R[15] = 0x0800015Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800015E = 1u;
    _cyc_0800015E = 3u;
    uint32_t _bxt_0800015E = g_cpu.R[14];
    g_cpu.R[15] = _bxt_0800015E & ~1u;
    if (_bxt_0800015E & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_0800015E);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_0800015E);
    return;
    g_cpu.R[15] = 0x08000160u;
    runtime_tick(_cyc_0800015E);
    /* fall-through to 0x08000160 */
    g_cpu.R[15] = 0x08000160u;
    runtime_dispatch(0x08000160u);
    return;
}

// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0000034C mode=arm end=0x00000358
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

OVL_EXPORT void func_0000034C(void) {
    if (gba_mod_function_entry(0x0000034Cu, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0000034Cu);
    /* 0000034C  0000034c A beq 0x00000344 */
    g_cpu.R[15] = 0x0000034Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000034C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0000034C = 3u;
        g_cpu.R[15] = 0x00000344u;
        runtime_tick(_cyc_0000034C);
        runtime_dispatch(0x00000344u);
        return;
    }
    g_cpu.R[15] = 0x00000350u;
    runtime_tick(_cyc_0000034C);
    /* 00000350  00000350 A ldm r13!,{r4,r14} */
    g_cpu.R[15] = 0x00000350u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000350 = 1u;
    _cyc_00000350 = 2u;
    uint32_t _b_00000350 = g_cpu.R[13];
    uint32_t _a_00000350 = _b_00000350;
    uint32_t _fb_00000350 = _b_00000350 + 8u;
    _cyc_00000350 += runtime_mem_cycles(_a_00000350 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_00000350 & ~3u);
    _a_00000350 += 4u;
    _cyc_00000350 += runtime_mem_cycles(_a_00000350 & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_00000350 & ~3u);
    _a_00000350 += 4u;
    g_cpu.R[13] = _fb_00000350;
    g_cpu.R[15] = 0x00000354u;
    runtime_tick(_cyc_00000350);
    /* 00000354  00000354 A bx r14 */
    g_cpu.R[15] = 0x00000354u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000354 = 1u;
    _cyc_00000354 = 3u;
    uint32_t _bxt_00000354 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_00000354 & ~1u;
    if (_bxt_00000354 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_00000354);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_00000354);
    return;
    g_cpu.R[15] = 0x00000358u;
    runtime_tick(_cyc_00000354);
    /* fall-through to 0x00000358 */
    g_cpu.R[15] = 0x00000358u;
    runtime_dispatch(0x00000358u);
    return;
}

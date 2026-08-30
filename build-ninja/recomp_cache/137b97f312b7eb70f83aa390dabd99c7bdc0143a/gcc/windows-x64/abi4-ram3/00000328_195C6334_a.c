// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00000328 mode=arm end=0x00000344
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

OVL_EXPORT void func_00000328(void) {
    if (gba_mod_function_entry(0x00000328u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00000328u);
    /* 00000328  00000328 A mov r0,#0x1 */
    g_cpu.R[15] = 0x00000328u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000328 = 1u;
    _cyc_00000328 = 1u;
    uint32_t _r_00000328;
    _r_00000328 = 0x00000001u;
    g_cpu.R[0] = _r_00000328;
    g_cpu.R[15] = 0x0000032Cu;
    runtime_tick(_cyc_00000328);
    /* 0000032C  0000032c A mov r1,#0x1 */
    g_cpu.R[15] = 0x0000032Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000032C = 1u;
    _cyc_0000032C = 1u;
    uint32_t _r_0000032C;
    _r_0000032C = 0x00000001u;
    g_cpu.R[1] = _r_0000032C;
    g_cpu.R[15] = 0x00000330u;
    runtime_tick(_cyc_0000032C);
    /* 00000330  00000330 A stm r13!,{r4,r14} */
    g_cpu.R[15] = 0x00000330u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000330 = 1u;
    _cyc_00000330 = 1u;
    uint32_t _b_00000330 = g_cpu.R[13];
    uint32_t _a_00000330 = _b_00000330 - 8u;
    uint32_t _fb_00000330 = _b_00000330 - 8u;
    _cyc_00000330 += runtime_mem_cycles(_a_00000330 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000330u, _a_00000330 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_00000330 & ~3u, g_cpu.R[4]);
    _a_00000330 += 4u;
    _cyc_00000330 += runtime_mem_cycles(_a_00000330 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000330u, _a_00000330 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_00000330 & ~3u, g_cpu.R[14]);
    _a_00000330 += 4u;
    g_cpu.R[13] = _fb_00000330;
    g_cpu.R[15] = 0x00000334u;
    runtime_tick(_cyc_00000330);
    /* 00000334  00000334 A mov r3,#0x0 */
    g_cpu.R[15] = 0x00000334u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000334 = 1u;
    _cyc_00000334 = 1u;
    uint32_t _r_00000334;
    _r_00000334 = 0x00000000u;
    g_cpu.R[3] = _r_00000334;
    g_cpu.R[15] = 0x00000338u;
    runtime_tick(_cyc_00000334);
    /* 00000338  00000338 A mov r4,#0x1 */
    g_cpu.R[15] = 0x00000338u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000338 = 1u;
    _cyc_00000338 = 1u;
    uint32_t _r_00000338;
    _r_00000338 = 0x00000001u;
    g_cpu.R[4] = _r_00000338;
    g_cpu.R[15] = 0x0000033Cu;
    runtime_tick(_cyc_00000338);
    /* 0000033C  0000033c A cmps r0,#0x0 */
    g_cpu.R[15] = 0x0000033Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000033C = 1u;
    _cyc_0000033C = 1u;
    uint32_t _rn_0000033C = g_cpu.R[0];
    uint32_t _r_0000033C;
    _r_0000033C = _rn_0000033C - 0x00000000u;
    arm_set_nzcv_sub(_rn_0000033C, 0x00000000u, _r_0000033C);
    g_cpu.R[15] = 0x00000340u;
    runtime_tick(_cyc_0000033C);
    /* 00000340  00000340 A blne 0x00000358 */
    g_cpu.R[15] = 0x00000340u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000340 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_00000340 = 3u;
        g_cpu.R[14] = 0x00000344u;
        g_cpu.R[15] = 0x00000358u;
        runtime_call_push_return(0x00000344u);
        runtime_tick(_cyc_00000340);
        _cyc_00000340 = 0u;
        runtime_dispatch(0x00000358u);
        if (g_cpu.R[15] != 0x00000344u) { runtime_call_cancel_return(0x00000344u); return; }
    }
    g_cpu.R[15] = 0x00000344u;
    runtime_tick(_cyc_00000340);
    /* fall-through to 0x00000344 */
    g_cpu.R[15] = 0x00000344u;
    runtime_dispatch(0x00000344u);
    return;
}

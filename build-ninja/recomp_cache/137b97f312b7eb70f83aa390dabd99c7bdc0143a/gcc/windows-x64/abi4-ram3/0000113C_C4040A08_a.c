// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0000113C mode=arm end=0x00001144
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

OVL_EXPORT void func_0000113C(void) {
    if (gba_mod_function_entry(0x0000113Cu, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0000113Cu);
    /* 0000113C  0000113c A sub r2,r2,#0x1 */
    g_cpu.R[15] = 0x0000113Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000113C = 1u;
    _cyc_0000113C = 1u;
    uint32_t _rn_0000113C = g_cpu.R[2];
    uint32_t _r_0000113C;
    _r_0000113C = _rn_0000113C - 0x00000001u;
    g_cpu.R[2] = _r_0000113C;
    g_cpu.R[15] = 0x00001140u;
    runtime_tick(_cyc_0000113C);
    /* 00001140  00001140 A b 0x0000117c */
    g_cpu.R[15] = 0x00001140u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001140 = 1u;
    _cyc_00001140 = 3u;
    g_cpu.R[15] = 0x0000117Cu;
    runtime_tick(_cyc_00001140);
    runtime_dispatch(0x0000117Cu);
    return;
    g_cpu.R[15] = 0x00001144u;
    runtime_tick(_cyc_00001140);
    /* fall-through to 0x00001144 */
    g_cpu.R[15] = 0x00001144u;
    runtime_dispatch(0x00001144u);
    return;
}

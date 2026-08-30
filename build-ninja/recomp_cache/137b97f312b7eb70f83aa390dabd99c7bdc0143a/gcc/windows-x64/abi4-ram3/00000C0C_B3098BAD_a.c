// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00000C0C mode=arm end=0x00000C14
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

OVL_EXPORT void func_00000C0C(void) {
    if (gba_mod_function_entry(0x00000C0Cu, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00000C0Cu);
    /* 00000C0C  00000c0c A blt 0x00000c04 */
    g_cpu.R[15] = 0x00000C0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000C0C = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_00000C0C = 3u;
        g_cpu.R[15] = 0x00000C04u;
        runtime_tick(_cyc_00000C0C);
        runtime_dispatch(0x00000C04u);
        return;
    }
    g_cpu.R[15] = 0x00000C10u;
    runtime_tick(_cyc_00000C0C);
    /* 00000C10  00000c10 A b 0x00000c24 */
    g_cpu.R[15] = 0x00000C10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000C10 = 1u;
    _cyc_00000C10 = 3u;
    g_cpu.R[15] = 0x00000C24u;
    runtime_tick(_cyc_00000C10);
    runtime_dispatch(0x00000C24u);
    return;
    g_cpu.R[15] = 0x00000C14u;
    runtime_tick(_cyc_00000C10);
    /* fall-through to 0x00000C14 */
    g_cpu.R[15] = 0x00000C14u;
    runtime_dispatch(0x00000C14u);
    return;
}

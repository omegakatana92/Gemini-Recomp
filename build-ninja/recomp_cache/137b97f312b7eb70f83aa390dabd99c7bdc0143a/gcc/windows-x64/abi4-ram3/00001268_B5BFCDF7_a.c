// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00001268 mode=arm end=0x00001270
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

OVL_EXPORT void func_00001268(void) {
    if (gba_mod_function_entry(0x00001268u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00001268u);
    /* 00001268  00001268 A bgt 0x000011c4 */
    g_cpu.R[15] = 0x00001268u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001268 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_00001268 = 3u;
        g_cpu.R[15] = 0x000011C4u;
        runtime_tick(_cyc_00001268);
        runtime_dispatch(0x000011C4u);
        return;
    }
    g_cpu.R[15] = 0x0000126Cu;
    runtime_tick(_cyc_00001268);
    /* 0000126C  0000126c A b 0x000011b4 */
    g_cpu.R[15] = 0x0000126Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000126C = 1u;
    _cyc_0000126C = 3u;
    g_cpu.R[15] = 0x000011B4u;
    runtime_tick(_cyc_0000126C);
    runtime_dispatch(0x000011B4u);
    return;
    g_cpu.R[15] = 0x00001270u;
    runtime_tick(_cyc_0000126C);
    /* fall-through to 0x00001270 */
    g_cpu.R[15] = 0x00001270u;
    runtime_dispatch(0x00001270u);
    return;
}

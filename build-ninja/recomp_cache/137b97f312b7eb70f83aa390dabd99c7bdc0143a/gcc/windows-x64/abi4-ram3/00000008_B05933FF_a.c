// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00000008 mode=arm end=0x0000000C
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

OVL_EXPORT void func_00000008(void) {
    if (gba_mod_function_entry(0x00000008u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00000008u);
    /* 00000008  00000008 A b 0x00000140 */
    g_cpu.R[15] = 0x00000008u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000008 = 1u;
    _cyc_00000008 = 3u;
    g_cpu.R[15] = 0x00000140u;
    runtime_tick(_cyc_00000008);
    runtime_dispatch(0x00000140u);
    return;
    g_cpu.R[15] = 0x0000000Cu;
    runtime_tick(_cyc_00000008);
    /* fall-through to 0x0000000C */
    g_cpu.R[15] = 0x0000000Cu;
    runtime_dispatch(0x0000000Cu);
    return;
}

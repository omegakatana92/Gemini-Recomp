// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00001000 mode=arm end=0x00001004
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

OVL_EXPORT void func_00001000(void) {
    if (gba_mod_function_entry(0x00001000u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00001000u);
    /* 00001000  00001000 A b 0x00000fbc */
    g_cpu.R[15] = 0x00001000u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001000 = 1u;
    _cyc_00001000 = 3u;
    g_cpu.R[15] = 0x00000FBCu;
    runtime_tick(_cyc_00001000);
    runtime_dispatch(0x00000FBCu);
    return;
    g_cpu.R[15] = 0x00001004u;
    runtime_tick(_cyc_00001000);
    /* fall-through to 0x00001004 */
    g_cpu.R[15] = 0x00001004u;
    runtime_dispatch(0x00001004u);
    return;
}

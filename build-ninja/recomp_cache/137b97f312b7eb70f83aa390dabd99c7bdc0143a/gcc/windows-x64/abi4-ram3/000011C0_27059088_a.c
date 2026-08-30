// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x000011C0 mode=arm end=0x000011C4
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

OVL_EXPORT void func_000011C0(void) {
    if (gba_mod_function_entry(0x000011C0u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x000011C0u);
    /* 000011C0  000011c0 A mov r7,#0x8 */
    g_cpu.R[15] = 0x000011C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000011C0 = 1u;
    _cyc_000011C0 = 1u;
    uint32_t _r_000011C0;
    _r_000011C0 = 0x00000008u;
    g_cpu.R[7] = _r_000011C0;
    g_cpu.R[15] = 0x000011C4u;
    runtime_tick(_cyc_000011C0);
    /* fall-through to 0x000011C4 */
    g_cpu.R[15] = 0x000011C4u;
    runtime_dispatch(0x000011C4u);
    return;
}

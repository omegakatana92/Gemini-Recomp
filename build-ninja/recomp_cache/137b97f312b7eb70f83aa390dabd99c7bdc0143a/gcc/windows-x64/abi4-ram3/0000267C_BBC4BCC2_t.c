// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0000267C mode=thumb end=0x00002682
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

OVL_EXPORT void func_0000267C(void) {
    if (gba_mod_function_entry(0x0000267Cu, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0000267Cu);
    /* 0000267C  0000267c T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x0000267Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000267C = 1u;
    _cyc_0000267C = 1u;
    uint32_t _rn_0000267C = g_cpu.R[4];
    uint32_t _r_0000267C;
    _r_0000267C = _rn_0000267C + 0x00000000u;
    arm_set_nzcv_add(_rn_0000267C, 0x00000000u, _r_0000267C);
    g_cpu.R[0] = _r_0000267C;
    g_cpu.R[15] = 0x0000267Eu;
    runtime_tick(_cyc_0000267C);
    /* 0000267E  0000267e T bl.hi 0x00001682 */
    g_cpu.R[15] = 0x0000267Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000267E = 1u;
    _cyc_0000267E = 1u;
    g_cpu.R[14] = 0x00001682u;
    g_cpu.R[15] = 0x00002680u;
    runtime_tick(_cyc_0000267E);
    /* 00002680  00002680 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x00002680u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002680 = 1u;
    _cyc_00002680 = 3u;
    uint32_t _blt_00002680 = (g_cpu.R[14] + 0x00000D44u) & ~1u;
    g_cpu.R[14] = 0x00002683u;
    g_cpu.R[15] = _blt_00002680;
    runtime_call_push_return(0x00002682u);
    runtime_tick(_cyc_00002680);
    _cyc_00002680 = 0u;
    runtime_dispatch(_blt_00002680);
    if (g_cpu.R[15] != 0x00002682u) { runtime_call_cancel_return(0x00002682u); return; }
    g_cpu.R[15] = 0x00002682u;
    runtime_tick(_cyc_00002680);
    /* fall-through to 0x00002682 */
    g_cpu.R[15] = 0x00002682u;
    runtime_dispatch(0x00002682u);
    return;
}

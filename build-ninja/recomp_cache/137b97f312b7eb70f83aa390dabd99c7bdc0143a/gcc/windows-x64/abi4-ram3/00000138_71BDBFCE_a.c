// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00000138 mode=arm end=0x00000140
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

OVL_EXPORT void func_00000138(void) {
    if (gba_mod_function_entry(0x00000138u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00000138u);
    /* 00000138  00000138 A ldm r13!,{r0,r1,r2,r3,r12,r14} */
    g_cpu.R[15] = 0x00000138u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000138 = 1u;
    _cyc_00000138 = 2u;
    uint32_t _b_00000138 = g_cpu.R[13];
    uint32_t _a_00000138 = _b_00000138;
    uint32_t _fb_00000138 = _b_00000138 + 24u;
    _cyc_00000138 += runtime_mem_cycles(_a_00000138 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_00000138 & ~3u);
    _a_00000138 += 4u;
    _cyc_00000138 += runtime_mem_cycles(_a_00000138 & ~3u, 4u, 1u);
    g_cpu.R[1] = bus_read_u32(_a_00000138 & ~3u);
    _a_00000138 += 4u;
    _cyc_00000138 += runtime_mem_cycles(_a_00000138 & ~3u, 4u, 1u);
    g_cpu.R[2] = bus_read_u32(_a_00000138 & ~3u);
    _a_00000138 += 4u;
    _cyc_00000138 += runtime_mem_cycles(_a_00000138 & ~3u, 4u, 1u);
    g_cpu.R[3] = bus_read_u32(_a_00000138 & ~3u);
    _a_00000138 += 4u;
    _cyc_00000138 += runtime_mem_cycles(_a_00000138 & ~3u, 4u, 1u);
    g_cpu.R[12] = bus_read_u32(_a_00000138 & ~3u);
    _a_00000138 += 4u;
    _cyc_00000138 += runtime_mem_cycles(_a_00000138 & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_00000138 & ~3u);
    _a_00000138 += 4u;
    g_cpu.R[13] = _fb_00000138;
    g_cpu.R[15] = 0x0000013Cu;
    runtime_tick(_cyc_00000138);
    /* 0000013C  0000013c A subs r15,r14,#0x4 */
    g_cpu.R[15] = 0x0000013Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000013C = 1u;
    _cyc_0000013C = 3u;
    uint32_t _rn_0000013C = g_cpu.R[14];
    uint32_t _r_0000013C;
    _r_0000013C = _rn_0000013C - 0x00000004u;
    if (((g_cpu.cpsr & 0x1Fu) != 0x10u && (g_cpu.cpsr & 0x1Fu) != 0x1Fu)) {
        runtime_tick(_cyc_0000013C);
        runtime_exception_return(_r_0000013C);
        return;
    }
    arm_set_nzcv_sub(_rn_0000013C, 0x00000004u, _r_0000013C);
    uint32_t _pc_0000013C = _r_0000013C & ~3u;
    g_cpu.R[15] = _pc_0000013C;
    runtime_tick(_cyc_0000013C);
    runtime_dispatch(_pc_0000013C);
    return;
    g_cpu.R[15] = 0x00000140u;
    runtime_tick(_cyc_0000013C);
    /* fall-through to 0x00000140 */
    g_cpu.R[15] = 0x00000140u;
    runtime_dispatch(0x00000140u);
    return;
}

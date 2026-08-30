// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00001128 mode=arm end=0x00001144
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

OVL_EXPORT void func_00001128(void) {
    if (gba_mod_function_entry(0x00001128u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00001128u);
    /* 00001128  00001128 A blt 0x00001114 */
    g_cpu.R[15] = 0x00001128u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001128 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_00001128 = 3u;
        g_cpu.R[15] = 0x00001114u;
        runtime_tick(_cyc_00001128);
        runtime_dispatch(0x00001114u);
        return;
    }
    g_cpu.R[15] = 0x0000112Cu;
    runtime_tick(_cyc_00001128);
    /* 0000112C  0000112c A tsts r14,#0x80 */
    g_cpu.R[15] = 0x0000112Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000112C = 1u;
    _cyc_0000112C = 1u;
    uint32_t _rn_0000112C = g_cpu.R[14];
    uint32_t _r_0000112C;
    _r_0000112C = _rn_0000112C & 0x00000080u;
    arm_set_nzc_logic(_r_0000112C, cpsr_c());
    g_cpu.R[15] = 0x00001130u;
    runtime_tick(_cyc_0000112C);
    /* 00001130  00001130 A bne 0x00001144 */
    g_cpu.R[15] = 0x00001130u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001130 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_00001130 = 3u;
        g_cpu.R[15] = 0x00001144u;
        runtime_tick(_cyc_00001130);
        runtime_dispatch(0x00001144u);
        return;
    }
    g_cpu.R[15] = 0x00001134u;
    runtime_tick(_cyc_00001130);
    /* 00001134  00001134 A ldrb r6,[r0],#0x1 */
    g_cpu.R[15] = 0x00001134u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001134 = 1u;
    _cyc_00001134 = 2u;
    uint32_t _base_00001134 = g_cpu.R[0];
    uint32_t _off_00001134;
    _off_00001134 = 0x00000001u;
    uint32_t _ea_00001134 = _base_00001134;
    uint32_t _post_00001134 = _base_00001134 + _off_00001134;
    _cyc_00001134 += runtime_mem_cycles(_ea_00001134, 1u, 0u);
    uint32_t _v_00001134;
    _v_00001134 = bus_read_u8(_ea_00001134);
    if (0u != 6u) g_cpu.R[0] = _post_00001134;
    g_cpu.R[6] = _v_00001134;
    g_cpu.R[15] = 0x00001138u;
    runtime_tick(_cyc_00001134);
    /* 00001138  00001138 A strb r6,[r1],#0x1 */
    g_cpu.R[15] = 0x00001138u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001138 = 1u;
    _cyc_00001138 = 1u;
    uint32_t _base_00001138 = g_cpu.R[1];
    uint32_t _off_00001138;
    _off_00001138 = 0x00000001u;
    uint32_t _ea_00001138 = _base_00001138;
    uint32_t _post_00001138 = _base_00001138 + _off_00001138;
    _cyc_00001138 += runtime_mem_cycles(_ea_00001138, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00001138u, _ea_00001138, (uint32_t)(g_cpu.R[6] & 0xFFu), 1u);
    bus_write_u8(_ea_00001138, (uint8_t)(g_cpu.R[6] & 0xFFu));
    g_cpu.R[1] = _post_00001138;
    g_cpu.R[15] = 0x0000113Cu;
    runtime_tick(_cyc_00001138);
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

// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0000266E mode=thumb end=0x0000267C
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

OVL_EXPORT void func_0000266E(void) {
    if (gba_mod_function_entry(0x0000266Eu, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0000266Eu);
    /* 0000266E  0000266e T ldrb r1,[r4] */
    g_cpu.R[15] = 0x0000266Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000266E = 1u;
    _cyc_0000266E = 2u;
    uint32_t _base_0000266E = g_cpu.R[4];
    uint32_t _off_0000266E;
    _off_0000266E = 0x00000000u;
    uint32_t _ea_0000266E = _base_0000266E + _off_0000266E;
    uint32_t _post_0000266E = _base_0000266E + _off_0000266E;
    _cyc_0000266E += runtime_mem_cycles(_ea_0000266E, 1u, 0u);
    uint32_t _v_0000266E;
    _v_0000266E = bus_read_u8(_ea_0000266E);
    g_cpu.R[1] = _v_0000266E;
    g_cpu.R[15] = 0x00002670u;
    runtime_tick(_cyc_0000266E);
    /* 00002670  00002670 T movs r0,#0xc7 */
    g_cpu.R[15] = 0x00002670u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002670 = 1u;
    _cyc_00002670 = 1u;
    uint32_t _r_00002670;
    _r_00002670 = 0x000000C7u;
    arm_set_nzc_logic(_r_00002670, cpsr_c());
    g_cpu.R[0] = _r_00002670;
    g_cpu.R[15] = 0x00002672u;
    runtime_tick(_cyc_00002670);
    /* 00002672  00002672 T tsts r0,r1 */
    g_cpu.R[15] = 0x00002672u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002672 = 1u;
    _cyc_00002672 = 1u;
    uint32_t _rm_00002672 = g_cpu.R[1];
    uint32_t _op2_00002672;
    uint32_t _co_00002672;
    _op2_00002672 = _rm_00002672;
    _co_00002672 = cpsr_c();
    uint32_t _rn_00002672 = g_cpu.R[0];
    uint32_t _r_00002672;
    _r_00002672 = _rn_00002672 & _op2_00002672;
    arm_set_nzc_logic(_r_00002672, _co_00002672);
    g_cpu.R[15] = 0x00002674u;
    runtime_tick(_cyc_00002672);
    /* 00002674  00002674 T beq 0x0000267c */
    g_cpu.R[15] = 0x00002674u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002674 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_00002674 = 3u;
        g_cpu.R[15] = 0x0000267Cu;
        runtime_tick(_cyc_00002674);
        runtime_dispatch(0x0000267Cu);
        return;
    }
    g_cpu.R[15] = 0x00002676u;
    runtime_tick(_cyc_00002674);
    /* 00002676  00002676 T movs r0,#0x40 */
    g_cpu.R[15] = 0x00002676u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002676 = 1u;
    _cyc_00002676 = 1u;
    uint32_t _r_00002676;
    _r_00002676 = 0x00000040u;
    arm_set_nzc_logic(_r_00002676, cpsr_c());
    g_cpu.R[0] = _r_00002676;
    g_cpu.R[15] = 0x00002678u;
    runtime_tick(_cyc_00002676);
    /* 00002678  00002678 T orrs r1,r1,r0 */
    g_cpu.R[15] = 0x00002678u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002678 = 1u;
    _cyc_00002678 = 1u;
    uint32_t _rm_00002678 = g_cpu.R[0];
    uint32_t _op2_00002678;
    uint32_t _co_00002678;
    _op2_00002678 = _rm_00002678;
    _co_00002678 = cpsr_c();
    uint32_t _rn_00002678 = g_cpu.R[1];
    uint32_t _r_00002678;
    _r_00002678 = _rn_00002678 | _op2_00002678;
    arm_set_nzc_logic(_r_00002678, _co_00002678);
    g_cpu.R[1] = _r_00002678;
    g_cpu.R[15] = 0x0000267Au;
    runtime_tick(_cyc_00002678);
    /* 0000267A  0000267a T strb r1,[r4] */
    g_cpu.R[15] = 0x0000267Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000267A = 1u;
    _cyc_0000267A = 1u;
    uint32_t _base_0000267A = g_cpu.R[4];
    uint32_t _off_0000267A;
    _off_0000267A = 0x00000000u;
    uint32_t _ea_0000267A = _base_0000267A + _off_0000267A;
    uint32_t _post_0000267A = _base_0000267A + _off_0000267A;
    _cyc_0000267A += runtime_mem_cycles(_ea_0000267A, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0000267Au, _ea_0000267A, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_0000267A, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x0000267Cu;
    runtime_tick(_cyc_0000267A);
    /* fall-through to 0x0000267C */
    g_cpu.R[15] = 0x0000267Cu;
    runtime_dispatch(0x0000267Cu);
    return;
}

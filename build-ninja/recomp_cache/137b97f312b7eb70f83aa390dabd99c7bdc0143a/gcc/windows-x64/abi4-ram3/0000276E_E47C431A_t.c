// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0000276E mode=thumb end=0x0000277A
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

OVL_EXPORT void func_0000276E(void) {
    if (gba_mod_function_entry(0x0000276Eu, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0000276Eu);
    /* 0000276E  0000276e T strb r3,[r1,#0xa] */
    g_cpu.R[15] = 0x0000276Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000276E = 1u;
    _cyc_0000276E = 1u;
    uint32_t _base_0000276E = g_cpu.R[1];
    uint32_t _off_0000276E;
    _off_0000276E = 0x0000000Au;
    uint32_t _ea_0000276E = _base_0000276E + _off_0000276E;
    uint32_t _post_0000276E = _base_0000276E + _off_0000276E;
    _cyc_0000276E += runtime_mem_cycles(_ea_0000276E, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0000276Eu, _ea_0000276E, (uint32_t)(g_cpu.R[3] & 0xFFu), 1u);
    bus_write_u8(_ea_0000276E, (uint8_t)(g_cpu.R[3] & 0xFFu));
    g_cpu.R[15] = 0x00002770u;
    runtime_tick(_cyc_0000276E);
    /* 00002770  00002770 T ldrb r3,[r1] */
    g_cpu.R[15] = 0x00002770u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002770 = 1u;
    _cyc_00002770 = 2u;
    uint32_t _base_00002770 = g_cpu.R[1];
    uint32_t _off_00002770;
    _off_00002770 = 0x00000000u;
    uint32_t _ea_00002770 = _base_00002770 + _off_00002770;
    uint32_t _post_00002770 = _base_00002770 + _off_00002770;
    _cyc_00002770 += runtime_mem_cycles(_ea_00002770, 1u, 0u);
    uint32_t _v_00002770;
    _v_00002770 = bus_read_u8(_ea_00002770);
    g_cpu.R[3] = _v_00002770;
    g_cpu.R[15] = 0x00002772u;
    runtime_tick(_cyc_00002770);
    /* 00002772  00002772 T movs r2,#0xc */
    g_cpu.R[15] = 0x00002772u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002772 = 1u;
    _cyc_00002772 = 1u;
    uint32_t _r_00002772;
    _r_00002772 = 0x0000000Cu;
    arm_set_nzc_logic(_r_00002772, cpsr_c());
    g_cpu.R[2] = _r_00002772;
    g_cpu.R[15] = 0x00002774u;
    runtime_tick(_cyc_00002772);
    /* 00002774  00002774 T orrs r3,r3,r2 */
    g_cpu.R[15] = 0x00002774u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002774 = 1u;
    _cyc_00002774 = 1u;
    uint32_t _rm_00002774 = g_cpu.R[2];
    uint32_t _op2_00002774;
    uint32_t _co_00002774;
    _op2_00002774 = _rm_00002774;
    _co_00002774 = cpsr_c();
    uint32_t _rn_00002774 = g_cpu.R[3];
    uint32_t _r_00002774;
    _r_00002774 = _rn_00002774 | _op2_00002774;
    arm_set_nzc_logic(_r_00002774, _co_00002774);
    g_cpu.R[3] = _r_00002774;
    g_cpu.R[15] = 0x00002776u;
    runtime_tick(_cyc_00002774);
    /* 00002776  00002776 T strb r3,[r1] */
    g_cpu.R[15] = 0x00002776u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002776 = 1u;
    _cyc_00002776 = 1u;
    uint32_t _base_00002776 = g_cpu.R[1];
    uint32_t _off_00002776;
    _off_00002776 = 0x00000000u;
    uint32_t _ea_00002776 = _base_00002776 + _off_00002776;
    uint32_t _post_00002776 = _base_00002776 + _off_00002776;
    _cyc_00002776 += runtime_mem_cycles(_ea_00002776, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00002776u, _ea_00002776, (uint32_t)(g_cpu.R[3] & 0xFFu), 1u);
    bus_write_u8(_ea_00002776, (uint8_t)(g_cpu.R[3] & 0xFFu));
    g_cpu.R[15] = 0x00002778u;
    runtime_tick(_cyc_00002776);
    /* 00002778  00002778 T bx r12 */
    g_cpu.R[15] = 0x00002778u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002778 = 1u;
    _cyc_00002778 = 3u;
    uint32_t _bxt_00002778 = g_cpu.R[12];
    g_cpu.R[15] = _bxt_00002778 & ~1u;
    if (_bxt_00002778 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_00002778);
    runtime_dispatch_with_exchange(_bxt_00002778);
    return;
    g_cpu.R[15] = 0x0000277Au;
    runtime_tick(_cyc_00002778);
    /* fall-through to 0x0000277A */
    g_cpu.R[15] = 0x0000277Au;
    runtime_dispatch(0x0000277Au);
    return;
}

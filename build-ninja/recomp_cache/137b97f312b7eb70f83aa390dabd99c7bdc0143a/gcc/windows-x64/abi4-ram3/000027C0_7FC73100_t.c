// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x000027C0 mode=thumb end=0x000027CE
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

OVL_EXPORT void func_000027C0(void) {
    if (gba_mod_function_entry(0x000027C0u, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x000027C0u);
    /* 000027C0  000027c0 T subs r3,r3,#0x40 */
    g_cpu.R[15] = 0x000027C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027C0 = 1u;
    _cyc_000027C0 = 1u;
    uint32_t _rn_000027C0 = g_cpu.R[3];
    uint32_t _r_000027C0;
    _r_000027C0 = _rn_000027C0 - 0x00000040u;
    arm_set_nzcv_sub(_rn_000027C0, 0x00000040u, _r_000027C0);
    g_cpu.R[3] = _r_000027C0;
    g_cpu.R[15] = 0x000027C2u;
    runtime_tick(_cyc_000027C0);
    /* 000027C2  000027c2 T strb r3,[r1,#0x14] */
    g_cpu.R[15] = 0x000027C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027C2 = 1u;
    _cyc_000027C2 = 1u;
    uint32_t _base_000027C2 = g_cpu.R[1];
    uint32_t _off_000027C2;
    _off_000027C2 = 0x00000014u;
    uint32_t _ea_000027C2 = _base_000027C2 + _off_000027C2;
    uint32_t _post_000027C2 = _base_000027C2 + _off_000027C2;
    _cyc_000027C2 += runtime_mem_cycles(_ea_000027C2, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x000027C2u, _ea_000027C2, (uint32_t)(g_cpu.R[3] & 0xFFu), 1u);
    bus_write_u8(_ea_000027C2, (uint8_t)(g_cpu.R[3] & 0xFFu));
    g_cpu.R[15] = 0x000027C4u;
    runtime_tick(_cyc_000027C2);
    /* 000027C4  000027c4 T ldrb r3,[r1] */
    g_cpu.R[15] = 0x000027C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027C4 = 1u;
    _cyc_000027C4 = 2u;
    uint32_t _base_000027C4 = g_cpu.R[1];
    uint32_t _off_000027C4;
    _off_000027C4 = 0x00000000u;
    uint32_t _ea_000027C4 = _base_000027C4 + _off_000027C4;
    uint32_t _post_000027C4 = _base_000027C4 + _off_000027C4;
    _cyc_000027C4 += runtime_mem_cycles(_ea_000027C4, 1u, 0u);
    uint32_t _v_000027C4;
    _v_000027C4 = bus_read_u8(_ea_000027C4);
    g_cpu.R[3] = _v_000027C4;
    g_cpu.R[15] = 0x000027C6u;
    runtime_tick(_cyc_000027C4);
    /* 000027C6  000027c6 T movs r2,#0x3 */
    g_cpu.R[15] = 0x000027C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027C6 = 1u;
    _cyc_000027C6 = 1u;
    uint32_t _r_000027C6;
    _r_000027C6 = 0x00000003u;
    arm_set_nzc_logic(_r_000027C6, cpsr_c());
    g_cpu.R[2] = _r_000027C6;
    g_cpu.R[15] = 0x000027C8u;
    runtime_tick(_cyc_000027C6);
    /* 000027C8  000027c8 T orrs r3,r3,r2 */
    g_cpu.R[15] = 0x000027C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027C8 = 1u;
    _cyc_000027C8 = 1u;
    uint32_t _rm_000027C8 = g_cpu.R[2];
    uint32_t _op2_000027C8;
    uint32_t _co_000027C8;
    _op2_000027C8 = _rm_000027C8;
    _co_000027C8 = cpsr_c();
    uint32_t _rn_000027C8 = g_cpu.R[3];
    uint32_t _r_000027C8;
    _r_000027C8 = _rn_000027C8 | _op2_000027C8;
    arm_set_nzc_logic(_r_000027C8, _co_000027C8);
    g_cpu.R[3] = _r_000027C8;
    g_cpu.R[15] = 0x000027CAu;
    runtime_tick(_cyc_000027C8);
    /* 000027CA  000027ca T strb r3,[r1] */
    g_cpu.R[15] = 0x000027CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027CA = 1u;
    _cyc_000027CA = 1u;
    uint32_t _base_000027CA = g_cpu.R[1];
    uint32_t _off_000027CA;
    _off_000027CA = 0x00000000u;
    uint32_t _ea_000027CA = _base_000027CA + _off_000027CA;
    uint32_t _post_000027CA = _base_000027CA + _off_000027CA;
    _cyc_000027CA += runtime_mem_cycles(_ea_000027CA, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x000027CAu, _ea_000027CA, (uint32_t)(g_cpu.R[3] & 0xFFu), 1u);
    bus_write_u8(_ea_000027CA, (uint8_t)(g_cpu.R[3] & 0xFFu));
    g_cpu.R[15] = 0x000027CCu;
    runtime_tick(_cyc_000027CA);
    /* 000027CC  000027cc T bx r12 */
    g_cpu.R[15] = 0x000027CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027CC = 1u;
    _cyc_000027CC = 3u;
    uint32_t _bxt_000027CC = g_cpu.R[12];
    g_cpu.R[15] = _bxt_000027CC & ~1u;
    if (_bxt_000027CC & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_000027CC);
    runtime_dispatch_with_exchange(_bxt_000027CC);
    return;
    g_cpu.R[15] = 0x000027CEu;
    runtime_tick(_cyc_000027CC);
    /* fall-through to 0x000027CE */
    g_cpu.R[15] = 0x000027CEu;
    runtime_dispatch(0x000027CEu);
    return;
}

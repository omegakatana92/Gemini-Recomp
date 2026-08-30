// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x000027AE mode=thumb end=0x000027BA
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

OVL_EXPORT void func_000027AE(void) {
    if (gba_mod_function_entry(0x000027AEu, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x000027AEu);
    /* 000027AE  000027ae T strb r3,[r1,#0x12] */
    g_cpu.R[15] = 0x000027AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027AE = 1u;
    _cyc_000027AE = 1u;
    uint32_t _base_000027AE = g_cpu.R[1];
    uint32_t _off_000027AE;
    _off_000027AE = 0x00000012u;
    uint32_t _ea_000027AE = _base_000027AE + _off_000027AE;
    uint32_t _post_000027AE = _base_000027AE + _off_000027AE;
    _cyc_000027AE += runtime_mem_cycles(_ea_000027AE, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x000027AEu, _ea_000027AE, (uint32_t)(g_cpu.R[3] & 0xFFu), 1u);
    bus_write_u8(_ea_000027AE, (uint8_t)(g_cpu.R[3] & 0xFFu));
    g_cpu.R[15] = 0x000027B0u;
    runtime_tick(_cyc_000027AE);
    /* 000027B0  000027b0 T ldrb r3,[r1] */
    g_cpu.R[15] = 0x000027B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027B0 = 1u;
    _cyc_000027B0 = 2u;
    uint32_t _base_000027B0 = g_cpu.R[1];
    uint32_t _off_000027B0;
    _off_000027B0 = 0x00000000u;
    uint32_t _ea_000027B0 = _base_000027B0 + _off_000027B0;
    uint32_t _post_000027B0 = _base_000027B0 + _off_000027B0;
    _cyc_000027B0 += runtime_mem_cycles(_ea_000027B0, 1u, 0u);
    uint32_t _v_000027B0;
    _v_000027B0 = bus_read_u8(_ea_000027B0);
    g_cpu.R[3] = _v_000027B0;
    g_cpu.R[15] = 0x000027B2u;
    runtime_tick(_cyc_000027B0);
    /* 000027B2  000027b2 T movs r2,#0x3 */
    g_cpu.R[15] = 0x000027B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027B2 = 1u;
    _cyc_000027B2 = 1u;
    uint32_t _r_000027B2;
    _r_000027B2 = 0x00000003u;
    arm_set_nzc_logic(_r_000027B2, cpsr_c());
    g_cpu.R[2] = _r_000027B2;
    g_cpu.R[15] = 0x000027B4u;
    runtime_tick(_cyc_000027B2);
    /* 000027B4  000027b4 T orrs r3,r3,r2 */
    g_cpu.R[15] = 0x000027B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027B4 = 1u;
    _cyc_000027B4 = 1u;
    uint32_t _rm_000027B4 = g_cpu.R[2];
    uint32_t _op2_000027B4;
    uint32_t _co_000027B4;
    _op2_000027B4 = _rm_000027B4;
    _co_000027B4 = cpsr_c();
    uint32_t _rn_000027B4 = g_cpu.R[3];
    uint32_t _r_000027B4;
    _r_000027B4 = _rn_000027B4 | _op2_000027B4;
    arm_set_nzc_logic(_r_000027B4, _co_000027B4);
    g_cpu.R[3] = _r_000027B4;
    g_cpu.R[15] = 0x000027B6u;
    runtime_tick(_cyc_000027B4);
    /* 000027B6  000027b6 T strb r3,[r1] */
    g_cpu.R[15] = 0x000027B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027B6 = 1u;
    _cyc_000027B6 = 1u;
    uint32_t _base_000027B6 = g_cpu.R[1];
    uint32_t _off_000027B6;
    _off_000027B6 = 0x00000000u;
    uint32_t _ea_000027B6 = _base_000027B6 + _off_000027B6;
    uint32_t _post_000027B6 = _base_000027B6 + _off_000027B6;
    _cyc_000027B6 += runtime_mem_cycles(_ea_000027B6, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x000027B6u, _ea_000027B6, (uint32_t)(g_cpu.R[3] & 0xFFu), 1u);
    bus_write_u8(_ea_000027B6, (uint8_t)(g_cpu.R[3] & 0xFFu));
    g_cpu.R[15] = 0x000027B8u;
    runtime_tick(_cyc_000027B6);
    /* 000027B8  000027b8 T bx r12 */
    g_cpu.R[15] = 0x000027B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000027B8 = 1u;
    _cyc_000027B8 = 3u;
    uint32_t _bxt_000027B8 = g_cpu.R[12];
    g_cpu.R[15] = _bxt_000027B8 & ~1u;
    if (_bxt_000027B8 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_000027B8);
    runtime_dispatch_with_exchange(_bxt_000027B8);
    return;
    g_cpu.R[15] = 0x000027BAu;
    runtime_tick(_cyc_000027B8);
    /* fall-through to 0x000027BA */
    g_cpu.R[15] = 0x000027BAu;
    runtime_dispatch(0x000027BAu);
    return;
}

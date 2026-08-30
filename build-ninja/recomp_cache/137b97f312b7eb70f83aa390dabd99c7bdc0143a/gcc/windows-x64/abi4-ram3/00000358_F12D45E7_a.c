// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00000358 mode=arm end=0x00000378
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

OVL_EXPORT void func_00000358(void) {
    if (gba_mod_function_entry(0x00000358u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00000358u);
    /* 00000358  00000358 A mov r12,#0x4000000 */
    g_cpu.R[15] = 0x00000358u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000358 = 1u;
    _cyc_00000358 = 1u;
    uint32_t _r_00000358;
    _r_00000358 = 0x04000000u;
    g_cpu.R[12] = _r_00000358;
    g_cpu.R[15] = 0x0000035Cu;
    runtime_tick(_cyc_00000358);
    /* 0000035C  0000035c A strb r3,[r12,#0x208] */
    g_cpu.R[15] = 0x0000035Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000035C = 1u;
    _cyc_0000035C = 1u;
    uint32_t _base_0000035C = g_cpu.R[12];
    uint32_t _off_0000035C;
    _off_0000035C = 0x00000208u;
    uint32_t _ea_0000035C = _base_0000035C + _off_0000035C;
    uint32_t _post_0000035C = _base_0000035C + _off_0000035C;
    _cyc_0000035C += runtime_mem_cycles(_ea_0000035C, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0000035Cu, _ea_0000035C, (uint32_t)(g_cpu.R[3] & 0xFFu), 1u);
    bus_write_u8(_ea_0000035C, (uint8_t)(g_cpu.R[3] & 0xFFu));
    g_cpu.R[15] = 0x00000360u;
    runtime_tick(_cyc_0000035C);
    /* 00000360  00000360 A ldrh r2,[r12,#-0x8] */
    g_cpu.R[15] = 0x00000360u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000360 = 1u;
    _cyc_00000360 = 2u;
    uint32_t _base_00000360 = g_cpu.R[12];
    uint32_t _off_00000360;
    _off_00000360 = 0x00000008u;
    uint32_t _ea_00000360 = _base_00000360 - _off_00000360;
    uint32_t _post_00000360 = _base_00000360 - _off_00000360;
    _cyc_00000360 += runtime_mem_cycles(_ea_00000360, 2u, 0u);
    uint32_t _v_00000360;
    { uint32_t _h = bus_read_u16(_ea_00000360 & ~1u); if (_ea_00000360 & 1u) _v_00000360 = ((_h >> 8) | (_h << 24)); else _v_00000360 = _h; }
    g_cpu.R[2] = _v_00000360;
    g_cpu.R[15] = 0x00000364u;
    runtime_tick(_cyc_00000360);
    /* 00000364  00000364 A ands r0,r1,r2 */
    g_cpu.R[15] = 0x00000364u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000364 = 1u;
    _cyc_00000364 = 1u;
    uint32_t _rm_00000364 = g_cpu.R[2];
    uint32_t _op2_00000364;
    uint32_t _co_00000364;
    _op2_00000364 = _rm_00000364;
    _co_00000364 = cpsr_c();
    uint32_t _rn_00000364 = g_cpu.R[1];
    uint32_t _r_00000364;
    _r_00000364 = _rn_00000364 & _op2_00000364;
    arm_set_nzc_logic(_r_00000364, _co_00000364);
    g_cpu.R[0] = _r_00000364;
    g_cpu.R[15] = 0x00000368u;
    runtime_tick(_cyc_00000364);
    /* 00000368  00000368 A eorne r2,r2,r0 */
    g_cpu.R[15] = 0x00000368u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000368 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_00000368 = 1u;
        uint32_t _rm_00000368 = g_cpu.R[0];
        uint32_t _op2_00000368;
        uint32_t _co_00000368;
        _op2_00000368 = _rm_00000368;
        _co_00000368 = cpsr_c();
        uint32_t _rn_00000368 = g_cpu.R[2];
        uint32_t _r_00000368;
        _r_00000368 = _rn_00000368 ^ _op2_00000368;
        g_cpu.R[2] = _r_00000368;
    }
    g_cpu.R[15] = 0x0000036Cu;
    runtime_tick(_cyc_00000368);
    /* 0000036C  0000036c A strhne r2,[r12,#-0x8] */
    g_cpu.R[15] = 0x0000036Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000036C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0000036C = 1u;
        uint32_t _base_0000036C = g_cpu.R[12];
        uint32_t _off_0000036C;
        _off_0000036C = 0x00000008u;
        uint32_t _ea_0000036C = _base_0000036C - _off_0000036C;
        uint32_t _post_0000036C = _base_0000036C - _off_0000036C;
        _cyc_0000036C += runtime_mem_cycles(_ea_0000036C, 2u, 0u);
        runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0000036Cu, _ea_0000036C & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
        bus_write_u16(_ea_0000036C & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    }
    g_cpu.R[15] = 0x00000370u;
    runtime_tick(_cyc_0000036C);
    /* 00000370  00000370 A strb r4,[r12,#0x208] */
    g_cpu.R[15] = 0x00000370u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000370 = 1u;
    _cyc_00000370 = 1u;
    uint32_t _base_00000370 = g_cpu.R[12];
    uint32_t _off_00000370;
    _off_00000370 = 0x00000208u;
    uint32_t _ea_00000370 = _base_00000370 + _off_00000370;
    uint32_t _post_00000370 = _base_00000370 + _off_00000370;
    _cyc_00000370 += runtime_mem_cycles(_ea_00000370, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000370u, _ea_00000370, (uint32_t)(g_cpu.R[4] & 0xFFu), 1u);
    bus_write_u8(_ea_00000370, (uint8_t)(g_cpu.R[4] & 0xFFu));
    g_cpu.R[15] = 0x00000374u;
    runtime_tick(_cyc_00000370);
    /* 00000374  00000374 A bx r14 */
    g_cpu.R[15] = 0x00000374u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000374 = 1u;
    _cyc_00000374 = 3u;
    uint32_t _bxt_00000374 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_00000374 & ~1u;
    if (_bxt_00000374 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_00000374);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_00000374);
    return;
    g_cpu.R[15] = 0x00000378u;
    runtime_tick(_cyc_00000374);
    /* fall-through to 0x00000378 */
    g_cpu.R[15] = 0x00000378u;
    runtime_dispatch(0x00000378u);
    return;
}

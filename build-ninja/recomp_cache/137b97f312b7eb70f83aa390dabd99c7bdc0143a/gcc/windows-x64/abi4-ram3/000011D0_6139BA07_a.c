// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x000011D0 mode=arm end=0x000011F0
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

OVL_EXPORT void func_000011D0(void) {
    if (gba_mod_function_entry(0x000011D0u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x000011D0u);
    /* 000011D0  000011d0 A bne 0x000011f0 */
    g_cpu.R[15] = 0x000011D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000011D0 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_000011D0 = 3u;
        g_cpu.R[15] = 0x000011F0u;
        runtime_tick(_cyc_000011D0);
        runtime_dispatch(0x000011F0u);
        return;
    }
    g_cpu.R[15] = 0x000011D4u;
    runtime_tick(_cyc_000011D0);
    /* 000011D4  000011d4 A ldrb r9,[r0],#0x1 */
    g_cpu.R[15] = 0x000011D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000011D4 = 1u;
    _cyc_000011D4 = 2u;
    uint32_t _base_000011D4 = g_cpu.R[0];
    uint32_t _off_000011D4;
    _off_000011D4 = 0x00000001u;
    uint32_t _ea_000011D4 = _base_000011D4;
    uint32_t _post_000011D4 = _base_000011D4 + _off_000011D4;
    _cyc_000011D4 += runtime_mem_cycles(_ea_000011D4, 1u, 0u);
    uint32_t _v_000011D4;
    _v_000011D4 = bus_read_u8(_ea_000011D4);
    if (0u != 9u) g_cpu.R[0] = _post_000011D4;
    g_cpu.R[9] = _v_000011D4;
    g_cpu.R[15] = 0x000011D8u;
    runtime_tick(_cyc_000011D4);
    /* 000011D8  000011d8 A orr r3,r3,r9,lsl r2 */
    g_cpu.R[15] = 0x000011D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000011D8 = 1u;
    _cyc_000011D8 = 2u;
    uint32_t _rm_000011D8 = g_cpu.R[9];
    uint32_t _op2_000011D8;
    uint32_t _co_000011D8;
    uint32_t _cnt_000011D8 = (g_cpu.R[2]) & 0xFFu;
    if (_cnt_000011D8 == 0)      { _op2_000011D8 = _rm_000011D8; _co_000011D8 = cpsr_c(); }
    else if (_cnt_000011D8 < 32) { _op2_000011D8 = _rm_000011D8 << _cnt_000011D8; _co_000011D8 = (_rm_000011D8 >> (32u - _cnt_000011D8)) & 1u; }
    else if (_cnt_000011D8 == 32){ _op2_000011D8 = 0u; _co_000011D8 = _rm_000011D8 & 1u; }
    else                                { _op2_000011D8 = 0u; _co_000011D8 = 0u; }
    uint32_t _rn_000011D8 = g_cpu.R[3];
    uint32_t _r_000011D8;
    _r_000011D8 = _rn_000011D8 | _op2_000011D8;
    g_cpu.R[3] = _r_000011D8;
    g_cpu.R[15] = 0x000011DCu;
    runtime_tick(_cyc_000011D8);
    /* 000011DC  000011dc A sub r10,r10,#0x1 */
    g_cpu.R[15] = 0x000011DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000011DC = 1u;
    _cyc_000011DC = 1u;
    uint32_t _rn_000011DC = g_cpu.R[10];
    uint32_t _r_000011DC;
    _r_000011DC = _rn_000011DC - 0x00000001u;
    g_cpu.R[10] = _r_000011DC;
    g_cpu.R[15] = 0x000011E0u;
    runtime_tick(_cyc_000011DC);
    /* 000011E0  000011e0 A eors r2,r2,#0x8 */
    g_cpu.R[15] = 0x000011E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000011E0 = 1u;
    _cyc_000011E0 = 1u;
    uint32_t _rn_000011E0 = g_cpu.R[2];
    uint32_t _r_000011E0;
    _r_000011E0 = _rn_000011E0 ^ 0x00000008u;
    arm_set_nzc_logic(_r_000011E0, cpsr_c());
    g_cpu.R[2] = _r_000011E0;
    g_cpu.R[15] = 0x000011E4u;
    runtime_tick(_cyc_000011E0);
    /* 000011E4  000011e4 A strheq r3,[r1],#0x2 */
    g_cpu.R[15] = 0x000011E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000011E4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_000011E4 = 1u;
        uint32_t _base_000011E4 = g_cpu.R[1];
        uint32_t _off_000011E4;
        _off_000011E4 = 0x00000002u;
        uint32_t _ea_000011E4 = _base_000011E4;
        uint32_t _post_000011E4 = _base_000011E4 + _off_000011E4;
        _cyc_000011E4 += runtime_mem_cycles(_ea_000011E4, 2u, 0u);
        runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x000011E4u, _ea_000011E4 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
        bus_write_u16(_ea_000011E4 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
        g_cpu.R[1] = _post_000011E4;
    }
    g_cpu.R[15] = 0x000011E8u;
    runtime_tick(_cyc_000011E4);
    /* 000011E8  000011e8 A moveq r3,#0x0 */
    g_cpu.R[15] = 0x000011E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000011E8 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_000011E8 = 1u;
        uint32_t _r_000011E8;
        _r_000011E8 = 0x00000000u;
        g_cpu.R[3] = _r_000011E8;
    }
    g_cpu.R[15] = 0x000011ECu;
    runtime_tick(_cyc_000011E8);
    /* 000011EC  000011ec A b 0x00001260 */
    g_cpu.R[15] = 0x000011ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_000011EC = 1u;
    _cyc_000011EC = 3u;
    g_cpu.R[15] = 0x00001260u;
    runtime_tick(_cyc_000011EC);
    runtime_dispatch(0x00001260u);
    return;
    g_cpu.R[15] = 0x000011F0u;
    runtime_tick(_cyc_000011EC);
    /* fall-through to 0x000011F0 */
    g_cpu.R[15] = 0x000011F0u;
    runtime_dispatch(0x000011F0u);
    return;
}

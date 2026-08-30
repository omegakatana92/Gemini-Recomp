// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00001248 mode=arm end=0x00001260
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

OVL_EXPORT void func_00001248(void) {
    if (gba_mod_function_entry(0x00001248u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00001248u);
    /* 00001248  00001248 A orr r3,r3,r8,lsl r2 */
    g_cpu.R[15] = 0x00001248u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001248 = 1u;
    _cyc_00001248 = 2u;
    uint32_t _rm_00001248 = g_cpu.R[8];
    uint32_t _op2_00001248;
    uint32_t _co_00001248;
    uint32_t _cnt_00001248 = (g_cpu.R[2]) & 0xFFu;
    if (_cnt_00001248 == 0)      { _op2_00001248 = _rm_00001248; _co_00001248 = cpsr_c(); }
    else if (_cnt_00001248 < 32) { _op2_00001248 = _rm_00001248 << _cnt_00001248; _co_00001248 = (_rm_00001248 >> (32u - _cnt_00001248)) & 1u; }
    else if (_cnt_00001248 == 32){ _op2_00001248 = 0u; _co_00001248 = _rm_00001248 & 1u; }
    else                                { _op2_00001248 = 0u; _co_00001248 = 0u; }
    uint32_t _rn_00001248 = g_cpu.R[3];
    uint32_t _r_00001248;
    _r_00001248 = _rn_00001248 | _op2_00001248;
    g_cpu.R[3] = _r_00001248;
    g_cpu.R[15] = 0x0000124Cu;
    runtime_tick(_cyc_00001248);
    /* 0000124C  0000124c A eors r2,r2,#0x8 */
    g_cpu.R[15] = 0x0000124Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000124C = 1u;
    _cyc_0000124C = 1u;
    uint32_t _rn_0000124C = g_cpu.R[2];
    uint32_t _r_0000124C;
    _r_0000124C = _rn_0000124C ^ 0x00000008u;
    arm_set_nzc_logic(_r_0000124C, cpsr_c());
    g_cpu.R[2] = _r_0000124C;
    g_cpu.R[15] = 0x00001250u;
    runtime_tick(_cyc_0000124C);
    /* 00001250  00001250 A strheq r3,[r1],#0x2 */
    g_cpu.R[15] = 0x00001250u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001250 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_00001250 = 1u;
        uint32_t _base_00001250 = g_cpu.R[1];
        uint32_t _off_00001250;
        _off_00001250 = 0x00000002u;
        uint32_t _ea_00001250 = _base_00001250;
        uint32_t _post_00001250 = _base_00001250 + _off_00001250;
        _cyc_00001250 += runtime_mem_cycles(_ea_00001250, 2u, 0u);
        runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00001250u, _ea_00001250 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
        bus_write_u16(_ea_00001250 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
        g_cpu.R[1] = _post_00001250;
    }
    g_cpu.R[15] = 0x00001254u;
    runtime_tick(_cyc_00001250);
    /* 00001254  00001254 A moveq r3,#0x0 */
    g_cpu.R[15] = 0x00001254u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001254 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_00001254 = 1u;
        uint32_t _r_00001254;
        _r_00001254 = 0x00000000u;
        g_cpu.R[3] = _r_00001254;
    }
    g_cpu.R[15] = 0x00001258u;
    runtime_tick(_cyc_00001254);
    /* 00001258  00001258 A subs r5,r5,#0x1 */
    g_cpu.R[15] = 0x00001258u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001258 = 1u;
    _cyc_00001258 = 1u;
    uint32_t _rn_00001258 = g_cpu.R[5];
    uint32_t _r_00001258;
    _r_00001258 = _rn_00001258 - 0x00000001u;
    arm_set_nzcv_sub(_rn_00001258, 0x00000001u, _r_00001258);
    g_cpu.R[5] = _r_00001258;
    g_cpu.R[15] = 0x0000125Cu;
    runtime_tick(_cyc_00001258);
    /* 0000125C  0000125c A bgt 0x00001224 */
    g_cpu.R[15] = 0x0000125Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000125C = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_0000125C = 3u;
        g_cpu.R[15] = 0x00001224u;
        runtime_tick(_cyc_0000125C);
        runtime_dispatch(0x00001224u);
        return;
    }
    g_cpu.R[15] = 0x00001260u;
    runtime_tick(_cyc_0000125C);
    /* fall-through to 0x00001260 */
    g_cpu.R[15] = 0x00001260u;
    runtime_dispatch(0x00001260u);
    return;
}

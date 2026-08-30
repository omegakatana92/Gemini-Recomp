// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00000300 mode=arm end=0x00000328
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

OVL_EXPORT void func_00000300(void) {
    if (gba_mod_function_entry(0x00000300u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00000300u);
    /* 00000300  00000300 A mov r3,#0x4000000 */
    g_cpu.R[15] = 0x00000300u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000300 = 1u;
    _cyc_00000300 = 1u;
    uint32_t _r_00000300;
    _r_00000300 = 0x04000000u;
    g_cpu.R[3] = _r_00000300;
    g_cpu.R[15] = 0x00000304u;
    runtime_tick(_cyc_00000300);
    /* 00000304  00000304 A ldr r2,[r3,#0x200] */
    g_cpu.R[15] = 0x00000304u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000304 = 1u;
    _cyc_00000304 = 2u;
    uint32_t _base_00000304 = g_cpu.R[3];
    uint32_t _off_00000304;
    _off_00000304 = 0x00000200u;
    uint32_t _ea_00000304 = _base_00000304 + _off_00000304;
    uint32_t _post_00000304 = _base_00000304 + _off_00000304;
    _cyc_00000304 += runtime_mem_cycles(_ea_00000304, 4u, 0u);
    uint32_t _v_00000304;
    { uint32_t _w = bus_read_u32(_ea_00000304 & ~3u); uint32_t _rot = (_ea_00000304 & 3u) * 8u; _v_00000304 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_00000304;
    g_cpu.R[15] = 0x00000308u;
    runtime_tick(_cyc_00000304);
    /* 00000308  00000308 A and r2,r2,r2,lsr #16 */
    g_cpu.R[15] = 0x00000308u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000308 = 1u;
    _cyc_00000308 = 1u;
    uint32_t _rm_00000308 = g_cpu.R[2];
    uint32_t _op2_00000308;
    uint32_t _co_00000308;
    _op2_00000308 = _rm_00000308 >> 16;
    _co_00000308 = (_rm_00000308 >> 15) & 1u;
    uint32_t _rn_00000308 = g_cpu.R[2];
    uint32_t _r_00000308;
    _r_00000308 = _rn_00000308 & _op2_00000308;
    g_cpu.R[2] = _r_00000308;
    g_cpu.R[15] = 0x0000030Cu;
    runtime_tick(_cyc_00000308);
    /* 0000030C  0000030c A ands r1,r2,#0x80 */
    g_cpu.R[15] = 0x0000030Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000030C = 1u;
    _cyc_0000030C = 1u;
    uint32_t _rn_0000030C = g_cpu.R[2];
    uint32_t _r_0000030C;
    _r_0000030C = _rn_0000030C & 0x00000080u;
    arm_set_nzc_logic(_r_0000030C, cpsr_c());
    g_cpu.R[1] = _r_0000030C;
    g_cpu.R[15] = 0x00000310u;
    runtime_tick(_cyc_0000030C);
    /* 00000310  00000310 A ldrne r0,[r15,#0x7a0] */
    g_cpu.R[15] = 0x00000310u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000310 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_00000310 = 2u;
        uint32_t _base_00000310 = 0x00000318u;
        uint32_t _off_00000310;
        _off_00000310 = 0x000007A0u;
        uint32_t _ea_00000310 = _base_00000310 + _off_00000310;
        uint32_t _post_00000310 = _base_00000310 + _off_00000310;
        _cyc_00000310 += runtime_mem_cycles(_ea_00000310, 4u, 0u);
        uint32_t _v_00000310;
        { uint32_t _w = bus_read_u32(_ea_00000310 & ~3u); uint32_t _rot = (_ea_00000310 & 3u) * 8u; _v_00000310 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
        g_cpu.R[0] = _v_00000310;
    }
    g_cpu.R[15] = 0x00000314u;
    runtime_tick(_cyc_00000310);
    /* 00000314  00000314 A andeq r1,r2,#0x1 */
    g_cpu.R[15] = 0x00000314u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000314 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_00000314 = 1u;
        uint32_t _rn_00000314 = g_cpu.R[2];
        uint32_t _r_00000314;
        _r_00000314 = _rn_00000314 & 0x00000001u;
        g_cpu.R[1] = _r_00000314;
    }
    g_cpu.R[15] = 0x00000318u;
    runtime_tick(_cyc_00000314);
    /* 00000318  00000318 A ldreq r0,[r15,#0x79c] */
    g_cpu.R[15] = 0x00000318u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000318 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_00000318 = 2u;
        uint32_t _base_00000318 = 0x00000320u;
        uint32_t _off_00000318;
        _off_00000318 = 0x0000079Cu;
        uint32_t _ea_00000318 = _base_00000318 + _off_00000318;
        uint32_t _post_00000318 = _base_00000318 + _off_00000318;
        _cyc_00000318 += runtime_mem_cycles(_ea_00000318, 4u, 0u);
        uint32_t _v_00000318;
        { uint32_t _w = bus_read_u32(_ea_00000318 & ~3u); uint32_t _rot = (_ea_00000318 & 3u) * 8u; _v_00000318 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
        g_cpu.R[0] = _v_00000318;
    }
    g_cpu.R[15] = 0x0000031Cu;
    runtime_tick(_cyc_00000318);
    /* 0000031C  0000031c A strheq r2,[r3,#-0x8] */
    g_cpu.R[15] = 0x0000031Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000031C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0000031C = 1u;
        uint32_t _base_0000031C = g_cpu.R[3];
        uint32_t _off_0000031C;
        _off_0000031C = 0x00000008u;
        uint32_t _ea_0000031C = _base_0000031C - _off_0000031C;
        uint32_t _post_0000031C = _base_0000031C - _off_0000031C;
        _cyc_0000031C += runtime_mem_cycles(_ea_0000031C, 2u, 0u);
        runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0000031Cu, _ea_0000031C & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
        bus_write_u16(_ea_0000031C & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    }
    g_cpu.R[15] = 0x00000320u;
    runtime_tick(_cyc_0000031C);
    /* 00000320  00000320 A strb r1,[r3,#0x202] */
    g_cpu.R[15] = 0x00000320u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000320 = 1u;
    _cyc_00000320 = 1u;
    uint32_t _base_00000320 = g_cpu.R[3];
    uint32_t _off_00000320;
    _off_00000320 = 0x00000202u;
    uint32_t _ea_00000320 = _base_00000320 + _off_00000320;
    uint32_t _post_00000320 = _base_00000320 + _off_00000320;
    _cyc_00000320 += runtime_mem_cycles(_ea_00000320, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000320u, _ea_00000320, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_00000320, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x00000324u;
    runtime_tick(_cyc_00000320);
    /* 00000324  00000324 A bx r0 */
    g_cpu.R[15] = 0x00000324u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000324 = 1u;
    _cyc_00000324 = 3u;
    uint32_t _bxt_00000324 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_00000324 & ~1u;
    if (_bxt_00000324 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_00000324);
    runtime_dispatch_with_exchange(_bxt_00000324);
    return;
    g_cpu.R[15] = 0x00000328u;
    runtime_tick(_cyc_00000324);
    /* fall-through to 0x00000328 */
    g_cpu.R[15] = 0x00000328u;
    runtime_dispatch(0x00000328u);
    return;
}

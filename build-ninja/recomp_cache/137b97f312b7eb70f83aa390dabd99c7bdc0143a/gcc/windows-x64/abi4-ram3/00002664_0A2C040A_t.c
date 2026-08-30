// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00002664 mode=thumb end=0x0000266E
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

OVL_EXPORT void func_00002664(void) {
    if (gba_mod_function_entry(0x00002664u, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00002664u);
    /* 00002664  00002664 T stm r13!,{r4,r5,r14} */
    g_cpu.R[15] = 0x00002664u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002664 = 1u;
    _cyc_00002664 = 1u;
    uint32_t _b_00002664 = g_cpu.R[13];
    uint32_t _a_00002664 = _b_00002664 - 12u;
    uint32_t _fb_00002664 = _b_00002664 - 12u;
    _cyc_00002664 += runtime_mem_cycles(_a_00002664 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00002664u, _a_00002664 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_00002664 & ~3u, g_cpu.R[4]);
    _a_00002664 += 4u;
    _cyc_00002664 += runtime_mem_cycles(_a_00002664 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00002664u, _a_00002664 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_00002664 & ~3u, g_cpu.R[5]);
    _a_00002664 += 4u;
    _cyc_00002664 += runtime_mem_cycles(_a_00002664 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00002664u, _a_00002664 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_00002664 & ~3u, g_cpu.R[14]);
    _a_00002664 += 4u;
    g_cpu.R[13] = _fb_00002664;
    g_cpu.R[15] = 0x00002666u;
    runtime_tick(_cyc_00002664);
    /* 00002666  00002666 T adds r5,r1,#0x0 */
    g_cpu.R[15] = 0x00002666u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002666 = 1u;
    _cyc_00002666 = 1u;
    uint32_t _rn_00002666 = g_cpu.R[1];
    uint32_t _r_00002666;
    _r_00002666 = _rn_00002666 + 0x00000000u;
    arm_set_nzcv_add(_rn_00002666, 0x00000000u, _r_00002666);
    g_cpu.R[5] = _r_00002666;
    g_cpu.R[15] = 0x00002668u;
    runtime_tick(_cyc_00002666);
    /* 00002668  00002668 T ldr r4,[r5,#0x20] */
    g_cpu.R[15] = 0x00002668u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002668 = 1u;
    _cyc_00002668 = 2u;
    uint32_t _base_00002668 = g_cpu.R[5];
    uint32_t _off_00002668;
    _off_00002668 = 0x00000020u;
    uint32_t _ea_00002668 = _base_00002668 + _off_00002668;
    uint32_t _post_00002668 = _base_00002668 + _off_00002668;
    _cyc_00002668 += runtime_mem_cycles(_ea_00002668, 4u, 0u);
    uint32_t _v_00002668;
    { uint32_t _w = bus_read_u32(_ea_00002668 & ~3u); uint32_t _rot = (_ea_00002668 & 3u) * 8u; _v_00002668 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_00002668;
    g_cpu.R[15] = 0x0000266Au;
    runtime_tick(_cyc_00002668);
    /* 0000266A  0000266a T cmps r4,#0x0 */
    g_cpu.R[15] = 0x0000266Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000266A = 1u;
    _cyc_0000266A = 1u;
    uint32_t _rn_0000266A = g_cpu.R[4];
    uint32_t _r_0000266A;
    _r_0000266A = _rn_0000266A - 0x00000000u;
    arm_set_nzcv_sub(_rn_0000266A, 0x00000000u, _r_0000266A);
    g_cpu.R[15] = 0x0000266Cu;
    runtime_tick(_cyc_0000266A);
    /* 0000266C  0000266c T beq 0x00002688 */
    g_cpu.R[15] = 0x0000266Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000266C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0000266C = 3u;
        g_cpu.R[15] = 0x00002688u;
        runtime_tick(_cyc_0000266C);
        runtime_dispatch(0x00002688u);
        return;
    }
    g_cpu.R[15] = 0x0000266Eu;
    runtime_tick(_cyc_0000266C);
    /* fall-through to 0x0000266E */
    g_cpu.R[15] = 0x0000266Eu;
    runtime_dispatch(0x0000266Eu);
    return;
}

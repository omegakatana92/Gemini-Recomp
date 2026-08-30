// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00002682 mode=thumb end=0x00002692
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

OVL_EXPORT void func_00002682(void) {
    if (gba_mod_function_entry(0x00002682u, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00002682u);
    /* 00002682  00002682 T ldr r4,[r4,#0x34] */
    g_cpu.R[15] = 0x00002682u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002682 = 1u;
    _cyc_00002682 = 2u;
    uint32_t _base_00002682 = g_cpu.R[4];
    uint32_t _off_00002682;
    _off_00002682 = 0x00000034u;
    uint32_t _ea_00002682 = _base_00002682 + _off_00002682;
    uint32_t _post_00002682 = _base_00002682 + _off_00002682;
    _cyc_00002682 += runtime_mem_cycles(_ea_00002682, 4u, 0u);
    uint32_t _v_00002682;
    { uint32_t _w = bus_read_u32(_ea_00002682 & ~3u); uint32_t _rot = (_ea_00002682 & 3u) * 8u; _v_00002682 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_00002682;
    g_cpu.R[15] = 0x00002684u;
    runtime_tick(_cyc_00002682);
    /* 00002684  00002684 T cmps r4,#0x0 */
    g_cpu.R[15] = 0x00002684u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002684 = 1u;
    _cyc_00002684 = 1u;
    uint32_t _rn_00002684 = g_cpu.R[4];
    uint32_t _r_00002684;
    _r_00002684 = _rn_00002684 - 0x00000000u;
    arm_set_nzcv_sub(_rn_00002684, 0x00000000u, _r_00002684);
    g_cpu.R[15] = 0x00002686u;
    runtime_tick(_cyc_00002684);
    /* 00002686  00002686 T bne 0x0000266e */
    g_cpu.R[15] = 0x00002686u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002686 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_00002686 = 3u;
        g_cpu.R[15] = 0x0000266Eu;
        runtime_tick(_cyc_00002686);
        runtime_dispatch(0x0000266Eu);
        return;
    }
    g_cpu.R[15] = 0x00002688u;
    runtime_tick(_cyc_00002686);
    /* 00002688  00002688 T movs r0,#0x0 */
    g_cpu.R[15] = 0x00002688u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002688 = 1u;
    _cyc_00002688 = 1u;
    uint32_t _r_00002688;
    _r_00002688 = 0x00000000u;
    arm_set_nzc_logic(_r_00002688, cpsr_c());
    g_cpu.R[0] = _r_00002688;
    g_cpu.R[15] = 0x0000268Au;
    runtime_tick(_cyc_00002688);
    /* 0000268A  0000268a T strb r0,[r5] */
    g_cpu.R[15] = 0x0000268Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000268A = 1u;
    _cyc_0000268A = 1u;
    uint32_t _base_0000268A = g_cpu.R[5];
    uint32_t _off_0000268A;
    _off_0000268A = 0x00000000u;
    uint32_t _ea_0000268A = _base_0000268A + _off_0000268A;
    uint32_t _post_0000268A = _base_0000268A + _off_0000268A;
    _cyc_0000268A += runtime_mem_cycles(_ea_0000268A, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0000268Au, _ea_0000268A, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0000268A, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x0000268Cu;
    runtime_tick(_cyc_0000268A);
    /* 0000268C  0000268c T ldm r13!,{r4,r5} */
    g_cpu.R[15] = 0x0000268Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000268C = 1u;
    _cyc_0000268C = 2u;
    uint32_t _b_0000268C = g_cpu.R[13];
    uint32_t _a_0000268C = _b_0000268C;
    uint32_t _fb_0000268C = _b_0000268C + 8u;
    _cyc_0000268C += runtime_mem_cycles(_a_0000268C & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_0000268C & ~3u);
    _a_0000268C += 4u;
    _cyc_0000268C += runtime_mem_cycles(_a_0000268C & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_0000268C & ~3u);
    _a_0000268C += 4u;
    g_cpu.R[13] = _fb_0000268C;
    g_cpu.R[15] = 0x0000268Eu;
    runtime_tick(_cyc_0000268C);
    /* 0000268E  0000268e T ldm r13!,{r0} */
    g_cpu.R[15] = 0x0000268Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000268E = 1u;
    _cyc_0000268E = 2u;
    uint32_t _b_0000268E = g_cpu.R[13];
    uint32_t _a_0000268E = _b_0000268E;
    uint32_t _fb_0000268E = _b_0000268E + 4u;
    _cyc_0000268E += runtime_mem_cycles(_a_0000268E & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_0000268E & ~3u);
    _a_0000268E += 4u;
    g_cpu.R[13] = _fb_0000268E;
    g_cpu.R[15] = 0x00002690u;
    runtime_tick(_cyc_0000268E);
    /* 00002690  00002690 T bx r0 */
    g_cpu.R[15] = 0x00002690u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002690 = 1u;
    _cyc_00002690 = 3u;
    uint32_t _bxt_00002690 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_00002690 & ~1u;
    if (_bxt_00002690 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_00002690);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_00002690);
    return;
    g_cpu.R[15] = 0x00002692u;
    runtime_tick(_cyc_00002690);
    /* fall-through to 0x00002692 */
    g_cpu.R[15] = 0x00002692u;
    runtime_dispatch(0x00002692u);
    return;
}

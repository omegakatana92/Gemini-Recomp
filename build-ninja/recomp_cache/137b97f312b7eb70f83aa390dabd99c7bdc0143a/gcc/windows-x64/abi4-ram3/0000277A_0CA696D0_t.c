// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0000277A mode=thumb end=0x00002794
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

OVL_EXPORT void func_0000277A(void) {
    if (gba_mod_function_entry(0x0000277Au, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0000277Au);
    /* 0000277A  0000277a T mov r12,r14 */
    g_cpu.R[15] = 0x0000277Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000277A = 1u;
    _cyc_0000277A = 1u;
    uint32_t _rm_0000277A = g_cpu.R[14];
    uint32_t _op2_0000277A;
    uint32_t _co_0000277A;
    _op2_0000277A = _rm_0000277A;
    _co_0000277A = cpsr_c();
    uint32_t _r_0000277A;
    _r_0000277A = _op2_0000277A;
    g_cpu.R[12] = _r_0000277A;
    g_cpu.R[15] = 0x0000277Cu;
    runtime_tick(_cyc_0000277A);
    /* 0000277C  0000277c T ldr r2,[r1,#0x40] */
    g_cpu.R[15] = 0x0000277Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000277C = 1u;
    _cyc_0000277C = 2u;
    uint32_t _base_0000277C = g_cpu.R[1];
    uint32_t _off_0000277C;
    _off_0000277C = 0x00000040u;
    uint32_t _ea_0000277C = _base_0000277C + _off_0000277C;
    uint32_t _post_0000277C = _base_0000277C + _off_0000277C;
    _cyc_0000277C += runtime_mem_cycles(_ea_0000277C, 4u, 0u);
    uint32_t _v_0000277C;
    { uint32_t _w = bus_read_u32(_ea_0000277C & ~3u); uint32_t _rot = (_ea_0000277C & 3u) * 8u; _v_0000277C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0000277C;
    g_cpu.R[15] = 0x0000277Eu;
    runtime_tick(_cyc_0000277C);
    /* 0000277E  0000277e T ldrb r3,[r2] */
    g_cpu.R[15] = 0x0000277Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000277E = 1u;
    _cyc_0000277E = 2u;
    uint32_t _base_0000277E = g_cpu.R[2];
    uint32_t _off_0000277E;
    _off_0000277E = 0x00000000u;
    uint32_t _ea_0000277E = _base_0000277E + _off_0000277E;
    uint32_t _post_0000277E = _base_0000277E + _off_0000277E;
    _cyc_0000277E += runtime_mem_cycles(_ea_0000277E, 1u, 0u);
    uint32_t _v_0000277E;
    _v_0000277E = bus_read_u8(_ea_0000277E);
    g_cpu.R[3] = _v_0000277E;
    g_cpu.R[15] = 0x00002780u;
    runtime_tick(_cyc_0000277E);
    /* 00002780  00002780 T adds r2,r2,#0x1 */
    g_cpu.R[15] = 0x00002780u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002780 = 1u;
    _cyc_00002780 = 1u;
    uint32_t _rn_00002780 = g_cpu.R[2];
    uint32_t _r_00002780;
    _r_00002780 = _rn_00002780 + 0x00000001u;
    arm_set_nzcv_add(_rn_00002780, 0x00000001u, _r_00002780);
    g_cpu.R[2] = _r_00002780;
    g_cpu.R[15] = 0x00002782u;
    runtime_tick(_cyc_00002780);
    /* 00002782  00002782 T str r2,[r1,#0x40] */
    g_cpu.R[15] = 0x00002782u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002782 = 1u;
    _cyc_00002782 = 1u;
    uint32_t _base_00002782 = g_cpu.R[1];
    uint32_t _off_00002782;
    _off_00002782 = 0x00000040u;
    uint32_t _ea_00002782 = _base_00002782 + _off_00002782;
    uint32_t _post_00002782 = _base_00002782 + _off_00002782;
    _cyc_00002782 += runtime_mem_cycles(_ea_00002782, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00002782u, _ea_00002782 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_00002782 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x00002784u;
    runtime_tick(_cyc_00002782);
    /* 00002784  00002784 T movs r2,r3,lsl #1 */
    g_cpu.R[15] = 0x00002784u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002784 = 1u;
    _cyc_00002784 = 1u;
    uint32_t _rm_00002784 = g_cpu.R[3];
    uint32_t _op2_00002784;
    uint32_t _co_00002784;
    _op2_00002784 = _rm_00002784 << 1;
    _co_00002784 = (_rm_00002784 >> 31) & 1u;
    uint32_t _r_00002784;
    _r_00002784 = _op2_00002784;
    arm_set_nzc_logic(_r_00002784, _co_00002784);
    g_cpu.R[2] = _r_00002784;
    g_cpu.R[15] = 0x00002786u;
    runtime_tick(_cyc_00002784);
    /* 00002786  00002786 T adds r2,r2,r3 */
    g_cpu.R[15] = 0x00002786u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002786 = 1u;
    _cyc_00002786 = 1u;
    uint32_t _rm_00002786 = g_cpu.R[3];
    uint32_t _op2_00002786;
    uint32_t _co_00002786;
    _op2_00002786 = _rm_00002786;
    _co_00002786 = cpsr_c();
    uint32_t _rn_00002786 = g_cpu.R[2];
    uint32_t _r_00002786;
    _r_00002786 = _rn_00002786 + _op2_00002786;
    arm_set_nzcv_add(_rn_00002786, _op2_00002786, _r_00002786);
    g_cpu.R[2] = _r_00002786;
    g_cpu.R[15] = 0x00002788u;
    runtime_tick(_cyc_00002786);
    /* 00002788  00002788 T movs r2,r2,lsl #2 */
    g_cpu.R[15] = 0x00002788u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002788 = 1u;
    _cyc_00002788 = 1u;
    uint32_t _rm_00002788 = g_cpu.R[2];
    uint32_t _op2_00002788;
    uint32_t _co_00002788;
    _op2_00002788 = _rm_00002788 << 2;
    _co_00002788 = (_rm_00002788 >> 30) & 1u;
    uint32_t _r_00002788;
    _r_00002788 = _op2_00002788;
    arm_set_nzc_logic(_r_00002788, _co_00002788);
    g_cpu.R[2] = _r_00002788;
    g_cpu.R[15] = 0x0000278Au;
    runtime_tick(_cyc_00002788);
    /* 0000278A  0000278a T ldr r3,[r0,#0x30] */
    g_cpu.R[15] = 0x0000278Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000278A = 1u;
    _cyc_0000278A = 2u;
    uint32_t _base_0000278A = g_cpu.R[0];
    uint32_t _off_0000278A;
    _off_0000278A = 0x00000030u;
    uint32_t _ea_0000278A = _base_0000278A + _off_0000278A;
    uint32_t _post_0000278A = _base_0000278A + _off_0000278A;
    _cyc_0000278A += runtime_mem_cycles(_ea_0000278A, 4u, 0u);
    uint32_t _v_0000278A;
    { uint32_t _w = bus_read_u32(_ea_0000278A & ~3u); uint32_t _rot = (_ea_0000278A & 3u) * 8u; _v_0000278A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0000278A;
    g_cpu.R[15] = 0x0000278Cu;
    runtime_tick(_cyc_0000278A);
    /* 0000278C  0000278c T adds r2,r2,r3 */
    g_cpu.R[15] = 0x0000278Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000278C = 1u;
    _cyc_0000278C = 1u;
    uint32_t _rm_0000278C = g_cpu.R[3];
    uint32_t _op2_0000278C;
    uint32_t _co_0000278C;
    _op2_0000278C = _rm_0000278C;
    _co_0000278C = cpsr_c();
    uint32_t _rn_0000278C = g_cpu.R[2];
    uint32_t _r_0000278C;
    _r_0000278C = _rn_0000278C + _op2_0000278C;
    arm_set_nzcv_add(_rn_0000278C, _op2_0000278C, _r_0000278C);
    g_cpu.R[2] = _r_0000278C;
    g_cpu.R[15] = 0x0000278Eu;
    runtime_tick(_cyc_0000278C);
    /* 0000278E  0000278e T ldr r3,[r2] */
    g_cpu.R[15] = 0x0000278Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000278E = 1u;
    _cyc_0000278E = 2u;
    uint32_t _base_0000278E = g_cpu.R[2];
    uint32_t _off_0000278E;
    _off_0000278E = 0x00000000u;
    uint32_t _ea_0000278E = _base_0000278E + _off_0000278E;
    uint32_t _post_0000278E = _base_0000278E + _off_0000278E;
    _cyc_0000278E += runtime_mem_cycles(_ea_0000278E, 4u, 0u);
    uint32_t _v_0000278E;
    { uint32_t _w = bus_read_u32(_ea_0000278E & ~3u); uint32_t _rot = (_ea_0000278E & 3u) * 8u; _v_0000278E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0000278E;
    g_cpu.R[15] = 0x00002790u;
    runtime_tick(_cyc_0000278E);
    /* 00002790  00002790 T bl.hi 0x00001794 */
    g_cpu.R[15] = 0x00002790u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002790 = 1u;
    _cyc_00002790 = 1u;
    g_cpu.R[14] = 0x00001794u;
    g_cpu.R[15] = 0x00002792u;
    runtime_tick(_cyc_00002790);
    /* 00002792  00002792 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x00002792u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002792 = 1u;
    _cyc_00002792 = 3u;
    uint32_t _blt_00002792 = (g_cpu.R[14] + 0x00000F16u) & ~1u;
    g_cpu.R[14] = 0x00002795u;
    g_cpu.R[15] = _blt_00002792;
    runtime_call_push_return(0x00002794u);
    runtime_tick(_cyc_00002792);
    _cyc_00002792 = 0u;
    runtime_dispatch(_blt_00002792);
    if (g_cpu.R[15] != 0x00002794u) { runtime_call_cancel_return(0x00002794u); return; }
    g_cpu.R[15] = 0x00002794u;
    runtime_tick(_cyc_00002792);
    /* fall-through to 0x00002794 */
    g_cpu.R[15] = 0x00002794u;
    runtime_dispatch(0x00002794u);
    return;
}

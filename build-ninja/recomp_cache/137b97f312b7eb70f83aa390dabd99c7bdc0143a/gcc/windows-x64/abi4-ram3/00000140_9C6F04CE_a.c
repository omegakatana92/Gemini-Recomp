// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00000140 mode=arm end=0x00000170
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

OVL_EXPORT void func_00000140(void) {
    if (gba_mod_function_entry(0x00000140u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00000140u);
    /* 00000140  00000140 A stm r13!,{r11,r12,r14} */
    g_cpu.R[15] = 0x00000140u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000140 = 1u;
    _cyc_00000140 = 1u;
    uint32_t _b_00000140 = g_cpu.R[13];
    uint32_t _a_00000140 = _b_00000140 - 12u;
    uint32_t _fb_00000140 = _b_00000140 - 12u;
    _cyc_00000140 += runtime_mem_cycles(_a_00000140 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000140u, _a_00000140 & ~3u, g_cpu.R[11], 4u);
    bus_write_u32(_a_00000140 & ~3u, g_cpu.R[11]);
    _a_00000140 += 4u;
    _cyc_00000140 += runtime_mem_cycles(_a_00000140 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000140u, _a_00000140 & ~3u, g_cpu.R[12], 4u);
    bus_write_u32(_a_00000140 & ~3u, g_cpu.R[12]);
    _a_00000140 += 4u;
    _cyc_00000140 += runtime_mem_cycles(_a_00000140 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000140u, _a_00000140 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_00000140 & ~3u, g_cpu.R[14]);
    _a_00000140 += 4u;
    g_cpu.R[13] = _fb_00000140;
    g_cpu.R[15] = 0x00000144u;
    runtime_tick(_cyc_00000140);
    /* 00000144  00000144 A ldrb r12,[r14,#-0x2] */
    g_cpu.R[15] = 0x00000144u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000144 = 1u;
    _cyc_00000144 = 2u;
    uint32_t _base_00000144 = g_cpu.R[14];
    uint32_t _off_00000144;
    _off_00000144 = 0x00000002u;
    uint32_t _ea_00000144 = _base_00000144 - _off_00000144;
    uint32_t _post_00000144 = _base_00000144 - _off_00000144;
    _cyc_00000144 += runtime_mem_cycles(_ea_00000144, 1u, 0u);
    uint32_t _v_00000144;
    _v_00000144 = bus_read_u8(_ea_00000144);
    g_cpu.R[12] = _v_00000144;
    g_cpu.R[15] = 0x00000148u;
    runtime_tick(_cyc_00000144);
    /* 00000148  00000148 A add r11,r15,#0x78 */
    g_cpu.R[15] = 0x00000148u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000148 = 1u;
    _cyc_00000148 = 1u;
    uint32_t _rn_00000148 = 0x00000150u;
    uint32_t _r_00000148;
    _r_00000148 = _rn_00000148 + 0x00000078u;
    g_cpu.R[11] = _r_00000148;
    g_cpu.R[15] = 0x0000014Cu;
    runtime_tick(_cyc_00000148);
    /* 0000014C  0000014c A ldr r12,[r11,+r12] */
    g_cpu.R[15] = 0x0000014Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000014C = 1u;
    _cyc_0000014C = 2u;
    uint32_t _base_0000014C = g_cpu.R[11];
    uint32_t _off_0000014C;
    uint32_t _morm_0000014C = g_cpu.R[12];
    _off_0000014C = _morm_0000014C << 2;
    uint32_t _ea_0000014C = _base_0000014C + _off_0000014C;
    uint32_t _post_0000014C = _base_0000014C + _off_0000014C;
    _cyc_0000014C += runtime_mem_cycles(_ea_0000014C, 4u, 0u);
    uint32_t _v_0000014C;
    { uint32_t _w = bus_read_u32(_ea_0000014C & ~3u); uint32_t _rot = (_ea_0000014C & 3u) * 8u; _v_0000014C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[12] = _v_0000014C;
    g_cpu.R[15] = 0x00000150u;
    runtime_tick(_cyc_0000014C);
    /* 00000150  00000150 A mrs r11,spsr */
    g_cpu.R[15] = 0x00000150u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000150 = 1u;
    _cyc_00000150 = 1u;
    g_cpu.R[11] = runtime_mrs_spsr();
    g_cpu.R[15] = 0x00000154u;
    runtime_tick(_cyc_00000150);
    /* 00000154  00000154 A stm r13!,{r11} */
    g_cpu.R[15] = 0x00000154u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000154 = 1u;
    _cyc_00000154 = 1u;
    uint32_t _b_00000154 = g_cpu.R[13];
    uint32_t _a_00000154 = _b_00000154 - 4u;
    uint32_t _fb_00000154 = _b_00000154 - 4u;
    _cyc_00000154 += runtime_mem_cycles(_a_00000154 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000154u, _a_00000154 & ~3u, g_cpu.R[11], 4u);
    bus_write_u32(_a_00000154 & ~3u, g_cpu.R[11]);
    _a_00000154 += 4u;
    g_cpu.R[13] = _fb_00000154;
    g_cpu.R[15] = 0x00000158u;
    runtime_tick(_cyc_00000154);
    /* 00000158  00000158 A and r11,r11,#0x80 */
    g_cpu.R[15] = 0x00000158u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000158 = 1u;
    _cyc_00000158 = 1u;
    uint32_t _rn_00000158 = g_cpu.R[11];
    uint32_t _r_00000158;
    _r_00000158 = _rn_00000158 & 0x00000080u;
    g_cpu.R[11] = _r_00000158;
    g_cpu.R[15] = 0x0000015Cu;
    runtime_tick(_cyc_00000158);
    /* 0000015C  0000015c A orr r11,r11,#0x1f */
    g_cpu.R[15] = 0x0000015Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000015C = 1u;
    _cyc_0000015C = 1u;
    uint32_t _rn_0000015C = g_cpu.R[11];
    uint32_t _r_0000015C;
    _r_0000015C = _rn_0000015C | 0x0000001Fu;
    g_cpu.R[11] = _r_0000015C;
    g_cpu.R[15] = 0x00000160u;
    runtime_tick(_cyc_0000015C);
    /* 00000160  00000160 A msr cpsr_cf,r11 */
    g_cpu.R[15] = 0x00000160u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000160 = 1u;
    _cyc_00000160 = 1u;
    uint32_t _msrv_00000160;
    _msrv_00000160 = g_cpu.R[11];
    runtime_msr_cpsr(_msrv_00000160, 9u);
    g_cpu.R[15] = 0x00000164u;
    runtime_tick(_cyc_00000160);
    /* 00000164  00000164 A stm r13!,{r2,r14} */
    g_cpu.R[15] = 0x00000164u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000164 = 1u;
    _cyc_00000164 = 1u;
    uint32_t _b_00000164 = g_cpu.R[13];
    uint32_t _a_00000164 = _b_00000164 - 8u;
    uint32_t _fb_00000164 = _b_00000164 - 8u;
    _cyc_00000164 += runtime_mem_cycles(_a_00000164 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000164u, _a_00000164 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_a_00000164 & ~3u, g_cpu.R[2]);
    _a_00000164 += 4u;
    _cyc_00000164 += runtime_mem_cycles(_a_00000164 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000164u, _a_00000164 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_00000164 & ~3u, g_cpu.R[14]);
    _a_00000164 += 4u;
    g_cpu.R[13] = _fb_00000164;
    g_cpu.R[15] = 0x00000168u;
    runtime_tick(_cyc_00000164);
    /* 00000168  00000168 A add r14,r15,#0x0 */
    g_cpu.R[15] = 0x00000168u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000168 = 1u;
    _cyc_00000168 = 1u;
    uint32_t _rn_00000168 = 0x00000170u;
    uint32_t _r_00000168;
    _r_00000168 = _rn_00000168 + 0x00000000u;
    g_cpu.R[14] = _r_00000168;
    g_cpu.R[15] = 0x0000016Cu;
    runtime_tick(_cyc_00000168);
    /* 0000016C  0000016c A bx r12 */
    g_cpu.R[15] = 0x0000016Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000016C = 1u;
    _cyc_0000016C = 3u;
    uint32_t _bxt_0000016C = g_cpu.R[12];
    g_cpu.R[15] = _bxt_0000016C & ~1u;
    if (_bxt_0000016C & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_0000016C);
    runtime_dispatch_with_exchange(_bxt_0000016C);
    return;
    g_cpu.R[15] = 0x00000170u;
    runtime_tick(_cyc_0000016C);
    /* fall-through to 0x00000170 */
    g_cpu.R[15] = 0x00000170u;
    runtime_dispatch(0x00000170u);
    return;
}

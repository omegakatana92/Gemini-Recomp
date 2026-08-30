// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00000128 mode=arm end=0x00000138
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

OVL_EXPORT void func_00000128(void) {
    if (gba_mod_function_entry(0x00000128u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00000128u);
    /* 00000128  00000128 A stm r13!,{r0,r1,r2,r3,r12,r14} */
    g_cpu.R[15] = 0x00000128u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000128 = 1u;
    _cyc_00000128 = 1u;
    uint32_t _b_00000128 = g_cpu.R[13];
    uint32_t _a_00000128 = _b_00000128 - 24u;
    uint32_t _fb_00000128 = _b_00000128 - 24u;
    _cyc_00000128 += runtime_mem_cycles(_a_00000128 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000128u, _a_00000128 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_00000128 & ~3u, g_cpu.R[0]);
    _a_00000128 += 4u;
    _cyc_00000128 += runtime_mem_cycles(_a_00000128 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000128u, _a_00000128 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_a_00000128 & ~3u, g_cpu.R[1]);
    _a_00000128 += 4u;
    _cyc_00000128 += runtime_mem_cycles(_a_00000128 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000128u, _a_00000128 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_a_00000128 & ~3u, g_cpu.R[2]);
    _a_00000128 += 4u;
    _cyc_00000128 += runtime_mem_cycles(_a_00000128 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000128u, _a_00000128 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_a_00000128 & ~3u, g_cpu.R[3]);
    _a_00000128 += 4u;
    _cyc_00000128 += runtime_mem_cycles(_a_00000128 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000128u, _a_00000128 & ~3u, g_cpu.R[12], 4u);
    bus_write_u32(_a_00000128 & ~3u, g_cpu.R[12]);
    _a_00000128 += 4u;
    _cyc_00000128 += runtime_mem_cycles(_a_00000128 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000128u, _a_00000128 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_00000128 & ~3u, g_cpu.R[14]);
    _a_00000128 += 4u;
    g_cpu.R[13] = _fb_00000128;
    g_cpu.R[15] = 0x0000012Cu;
    runtime_tick(_cyc_00000128);
    /* 0000012C  0000012c A mov r0,#0x4000000 */
    g_cpu.R[15] = 0x0000012Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000012C = 1u;
    _cyc_0000012C = 1u;
    uint32_t _r_0000012C;
    _r_0000012C = 0x04000000u;
    g_cpu.R[0] = _r_0000012C;
    g_cpu.R[15] = 0x00000130u;
    runtime_tick(_cyc_0000012C);
    /* 00000130  00000130 A add r14,r15,#0x0 */
    g_cpu.R[15] = 0x00000130u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000130 = 1u;
    _cyc_00000130 = 1u;
    uint32_t _rn_00000130 = 0x00000138u;
    uint32_t _r_00000130;
    _r_00000130 = _rn_00000130 + 0x00000000u;
    g_cpu.R[14] = _r_00000130;
    g_cpu.R[15] = 0x00000134u;
    runtime_tick(_cyc_00000130);
    /* 00000134  00000134 A ldr r15,[r0,#-0x4] */
    g_cpu.R[15] = 0x00000134u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000134 = 1u;
    _cyc_00000134 = 4u;
    uint32_t _base_00000134 = g_cpu.R[0];
    uint32_t _off_00000134;
    _off_00000134 = 0x00000004u;
    uint32_t _ea_00000134 = _base_00000134 - _off_00000134;
    uint32_t _post_00000134 = _base_00000134 - _off_00000134;
    _cyc_00000134 += runtime_mem_cycles(_ea_00000134, 4u, 0u);
    uint32_t _v_00000134;
    { uint32_t _w = bus_read_u32(_ea_00000134 & ~3u); uint32_t _rot = (_ea_00000134 & 3u) * 8u; _v_00000134 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[15] = _v_00000134 & ~1u;
    runtime_tick(_cyc_00000134);
    runtime_dispatch(_v_00000134 & ~1u);
    return;
    g_cpu.R[15] = 0x00000138u;
    runtime_tick(_cyc_00000134);
    /* fall-through to 0x00000138 */
    g_cpu.R[15] = 0x00000138u;
    runtime_dispatch(0x00000138u);
    return;
}

// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08006E90 mode=arm end=0x08006EB8
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

OVL_EXPORT void func_08006E90(void) {
    if (gba_mod_function_entry(0x08006E90u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08006E90u);
    /* 08006E90  08006e90 A mov r3,#0x1d0 */
    g_cpu.R[15] = 0x08006E90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006E90 = 1u;
    _cyc_08006E90 = 1u;
    uint32_t _r_08006E90;
    _r_08006E90 = 0x000001D0u;
    g_cpu.R[3] = _r_08006E90;
    g_cpu.R[15] = 0x08006E94u;
    runtime_tick(_cyc_08006E90);
    /* 08006E94  08006e94 A add r3,r3,#0x2 */
    g_cpu.R[15] = 0x08006E94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006E94 = 1u;
    _cyc_08006E94 = 1u;
    uint32_t _rn_08006E94 = g_cpu.R[3];
    uint32_t _r_08006E94;
    _r_08006E94 = _rn_08006E94 + 0x00000002u;
    g_cpu.R[3] = _r_08006E94;
    g_cpu.R[15] = 0x08006E98u;
    runtime_tick(_cyc_08006E94);
    /* 08006E98  08006e98 A strh r0,[r7,+r3] */
    g_cpu.R[15] = 0x08006E98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006E98 = 1u;
    _cyc_08006E98 = 1u;
    uint32_t _base_08006E98 = g_cpu.R[7];
    uint32_t _off_08006E98;
    uint32_t _morm_08006E98 = g_cpu.R[3];
    _off_08006E98 = _morm_08006E98;
    uint32_t _ea_08006E98 = _base_08006E98 + _off_08006E98;
    uint32_t _post_08006E98 = _base_08006E98 + _off_08006E98;
    _cyc_08006E98 += runtime_mem_cycles(_ea_08006E98, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006E98u, _ea_08006E98 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08006E98 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08006E9Cu;
    runtime_tick(_cyc_08006E98);
    /* 08006E9C  08006e9c A ldr r3,[r15,#0x1c] */
    g_cpu.R[15] = 0x08006E9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006E9C = 1u;
    _cyc_08006E9C = 2u;
    uint32_t _base_08006E9C = 0x08006EA4u;
    uint32_t _off_08006E9C;
    _off_08006E9C = 0x0000001Cu;
    uint32_t _ea_08006E9C = _base_08006E9C + _off_08006E9C;
    uint32_t _post_08006E9C = _base_08006E9C + _off_08006E9C;
    _cyc_08006E9C += runtime_mem_cycles(_ea_08006E9C, 4u, 0u);
    uint32_t _v_08006E9C;
    { uint32_t _w = bus_read_u32(_ea_08006E9C & ~3u); uint32_t _rot = (_ea_08006E9C & 3u) * 8u; _v_08006E9C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08006E9C;
    g_cpu.R[15] = 0x08006EA0u;
    runtime_tick(_cyc_08006E9C);
    /* 08006EA0  08006ea0 A str r10,[r3] */
    g_cpu.R[15] = 0x08006EA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EA0 = 1u;
    _cyc_08006EA0 = 1u;
    uint32_t _base_08006EA0 = g_cpu.R[3];
    uint32_t _off_08006EA0;
    _off_08006EA0 = 0x00000000u;
    uint32_t _ea_08006EA0 = _base_08006EA0 + _off_08006EA0;
    uint32_t _post_08006EA0 = _base_08006EA0 + _off_08006EA0;
    _cyc_08006EA0 += runtime_mem_cycles(_ea_08006EA0, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006EA0u, _ea_08006EA0 & ~3u, g_cpu.R[10], 4u);
    bus_write_u32(_ea_08006EA0 & ~3u, g_cpu.R[10]);
    g_cpu.R[15] = 0x08006EA4u;
    runtime_tick(_cyc_08006EA0);
    /* 08006EA4  08006ea4 A mov r3,#0x0 */
    g_cpu.R[15] = 0x08006EA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EA4 = 1u;
    _cyc_08006EA4 = 1u;
    uint32_t _r_08006EA4;
    _r_08006EA4 = 0x00000000u;
    g_cpu.R[3] = _r_08006EA4;
    g_cpu.R[15] = 0x08006EA8u;
    runtime_tick(_cyc_08006EA4);
    /* 08006EA8  08006ea8 A str r8,[r7,#0x1c0] */
    g_cpu.R[15] = 0x08006EA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EA8 = 1u;
    _cyc_08006EA8 = 1u;
    uint32_t _base_08006EA8 = g_cpu.R[7];
    uint32_t _off_08006EA8;
    _off_08006EA8 = 0x000001C0u;
    uint32_t _ea_08006EA8 = _base_08006EA8 + _off_08006EA8;
    uint32_t _post_08006EA8 = _base_08006EA8 + _off_08006EA8;
    _cyc_08006EA8 += runtime_mem_cycles(_ea_08006EA8, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006EA8u, _ea_08006EA8 & ~3u, g_cpu.R[8], 4u);
    bus_write_u32(_ea_08006EA8 & ~3u, g_cpu.R[8]);
    g_cpu.R[15] = 0x08006EACu;
    runtime_tick(_cyc_08006EA8);
    /* 08006EAC  08006eac A strh r3,[r7,+r6] */
    g_cpu.R[15] = 0x08006EACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EAC = 1u;
    _cyc_08006EAC = 1u;
    uint32_t _base_08006EAC = g_cpu.R[7];
    uint32_t _off_08006EAC;
    uint32_t _morm_08006EAC = g_cpu.R[6];
    _off_08006EAC = _morm_08006EAC;
    uint32_t _ea_08006EAC = _base_08006EAC + _off_08006EAC;
    uint32_t _post_08006EAC = _base_08006EAC + _off_08006EAC;
    _cyc_08006EAC += runtime_mem_cycles(_ea_08006EAC, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006EACu, _ea_08006EAC & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08006EAC & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[15] = 0x08006EB0u;
    runtime_tick(_cyc_08006EAC);
    /* 08006EB0  08006eb0 A ldm r11,{r4,r5,r6,r7,r8,r10,r11,r13,r14} */
    g_cpu.R[15] = 0x08006EB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EB0 = 1u;
    _cyc_08006EB0 = 2u;
    uint32_t _b_08006EB0 = g_cpu.R[11];
    uint32_t _a_08006EB0 = _b_08006EB0 - 36u;
    uint32_t _fb_08006EB0 = _b_08006EB0 - 36u;
    _cyc_08006EB0 += runtime_mem_cycles(_a_08006EB0 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08006EB0 & ~3u);
    _a_08006EB0 += 4u;
    _cyc_08006EB0 += runtime_mem_cycles(_a_08006EB0 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08006EB0 & ~3u);
    _a_08006EB0 += 4u;
    _cyc_08006EB0 += runtime_mem_cycles(_a_08006EB0 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_08006EB0 & ~3u);
    _a_08006EB0 += 4u;
    _cyc_08006EB0 += runtime_mem_cycles(_a_08006EB0 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_08006EB0 & ~3u);
    _a_08006EB0 += 4u;
    _cyc_08006EB0 += runtime_mem_cycles(_a_08006EB0 & ~3u, 4u, 1u);
    g_cpu.R[8] = bus_read_u32(_a_08006EB0 & ~3u);
    _a_08006EB0 += 4u;
    _cyc_08006EB0 += runtime_mem_cycles(_a_08006EB0 & ~3u, 4u, 1u);
    g_cpu.R[10] = bus_read_u32(_a_08006EB0 & ~3u);
    _a_08006EB0 += 4u;
    _cyc_08006EB0 += runtime_mem_cycles(_a_08006EB0 & ~3u, 4u, 1u);
    g_cpu.R[11] = bus_read_u32(_a_08006EB0 & ~3u);
    _a_08006EB0 += 4u;
    _cyc_08006EB0 += runtime_mem_cycles(_a_08006EB0 & ~3u, 4u, 1u);
    g_cpu.R[13] = bus_read_u32(_a_08006EB0 & ~3u);
    _a_08006EB0 += 4u;
    _cyc_08006EB0 += runtime_mem_cycles(_a_08006EB0 & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_08006EB0 & ~3u);
    _a_08006EB0 += 4u;
    g_cpu.R[15] = 0x08006EB4u;
    runtime_tick(_cyc_08006EB0);
    /* 08006EB4  08006eb4 A bx r14 */
    g_cpu.R[15] = 0x08006EB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EB4 = 1u;
    _cyc_08006EB4 = 3u;
    uint32_t _bxt_08006EB4 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_08006EB4 & ~1u;
    if (_bxt_08006EB4 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08006EB4);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08006EB4);
    return;
    g_cpu.R[15] = 0x08006EB8u;
    runtime_tick(_cyc_08006EB4);
    /* fall-through to 0x08006EB8 */
    g_cpu.R[15] = 0x08006EB8u;
    runtime_dispatch(0x08006EB8u);
    return;
}

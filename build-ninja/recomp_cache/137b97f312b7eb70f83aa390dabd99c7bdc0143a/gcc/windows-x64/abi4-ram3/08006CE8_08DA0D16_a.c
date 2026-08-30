// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08006CE8 mode=arm end=0x08006D00
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

OVL_EXPORT void func_08006CE8(void) {
    if (gba_mod_function_entry(0x08006CE8u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08006CE8u);
    /* 08006CE8  08006ce8 A mov r4,#0x1d0 */
    g_cpu.R[15] = 0x08006CE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006CE8 = 1u;
    _cyc_08006CE8 = 1u;
    uint32_t _r_08006CE8;
    _r_08006CE8 = 0x000001D0u;
    g_cpu.R[4] = _r_08006CE8;
    g_cpu.R[15] = 0x08006CECu;
    runtime_tick(_cyc_08006CE8);
    /* 08006CEC  08006cec A add r4,r4,#0x2 */
    g_cpu.R[15] = 0x08006CECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006CEC = 1u;
    _cyc_08006CEC = 1u;
    uint32_t _rn_08006CEC = g_cpu.R[4];
    uint32_t _r_08006CEC;
    _r_08006CEC = _rn_08006CEC + 0x00000002u;
    g_cpu.R[4] = _r_08006CEC;
    g_cpu.R[15] = 0x08006CF0u;
    runtime_tick(_cyc_08006CEC);
    /* 08006CF0  08006cf0 A strh r6,[r5,+r8] */
    g_cpu.R[15] = 0x08006CF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006CF0 = 1u;
    _cyc_08006CF0 = 1u;
    uint32_t _base_08006CF0 = g_cpu.R[5];
    uint32_t _off_08006CF0;
    uint32_t _morm_08006CF0 = g_cpu.R[8];
    _off_08006CF0 = _morm_08006CF0;
    uint32_t _ea_08006CF0 = _base_08006CF0 + _off_08006CF0;
    uint32_t _post_08006CF0 = _base_08006CF0 + _off_08006CF0;
    _cyc_08006CF0 += runtime_mem_cycles(_ea_08006CF0, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006CF0u, _ea_08006CF0 & ~1u, (uint32_t)(g_cpu.R[6] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08006CF0 & ~1u, (uint16_t)(g_cpu.R[6] & 0xFFFFu));
    g_cpu.R[15] = 0x08006CF4u;
    runtime_tick(_cyc_08006CF0);
    /* 08006CF4  08006cf4 A strh r0,[r5,+r4] */
    g_cpu.R[15] = 0x08006CF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006CF4 = 1u;
    _cyc_08006CF4 = 1u;
    uint32_t _base_08006CF4 = g_cpu.R[5];
    uint32_t _off_08006CF4;
    uint32_t _morm_08006CF4 = g_cpu.R[4];
    _off_08006CF4 = _morm_08006CF4;
    uint32_t _ea_08006CF4 = _base_08006CF4 + _off_08006CF4;
    uint32_t _post_08006CF4 = _base_08006CF4 + _off_08006CF4;
    _cyc_08006CF4 += runtime_mem_cycles(_ea_08006CF4, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006CF4u, _ea_08006CF4 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08006CF4 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08006CF8u;
    runtime_tick(_cyc_08006CF4);
    /* 08006CF8  08006cf8 A ldm r11,{r4,r5,r6,r7,r8,r11,r13,r14} */
    g_cpu.R[15] = 0x08006CF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006CF8 = 1u;
    _cyc_08006CF8 = 2u;
    uint32_t _b_08006CF8 = g_cpu.R[11];
    uint32_t _a_08006CF8 = _b_08006CF8 - 32u;
    uint32_t _fb_08006CF8 = _b_08006CF8 - 32u;
    _cyc_08006CF8 += runtime_mem_cycles(_a_08006CF8 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08006CF8 & ~3u);
    _a_08006CF8 += 4u;
    _cyc_08006CF8 += runtime_mem_cycles(_a_08006CF8 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08006CF8 & ~3u);
    _a_08006CF8 += 4u;
    _cyc_08006CF8 += runtime_mem_cycles(_a_08006CF8 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_08006CF8 & ~3u);
    _a_08006CF8 += 4u;
    _cyc_08006CF8 += runtime_mem_cycles(_a_08006CF8 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_08006CF8 & ~3u);
    _a_08006CF8 += 4u;
    _cyc_08006CF8 += runtime_mem_cycles(_a_08006CF8 & ~3u, 4u, 1u);
    g_cpu.R[8] = bus_read_u32(_a_08006CF8 & ~3u);
    _a_08006CF8 += 4u;
    _cyc_08006CF8 += runtime_mem_cycles(_a_08006CF8 & ~3u, 4u, 1u);
    g_cpu.R[11] = bus_read_u32(_a_08006CF8 & ~3u);
    _a_08006CF8 += 4u;
    _cyc_08006CF8 += runtime_mem_cycles(_a_08006CF8 & ~3u, 4u, 1u);
    g_cpu.R[13] = bus_read_u32(_a_08006CF8 & ~3u);
    _a_08006CF8 += 4u;
    _cyc_08006CF8 += runtime_mem_cycles(_a_08006CF8 & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_08006CF8 & ~3u);
    _a_08006CF8 += 4u;
    g_cpu.R[15] = 0x08006CFCu;
    runtime_tick(_cyc_08006CF8);
    /* 08006CFC  08006cfc A bx r14 */
    g_cpu.R[15] = 0x08006CFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006CFC = 1u;
    _cyc_08006CFC = 3u;
    uint32_t _bxt_08006CFC = g_cpu.R[14];
    g_cpu.R[15] = _bxt_08006CFC & ~1u;
    if (_bxt_08006CFC & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08006CFC);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08006CFC);
    return;
    g_cpu.R[15] = 0x08006D00u;
    runtime_tick(_cyc_08006CFC);
    /* fall-through to 0x08006D00 */
    g_cpu.R[15] = 0x08006D00u;
    runtime_dispatch(0x08006D00u);
    return;
}

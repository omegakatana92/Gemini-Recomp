// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08008DD4 mode=arm end=0x08008E34
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

OVL_EXPORT void func_08008DD4(void) {
    if (gba_mod_function_entry(0x08008DD4u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08008DD4u);
    /* 08008DD4  08008dd4 A beq 0x08008dcc */
    g_cpu.R[15] = 0x08008DD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008DD4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08008DD4 = 3u;
        g_cpu.R[15] = 0x08008DCCu;
        runtime_tick(_cyc_08008DD4);
        runtime_dispatch(0x08008DCCu);
        return;
    }
    g_cpu.R[15] = 0x08008DD8u;
    runtime_tick(_cyc_08008DD4);
    /* 08008DD8  08008dd8 A ldr r3,[r15,#0x54] */
    g_cpu.R[15] = 0x08008DD8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008DD8 = 1u;
    _cyc_08008DD8 = 2u;
    uint32_t _base_08008DD8 = 0x08008DE0u;
    uint32_t _off_08008DD8;
    _off_08008DD8 = 0x00000054u;
    uint32_t _ea_08008DD8 = _base_08008DD8 + _off_08008DD8;
    uint32_t _post_08008DD8 = _base_08008DD8 + _off_08008DD8;
    _cyc_08008DD8 += runtime_mem_cycles(_ea_08008DD8, 4u, 0u);
    uint32_t _v_08008DD8;
    { uint32_t _w = bus_read_u32(_ea_08008DD8 & ~3u); uint32_t _rot = (_ea_08008DD8 & 3u) * 8u; _v_08008DD8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08008DD8;
    g_cpu.R[15] = 0x08008DDCu;
    runtime_tick(_cyc_08008DD8);
    /* 08008DDC  08008ddc A ldrh r0,[r3,#0x28] */
    g_cpu.R[15] = 0x08008DDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008DDC = 1u;
    _cyc_08008DDC = 2u;
    uint32_t _base_08008DDC = g_cpu.R[3];
    uint32_t _off_08008DDC;
    _off_08008DDC = 0x00000028u;
    uint32_t _ea_08008DDC = _base_08008DDC + _off_08008DDC;
    uint32_t _post_08008DDC = _base_08008DDC + _off_08008DDC;
    _cyc_08008DDC += runtime_mem_cycles(_ea_08008DDC, 2u, 0u);
    uint32_t _v_08008DDC;
    { uint32_t _h = bus_read_u16(_ea_08008DDC & ~1u); if (_ea_08008DDC & 1u) _v_08008DDC = ((_h >> 8) | (_h << 24)); else _v_08008DDC = _h; }
    g_cpu.R[0] = _v_08008DDC;
    g_cpu.R[15] = 0x08008DE0u;
    runtime_tick(_cyc_08008DDC);
    /* 08008DE0  08008de0 A mov r2,#0x4000000 */
    g_cpu.R[15] = 0x08008DE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008DE0 = 1u;
    _cyc_08008DE0 = 1u;
    uint32_t _r_08008DE0;
    _r_08008DE0 = 0x04000000u;
    g_cpu.R[2] = _r_08008DE0;
    g_cpu.R[15] = 0x08008DE4u;
    runtime_tick(_cyc_08008DE0);
    /* 08008DE4  08008de4 A ldr r14,[r3] */
    g_cpu.R[15] = 0x08008DE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008DE4 = 1u;
    _cyc_08008DE4 = 2u;
    uint32_t _base_08008DE4 = g_cpu.R[3];
    uint32_t _off_08008DE4;
    _off_08008DE4 = 0x00000000u;
    uint32_t _ea_08008DE4 = _base_08008DE4 + _off_08008DE4;
    uint32_t _post_08008DE4 = _base_08008DE4 + _off_08008DE4;
    _cyc_08008DE4 += runtime_mem_cycles(_ea_08008DE4, 4u, 0u);
    uint32_t _v_08008DE4;
    { uint32_t _w = bus_read_u32(_ea_08008DE4 & ~3u); uint32_t _rot = (_ea_08008DE4 & 3u) * 8u; _v_08008DE4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[14] = _v_08008DE4;
    g_cpu.R[15] = 0x08008DE8u;
    runtime_tick(_cyc_08008DE4);
    /* 08008DE8  08008de8 A ldr r4,[r3,#0x4] */
    g_cpu.R[15] = 0x08008DE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008DE8 = 1u;
    _cyc_08008DE8 = 2u;
    uint32_t _base_08008DE8 = g_cpu.R[3];
    uint32_t _off_08008DE8;
    _off_08008DE8 = 0x00000004u;
    uint32_t _ea_08008DE8 = _base_08008DE8 + _off_08008DE8;
    uint32_t _post_08008DE8 = _base_08008DE8 + _off_08008DE8;
    _cyc_08008DE8 += runtime_mem_cycles(_ea_08008DE8, 4u, 0u);
    uint32_t _v_08008DE8;
    { uint32_t _w = bus_read_u32(_ea_08008DE8 & ~3u); uint32_t _rot = (_ea_08008DE8 & 3u) * 8u; _v_08008DE8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_08008DE8;
    g_cpu.R[15] = 0x08008DECu;
    runtime_tick(_cyc_08008DE8);
    /* 08008DEC  08008dec A mov r12,#0x100 */
    g_cpu.R[15] = 0x08008DECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008DEC = 1u;
    _cyc_08008DEC = 1u;
    uint32_t _r_08008DEC;
    _r_08008DEC = 0x00000100u;
    g_cpu.R[12] = _r_08008DEC;
    g_cpu.R[15] = 0x08008DF0u;
    runtime_tick(_cyc_08008DEC);
    /* 08008DF0  08008df0 A mov r3,#0x0 */
    g_cpu.R[15] = 0x08008DF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008DF0 = 1u;
    _cyc_08008DF0 = 1u;
    uint32_t _r_08008DF0;
    _r_08008DF0 = 0x00000000u;
    g_cpu.R[3] = _r_08008DF0;
    g_cpu.R[15] = 0x08008DF4u;
    runtime_tick(_cyc_08008DF0);
    /* 08008DF4  08008df4 A mvn r1,#0x4900 */
    g_cpu.R[15] = 0x08008DF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008DF4 = 1u;
    _cyc_08008DF4 = 1u;
    uint32_t _r_08008DF4;
    _r_08008DF4 = ~(0x00004900u);
    g_cpu.R[1] = _r_08008DF4;
    g_cpu.R[15] = 0x08008DF8u;
    runtime_tick(_cyc_08008DF4);
    /* 08008DF8  08008df8 A strh r3,[r2,#0xc6] */
    g_cpu.R[15] = 0x08008DF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008DF8 = 1u;
    _cyc_08008DF8 = 1u;
    uint32_t _base_08008DF8 = g_cpu.R[2];
    uint32_t _off_08008DF8;
    _off_08008DF8 = 0x000000C6u;
    uint32_t _ea_08008DF8 = _base_08008DF8 + _off_08008DF8;
    uint32_t _post_08008DF8 = _base_08008DF8 + _off_08008DF8;
    _cyc_08008DF8 += runtime_mem_cycles(_ea_08008DF8, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08008DF8u, _ea_08008DF8 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08008DF8 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[15] = 0x08008DFCu;
    runtime_tick(_cyc_08008DF8);
    /* 08008DFC  08008dfc A add r5,r2,r12 */
    g_cpu.R[15] = 0x08008DFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008DFC = 1u;
    _cyc_08008DFC = 1u;
    uint32_t _rm_08008DFC = g_cpu.R[12];
    uint32_t _op2_08008DFC;
    uint32_t _co_08008DFC;
    _op2_08008DFC = _rm_08008DFC;
    _co_08008DFC = cpsr_c();
    uint32_t _rn_08008DFC = g_cpu.R[2];
    uint32_t _r_08008DFC;
    _r_08008DFC = _rn_08008DFC + _op2_08008DFC;
    g_cpu.R[5] = _r_08008DFC;
    g_cpu.R[15] = 0x08008E00u;
    runtime_tick(_cyc_08008DFC);
    /* 08008E00  08008e00 A strh r3,[r2,#0xd2] */
    g_cpu.R[15] = 0x08008E00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008E00 = 1u;
    _cyc_08008E00 = 1u;
    uint32_t _base_08008E00 = g_cpu.R[2];
    uint32_t _off_08008E00;
    _off_08008E00 = 0x000000D2u;
    uint32_t _ea_08008E00 = _base_08008E00 + _off_08008E00;
    uint32_t _post_08008E00 = _base_08008E00 + _off_08008E00;
    _cyc_08008E00 += runtime_mem_cycles(_ea_08008E00, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08008E00u, _ea_08008E00 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08008E00 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[15] = 0x08008E04u;
    runtime_tick(_cyc_08008E00);
    /* 08008E04  08008e04 A sub r1,r1,#0xbf */
    g_cpu.R[15] = 0x08008E04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008E04 = 1u;
    _cyc_08008E04 = 1u;
    uint32_t _rn_08008E04 = g_cpu.R[1];
    uint32_t _r_08008E04;
    _r_08008E04 = _rn_08008E04 - 0x000000BFu;
    g_cpu.R[1] = _r_08008E04;
    g_cpu.R[15] = 0x08008E08u;
    runtime_tick(_cyc_08008E04);
    /* 08008E08  08008e08 A rsb r0,r0,#0x0 */
    g_cpu.R[15] = 0x08008E08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008E08 = 1u;
    _cyc_08008E08 = 1u;
    uint32_t _rn_08008E08 = g_cpu.R[0];
    uint32_t _r_08008E08;
    _r_08008E08 = 0x00000000u - _rn_08008E08;
    g_cpu.R[0] = _r_08008E08;
    g_cpu.R[15] = 0x08008E0Cu;
    runtime_tick(_cyc_08008E08);
    /* 08008E0C  08008e0c A add r12,r12,#0x4000002 */
    g_cpu.R[15] = 0x08008E0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008E0C = 1u;
    _cyc_08008E0C = 1u;
    uint32_t _rn_08008E0C = g_cpu.R[12];
    uint32_t _r_08008E0C;
    _r_08008E0C = _rn_08008E0C + 0x04000002u;
    g_cpu.R[12] = _r_08008E0C;
    g_cpu.R[15] = 0x08008E10u;
    runtime_tick(_cyc_08008E0C);
    /* 08008E10  08008e10 A mov r3,#0x80 */
    g_cpu.R[15] = 0x08008E10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008E10 = 1u;
    _cyc_08008E10 = 1u;
    uint32_t _r_08008E10;
    _r_08008E10 = 0x00000080u;
    g_cpu.R[3] = _r_08008E10;
    g_cpu.R[15] = 0x08008E14u;
    runtime_tick(_cyc_08008E10);
    /* 08008E14  08008e14 A str r14,[r2,#0xbc] */
    g_cpu.R[15] = 0x08008E14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008E14 = 1u;
    _cyc_08008E14 = 1u;
    uint32_t _base_08008E14 = g_cpu.R[2];
    uint32_t _off_08008E14;
    _off_08008E14 = 0x000000BCu;
    uint32_t _ea_08008E14 = _base_08008E14 + _off_08008E14;
    uint32_t _post_08008E14 = _base_08008E14 + _off_08008E14;
    _cyc_08008E14 += runtime_mem_cycles(_ea_08008E14, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08008E14u, _ea_08008E14 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_ea_08008E14 & ~3u, g_cpu.R[14]);
    g_cpu.R[15] = 0x08008E18u;
    runtime_tick(_cyc_08008E14);
    /* 08008E18  08008e18 A str r4,[r2,#0xc8] */
    g_cpu.R[15] = 0x08008E18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008E18 = 1u;
    _cyc_08008E18 = 1u;
    uint32_t _base_08008E18 = g_cpu.R[2];
    uint32_t _off_08008E18;
    _off_08008E18 = 0x000000C8u;
    uint32_t _ea_08008E18 = _base_08008E18 + _off_08008E18;
    uint32_t _post_08008E18 = _base_08008E18 + _off_08008E18;
    _cyc_08008E18 += runtime_mem_cycles(_ea_08008E18, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08008E18u, _ea_08008E18 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_ea_08008E18 & ~3u, g_cpu.R[4]);
    g_cpu.R[15] = 0x08008E1Cu;
    runtime_tick(_cyc_08008E18);
    /* 08008E1C  08008e1c A strh r1,[r2,#0xc6] */
    g_cpu.R[15] = 0x08008E1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008E1C = 1u;
    _cyc_08008E1C = 1u;
    uint32_t _base_08008E1C = g_cpu.R[2];
    uint32_t _off_08008E1C;
    _off_08008E1C = 0x000000C6u;
    uint32_t _ea_08008E1C = _base_08008E1C + _off_08008E1C;
    uint32_t _post_08008E1C = _base_08008E1C + _off_08008E1C;
    _cyc_08008E1C += runtime_mem_cycles(_ea_08008E1C, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08008E1Cu, _ea_08008E1C & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08008E1C & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x08008E20u;
    runtime_tick(_cyc_08008E1C);
    /* 08008E20  08008e20 A strh r1,[r2,#0xd2] */
    g_cpu.R[15] = 0x08008E20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008E20 = 1u;
    _cyc_08008E20 = 1u;
    uint32_t _base_08008E20 = g_cpu.R[2];
    uint32_t _off_08008E20;
    _off_08008E20 = 0x000000D2u;
    uint32_t _ea_08008E20 = _base_08008E20 + _off_08008E20;
    uint32_t _post_08008E20 = _base_08008E20 + _off_08008E20;
    _cyc_08008E20 += runtime_mem_cycles(_ea_08008E20, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08008E20u, _ea_08008E20 & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08008E20 & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x08008E24u;
    runtime_tick(_cyc_08008E20);
    /* 08008E24  08008e24 A strh r0,[r5] */
    g_cpu.R[15] = 0x08008E24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008E24 = 1u;
    _cyc_08008E24 = 1u;
    uint32_t _base_08008E24 = g_cpu.R[5];
    uint32_t _off_08008E24;
    _off_08008E24 = 0x00000000u;
    uint32_t _ea_08008E24 = _base_08008E24 + _off_08008E24;
    uint32_t _post_08008E24 = _base_08008E24 + _off_08008E24;
    _cyc_08008E24 += runtime_mem_cycles(_ea_08008E24, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08008E24u, _ea_08008E24 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08008E24 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08008E28u;
    runtime_tick(_cyc_08008E24);
    /* 08008E28  08008e28 A strh r3,[r12] */
    g_cpu.R[15] = 0x08008E28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008E28 = 1u;
    _cyc_08008E28 = 1u;
    uint32_t _base_08008E28 = g_cpu.R[12];
    uint32_t _off_08008E28;
    _off_08008E28 = 0x00000000u;
    uint32_t _ea_08008E28 = _base_08008E28 + _off_08008E28;
    uint32_t _post_08008E28 = _base_08008E28 + _off_08008E28;
    _cyc_08008E28 += runtime_mem_cycles(_ea_08008E28, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08008E28u, _ea_08008E28 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08008E28 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[15] = 0x08008E2Cu;
    runtime_tick(_cyc_08008E28);
    /* 08008E2C  08008e2c A ldm r11,{r4,r5,r6,r11,r13,r14} */
    g_cpu.R[15] = 0x08008E2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008E2C = 1u;
    _cyc_08008E2C = 2u;
    uint32_t _b_08008E2C = g_cpu.R[11];
    uint32_t _a_08008E2C = _b_08008E2C - 24u;
    uint32_t _fb_08008E2C = _b_08008E2C - 24u;
    _cyc_08008E2C += runtime_mem_cycles(_a_08008E2C & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08008E2C & ~3u);
    _a_08008E2C += 4u;
    _cyc_08008E2C += runtime_mem_cycles(_a_08008E2C & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08008E2C & ~3u);
    _a_08008E2C += 4u;
    _cyc_08008E2C += runtime_mem_cycles(_a_08008E2C & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_08008E2C & ~3u);
    _a_08008E2C += 4u;
    _cyc_08008E2C += runtime_mem_cycles(_a_08008E2C & ~3u, 4u, 1u);
    g_cpu.R[11] = bus_read_u32(_a_08008E2C & ~3u);
    _a_08008E2C += 4u;
    _cyc_08008E2C += runtime_mem_cycles(_a_08008E2C & ~3u, 4u, 1u);
    g_cpu.R[13] = bus_read_u32(_a_08008E2C & ~3u);
    _a_08008E2C += 4u;
    _cyc_08008E2C += runtime_mem_cycles(_a_08008E2C & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_08008E2C & ~3u);
    _a_08008E2C += 4u;
    g_cpu.R[15] = 0x08008E30u;
    runtime_tick(_cyc_08008E2C);
    /* 08008E30  08008e30 A bx r14 */
    g_cpu.R[15] = 0x08008E30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008E30 = 1u;
    _cyc_08008E30 = 3u;
    uint32_t _bxt_08008E30 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_08008E30 & ~1u;
    if (_bxt_08008E30 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08008E30);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08008E30);
    return;
    g_cpu.R[15] = 0x08008E34u;
    runtime_tick(_cyc_08008E30);
    /* fall-through to 0x08008E34 */
    g_cpu.R[15] = 0x08008E34u;
    runtime_dispatch(0x08008E34u);
    return;
}

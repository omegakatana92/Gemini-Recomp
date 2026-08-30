// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00001204 mode=arm end=0x00001224
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

OVL_EXPORT void func_00001204(void) {
    if (gba_mod_function_entry(0x00001204u, 0u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00001204u);
    /* 00001204  00001204 A mov r4,r8,lsl #8 */
    g_cpu.R[15] = 0x00001204u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001204 = 1u;
    _cyc_00001204 = 1u;
    uint32_t _rm_00001204 = g_cpu.R[8];
    uint32_t _op2_00001204;
    uint32_t _co_00001204;
    _op2_00001204 = _rm_00001204 << 8;
    _co_00001204 = (_rm_00001204 >> 24) & 1u;
    uint32_t _r_00001204;
    _r_00001204 = _op2_00001204;
    g_cpu.R[4] = _r_00001204;
    g_cpu.R[15] = 0x00001208u;
    runtime_tick(_cyc_00001204);
    /* 00001208  00001208 A ldrb r9,[r0],#0x1 */
    g_cpu.R[15] = 0x00001208u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001208 = 1u;
    _cyc_00001208 = 2u;
    uint32_t _base_00001208 = g_cpu.R[0];
    uint32_t _off_00001208;
    _off_00001208 = 0x00000001u;
    uint32_t _ea_00001208 = _base_00001208;
    uint32_t _post_00001208 = _base_00001208 + _off_00001208;
    _cyc_00001208 += runtime_mem_cycles(_ea_00001208, 1u, 0u);
    uint32_t _v_00001208;
    _v_00001208 = bus_read_u8(_ea_00001208);
    if (0u != 9u) g_cpu.R[0] = _post_00001208;
    g_cpu.R[9] = _v_00001208;
    g_cpu.R[15] = 0x0000120Cu;
    runtime_tick(_cyc_00001208);
    /* 0000120C  0000120c A orr r8,r9,r4 */
    g_cpu.R[15] = 0x0000120Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000120C = 1u;
    _cyc_0000120C = 1u;
    uint32_t _rm_0000120C = g_cpu.R[4];
    uint32_t _op2_0000120C;
    uint32_t _co_0000120C;
    _op2_0000120C = _rm_0000120C;
    _co_0000120C = cpsr_c();
    uint32_t _rn_0000120C = g_cpu.R[9];
    uint32_t _r_0000120C;
    _r_0000120C = _rn_0000120C | _op2_0000120C;
    g_cpu.R[8] = _r_0000120C;
    g_cpu.R[15] = 0x00001210u;
    runtime_tick(_cyc_0000120C);
    /* 00001210  00001210 A add r4,r8,#0x1 */
    g_cpu.R[15] = 0x00001210u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001210 = 1u;
    _cyc_00001210 = 1u;
    uint32_t _rn_00001210 = g_cpu.R[8];
    uint32_t _r_00001210;
    _r_00001210 = _rn_00001210 + 0x00000001u;
    g_cpu.R[4] = _r_00001210;
    g_cpu.R[15] = 0x00001214u;
    runtime_tick(_cyc_00001210);
    /* 00001214  00001214 A rsb r8,r2,#0x8 */
    g_cpu.R[15] = 0x00001214u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001214 = 1u;
    _cyc_00001214 = 1u;
    uint32_t _rn_00001214 = g_cpu.R[2];
    uint32_t _r_00001214;
    _r_00001214 = 0x00000008u - _rn_00001214;
    g_cpu.R[8] = _r_00001214;
    g_cpu.R[15] = 0x00001218u;
    runtime_tick(_cyc_00001214);
    /* 00001218  00001218 A and r9,r4,#0x1 */
    g_cpu.R[15] = 0x00001218u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001218 = 1u;
    _cyc_00001218 = 1u;
    uint32_t _rn_00001218 = g_cpu.R[4];
    uint32_t _r_00001218;
    _r_00001218 = _rn_00001218 & 0x00000001u;
    g_cpu.R[9] = _r_00001218;
    g_cpu.R[15] = 0x0000121Cu;
    runtime_tick(_cyc_00001218);
    /* 0000121C  0000121c A eor r14,r8,r9,lsl #3 */
    g_cpu.R[15] = 0x0000121Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000121C = 1u;
    _cyc_0000121C = 1u;
    uint32_t _rm_0000121C = g_cpu.R[9];
    uint32_t _op2_0000121C;
    uint32_t _co_0000121C;
    _op2_0000121C = _rm_0000121C << 3;
    _co_0000121C = (_rm_0000121C >> 29) & 1u;
    uint32_t _rn_0000121C = g_cpu.R[8];
    uint32_t _r_0000121C;
    _r_0000121C = _rn_0000121C ^ _op2_0000121C;
    g_cpu.R[14] = _r_0000121C;
    g_cpu.R[15] = 0x00001220u;
    runtime_tick(_cyc_0000121C);
    /* 00001220  00001220 A sub r10,r10,r5 */
    g_cpu.R[15] = 0x00001220u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001220 = 1u;
    _cyc_00001220 = 1u;
    uint32_t _rm_00001220 = g_cpu.R[5];
    uint32_t _op2_00001220;
    uint32_t _co_00001220;
    _op2_00001220 = _rm_00001220;
    _co_00001220 = cpsr_c();
    uint32_t _rn_00001220 = g_cpu.R[10];
    uint32_t _r_00001220;
    _r_00001220 = _rn_00001220 - _op2_00001220;
    g_cpu.R[10] = _r_00001220;
    g_cpu.R[15] = 0x00001224u;
    runtime_tick(_cyc_00001220);
    /* fall-through to 0x00001224 */
    g_cpu.R[15] = 0x00001224u;
    runtime_dispatch(0x00001224u);
    return;
}

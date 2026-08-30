// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0000275A mode=thumb end=0x00002768
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

OVL_EXPORT void func_0000275A(void) {
    if (gba_mod_function_entry(0x0000275Au, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0000275Au);
    /* 0000275A  0000275a T movs r3,r3,lsl #1 */
    g_cpu.R[15] = 0x0000275Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000275A = 1u;
    _cyc_0000275A = 1u;
    uint32_t _rm_0000275A = g_cpu.R[3];
    uint32_t _op2_0000275A;
    uint32_t _co_0000275A;
    _op2_0000275A = _rm_0000275A << 1;
    _co_0000275A = (_rm_0000275A >> 31) & 1u;
    uint32_t _r_0000275A;
    _r_0000275A = _op2_0000275A;
    arm_set_nzc_logic(_r_0000275A, _co_0000275A);
    g_cpu.R[3] = _r_0000275A;
    g_cpu.R[15] = 0x0000275Cu;
    runtime_tick(_cyc_0000275A);
    /* 0000275C  0000275c T strh r3,[r0,#0x1c] */
    g_cpu.R[15] = 0x0000275Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000275C = 1u;
    _cyc_0000275C = 1u;
    uint32_t _base_0000275C = g_cpu.R[0];
    uint32_t _off_0000275C;
    _off_0000275C = 0x0000001Cu;
    uint32_t _ea_0000275C = _base_0000275C + _off_0000275C;
    uint32_t _post_0000275C = _base_0000275C + _off_0000275C;
    _cyc_0000275C += runtime_mem_cycles(_ea_0000275C, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0000275Cu, _ea_0000275C & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0000275C & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[15] = 0x0000275Eu;
    runtime_tick(_cyc_0000275C);
    /* 0000275E  0000275e T ldrh r2,[r0,#0x1e] */
    g_cpu.R[15] = 0x0000275Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000275E = 1u;
    _cyc_0000275E = 2u;
    uint32_t _base_0000275E = g_cpu.R[0];
    uint32_t _off_0000275E;
    _off_0000275E = 0x0000001Eu;
    uint32_t _ea_0000275E = _base_0000275E + _off_0000275E;
    uint32_t _post_0000275E = _base_0000275E + _off_0000275E;
    _cyc_0000275E += runtime_mem_cycles(_ea_0000275E, 2u, 0u);
    uint32_t _v_0000275E;
    { uint32_t _h = bus_read_u16(_ea_0000275E & ~1u); if (_ea_0000275E & 1u) _v_0000275E = ((_h >> 8) | (_h << 24)); else _v_0000275E = _h; }
    g_cpu.R[2] = _v_0000275E;
    g_cpu.R[15] = 0x00002760u;
    runtime_tick(_cyc_0000275E);
    /* 00002760  00002760 T muls r3,r3,r2 */
    g_cpu.R[15] = 0x00002760u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002760 = 1u;
    _cyc_00002760 = 1u;
    _cyc_00002760 += runtime_mul_cycles(g_cpu.R[3], 1u, 0u);
    uint32_t _r_00002760 = g_cpu.R[3] * g_cpu.R[2];
    g_cpu.R[3] = _r_00002760;
    arm_set_nz(_r_00002760);
    g_cpu.R[15] = 0x00002762u;
    runtime_tick(_cyc_00002760);
    /* 00002762  00002762 T movs r3,r3,lsr #8 */
    g_cpu.R[15] = 0x00002762u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002762 = 1u;
    _cyc_00002762 = 1u;
    uint32_t _rm_00002762 = g_cpu.R[3];
    uint32_t _op2_00002762;
    uint32_t _co_00002762;
    _op2_00002762 = _rm_00002762 >> 8;
    _co_00002762 = (_rm_00002762 >> 7) & 1u;
    uint32_t _r_00002762;
    _r_00002762 = _op2_00002762;
    arm_set_nzc_logic(_r_00002762, _co_00002762);
    g_cpu.R[3] = _r_00002762;
    g_cpu.R[15] = 0x00002764u;
    runtime_tick(_cyc_00002762);
    /* 00002764  00002764 T strh r3,[r0,#0x20] */
    g_cpu.R[15] = 0x00002764u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002764 = 1u;
    _cyc_00002764 = 1u;
    uint32_t _base_00002764 = g_cpu.R[0];
    uint32_t _off_00002764;
    _off_00002764 = 0x00000020u;
    uint32_t _ea_00002764 = _base_00002764 + _off_00002764;
    uint32_t _post_00002764 = _base_00002764 + _off_00002764;
    _cyc_00002764 += runtime_mem_cycles(_ea_00002764, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00002764u, _ea_00002764 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_00002764 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[15] = 0x00002766u;
    runtime_tick(_cyc_00002764);
    /* 00002766  00002766 T bx r12 */
    g_cpu.R[15] = 0x00002766u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00002766 = 1u;
    _cyc_00002766 = 3u;
    uint32_t _bxt_00002766 = g_cpu.R[12];
    g_cpu.R[15] = _bxt_00002766 & ~1u;
    if (_bxt_00002766 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_00002766);
    runtime_dispatch_with_exchange(_bxt_00002766);
    return;
    g_cpu.R[15] = 0x00002768u;
    runtime_tick(_cyc_00002766);
    /* fall-through to 0x00002768 */
    g_cpu.R[15] = 0x00002768u;
    runtime_dispatch(0x00002768u);
    return;
}

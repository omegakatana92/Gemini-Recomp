// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00000748 mode=thumb end=0x00000766
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

OVL_EXPORT void func_00000748(void) {
    if (gba_mod_function_entry(0x00000748u, 1u, &g_cpu)) return;
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00000748u);
    /* 00000748  00000748 T movs r3,#0x18 */
    g_cpu.R[15] = 0x00000748u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000748 = 1u;
    _cyc_00000748 = 1u;
    uint32_t _r_00000748;
    _r_00000748 = 0x00000018u;
    arm_set_nzc_logic(_r_00000748, cpsr_c());
    g_cpu.R[3] = _r_00000748;
    g_cpu.R[15] = 0x0000074Au;
    runtime_tick(_cyc_00000748);
    /* 0000074A  0000074a T muls r3,r3,r0 */
    g_cpu.R[15] = 0x0000074Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000074A = 1u;
    _cyc_0000074A = 1u;
    _cyc_0000074A += runtime_mul_cycles(g_cpu.R[3], 1u, 0u);
    uint32_t _r_0000074A = g_cpu.R[3] * g_cpu.R[0];
    g_cpu.R[3] = _r_0000074A;
    arm_set_nz(_r_0000074A);
    g_cpu.R[15] = 0x0000074Cu;
    runtime_tick(_cyc_0000074A);
    /* 0000074C  0000074c T movs r3,r3,lsl #8 */
    g_cpu.R[15] = 0x0000074Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000074C = 1u;
    _cyc_0000074C = 1u;
    uint32_t _rm_0000074C = g_cpu.R[3];
    uint32_t _op2_0000074C;
    uint32_t _co_0000074C;
    _op2_0000074C = _rm_0000074C << 8;
    _co_0000074C = (_rm_0000074C >> 24) & 1u;
    uint32_t _r_0000074C;
    _r_0000074C = _op2_0000074C;
    arm_set_nzc_logic(_r_0000074C, _co_0000074C);
    g_cpu.R[3] = _r_0000074C;
    g_cpu.R[15] = 0x0000074Eu;
    runtime_tick(_cyc_0000074C);
    /* 0000074E  0000074e T subs r6,r6,r3 */
    g_cpu.R[15] = 0x0000074Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000074E = 1u;
    _cyc_0000074E = 1u;
    uint32_t _rm_0000074E = g_cpu.R[3];
    uint32_t _op2_0000074E;
    uint32_t _co_0000074E;
    _op2_0000074E = _rm_0000074E;
    _co_0000074E = cpsr_c();
    uint32_t _rn_0000074E = g_cpu.R[6];
    uint32_t _r_0000074E;
    _r_0000074E = _rn_0000074E - _op2_0000074E;
    arm_set_nzcv_sub(_rn_0000074E, _op2_0000074E, _r_0000074E);
    g_cpu.R[6] = _r_0000074E;
    g_cpu.R[15] = 0x00000750u;
    runtime_tick(_cyc_0000074E);
    /* 00000750  00000750 T str r6,[r1] */
    g_cpu.R[15] = 0x00000750u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000750 = 1u;
    _cyc_00000750 = 1u;
    uint32_t _base_00000750 = g_cpu.R[1];
    uint32_t _off_00000750;
    _off_00000750 = 0x00000000u;
    uint32_t _ea_00000750 = _base_00000750 + _off_00000750;
    uint32_t _post_00000750 = _base_00000750 + _off_00000750;
    _cyc_00000750 += runtime_mem_cycles(_ea_00000750, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000750u, _ea_00000750 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_00000750 & ~3u, g_cpu.R[6]);
    g_cpu.R[15] = 0x00000752u;
    runtime_tick(_cyc_00000750);
    /* 00000752  00000752 T cmps r2,#0x2f */
    g_cpu.R[15] = 0x00000752u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000752 = 1u;
    _cyc_00000752 = 1u;
    uint32_t _rn_00000752 = g_cpu.R[2];
    uint32_t _r_00000752;
    _r_00000752 = _rn_00000752 - 0x0000002Fu;
    arm_set_nzcv_sub(_rn_00000752, 0x0000002Fu, _r_00000752);
    g_cpu.R[15] = 0x00000754u;
    runtime_tick(_cyc_00000752);
    /* 00000754  00000754 T bgt 0x00000766 */
    g_cpu.R[15] = 0x00000754u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000754 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_00000754 = 3u;
        g_cpu.R[15] = 0x00000766u;
        runtime_tick(_cyc_00000754);
        runtime_dispatch(0x00000766u);
        return;
    }
    g_cpu.R[15] = 0x00000756u;
    runtime_tick(_cyc_00000754);
    /* 00000756  00000756 T movs r6,#0x1a */
    g_cpu.R[15] = 0x00000756u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000756 = 1u;
    _cyc_00000756 = 1u;
    uint32_t _r_00000756;
    _r_00000756 = 0x0000001Au;
    arm_set_nzc_logic(_r_00000756, cpsr_c());
    g_cpu.R[6] = _r_00000756;
    g_cpu.R[15] = 0x00000758u;
    runtime_tick(_cyc_00000756);
    /* 00000758  00000758 T muls r6,r6,r2 */
    g_cpu.R[15] = 0x00000758u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000758 = 1u;
    _cyc_00000758 = 1u;
    _cyc_00000758 += runtime_mul_cycles(g_cpu.R[6], 1u, 0u);
    uint32_t _r_00000758 = g_cpu.R[6] * g_cpu.R[2];
    g_cpu.R[6] = _r_00000758;
    arm_set_nz(_r_00000758);
    g_cpu.R[15] = 0x0000075Au;
    runtime_tick(_cyc_00000758);
    /* 0000075A  0000075a T subs r2,r2,#0x48 */
    g_cpu.R[15] = 0x0000075Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000075A = 1u;
    _cyc_0000075A = 1u;
    uint32_t _rn_0000075A = g_cpu.R[2];
    uint32_t _r_0000075A;
    _r_0000075A = _rn_0000075A - 0x00000048u;
    arm_set_nzcv_sub(_rn_0000075A, 0x00000048u, _r_0000075A);
    g_cpu.R[2] = _r_0000075A;
    g_cpu.R[15] = 0x0000075Cu;
    runtime_tick(_cyc_0000075A);
    /* 0000075C  0000075c T muls r6,r6,r2 */
    g_cpu.R[15] = 0x0000075Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000075C = 1u;
    _cyc_0000075C = 1u;
    _cyc_0000075C += runtime_mul_cycles(g_cpu.R[6], 1u, 0u);
    uint32_t _r_0000075C = g_cpu.R[6] * g_cpu.R[2];
    g_cpu.R[6] = _r_0000075C;
    arm_set_nz(_r_0000075C);
    g_cpu.R[15] = 0x0000075Eu;
    runtime_tick(_cyc_0000075C);
    /* 0000075E  0000075e T movs r3,#0x68 */
    g_cpu.R[15] = 0x0000075Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0000075E = 1u;
    _cyc_0000075E = 1u;
    uint32_t _r_0000075E;
    _r_0000075E = 0x00000068u;
    arm_set_nzc_logic(_r_0000075E, cpsr_c());
    g_cpu.R[3] = _r_0000075E;
    g_cpu.R[15] = 0x00000760u;
    runtime_tick(_cyc_0000075E);
    /* 00000760  00000760 T movs r3,r3,lsl #8 */
    g_cpu.R[15] = 0x00000760u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000760 = 1u;
    _cyc_00000760 = 1u;
    uint32_t _rm_00000760 = g_cpu.R[3];
    uint32_t _op2_00000760;
    uint32_t _co_00000760;
    _op2_00000760 = _rm_00000760 << 8;
    _co_00000760 = (_rm_00000760 >> 24) & 1u;
    uint32_t _r_00000760;
    _r_00000760 = _op2_00000760;
    arm_set_nzc_logic(_r_00000760, _co_00000760);
    g_cpu.R[3] = _r_00000760;
    g_cpu.R[15] = 0x00000762u;
    runtime_tick(_cyc_00000760);
    /* 00000762  00000762 T adds r6,r6,r3 */
    g_cpu.R[15] = 0x00000762u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000762 = 1u;
    _cyc_00000762 = 1u;
    uint32_t _rm_00000762 = g_cpu.R[3];
    uint32_t _op2_00000762;
    uint32_t _co_00000762;
    _op2_00000762 = _rm_00000762;
    _co_00000762 = cpsr_c();
    uint32_t _rn_00000762 = g_cpu.R[6];
    uint32_t _r_00000762;
    _r_00000762 = _rn_00000762 + _op2_00000762;
    arm_set_nzcv_add(_rn_00000762, _op2_00000762, _r_00000762);
    g_cpu.R[6] = _r_00000762;
    g_cpu.R[15] = 0x00000764u;
    runtime_tick(_cyc_00000762);
    /* 00000764  00000764 T str r6,[r1,#0x4] */
    g_cpu.R[15] = 0x00000764u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00000764 = 1u;
    _cyc_00000764 = 1u;
    uint32_t _base_00000764 = g_cpu.R[1];
    uint32_t _off_00000764;
    _off_00000764 = 0x00000004u;
    uint32_t _ea_00000764 = _base_00000764 + _off_00000764;
    uint32_t _post_00000764 = _base_00000764 + _off_00000764;
    _cyc_00000764 += runtime_mem_cycles(_ea_00000764, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x00000764u, _ea_00000764 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_00000764 & ~3u, g_cpu.R[6]);
    g_cpu.R[15] = 0x00000766u;
    runtime_tick(_cyc_00000764);
    /* fall-through to 0x00000766 */
    g_cpu.R[15] = 0x00000766u;
    runtime_dispatch(0x00000766u);
    return;
}

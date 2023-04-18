# TMC2240 configuration
# <kenneth.lin.gd.cn@gmail.com>

import math, logging
from . import bus, tmc, tmc_uart, tmc2130

TMC_FREQUENCY=10000000.

Registers = {
    "GCONF":                0x00,
    "GSTAT":                0x01,
    "IFCNT":                0x02,
    "SLAVECONF":            0x03,
    "IOIN":                 0x04,
    "DRV_CONF":             0x0A,
    "GLOBALSCALER":         0x0B,
    "IHOLD_IRUN":           0x10,
    "TPOWERDOWN":           0x11,
    "TSTEP":                0x12,
    "TPWMTHRS":             0x13,
    "TCOOLTHRS":            0x14,
    "THIGH":                0x15,
    "DIRECT_MODE":          0x2d,
    "ENCMODE":              0x38,
    "X_ENC":                0x39,
    "ENC_CONST":            0x3a,
    "ENC_STATUS":           0x3b,
    "ENC_LATCH":            0x3c,
    "ADC_VSUPPLY_AIN":      0x50,
    "ADC_TEMP":             0x51,
    "OTW_OV_VTH":           0x52,
    "MSLUT_0":              0x60,
    "MSLUT_1":              0x61,
    "MSLUT_2":              0x62,
    "MSLUT_3":              0x63,
    "MSLUT_4":              0x64,
    "MSLUT_5":              0x65,
    "MSLUT_6":              0x66,
    "MSLUT_7":              0x67,
    "MSLUTSEL":             0x68,
    "MSLUTSTART":           0x69,
    "MSCNT":                0x6a,
    "MSCURACT":             0x6b,
    "CHOPCONF":             0x6c,
    "COOLCONF":             0x6d,
    "DRV_STATUS":           0x6f,
    "PWMCONF":              0x70,
    "PWM_SCALE":            0x71,
    "PWM_AUTO":             0x72,
    # "SG4_THRS":             0x74,
    "SGTHRS":               0x74,
    "SG4_RESULT":           0x75,
    "SG4_IND":              0x76
}

ReadRegisters = [
    "GCONF", "CHOPCONF", "GSTAT", "DRV_STATUS", "IOIN",
    "MSCNT", "MSCURACT", "PWM_SCALE", "PWM_AUTO", "IFCNT"
]

Fields = {}

Fields["GCONF"] = {
    "fast_standstill":          0x01 << 1,
    "en_pwm_mode":              0x01 << 2,
    "multistep_filt":           0x01 << 3,
    "shaft":                    0x01 << 4,
    "diag0_error":              0x01 << 5,
    "diag0_otpw":               0x01 << 6,
    "diag0_stall":              0x01 << 7,
    "diag1_stall":              0x01 << 8,
    "diag1_index":              0x01 << 9,
    "diag1_onstate":            0x01 << 10,
    "diag0_pushpull":           0x01 << 12,
    "diag1_pushpull":           0x01 << 13,
    "small_hysteresis":         0x01 << 14,
    "stop_enable":              0x01 << 15,
    "direct_mode":              0x01 << 16,
}

Fields["GSTAT"] = {
    "reset":                    0x01 << 0,
    "drv_err":                  0x01 << 1,
    "uv_cp":                    0x01 << 2,
    "register_reset":           0x01 << 3,
    "vm_uvlo":                  0x01 << 4
}

Fields["IOIN"] = {
    "step":                     0x01 << 0,
    "dir":                      0x01 << 1,
    "encb":                     0x01 << 2,
    "enca":                     0x01 << 3,
    "drv_enn":                  0x01 << 4,
    "encn":                     0x01 << 5,
    "uart_en":                  0x01 << 6,
    "reserved":                 0x01 << 7,
    "comp_a":                   0x01 << 8,
    "comp_b":                   0x01 << 9,
    "comp_a1_a2":               0x01 << 10,
    "comp_b1_b2":               0x01 << 11,
    "version":                  0xff << 24
}

Fields["GLOBALSCALER"] = {
    "globalscaler":             0xff << 0
}

Fields["IHOLD_IRUN"] = {
    "ihold":                    0x1f << 0,
    "irun":                     0x1f << 8,
    "iholddelay":               0x0f << 16,
    "irundelay":                0x0f << 24
}

Fields["TPOWERDOWN"] = {
    "tpowerdown":               0xff
}

Fields["TSTEP"] = {
    "tstep":                    0xfffff << 0
}

Fields["TPWMTHRS"] = {
    "tpwmthrs":                 0xfffff << 0
}

Fields["TCOOLTHRS"] = {
    "tcoolthrs":                0xfffff << 0
}

Fields["THIGH"] = {
    "thigh":                    0xfffff << 0
}

Fields["DIRECT_MODE"] = {
    "direct_coil_a":            0x1ff << 0,
    "direct_coil_b":            0x1ff << 16
}

Fields["ENCMODE"] = {
    "pol_a":                    0x01 << 0,
    "pol_b":                    0x01 << 1,
    "pol_n":                    0x01 << 2,
    "ignore_ab":                0x01 << 3,
    "clr_cont":                 0x01 << 4,
    "clr_once":                 0x01 << 5,
    "pos_neg_edge":             0x03 << 6,
    "clr_enc_x":                0x01 << 8,
    "enc_sel_decimal":          0x01 << 10
}

Fields["X_ENC"] = {
    "x_enc":                    0xffffffff << 0
}

Fields["ENC_CONST"] = {
    "enc_const":                0xffffffff << 0
}

Fields["ENC_STATUS"] = {
    "n_event":                  0x01 << 0
}

Fields["ENC_LATCH"] = {
    "enc_latch":                0xffffffff << 0
}

Fields["MSLUT_0"] = {
    "mslut_0":                  0xffffffff << 0
}

Fields["MSLUT_1"] = {
    "mslut_1":                  0xffffffff << 0
}

Fields["MSLUT_2"] = {
    "mslut_2":                  0xffffffff << 0
}

Fields["MSLUT_3"] = {
    "mslut_3":                  0xffffffff << 0
}

Fields["MSLUT_4"] = {
    "mslut_4":                  0xffffffff << 0
}

Fields["MSLUT_5"] = {
    "mslut_5":                  0xffffffff << 0
}

Fields["MSLUT_6"] = {
    "mslut_6":                  0xffffffff << 0
}

Fields["MSLUT_7"] = {
    "mslut_7":                  0xffffffff << 0
}

Fields["MSLUTSEL"] = {
    "w0":                       0x03 << 0,
    "w1":                       0x03 << 2,
    "w2":                       0x03 << 4,
    "w3":                       0x03 << 6,
    "x1":                       0xff << 8,
    "x2":                       0xff << 16,
    "x3":                       0xff << 24
}

Fields["MSLUTSTART"] = {
    "start_sin":                0xff << 0,
    "start_sin90":              0xff << 16,
    "offset_sin90":             0xff << 24
}

Fields["MSCNT"] = {
    "mscnt":                    0x3ff << 0
}

Fields["MSCURACT"] = {
    "cur_b":                    0x1ff << 0,
    "cur_a":                    0x1ff << 16
}

Fields["CHOPCONF"] = {
    "toff":                     0x0F << 0,
    "hstrt":                    0x07 << 4,
    "hend":                     0x0F << 7,
    "fd3":                      0x01 << 11,
    "disfdcc":                  0x01 << 12,
    "chm":                      0x01 << 14,
    "tbl":                      0x03 << 15,
    "vhighfs":                  0x01 << 18,
    "vhighchm":                 0x01 << 19,
    "tpfd":                     0x0F << 20, # midrange resonances
    "mres":                     0x0F << 24,
    "intpol":                   0x01 << 28,
    "dedge":                    0x01 << 29,
    "diss2g":                   0x01 << 30,
    "diss2vs":                  0x01 << 31
}

Fields["COOLCONF"] = {
    "semin":                    0x0f << 0,
    "seup":                     0x03 << 5,
    "semax":                    0x0f << 8,
    "sedn":                     0x03 << 13,
    "seimin":                   0x01 << 15,
    "sgt":                      0x7f << 16,
    "sfilt":                    0x01 << 24
}

Fields["DRV_STATUS"] = {
    "sg_result":                0x3FF << 0,
    "s2vsa":                    0x01 << 12,
    "s2vsb":                    0x01 << 13,
    "stealth":                  0x01 << 14,
    "fsactive":                 0x01 << 15,
    "csactual":                 0xFF << 16,
    "stallguard":               0x01 << 24,
    "ot":                       0x01 << 25,
    "otpw":                     0x01 << 26,
    "s2ga":                     0x01 << 27,
    "s2gb":                     0x01 << 28,
    "ola":                      0x01 << 29,
    "olb":                      0x01 << 30,
    "stst":                     0x01 << 31
}

Fields["PWMCONF"] = {
    "pwm_ofs":                  0xFF << 0,
    "pwm_grad":                 0xFF << 8,
    "pwm_freq":                 0x03 << 16,
    "pwm_autoscale":            0x01 << 18,
    "pwm_autograd":             0x01 << 19,
    "freewheel":                0x03 << 20,
    "pwm_meas_sd_enable":       0x01 << 22,
    "pwm_dis_reg_stst":         0x01 << 23,
    "pwm_reg":                  0x0F << 24,
    "pwm_lim":                  0x0F << 28
}

Fields["PWM_SCALE"] = {
    "pwm_scale_sum":            0xff << 0,
    "pwm_scale_auto":           0x1ff << 16
}

Fields["IFCNT"] = {
    "ifcnt":                    0xff
}

'''
Fields["SG4_THRS"] = {
    "sg4_thrs":                 0xff,          
    "sg4_filt_en":              0x01 << 8,
    "sg4_angle_offset":         0x01 << 9
}
'''

Fields["SGTHRS"] = {
    "sgthrs":                   0xff,
    "sg4_filt_en":              0x01 << 8,
    "sg4_angle_offset":         0x01 << 9
}

Fields["SG4_RESULT"] = {
    "sg4_result":               0x3ff << 9
}

Fields["DRV_CONF"] = {
    "current_range":            0x03 << 0,
    "slope_control":            0x03 << 4,
}

Fields["OTW_OV_VTH"] = {
        "overtempperwarning_vth":  0x1ff << 16
}

SignedFields = ["cur_a", "cur_b", "sgt",
                "pwm_scale_auto"]
FieldFormatters = dict(tmc2130.FieldFormatters)

######################################################################
# TMC stepper current config helper
######################################################################

MAX_CURRENT = 2.000

class TMC2240CurrentHelper:
    def __init__(self, config, mcu_tmc):
        self.printer = config.get_printer()
        self.name = config.get_name().split()[-1]
        self.mcu_tmc = mcu_tmc
        self.fields = mcu_tmc.get_fields()
        run_current = config.getfloat('run_current',
                                      above=0., maxval=MAX_CURRENT)
        hold_current = config.getfloat('hold_current', MAX_CURRENT,
                                       above=0., maxval=MAX_CURRENT)
        self.req_hold_current = hold_current
        self._set_globalscaler(run_current)
        irun, ihold = self._calc_current(run_current, hold_current)
        self.fields.set_field("ihold", ihold)
        self.fields.set_field("irun", irun)
        # self.fields.set_field("irun", 31)
    def _set_globalscaler(self, current):
        globalscaler = int((current * 256. * math.sqrt(2.)
                            / 2.0 + .5))
        globalscaler = max(32, globalscaler)
        if globalscaler >= 256:
            globalscaler = 0
        self.fields.set_field("globalscaler", globalscaler)
        # self.fields.set_field("globalscaler", 0)
    def _calc_current_bits(self, current):
        globalscaler = self.fields.get_field("globalscaler")
        if not globalscaler:
            globalscaler = 256
        cs = int((current * 256. * 32. * math.sqrt(2.)) / (3. * globalscaler) -1. + .5)
        return max(0, min(31, cs))
    def _calc_current(self, run_current, hold_current):
        irun = self._calc_current_bits(run_current)
        ihold = self._calc_current_bits(min(hold_current, run_current))
        return irun, ihold
    def _calc_current_from_field(self, field_name):
        globalscaler = self.fields.get_field("globalscaler")
        if not globalscaler:
            globalscaler = 256
        bits = self.fields.get_field(field_name)
        return (globalscaler * (bits + 1) * 0.325
                / (256. * 32. * math.sqrt(2.)))
    def get_current(self):
        run_current = self._calc_current_from_field("irun")
        hold_current = self._calc_current_from_field("ihold")
        return run_current, hold_current, self.req_hold_current, MAX_CURRENT
    def set_current(self, run_current, hold_current, print_time):
        self.req_hold_current = hold_current
        irun, ihold = self._calc_current(run_current, hold_current)
        self.fields.set_field("ihold", ihold)
        val = self.fields.set_field("irun", irun)
        # self.printer.command_error("val = %d, print_time = ", val, print_time)
        self.mcu_tmc.set_register("IHOLD_IRUN", val, print_time)

######################################################################
# TMC2240 printer object
######################################################################

class TMC2240:
    def __init__(self, config):
        # Setup mcu communication
        self.fields = tmc.FieldHelper(Fields, SignedFields, FieldFormatters)
        self.mcu_tmc = tmc2130.MCU_TMC_SPI(config, Registers, self.fields)
        # self.mcu_tmc = tmc_uart.MCU_TMC_uart(config, Registers, self.fields, 4)
        # Setup fields for UART
        # self.fields.set_field("uart_en", True)

        # Allow virtual pins to be created
        tmc.TMCVirtualPinHelper(config, self.mcu_tmc)
        # Register commands
        current_helper = TMC2240CurrentHelper(config, self.mcu_tmc)
        cmdhelper = tmc.TMCCommandHelper(config, self.mcu_tmc, current_helper)
        cmdhelper.setup_register_dump(ReadRegisters)
        self.get_phase_offset = cmdhelper.get_phase_offset
        self.get_status = cmdhelper.get_status
        # Setup basic register values
        # tmc.TMCStealthchopHelper(config, self.mcu_tmc, TMC_FREQUENCY)
        tmc.TMC2240StealthchopHelper(config, self.mcu_tmc, TMC_FREQUENCY)
        set_config_field = self.fields.set_config_field
        
        # set_config_field(config, "en_pwm_mode", 1)
        set_config_field(config, "reset", 1)
        set_config_field(config, "drv_err", 1)
        set_config_field(config, "uv_cp", 1)
        set_config_field(config, "register_reset", 1)
        set_config_field(config, "vm_uvlo", 1)
        # set_config_field(config, "tpwmthrs", 100)
        # set_config_field(config, "intpol", 0)
        # set_config_field(config, "dedge", 0)
        # set_config_field(config, "disfdcc", 1)
        set_config_field(config, "toff", 3)
        set_config_field(config, "hstrt", 5)
        set_config_field(config, "hend", 2)
        set_config_field(config, "fd3", 0)
        set_config_field(config, "disfdcc", 0)
        set_config_field(config, "chm", 0)
        set_config_field(config, "tbl", 2)
        set_config_field(config, "vhighfs", 0)
        set_config_field(config, "vhighchm", 0)
        set_config_field(config, "tpfd", 4)
        set_config_field(config, "diss2g", 0)
        set_config_field(config, "diss2vs", 0)
        set_config_field(config, "semin", 0)
        set_config_field(config, "seup", 0)
        set_config_field(config, "semax", 0)
        set_config_field(config, "sedn", 0)
        set_config_field(config, "seimin", 0)
        set_config_field(config, "sgt", 0)
        set_config_field(config, "sfilt", 0)
        set_config_field(config, "iholddelay", 6)
        set_config_field(config, "pwm_ofs", 30)
        set_config_field(config, "pwm_grad", 0)
        set_config_field(config, "pwm_freq", 0)
        set_config_field(config, "pwm_autoscale", True)
        set_config_field(config, "pwm_autograd", True)
        set_config_field(config, "freewheel", 0)
        set_config_field(config, "pwm_reg", 4)
        set_config_field(config, "pwm_lim", 12)
        set_config_field(config, "tpowerdown", 10)
        set_config_field(config, "current_range", 2)
        set_config_field(config, "overtempperwarning_vth", 0x1ff)


def load_config_prefix(config):
    return TMC2240(config)

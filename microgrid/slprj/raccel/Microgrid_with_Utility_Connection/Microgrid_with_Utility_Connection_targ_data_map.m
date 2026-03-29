    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 14;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.Bat
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 30;
            section.data(30)  = dumData; %prealloc

                    ;% rtP.Pref1
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Pref2
                    section.data(2).logicalSrcIdx = 2;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Qref1
                    section.data(3).logicalSrcIdx = 3;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Qref2
                    section.data(4).logicalSrcIdx = 4;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.droopFC1
                    section.data(5).logicalSrcIdx = 5;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.droopFC2
                    section.data(6).logicalSrcIdx = 6;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.droopP1
                    section.data(7).logicalSrcIdx = 7;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.droopP2
                    section.data(8).logicalSrcIdx = 8;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.droopQ1
                    section.data(9).logicalSrcIdx = 9;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.droopQ2
                    section.data(10).logicalSrcIdx = 10;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.timeACLoadCurtail
                    section.data(11).logicalSrcIdx = 11;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.timeSolarCurtail
                    section.data(12).logicalSrcIdx = 12;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.ActivePowerReference_OutValues
                    section.data(13).logicalSrcIdx = 13;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.ActivePowerReference1_OutValues
                    section.data(14).logicalSrcIdx = 14;
                    section.data(14).dtTransOffset = 18;

                    ;% rtP.ActivePowerReference_OutValues_bebnwmzwy2
                    section.data(15).logicalSrcIdx = 15;
                    section.data(15).dtTransOffset = 24;

                    ;% rtP.ReactivePowerReference_OutValues
                    section.data(16).logicalSrcIdx = 16;
                    section.data(16).dtTransOffset = 31;

                    ;% rtP.RepeatingSequenceInterpolated_OutValues
                    section.data(17).logicalSrcIdx = 17;
                    section.data(17).dtTransOffset = 34;

                    ;% rtP.Qref_OutValues
                    section.data(18).logicalSrcIdx = 18;
                    section.data(18).dtTransOffset = 38;

                    ;% rtP.ActivePowerReference1_OutValues_klrehomfur
                    section.data(19).logicalSrcIdx = 19;
                    section.data(19).dtTransOffset = 42;

                    ;% rtP.ActivePowerReference_TimeValues
                    section.data(20).logicalSrcIdx = 20;
                    section.data(20).dtTransOffset = 48;

                    ;% rtP.ActivePowerReference1_TimeValues
                    section.data(21).logicalSrcIdx = 21;
                    section.data(21).dtTransOffset = 54;

                    ;% rtP.ActivePowerReference_TimeValues_hsfcpyq3q0
                    section.data(22).logicalSrcIdx = 22;
                    section.data(22).dtTransOffset = 60;

                    ;% rtP.ReactivePowerReference_TimeValues
                    section.data(23).logicalSrcIdx = 23;
                    section.data(23).dtTransOffset = 67;

                    ;% rtP.RepeatingSequenceInterpolated_TimeValues
                    section.data(24).logicalSrcIdx = 24;
                    section.data(24).dtTransOffset = 70;

                    ;% rtP.Qref_TimeValues
                    section.data(25).logicalSrcIdx = 25;
                    section.data(25).dtTransOffset = 74;

                    ;% rtP.ActivePowerReference1_TimeValues_bd5quwtzfs
                    section.data(26).logicalSrcIdx = 26;
                    section.data(26).dtTransOffset = 78;

                    ;% rtP.RMS_TrueRMS
                    section.data(27).logicalSrcIdx = 27;
                    section.data(27).dtTransOffset = 84;

                    ;% rtP.RMS1_TrueRMS
                    section.data(28).logicalSrcIdx = 28;
                    section.data(28).dtTransOffset = 85;

                    ;% rtP.RMS2_TrueRMS
                    section.data(29).logicalSrcIdx = 29;
                    section.data(29).dtTransOffset = 86;

                    ;% rtP.RMS3_TrueRMS
                    section.data(30).logicalSrcIdx = 30;
                    section.data(30).dtTransOffset = 87;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% rtP.LimitedCounter_uplimit
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.LimitedCounter_uplimit_a5gapu1xqz
                    section.data(2).logicalSrcIdx = 32;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.LimitedCounter_uplimit_fr3ltu5dye
                    section.data(3).logicalSrcIdx = 33;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.LimitedCounter_uplimit_jdyhzl0pxe
                    section.data(4).logicalSrcIdx = 34;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.LimitedCounter_uplimit_nv2ad4m4px
                    section.data(5).logicalSrcIdx = 35;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.LimitedCounter_uplimit_fa43daliud
                    section.data(6).logicalSrcIdx = 36;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.LimitedCounter_uplimit_giwpzn03c5
                    section.data(7).logicalSrcIdx = 37;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 253;
            section.data(253)  = dumData; %prealloc

                    ;% rtP.Switch_Threshold
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Gain_Gain
                    section.data(2).logicalSrcIdx = 39;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Gain1_Gain
                    section.data(3).logicalSrcIdx = 40;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Gain_Gain_cokqivx3ng
                    section.data(4).logicalSrcIdx = 41;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Gain1_Gain_dego4ryaq1
                    section.data(5).logicalSrcIdx = 42;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Gain_Gain_elg253mago
                    section.data(6).logicalSrcIdx = 43;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Gain1_Gain_lxf1kzrtbn
                    section.data(7).logicalSrcIdx = 44;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Gain_Gain_ejhgmi3ncs
                    section.data(8).logicalSrcIdx = 45;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Gain1_Gain_kg0lu4a11x
                    section.data(9).logicalSrcIdx = 46;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(10).logicalSrcIdx = 47;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.UnitDelay2_InitialCondition
                    section.data(11).logicalSrcIdx = 48;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.Step2_Y0
                    section.data(12).logicalSrcIdx = 49;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.Step2_YFinal
                    section.data(13).logicalSrcIdx = 50;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.Step3_Y0
                    section.data(14).logicalSrcIdx = 51;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.Step3_YFinal
                    section.data(15).logicalSrcIdx = 52;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.SampleTimeMath_WtEt
                    section.data(16).logicalSrcIdx = 53;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.Gain2_Gain
                    section.data(17).logicalSrcIdx = 54;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.SampleTimeMath_WtEt_nu0w3zkaov
                    section.data(18).logicalSrcIdx = 55;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.Gain3_Gain
                    section.data(19).logicalSrcIdx = 56;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.Gain5_Gain
                    section.data(20).logicalSrcIdx = 57;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.Gain6_Gain
                    section.data(21).logicalSrcIdx = 58;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.DiscreteTimeIntegrator_gainval
                    section.data(22).logicalSrcIdx = 59;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.DiscreteTimeIntegrator_IC
                    section.data(23).logicalSrcIdx = 60;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.Gain4_Gain
                    section.data(24).logicalSrcIdx = 61;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.DiscreteTimeIntegrator1_gainval
                    section.data(25).logicalSrcIdx = 62;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.DiscreteTimeIntegrator1_IC
                    section.data(26).logicalSrcIdx = 63;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.UnitDelay_InitialCondition_kqib5fg144
                    section.data(27).logicalSrcIdx = 64;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.DiscreteTimeIntegrator3_gainval
                    section.data(28).logicalSrcIdx = 65;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.DiscreteTimeIntegrator3_IC
                    section.data(29).logicalSrcIdx = 66;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.UnitDelay1_InitialCondition
                    section.data(30).logicalSrcIdx = 67;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.DiscreteTimeIntegrator2_gainval
                    section.data(31).logicalSrcIdx = 68;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.DiscreteTimeIntegrator2_IC
                    section.data(32).logicalSrcIdx = 69;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.Gain1_Gain_gnef1nrdfd
                    section.data(33).logicalSrcIdx = 70;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.UnitDelay_InitialCondition_hbbfrekxgi
                    section.data(34).logicalSrcIdx = 71;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.SampleTimeMath_WtEt_kc032qt0r2
                    section.data(35).logicalSrcIdx = 72;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.Switch_Threshold_lhpn1uq5v2
                    section.data(36).logicalSrcIdx = 73;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.DiscreteTimeIntegrator_gainval_hugtrzkn4q
                    section.data(37).logicalSrcIdx = 74;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.DiscreteTimeIntegrator_UpperSat
                    section.data(38).logicalSrcIdx = 75;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.DiscreteTimeIntegrator_LowerSat
                    section.data(39).logicalSrcIdx = 76;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.FromWorkspace_Time0
                    section.data(40).logicalSrcIdx = 77;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.FromWorkspace_Data0
                    section.data(41).logicalSrcIdx = 78;
                    section.data(41).dtTransOffset = 10039;

                    ;% rtP.DiscreteTimeIntegrator_gainval_pzbreotgy5
                    section.data(42).logicalSrcIdx = 79;
                    section.data(42).dtTransOffset = 20039;

                    ;% rtP.DiscreteTimeIntegrator_IC_as0hk5p0tf
                    section.data(43).logicalSrcIdx = 80;
                    section.data(43).dtTransOffset = 20040;

                    ;% rtP.UnitDelay_InitialCondition_dbdlifayvx
                    section.data(44).logicalSrcIdx = 81;
                    section.data(44).dtTransOffset = 20041;

                    ;% rtP.DiscreteTimeIntegrator_gainval_ne5jwwt53f
                    section.data(45).logicalSrcIdx = 82;
                    section.data(45).dtTransOffset = 20042;

                    ;% rtP.DiscreteTimeIntegrator_IC_d4puklsxam
                    section.data(46).logicalSrcIdx = 83;
                    section.data(46).dtTransOffset = 20043;

                    ;% rtP.UnitDelay_InitialCondition_o42cm44ucv
                    section.data(47).logicalSrcIdx = 84;
                    section.data(47).dtTransOffset = 20044;

                    ;% rtP.SampleTimeMath_WtEt_l5pabormle
                    section.data(48).logicalSrcIdx = 85;
                    section.data(48).dtTransOffset = 20045;

                    ;% rtP.DiscreteTimeIntegrator_gainval_hthrzu5hza
                    section.data(49).logicalSrcIdx = 86;
                    section.data(49).dtTransOffset = 20046;

                    ;% rtP.DiscreteTimeIntegrator_IC_lphwc0eks5
                    section.data(50).logicalSrcIdx = 87;
                    section.data(50).dtTransOffset = 20047;

                    ;% rtP.UnitDelay_InitialCondition_kgaphbkgph
                    section.data(51).logicalSrcIdx = 88;
                    section.data(51).dtTransOffset = 20048;

                    ;% rtP.DiscreteTimeIntegrator_gainval_dwjrigelj0
                    section.data(52).logicalSrcIdx = 89;
                    section.data(52).dtTransOffset = 20049;

                    ;% rtP.DiscreteTimeIntegrator_IC_izlyzkvwk0
                    section.data(53).logicalSrcIdx = 90;
                    section.data(53).dtTransOffset = 20050;

                    ;% rtP.UnitDelay_InitialCondition_nxouw4fmzy
                    section.data(54).logicalSrcIdx = 91;
                    section.data(54).dtTransOffset = 20051;

                    ;% rtP.DiscreteTimeIntegrator_gainval_mzosb4boys
                    section.data(55).logicalSrcIdx = 92;
                    section.data(55).dtTransOffset = 20052;

                    ;% rtP.DiscreteTimeIntegrator_IC_ndnh2qpnoo
                    section.data(56).logicalSrcIdx = 93;
                    section.data(56).dtTransOffset = 20053;

                    ;% rtP.Switch1_Threshold
                    section.data(57).logicalSrcIdx = 94;
                    section.data(57).dtTransOffset = 20054;

                    ;% rtP.Vref_Value
                    section.data(58).logicalSrcIdx = 95;
                    section.data(58).dtTransOffset = 20055;

                    ;% rtP.Switch_Threshold_l0ksha3rpb
                    section.data(59).logicalSrcIdx = 96;
                    section.data(59).dtTransOffset = 20056;

                    ;% rtP.Switch2_Threshold
                    section.data(60).logicalSrcIdx = 97;
                    section.data(60).dtTransOffset = 20057;

                    ;% rtP.Switch1_Threshold_dppanslnos
                    section.data(61).logicalSrcIdx = 98;
                    section.data(61).dtTransOffset = 20058;

                    ;% rtP.UnitDelay1_InitialCondition_msjs0amalu
                    section.data(62).logicalSrcIdx = 99;
                    section.data(62).dtTransOffset = 20059;

                    ;% rtP.Switch_Threshold_kxk3rwkxpp
                    section.data(63).logicalSrcIdx = 100;
                    section.data(63).dtTransOffset = 20060;

                    ;% rtP.Switch2_Threshold_hv3sf2fjqq
                    section.data(64).logicalSrcIdx = 101;
                    section.data(64).dtTransOffset = 20061;

                    ;% rtP.Gain1_Gain_f0wcat0bhl
                    section.data(65).logicalSrcIdx = 102;
                    section.data(65).dtTransOffset = 20062;

                    ;% rtP.Gain2_Gain_pnyouh4nr5
                    section.data(66).logicalSrcIdx = 103;
                    section.data(66).dtTransOffset = 20063;

                    ;% rtP.PowerTransferLimitW_Value
                    section.data(67).logicalSrcIdx = 104;
                    section.data(67).dtTransOffset = 20064;

                    ;% rtP.SampleTimeMath_WtEt_okj5ol00ye
                    section.data(68).logicalSrcIdx = 105;
                    section.data(68).dtTransOffset = 20065;

                    ;% rtP.UnitDelay_InitialCondition_eem2mixovl
                    section.data(69).logicalSrcIdx = 106;
                    section.data(69).dtTransOffset = 20066;

                    ;% rtP.DiscreteTimeIntegrator_gainval_b1zgwfhydp
                    section.data(70).logicalSrcIdx = 107;
                    section.data(70).dtTransOffset = 20067;

                    ;% rtP.DiscreteTimeIntegrator_IC_it5leog4d0
                    section.data(71).logicalSrcIdx = 108;
                    section.data(71).dtTransOffset = 20068;

                    ;% rtP.DiscreteTimeIntegrator_UpperSat_ncic3n3zsi
                    section.data(72).logicalSrcIdx = 109;
                    section.data(72).dtTransOffset = 20069;

                    ;% rtP.DiscreteTimeIntegrator_LowerSat_atqd25vkki
                    section.data(73).logicalSrcIdx = 110;
                    section.data(73).dtTransOffset = 20070;

                    ;% rtP.DiscreteTimeIntegrator_gainval_dhjlh0z0on
                    section.data(74).logicalSrcIdx = 111;
                    section.data(74).dtTransOffset = 20071;

                    ;% rtP.DiscreteTimeIntegrator_IC_fncm3u0aqk
                    section.data(75).logicalSrcIdx = 112;
                    section.data(75).dtTransOffset = 20072;

                    ;% rtP.DiscreteTimeIntegrator_UpperSat_oatrdvkozn
                    section.data(76).logicalSrcIdx = 113;
                    section.data(76).dtTransOffset = 20073;

                    ;% rtP.DiscreteTimeIntegrator_LowerSat_joabkbxppi
                    section.data(77).logicalSrcIdx = 114;
                    section.data(77).dtTransOffset = 20074;

                    ;% rtP.DiscreteTimeIntegrator_gainval_d3mb3dezhy
                    section.data(78).logicalSrcIdx = 115;
                    section.data(78).dtTransOffset = 20075;

                    ;% rtP.DiscreteTimeIntegrator_IC_aefe120qnx
                    section.data(79).logicalSrcIdx = 116;
                    section.data(79).dtTransOffset = 20076;

                    ;% rtP.DiscreteTimeIntegrator_UpperSat_aoe5l52jc3
                    section.data(80).logicalSrcIdx = 117;
                    section.data(80).dtTransOffset = 20077;

                    ;% rtP.DiscreteTimeIntegrator_LowerSat_anwtlnnvyp
                    section.data(81).logicalSrcIdx = 118;
                    section.data(81).dtTransOffset = 20078;

                    ;% rtP.DiscreteTimeIntegrator_gainval_arnhnmpwrf
                    section.data(82).logicalSrcIdx = 119;
                    section.data(82).dtTransOffset = 20079;

                    ;% rtP.DiscreteTimeIntegrator_IC_kcon4m0msm
                    section.data(83).logicalSrcIdx = 120;
                    section.data(83).dtTransOffset = 20080;

                    ;% rtP.ACLoadLimitW_Value
                    section.data(84).logicalSrcIdx = 121;
                    section.data(84).dtTransOffset = 20081;

                    ;% rtP.Gain_Gain_fra5iqtqqa
                    section.data(85).logicalSrcIdx = 122;
                    section.data(85).dtTransOffset = 20082;

                    ;% rtP.Gain1_Gain_mo4nf0dniz
                    section.data(86).logicalSrcIdx = 123;
                    section.data(86).dtTransOffset = 20083;

                    ;% rtP.SampleTimeMath_WtEt_hcihb2t1cf
                    section.data(87).logicalSrcIdx = 124;
                    section.data(87).dtTransOffset = 20084;

                    ;% rtP.Gain2_Gain_i2sa11c4ji
                    section.data(88).logicalSrcIdx = 125;
                    section.data(88).dtTransOffset = 20085;

                    ;% rtP.Gain3_Gain_hsq3e4cdrg
                    section.data(89).logicalSrcIdx = 126;
                    section.data(89).dtTransOffset = 20086;

                    ;% rtP.Gain_Gain_apoljudo5s
                    section.data(90).logicalSrcIdx = 127;
                    section.data(90).dtTransOffset = 20087;

                    ;% rtP.FCPVlimitW_Value
                    section.data(91).logicalSrcIdx = 128;
                    section.data(91).dtTransOffset = 20088;

                    ;% rtP.SampleTimeMath_WtEt_clhmrxjzgb
                    section.data(92).logicalSrcIdx = 129;
                    section.data(92).dtTransOffset = 20089;

                    ;% rtP.Gain3_Gain_hmsoxpgsx5
                    section.data(93).logicalSrcIdx = 130;
                    section.data(93).dtTransOffset = 20090;

                    ;% rtP.DiscreteTimeIntegrator_gainval_bdsxbltwql
                    section.data(94).logicalSrcIdx = 131;
                    section.data(94).dtTransOffset = 20091;

                    ;% rtP.DiscreteTimeIntegrator_IC_ptwc2dagcm
                    section.data(95).logicalSrcIdx = 132;
                    section.data(95).dtTransOffset = 20092;

                    ;% rtP.Gain4_Gain_hvjo1v1et3
                    section.data(96).logicalSrcIdx = 133;
                    section.data(96).dtTransOffset = 20093;

                    ;% rtP.DiscreteTimeIntegrator_gainval_p0p2jxqvmr
                    section.data(97).logicalSrcIdx = 134;
                    section.data(97).dtTransOffset = 20094;

                    ;% rtP.DiscreteTimeIntegrator_IC_emgr2bsszy
                    section.data(98).logicalSrcIdx = 135;
                    section.data(98).dtTransOffset = 20095;

                    ;% rtP.Switch1_Threshold_mpiqdklntk
                    section.data(99).logicalSrcIdx = 136;
                    section.data(99).dtTransOffset = 20096;

                    ;% rtP.Vref_Value_aqcie3me1y
                    section.data(100).logicalSrcIdx = 137;
                    section.data(100).dtTransOffset = 20097;

                    ;% rtP.Switch_Threshold_nd0e1aegte
                    section.data(101).logicalSrcIdx = 138;
                    section.data(101).dtTransOffset = 20098;

                    ;% rtP.Switch2_Threshold_mqicbyegmp
                    section.data(102).logicalSrcIdx = 139;
                    section.data(102).dtTransOffset = 20099;

                    ;% rtP.Switch1_Threshold_clak4nhhfz
                    section.data(103).logicalSrcIdx = 140;
                    section.data(103).dtTransOffset = 20100;

                    ;% rtP.Switch_Threshold_diazeczrov
                    section.data(104).logicalSrcIdx = 141;
                    section.data(104).dtTransOffset = 20101;

                    ;% rtP.Switch2_Threshold_jdxfw1j1gp
                    section.data(105).logicalSrcIdx = 142;
                    section.data(105).dtTransOffset = 20102;

                    ;% rtP.Step_Time
                    section.data(106).logicalSrcIdx = 143;
                    section.data(106).dtTransOffset = 20103;

                    ;% rtP.Step_Y0
                    section.data(107).logicalSrcIdx = 144;
                    section.data(107).dtTransOffset = 20104;

                    ;% rtP.Step_YFinal
                    section.data(108).logicalSrcIdx = 145;
                    section.data(108).dtTransOffset = 20105;

                    ;% rtP.Step1_Time
                    section.data(109).logicalSrcIdx = 146;
                    section.data(109).dtTransOffset = 20106;

                    ;% rtP.Step1_Y0
                    section.data(110).logicalSrcIdx = 147;
                    section.data(110).dtTransOffset = 20107;

                    ;% rtP.Step1_YFinal
                    section.data(111).logicalSrcIdx = 148;
                    section.data(111).dtTransOffset = 20108;

                    ;% rtP.sinwt_Amp
                    section.data(112).logicalSrcIdx = 149;
                    section.data(112).dtTransOffset = 20109;

                    ;% rtP.sinwt_Bias
                    section.data(113).logicalSrcIdx = 150;
                    section.data(113).dtTransOffset = 20110;

                    ;% rtP.sinwt_Freq
                    section.data(114).logicalSrcIdx = 151;
                    section.data(114).dtTransOffset = 20111;

                    ;% rtP.sinwt_Phase
                    section.data(115).logicalSrcIdx = 152;
                    section.data(115).dtTransOffset = 20112;

                    ;% rtP.sinwt_Hsin
                    section.data(116).logicalSrcIdx = 153;
                    section.data(116).dtTransOffset = 20113;

                    ;% rtP.sinwt_HCos
                    section.data(117).logicalSrcIdx = 154;
                    section.data(117).dtTransOffset = 20114;

                    ;% rtP.sinwt_PSin
                    section.data(118).logicalSrcIdx = 155;
                    section.data(118).dtTransOffset = 20115;

                    ;% rtP.sinwt_PCos
                    section.data(119).logicalSrcIdx = 156;
                    section.data(119).dtTransOffset = 20116;

                    ;% rtP.Integ4_gainval
                    section.data(120).logicalSrcIdx = 157;
                    section.data(120).dtTransOffset = 20117;

                    ;% rtP.Integ4_IC
                    section.data(121).logicalSrcIdx = 158;
                    section.data(121).dtTransOffset = 20118;

                    ;% rtP.K1_Value
                    section.data(122).logicalSrcIdx = 159;
                    section.data(122).dtTransOffset = 20119;

                    ;% rtP.SFunction_P1_Size
                    section.data(123).logicalSrcIdx = 160;
                    section.data(123).dtTransOffset = 20120;

                    ;% rtP.SFunction_P1
                    section.data(124).logicalSrcIdx = 161;
                    section.data(124).dtTransOffset = 20122;

                    ;% rtP.SFunction_P2_Size
                    section.data(125).logicalSrcIdx = 162;
                    section.data(125).dtTransOffset = 20123;

                    ;% rtP.SFunction_P2
                    section.data(126).logicalSrcIdx = 163;
                    section.data(126).dtTransOffset = 20125;

                    ;% rtP.SFunction_P3_Size
                    section.data(127).logicalSrcIdx = 164;
                    section.data(127).dtTransOffset = 20126;

                    ;% rtP.SFunction_P3
                    section.data(128).logicalSrcIdx = 165;
                    section.data(128).dtTransOffset = 20128;

                    ;% rtP.SFunction_P4_Size
                    section.data(129).logicalSrcIdx = 166;
                    section.data(129).dtTransOffset = 20129;

                    ;% rtP.SFunction_P4
                    section.data(130).logicalSrcIdx = 167;
                    section.data(130).dtTransOffset = 20131;

                    ;% rtP.K2_Value
                    section.data(131).logicalSrcIdx = 168;
                    section.data(131).dtTransOffset = 20132;

                    ;% rtP.UnitDelay_InitialCondition_drktyrbsqy
                    section.data(132).logicalSrcIdx = 169;
                    section.data(132).dtTransOffset = 20133;

                    ;% rtP.UnitDelay1_InitialCondition_cn5ti3tsis
                    section.data(133).logicalSrcIdx = 170;
                    section.data(133).dtTransOffset = 20134;

                    ;% rtP.coswt_Amp
                    section.data(134).logicalSrcIdx = 171;
                    section.data(134).dtTransOffset = 20135;

                    ;% rtP.coswt_Bias
                    section.data(135).logicalSrcIdx = 172;
                    section.data(135).dtTransOffset = 20136;

                    ;% rtP.coswt_Freq
                    section.data(136).logicalSrcIdx = 173;
                    section.data(136).dtTransOffset = 20137;

                    ;% rtP.coswt_Phase
                    section.data(137).logicalSrcIdx = 174;
                    section.data(137).dtTransOffset = 20138;

                    ;% rtP.coswt_Hsin
                    section.data(138).logicalSrcIdx = 175;
                    section.data(138).dtTransOffset = 20139;

                    ;% rtP.coswt_HCos
                    section.data(139).logicalSrcIdx = 176;
                    section.data(139).dtTransOffset = 20140;

                    ;% rtP.coswt_PSin
                    section.data(140).logicalSrcIdx = 177;
                    section.data(140).dtTransOffset = 20141;

                    ;% rtP.coswt_PCos
                    section.data(141).logicalSrcIdx = 178;
                    section.data(141).dtTransOffset = 20142;

                    ;% rtP.Integ4_gainval_dif0gtnfag
                    section.data(142).logicalSrcIdx = 179;
                    section.data(142).dtTransOffset = 20143;

                    ;% rtP.Integ4_IC_jxlwqtjhnt
                    section.data(143).logicalSrcIdx = 180;
                    section.data(143).dtTransOffset = 20144;

                    ;% rtP.K1_Value_kfw4t2eirb
                    section.data(144).logicalSrcIdx = 181;
                    section.data(144).dtTransOffset = 20145;

                    ;% rtP.SFunction_P1_Size_k4lxoy4dhs
                    section.data(145).logicalSrcIdx = 182;
                    section.data(145).dtTransOffset = 20146;

                    ;% rtP.SFunction_P1_ajt25e0xwi
                    section.data(146).logicalSrcIdx = 183;
                    section.data(146).dtTransOffset = 20148;

                    ;% rtP.SFunction_P2_Size_lhjn1lwdkx
                    section.data(147).logicalSrcIdx = 184;
                    section.data(147).dtTransOffset = 20149;

                    ;% rtP.SFunction_P2_cq5mvmcl3u
                    section.data(148).logicalSrcIdx = 185;
                    section.data(148).dtTransOffset = 20151;

                    ;% rtP.SFunction_P3_Size_h31jztfyng
                    section.data(149).logicalSrcIdx = 186;
                    section.data(149).dtTransOffset = 20152;

                    ;% rtP.SFunction_P3_oppohoj2cm
                    section.data(150).logicalSrcIdx = 187;
                    section.data(150).dtTransOffset = 20154;

                    ;% rtP.SFunction_P4_Size_n2x5c15nwd
                    section.data(151).logicalSrcIdx = 188;
                    section.data(151).dtTransOffset = 20155;

                    ;% rtP.SFunction_P4_djfwwj2s2w
                    section.data(152).logicalSrcIdx = 189;
                    section.data(152).dtTransOffset = 20157;

                    ;% rtP.K2_Value_nuvgxvmdwb
                    section.data(153).logicalSrcIdx = 190;
                    section.data(153).dtTransOffset = 20158;

                    ;% rtP.UnitDelay_InitialCondition_kkt42sn405
                    section.data(154).logicalSrcIdx = 191;
                    section.data(154).dtTransOffset = 20159;

                    ;% rtP.UnitDelay1_InitialCondition_e1p1xveper
                    section.data(155).logicalSrcIdx = 192;
                    section.data(155).dtTransOffset = 20160;

                    ;% rtP.RadDeg_Gain
                    section.data(156).logicalSrcIdx = 193;
                    section.data(156).dtTransOffset = 20161;

                    ;% rtP.sinwt_Amp_eorfgf5sm0
                    section.data(157).logicalSrcIdx = 194;
                    section.data(157).dtTransOffset = 20162;

                    ;% rtP.sinwt_Bias_dcnorrdhay
                    section.data(158).logicalSrcIdx = 195;
                    section.data(158).dtTransOffset = 20163;

                    ;% rtP.sinwt_Freq_di4t5dkrcf
                    section.data(159).logicalSrcIdx = 196;
                    section.data(159).dtTransOffset = 20164;

                    ;% rtP.sinwt_Phase_h11uiajhr4
                    section.data(160).logicalSrcIdx = 197;
                    section.data(160).dtTransOffset = 20165;

                    ;% rtP.sinwt_Hsin_ehtovoa0ay
                    section.data(161).logicalSrcIdx = 198;
                    section.data(161).dtTransOffset = 20166;

                    ;% rtP.sinwt_HCos_aj2hvrht30
                    section.data(162).logicalSrcIdx = 199;
                    section.data(162).dtTransOffset = 20167;

                    ;% rtP.sinwt_PSin_eiejoqflud
                    section.data(163).logicalSrcIdx = 200;
                    section.data(163).dtTransOffset = 20168;

                    ;% rtP.sinwt_PCos_pzhfqdg3tf
                    section.data(164).logicalSrcIdx = 201;
                    section.data(164).dtTransOffset = 20169;

                    ;% rtP.Integ4_gainval_dnkgiurtgb
                    section.data(165).logicalSrcIdx = 202;
                    section.data(165).dtTransOffset = 20170;

                    ;% rtP.Integ4_IC_opfkscr5gt
                    section.data(166).logicalSrcIdx = 203;
                    section.data(166).dtTransOffset = 20171;

                    ;% rtP.K1_Value_hjflks2vsf
                    section.data(167).logicalSrcIdx = 204;
                    section.data(167).dtTransOffset = 20172;

                    ;% rtP.SFunction_P1_Size_f34k2j2roc
                    section.data(168).logicalSrcIdx = 205;
                    section.data(168).dtTransOffset = 20173;

                    ;% rtP.SFunction_P1_bvxq04bbyk
                    section.data(169).logicalSrcIdx = 206;
                    section.data(169).dtTransOffset = 20175;

                    ;% rtP.SFunction_P2_Size_hytahn5vyy
                    section.data(170).logicalSrcIdx = 207;
                    section.data(170).dtTransOffset = 20176;

                    ;% rtP.SFunction_P2_f3e12pt1ry
                    section.data(171).logicalSrcIdx = 208;
                    section.data(171).dtTransOffset = 20178;

                    ;% rtP.SFunction_P3_Size_jlps2lq2b4
                    section.data(172).logicalSrcIdx = 209;
                    section.data(172).dtTransOffset = 20179;

                    ;% rtP.SFunction_P3_koxuw345fj
                    section.data(173).logicalSrcIdx = 210;
                    section.data(173).dtTransOffset = 20181;

                    ;% rtP.SFunction_P4_Size_c3pkogyr4b
                    section.data(174).logicalSrcIdx = 211;
                    section.data(174).dtTransOffset = 20182;

                    ;% rtP.SFunction_P4_oads40uu3f
                    section.data(175).logicalSrcIdx = 212;
                    section.data(175).dtTransOffset = 20184;

                    ;% rtP.K2_Value_cxg5pk3ncp
                    section.data(176).logicalSrcIdx = 213;
                    section.data(176).dtTransOffset = 20185;

                    ;% rtP.UnitDelay_InitialCondition_gq50ves3cl
                    section.data(177).logicalSrcIdx = 214;
                    section.data(177).dtTransOffset = 20186;

                    ;% rtP.UnitDelay1_InitialCondition_pl1y0ebaxq
                    section.data(178).logicalSrcIdx = 215;
                    section.data(178).dtTransOffset = 20187;

                    ;% rtP.coswt_Amp_lbfz01iwfo
                    section.data(179).logicalSrcIdx = 216;
                    section.data(179).dtTransOffset = 20188;

                    ;% rtP.coswt_Bias_bq2gp0a5iq
                    section.data(180).logicalSrcIdx = 217;
                    section.data(180).dtTransOffset = 20189;

                    ;% rtP.coswt_Freq_aawhnenrvi
                    section.data(181).logicalSrcIdx = 218;
                    section.data(181).dtTransOffset = 20190;

                    ;% rtP.coswt_Phase_pqts5g0duj
                    section.data(182).logicalSrcIdx = 219;
                    section.data(182).dtTransOffset = 20191;

                    ;% rtP.coswt_Hsin_gqtzjh0fwi
                    section.data(183).logicalSrcIdx = 220;
                    section.data(183).dtTransOffset = 20192;

                    ;% rtP.coswt_HCos_kmd3crul1p
                    section.data(184).logicalSrcIdx = 221;
                    section.data(184).dtTransOffset = 20193;

                    ;% rtP.coswt_PSin_d2rsmyjcjt
                    section.data(185).logicalSrcIdx = 222;
                    section.data(185).dtTransOffset = 20194;

                    ;% rtP.coswt_PCos_oy0jknuvkw
                    section.data(186).logicalSrcIdx = 223;
                    section.data(186).dtTransOffset = 20195;

                    ;% rtP.Integ4_gainval_g02zmp54as
                    section.data(187).logicalSrcIdx = 224;
                    section.data(187).dtTransOffset = 20196;

                    ;% rtP.Integ4_IC_lenc50w2j1
                    section.data(188).logicalSrcIdx = 225;
                    section.data(188).dtTransOffset = 20197;

                    ;% rtP.K1_Value_hw1q0jovpo
                    section.data(189).logicalSrcIdx = 226;
                    section.data(189).dtTransOffset = 20198;

                    ;% rtP.SFunction_P1_Size_j34unk2elg
                    section.data(190).logicalSrcIdx = 227;
                    section.data(190).dtTransOffset = 20199;

                    ;% rtP.SFunction_P1_k0xtmc3yk1
                    section.data(191).logicalSrcIdx = 228;
                    section.data(191).dtTransOffset = 20201;

                    ;% rtP.SFunction_P2_Size_e2y1cqae0x
                    section.data(192).logicalSrcIdx = 229;
                    section.data(192).dtTransOffset = 20202;

                    ;% rtP.SFunction_P2_c0goemzszk
                    section.data(193).logicalSrcIdx = 230;
                    section.data(193).dtTransOffset = 20204;

                    ;% rtP.SFunction_P3_Size_lhlddfll4p
                    section.data(194).logicalSrcIdx = 231;
                    section.data(194).dtTransOffset = 20205;

                    ;% rtP.SFunction_P3_ht4brw1rzb
                    section.data(195).logicalSrcIdx = 232;
                    section.data(195).dtTransOffset = 20207;

                    ;% rtP.SFunction_P4_Size_fousroynlp
                    section.data(196).logicalSrcIdx = 233;
                    section.data(196).dtTransOffset = 20208;

                    ;% rtP.SFunction_P4_mlffkwzqo4
                    section.data(197).logicalSrcIdx = 234;
                    section.data(197).dtTransOffset = 20210;

                    ;% rtP.K2_Value_j0gc4yevhh
                    section.data(198).logicalSrcIdx = 235;
                    section.data(198).dtTransOffset = 20211;

                    ;% rtP.UnitDelay_InitialCondition_jhoo2f0is3
                    section.data(199).logicalSrcIdx = 236;
                    section.data(199).dtTransOffset = 20212;

                    ;% rtP.UnitDelay1_InitialCondition_cnkmvdyb1i
                    section.data(200).logicalSrcIdx = 237;
                    section.data(200).dtTransOffset = 20213;

                    ;% rtP.RadDeg_Gain_ldsdhagfjb
                    section.data(201).logicalSrcIdx = 238;
                    section.data(201).dtTransOffset = 20214;

                    ;% rtP.DiscreteTimeIntegrator_gainval_arhh4ywx41
                    section.data(202).logicalSrcIdx = 239;
                    section.data(202).dtTransOffset = 20215;

                    ;% rtP.DiscreteTimeIntegrator_IC_ho0ck4cozt
                    section.data(203).logicalSrcIdx = 240;
                    section.data(203).dtTransOffset = 20216;

                    ;% rtP.Iph_Value
                    section.data(204).logicalSrcIdx = 241;
                    section.data(204).dtTransOffset = 20217;

                    ;% rtP.Iph_1_Value
                    section.data(205).logicalSrcIdx = 242;
                    section.data(205).dtTransOffset = 20218;

                    ;% rtP.Iph_2_Value
                    section.data(206).logicalSrcIdx = 243;
                    section.data(206).dtTransOffset = 20219;

                    ;% rtP.Iph_3_Value
                    section.data(207).logicalSrcIdx = 244;
                    section.data(207).dtTransOffset = 20220;

                    ;% rtP.EnableMPPT_Time
                    section.data(208).logicalSrcIdx = 245;
                    section.data(208).dtTransOffset = 20221;

                    ;% rtP.EnableMPPT_Y0
                    section.data(209).logicalSrcIdx = 246;
                    section.data(209).dtTransOffset = 20222;

                    ;% rtP.EnableMPPT_YFinal
                    section.data(210).logicalSrcIdx = 247;
                    section.data(210).dtTransOffset = 20223;

                    ;% rtP.DiscreteTimeIntegrator_gainval_ii5s4v2ynz
                    section.data(211).logicalSrcIdx = 248;
                    section.data(211).dtTransOffset = 20224;

                    ;% rtP.Switch_Threshold_imhbg1j1p2
                    section.data(212).logicalSrcIdx = 249;
                    section.data(212).dtTransOffset = 20225;

                    ;% rtP.Gain_Gain_hqik33ck5s
                    section.data(213).logicalSrcIdx = 250;
                    section.data(213).dtTransOffset = 20226;

                    ;% rtP.Constant1_Value
                    section.data(214).logicalSrcIdx = 251;
                    section.data(214).dtTransOffset = 20227;

                    ;% rtP.scale_Gain
                    section.data(215).logicalSrcIdx = 252;
                    section.data(215).dtTransOffset = 20228;

                    ;% rtP.Saturation_UpperSat
                    section.data(216).logicalSrcIdx = 253;
                    section.data(216).dtTransOffset = 20229;

                    ;% rtP.Saturation_LowerSat
                    section.data(217).logicalSrcIdx = 254;
                    section.data(217).dtTransOffset = 20230;

                    ;% rtP.Gain1_Gain_haolbh2dzl
                    section.data(218).logicalSrcIdx = 255;
                    section.data(218).dtTransOffset = 20231;

                    ;% rtP.Constant1_Value_bphqnvpnc3
                    section.data(219).logicalSrcIdx = 256;
                    section.data(219).dtTransOffset = 20232;

                    ;% rtP.scale_Gain_blz4hmka40
                    section.data(220).logicalSrcIdx = 257;
                    section.data(220).dtTransOffset = 20233;

                    ;% rtP.Saturation_UpperSat_bpb4gngjmz
                    section.data(221).logicalSrcIdx = 258;
                    section.data(221).dtTransOffset = 20234;

                    ;% rtP.Saturation_LowerSat_n1ldcwolpz
                    section.data(222).logicalSrcIdx = 259;
                    section.data(222).dtTransOffset = 20235;

                    ;% rtP.Gain1_Gain_kq0niozbc5
                    section.data(223).logicalSrcIdx = 260;
                    section.data(223).dtTransOffset = 20236;

                    ;% rtP.Constant2_Value
                    section.data(224).logicalSrcIdx = 261;
                    section.data(224).dtTransOffset = 20237;

                    ;% rtP.Constant5_Value
                    section.data(225).logicalSrcIdx = 262;
                    section.data(225).dtTransOffset = 20238;

                    ;% rtP.Constant1_Value_iwvlwkpu45
                    section.data(226).logicalSrcIdx = 263;
                    section.data(226).dtTransOffset = 20239;

                    ;% rtP.Constant4_Value
                    section.data(227).logicalSrcIdx = 264;
                    section.data(227).dtTransOffset = 20240;

                    ;% rtP.Constant1_Value_ak1tppnn4h
                    section.data(228).logicalSrcIdx = 265;
                    section.data(228).dtTransOffset = 20241;

                    ;% rtP.Constant2_Value_mlfpfk2wxw
                    section.data(229).logicalSrcIdx = 266;
                    section.data(229).dtTransOffset = 20242;

                    ;% rtP.Constant3_Value
                    section.data(230).logicalSrcIdx = 267;
                    section.data(230).dtTransOffset = 20243;

                    ;% rtP.Constant4_Value_pp4jqboeta
                    section.data(231).logicalSrcIdx = 268;
                    section.data(231).dtTransOffset = 20244;

                    ;% rtP.Constant1_Value_el0exx1zb4
                    section.data(232).logicalSrcIdx = 269;
                    section.data(232).dtTransOffset = 20245;

                    ;% rtP.Constant2_Value_grs2c2ajt1
                    section.data(233).logicalSrcIdx = 270;
                    section.data(233).dtTransOffset = 20246;

                    ;% rtP.Constant3_Value_nxziieyoht
                    section.data(234).logicalSrcIdx = 271;
                    section.data(234).dtTransOffset = 20247;

                    ;% rtP.Constant4_Value_bicozyhrjm
                    section.data(235).logicalSrcIdx = 272;
                    section.data(235).dtTransOffset = 20248;

                    ;% rtP.Constant1_Value_mgesvrfwfg
                    section.data(236).logicalSrcIdx = 273;
                    section.data(236).dtTransOffset = 20249;

                    ;% rtP.Constant2_Value_hi0sz15soo
                    section.data(237).logicalSrcIdx = 274;
                    section.data(237).dtTransOffset = 20250;

                    ;% rtP.Constant1_Value_o21htlaenk
                    section.data(238).logicalSrcIdx = 275;
                    section.data(238).dtTransOffset = 20251;

                    ;% rtP.Constant2_Value_c2avcu1oyz
                    section.data(239).logicalSrcIdx = 276;
                    section.data(239).dtTransOffset = 20252;

                    ;% rtP.Constant3_Value_cehxtfqlkd
                    section.data(240).logicalSrcIdx = 277;
                    section.data(240).dtTransOffset = 20253;

                    ;% rtP.Constant5_Value_dnegzne0fh
                    section.data(241).logicalSrcIdx = 278;
                    section.data(241).dtTransOffset = 20254;

                    ;% rtP.Constant1_Value_gx4tpnvf2d
                    section.data(242).logicalSrcIdx = 279;
                    section.data(242).dtTransOffset = 20255;

                    ;% rtP.Constant2_Value_haiwdpybnj
                    section.data(243).logicalSrcIdx = 280;
                    section.data(243).dtTransOffset = 20256;

                    ;% rtP.Constant3_Value_cqvo4zhnvg
                    section.data(244).logicalSrcIdx = 281;
                    section.data(244).dtTransOffset = 20257;

                    ;% rtP.Constant4_Value_luojtmutao
                    section.data(245).logicalSrcIdx = 282;
                    section.data(245).dtTransOffset = 20258;

                    ;% rtP.Constant1_Value_ptyw2e1opn
                    section.data(246).logicalSrcIdx = 283;
                    section.data(246).dtTransOffset = 20259;

                    ;% rtP.Constant2_Value_dgwwgqpu0w
                    section.data(247).logicalSrcIdx = 284;
                    section.data(247).dtTransOffset = 20260;

                    ;% rtP.Constant3_Value_di41p4mew3
                    section.data(248).logicalSrcIdx = 285;
                    section.data(248).dtTransOffset = 20261;

                    ;% rtP.Constant4_Value_fcc0mksgc2
                    section.data(249).logicalSrcIdx = 286;
                    section.data(249).dtTransOffset = 20262;

                    ;% rtP.Constant1_Value_old4tikkcg
                    section.data(250).logicalSrcIdx = 287;
                    section.data(250).dtTransOffset = 20263;

                    ;% rtP.Constant2_Value_ki5yoscsu1
                    section.data(251).logicalSrcIdx = 288;
                    section.data(251).dtTransOffset = 20264;

                    ;% rtP.RTP_BF779111_TFIXED_Value
                    section.data(252).logicalSrcIdx = 289;
                    section.data(252).dtTransOffset = 20265;

                    ;% rtP.PV_Curtailed_Power_Value
                    section.data(253).logicalSrcIdx = 290;
                    section.data(253).dtTransOffset = 20266;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 21;
            section.data(21)  = dumData; %prealloc

                    ;% rtP.Output_InitialCondition
                    section.data(1).logicalSrcIdx = 291;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Output_InitialCondition_gijybkc2ne
                    section.data(2).logicalSrcIdx = 292;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Output_InitialCondition_klxjybnem2
                    section.data(3).logicalSrcIdx = 293;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Output_InitialCondition_a4gjcwoh4j
                    section.data(4).logicalSrcIdx = 294;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Output_InitialCondition_oqqdnbt5v5
                    section.data(5).logicalSrcIdx = 295;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Output_InitialCondition_ogqjollakr
                    section.data(6).logicalSrcIdx = 296;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Output_InitialCondition_jmgtafssty
                    section.data(7).logicalSrcIdx = 297;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.FixPtConstant_Value
                    section.data(8).logicalSrcIdx = 298;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Constant_Value
                    section.data(9).logicalSrcIdx = 299;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.FixPtConstant_Value_hreeaytxmc
                    section.data(10).logicalSrcIdx = 300;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.Constant_Value_ahpgrt3log
                    section.data(11).logicalSrcIdx = 301;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.FixPtConstant_Value_jtdlfhjcpd
                    section.data(12).logicalSrcIdx = 302;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.Constant_Value_fr5arljayi
                    section.data(13).logicalSrcIdx = 303;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.FixPtConstant_Value_g2sv4psui1
                    section.data(14).logicalSrcIdx = 304;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.Constant_Value_l3xfz1qnx5
                    section.data(15).logicalSrcIdx = 305;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.FixPtConstant_Value_bkqusysitf
                    section.data(16).logicalSrcIdx = 306;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.Constant_Value_nac23f3nuj
                    section.data(17).logicalSrcIdx = 307;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.FixPtConstant_Value_gn5e323mfz
                    section.data(18).logicalSrcIdx = 308;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.Constant_Value_nzdcxafoxr
                    section.data(19).logicalSrcIdx = 309;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.FixPtConstant_Value_oxp0ywiny2
                    section.data(20).logicalSrcIdx = 310;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.Constant_Value_opytlk1i4o
                    section.data(21).logicalSrcIdx = 311;
                    section.data(21).dtTransOffset = 20;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.ManualSwitch_CurrentSetting
                    section.data(1).logicalSrcIdx = 312;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtP.bmnpezgtfw.Gain_Gain
                    section.data(1).logicalSrcIdx = 313;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.bmnpezgtfw.integrator_IC
                    section.data(2).logicalSrcIdx = 314;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.bmnpezgtfw.TransportDelay_Delay
                    section.data(3).logicalSrcIdx = 315;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.bmnpezgtfw.TransportDelay_InitOutput
                    section.data(4).logicalSrcIdx = 316;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.bmnpezgtfw.K1_Value
                    section.data(5).logicalSrcIdx = 317;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.bmnpezgtfw.Memory_InitialCondition
                    section.data(6).logicalSrcIdx = 318;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.bmnpezgtfw.Saturationtoavoidnegativesqrt_UpperSat
                    section.data(7).logicalSrcIdx = 319;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.bmnpezgtfw.Saturationtoavoidnegativesqrt_LowerSat
                    section.data(8).logicalSrcIdx = 320;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% rtP.ad2zto0ceq.Gain_Gain
                    section.data(1).logicalSrcIdx = 321;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.ad2zto0ceq.Gain_Gain_ms31mt1rdg
                    section.data(2).logicalSrcIdx = 322;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.ad2zto0ceq.integrator_IC
                    section.data(3).logicalSrcIdx = 323;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.ad2zto0ceq.TransportDelay_Delay
                    section.data(4).logicalSrcIdx = 324;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.ad2zto0ceq.TransportDelay_InitOutput
                    section.data(5).logicalSrcIdx = 325;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.ad2zto0ceq.K1_Value
                    section.data(6).logicalSrcIdx = 326;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.ad2zto0ceq.Memory_InitialCondition
                    section.data(7).logicalSrcIdx = 327;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.ad2zto0ceq.integrator_IC_aeituu02hr
                    section.data(8).logicalSrcIdx = 328;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.ad2zto0ceq.TransportDelay_Delay_l3qrglhug0
                    section.data(9).logicalSrcIdx = 329;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.ad2zto0ceq.TransportDelay_InitOutput_bzn0xjgt50
                    section.data(10).logicalSrcIdx = 330;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.ad2zto0ceq.K1_Value_bbfli4acqa
                    section.data(11).logicalSrcIdx = 331;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.ad2zto0ceq.Memory_InitialCondition_bmzu2ltej4
                    section.data(12).logicalSrcIdx = 332;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.ad2zto0ceq.sinwt_Amp
                    section.data(13).logicalSrcIdx = 333;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.ad2zto0ceq.sinwt_Bias
                    section.data(14).logicalSrcIdx = 334;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.ad2zto0ceq.sinwt_Freq
                    section.data(15).logicalSrcIdx = 335;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.ad2zto0ceq.sinwt_Phase
                    section.data(16).logicalSrcIdx = 336;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.ad2zto0ceq.coswt_Amp
                    section.data(17).logicalSrcIdx = 337;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.ad2zto0ceq.coswt_Bias
                    section.data(18).logicalSrcIdx = 338;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.ad2zto0ceq.coswt_Freq
                    section.data(19).logicalSrcIdx = 339;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.ad2zto0ceq.coswt_Phase
                    section.data(20).logicalSrcIdx = 340;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.ad2zto0ceq.RadDeg_Gain
                    section.data(21).logicalSrcIdx = 341;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.ad2zto0ceq.Gain_Gain_kprjukcypi
                    section.data(22).logicalSrcIdx = 342;
                    section.data(22).dtTransOffset = 21;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtP.oy0o2e1tch.Gain_Gain
                    section.data(1).logicalSrcIdx = 343;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.oy0o2e1tch.integrator_IC
                    section.data(2).logicalSrcIdx = 344;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.oy0o2e1tch.TransportDelay_Delay
                    section.data(3).logicalSrcIdx = 345;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.oy0o2e1tch.TransportDelay_InitOutput
                    section.data(4).logicalSrcIdx = 346;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.oy0o2e1tch.K1_Value
                    section.data(5).logicalSrcIdx = 347;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.oy0o2e1tch.Memory_InitialCondition
                    section.data(6).logicalSrcIdx = 348;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.oy0o2e1tch.Saturationtoavoidnegativesqrt_UpperSat
                    section.data(7).logicalSrcIdx = 349;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.oy0o2e1tch.Saturationtoavoidnegativesqrt_LowerSat
                    section.data(8).logicalSrcIdx = 350;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% rtP.ine2cb2czx.Gain_Gain
                    section.data(1).logicalSrcIdx = 351;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.ine2cb2czx.Gain_Gain_ms31mt1rdg
                    section.data(2).logicalSrcIdx = 352;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.ine2cb2czx.integrator_IC
                    section.data(3).logicalSrcIdx = 353;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.ine2cb2czx.TransportDelay_Delay
                    section.data(4).logicalSrcIdx = 354;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.ine2cb2czx.TransportDelay_InitOutput
                    section.data(5).logicalSrcIdx = 355;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.ine2cb2czx.K1_Value
                    section.data(6).logicalSrcIdx = 356;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.ine2cb2czx.Memory_InitialCondition
                    section.data(7).logicalSrcIdx = 357;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.ine2cb2czx.integrator_IC_aeituu02hr
                    section.data(8).logicalSrcIdx = 358;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.ine2cb2czx.TransportDelay_Delay_l3qrglhug0
                    section.data(9).logicalSrcIdx = 359;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.ine2cb2czx.TransportDelay_InitOutput_bzn0xjgt50
                    section.data(10).logicalSrcIdx = 360;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.ine2cb2czx.K1_Value_bbfli4acqa
                    section.data(11).logicalSrcIdx = 361;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.ine2cb2czx.Memory_InitialCondition_bmzu2ltej4
                    section.data(12).logicalSrcIdx = 362;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.ine2cb2czx.sinwt_Amp
                    section.data(13).logicalSrcIdx = 363;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.ine2cb2czx.sinwt_Bias
                    section.data(14).logicalSrcIdx = 364;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.ine2cb2czx.sinwt_Freq
                    section.data(15).logicalSrcIdx = 365;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.ine2cb2czx.sinwt_Phase
                    section.data(16).logicalSrcIdx = 366;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.ine2cb2czx.coswt_Amp
                    section.data(17).logicalSrcIdx = 367;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.ine2cb2czx.coswt_Bias
                    section.data(18).logicalSrcIdx = 368;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.ine2cb2czx.coswt_Freq
                    section.data(19).logicalSrcIdx = 369;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.ine2cb2czx.coswt_Phase
                    section.data(20).logicalSrcIdx = 370;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.ine2cb2czx.RadDeg_Gain
                    section.data(21).logicalSrcIdx = 371;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.ine2cb2czx.Gain_Gain_kprjukcypi
                    section.data(22).logicalSrcIdx = 372;
                    section.data(22).dtTransOffset = 21;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtP.ceg2xz1h3k.Gain_Gain
                    section.data(1).logicalSrcIdx = 373;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.ceg2xz1h3k.integrator_IC
                    section.data(2).logicalSrcIdx = 374;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.ceg2xz1h3k.TransportDelay_Delay
                    section.data(3).logicalSrcIdx = 375;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.ceg2xz1h3k.TransportDelay_InitOutput
                    section.data(4).logicalSrcIdx = 376;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.ceg2xz1h3k.K1_Value
                    section.data(5).logicalSrcIdx = 377;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.ceg2xz1h3k.Memory_InitialCondition
                    section.data(6).logicalSrcIdx = 378;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.ceg2xz1h3k.Saturationtoavoidnegativesqrt_UpperSat
                    section.data(7).logicalSrcIdx = 379;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.ceg2xz1h3k.Saturationtoavoidnegativesqrt_LowerSat
                    section.data(8).logicalSrcIdx = 380;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            paramMap.sections(11) = section;
            clear section

            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% rtP.f5dx3nomiq.Gain_Gain
                    section.data(1).logicalSrcIdx = 381;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.f5dx3nomiq.Gain_Gain_ms31mt1rdg
                    section.data(2).logicalSrcIdx = 382;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.f5dx3nomiq.integrator_IC
                    section.data(3).logicalSrcIdx = 383;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.f5dx3nomiq.TransportDelay_Delay
                    section.data(4).logicalSrcIdx = 384;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.f5dx3nomiq.TransportDelay_InitOutput
                    section.data(5).logicalSrcIdx = 385;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.f5dx3nomiq.K1_Value
                    section.data(6).logicalSrcIdx = 386;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.f5dx3nomiq.Memory_InitialCondition
                    section.data(7).logicalSrcIdx = 387;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.f5dx3nomiq.integrator_IC_aeituu02hr
                    section.data(8).logicalSrcIdx = 388;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.f5dx3nomiq.TransportDelay_Delay_l3qrglhug0
                    section.data(9).logicalSrcIdx = 389;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.f5dx3nomiq.TransportDelay_InitOutput_bzn0xjgt50
                    section.data(10).logicalSrcIdx = 390;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.f5dx3nomiq.K1_Value_bbfli4acqa
                    section.data(11).logicalSrcIdx = 391;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.f5dx3nomiq.Memory_InitialCondition_bmzu2ltej4
                    section.data(12).logicalSrcIdx = 392;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.f5dx3nomiq.sinwt_Amp
                    section.data(13).logicalSrcIdx = 393;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.f5dx3nomiq.sinwt_Bias
                    section.data(14).logicalSrcIdx = 394;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.f5dx3nomiq.sinwt_Freq
                    section.data(15).logicalSrcIdx = 395;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.f5dx3nomiq.sinwt_Phase
                    section.data(16).logicalSrcIdx = 396;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.f5dx3nomiq.coswt_Amp
                    section.data(17).logicalSrcIdx = 397;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.f5dx3nomiq.coswt_Bias
                    section.data(18).logicalSrcIdx = 398;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.f5dx3nomiq.coswt_Freq
                    section.data(19).logicalSrcIdx = 399;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.f5dx3nomiq.coswt_Phase
                    section.data(20).logicalSrcIdx = 400;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.f5dx3nomiq.RadDeg_Gain
                    section.data(21).logicalSrcIdx = 401;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.f5dx3nomiq.Gain_Gain_kprjukcypi
                    section.data(22).logicalSrcIdx = 402;
                    section.data(22).dtTransOffset = 21;

            nTotData = nTotData + section.nData;
            paramMap.sections(12) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtP.niwklhwsx3v.Gain_Gain
                    section.data(1).logicalSrcIdx = 403;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.niwklhwsx3v.integrator_IC
                    section.data(2).logicalSrcIdx = 404;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.niwklhwsx3v.TransportDelay_Delay
                    section.data(3).logicalSrcIdx = 405;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.niwklhwsx3v.TransportDelay_InitOutput
                    section.data(4).logicalSrcIdx = 406;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.niwklhwsx3v.K1_Value
                    section.data(5).logicalSrcIdx = 407;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.niwklhwsx3v.Memory_InitialCondition
                    section.data(6).logicalSrcIdx = 408;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.niwklhwsx3v.Saturationtoavoidnegativesqrt_UpperSat
                    section.data(7).logicalSrcIdx = 409;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.niwklhwsx3v.Saturationtoavoidnegativesqrt_LowerSat
                    section.data(8).logicalSrcIdx = 410;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            paramMap.sections(13) = section;
            clear section

            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% rtP.dcv1n5znmuv.Gain_Gain
                    section.data(1).logicalSrcIdx = 411;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.dcv1n5znmuv.Gain_Gain_ms31mt1rdg
                    section.data(2).logicalSrcIdx = 412;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.dcv1n5znmuv.integrator_IC
                    section.data(3).logicalSrcIdx = 413;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.dcv1n5znmuv.TransportDelay_Delay
                    section.data(4).logicalSrcIdx = 414;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.dcv1n5znmuv.TransportDelay_InitOutput
                    section.data(5).logicalSrcIdx = 415;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.dcv1n5znmuv.K1_Value
                    section.data(6).logicalSrcIdx = 416;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.dcv1n5znmuv.Memory_InitialCondition
                    section.data(7).logicalSrcIdx = 417;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.dcv1n5znmuv.integrator_IC_aeituu02hr
                    section.data(8).logicalSrcIdx = 418;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.dcv1n5znmuv.TransportDelay_Delay_l3qrglhug0
                    section.data(9).logicalSrcIdx = 419;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.dcv1n5znmuv.TransportDelay_InitOutput_bzn0xjgt50
                    section.data(10).logicalSrcIdx = 420;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.dcv1n5znmuv.K1_Value_bbfli4acqa
                    section.data(11).logicalSrcIdx = 421;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.dcv1n5znmuv.Memory_InitialCondition_bmzu2ltej4
                    section.data(12).logicalSrcIdx = 422;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.dcv1n5znmuv.sinwt_Amp
                    section.data(13).logicalSrcIdx = 423;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.dcv1n5znmuv.sinwt_Bias
                    section.data(14).logicalSrcIdx = 424;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.dcv1n5znmuv.sinwt_Freq
                    section.data(15).logicalSrcIdx = 425;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.dcv1n5znmuv.sinwt_Phase
                    section.data(16).logicalSrcIdx = 426;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.dcv1n5znmuv.coswt_Amp
                    section.data(17).logicalSrcIdx = 427;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.dcv1n5znmuv.coswt_Bias
                    section.data(18).logicalSrcIdx = 428;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.dcv1n5znmuv.coswt_Freq
                    section.data(19).logicalSrcIdx = 429;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.dcv1n5znmuv.coswt_Phase
                    section.data(20).logicalSrcIdx = 430;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.dcv1n5znmuv.RadDeg_Gain
                    section.data(21).logicalSrcIdx = 431;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.dcv1n5znmuv.Gain_Gain_kprjukcypi
                    section.data(22).logicalSrcIdx = 432;
                    section.data(22).dtTransOffset = 21;

            nTotData = nTotData + section.nData;
            paramMap.sections(14) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 15;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 128;
            section.data(128)  = dumData; %prealloc

                    ;% rtB.ogv0hqbc0v
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.itep2cp1lr
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.n5wofc3qzn
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.dnmbnvwgnn
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.ekx2il22sq
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.lfyoajjoov
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.c4ftneuvto
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.i02tp5e4kx
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.i4gzufvg2o
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.oat2j1cdmr
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.f3cfi33ckq
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.ar0maajlk1
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 13;

                    ;% rtB.ffrk0arvuj
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 17;

                    ;% rtB.jgbgzpoimw
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 21;

                    ;% rtB.fa4tex3clw
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 25;

                    ;% rtB.ourzhmbhxo
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 26;

                    ;% rtB.akkogh4jqq
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 27;

                    ;% rtB.ot40ylkwss
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 31;

                    ;% rtB.i4hl234ghn
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 32;

                    ;% rtB.dthfzyfxl1
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 36;

                    ;% rtB.kc3zkzq04l
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 37;

                    ;% rtB.dry0nus1xs
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 41;

                    ;% rtB.k3oq3s3csw
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 42;

                    ;% rtB.h1bfw4mfph
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 46;

                    ;% rtB.iwrukye3jl
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 50;

                    ;% rtB.ey1q3xu0lc
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 54;

                    ;% rtB.emq2dotgho
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 58;

                    ;% rtB.mvcrznjron
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 62;

                    ;% rtB.onrzer12ny
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 66;

                    ;% rtB.be3ao5uz45
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 67;

                    ;% rtB.jnu2o2ohlf
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 71;

                    ;% rtB.ph3wfwuw0a
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 72;

                    ;% rtB.nmelawslmy
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 76;

                    ;% rtB.lxvkuoukln
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 108;

                    ;% rtB.hrdqdctvd1
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 109;

                    ;% rtB.hmdkilbcvx
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 110;

                    ;% rtB.ngjxcninap
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 111;

                    ;% rtB.jbbxe2pdku
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 112;

                    ;% rtB.de0nng0phx
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 113;

                    ;% rtB.dp1i4plzou
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 114;

                    ;% rtB.eivvl1m4hd
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 115;

                    ;% rtB.kzbjnu5ir0
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 116;

                    ;% rtB.diudjld3ik
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 117;

                    ;% rtB.i5rppcmhk2
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 121;

                    ;% rtB.ltmtx4erjn
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 122;

                    ;% rtB.o5azafcspd
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 126;

                    ;% rtB.fzpun12aws
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 127;

                    ;% rtB.g1qpvoo0jv
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 131;

                    ;% rtB.ba3yfgxwar
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 135;

                    ;% rtB.hmrhx240bh
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 136;

                    ;% rtB.c0k2ql1ggt
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 140;

                    ;% rtB.an5klzinss
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 141;

                    ;% rtB.kmjh2ajyri
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 145;

                    ;% rtB.hvjbih3kg0
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 146;

                    ;% rtB.clbsllgypn
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 150;

                    ;% rtB.dwgocwledf
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 151;

                    ;% rtB.i22j5suvad
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 163;

                    ;% rtB.ap41bnz03r
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 164;

                    ;% rtB.gdgah2322t
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 165;

                    ;% rtB.hyvw5umm1h
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 166;

                    ;% rtB.kbfxbjrvx2
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 167;

                    ;% rtB.gjncx1h3q0
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 168;

                    ;% rtB.fn5g5hn5hh
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 169;

                    ;% rtB.gctlsc335z
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 170;

                    ;% rtB.jtioi3ne2g
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 171;

                    ;% rtB.pnjblhzfzo
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 172;

                    ;% rtB.f2fszijaiw
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 173;

                    ;% rtB.gvg4xc0ac0
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 174;

                    ;% rtB.es4bqngkg5
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 175;

                    ;% rtB.egpzrdyvg0
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 176;

                    ;% rtB.csfgljteoe
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 177;

                    ;% rtB.ai4p4eha4n
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 178;

                    ;% rtB.pliozg1xgh
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 179;

                    ;% rtB.ltvavv2zft
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 180;

                    ;% rtB.oht5khzcw2
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 181;

                    ;% rtB.pf31u1nqv1
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 182;

                    ;% rtB.d3mmobimwn
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 183;

                    ;% rtB.do5oka0wds
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 186;

                    ;% rtB.jnjvdwqqkt
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 187;

                    ;% rtB.azjts1vf53
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 188;

                    ;% rtB.ba0jey3h4s
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 189;

                    ;% rtB.ixrca4gvcu
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 190;

                    ;% rtB.kefkawz32b
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 191;

                    ;% rtB.hb2dyagymm
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 192;

                    ;% rtB.hdt5wzjysu
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 193;

                    ;% rtB.kigwmdrdyn
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 194;

                    ;% rtB.fyrrvjxdzu
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 195;

                    ;% rtB.dgn5mb5t4h
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 196;

                    ;% rtB.l4pseuh5cj
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 197;

                    ;% rtB.cfb11ry1bi
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 200;

                    ;% rtB.gkqubxp0f5
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 201;

                    ;% rtB.idnkflva4w
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 202;

                    ;% rtB.jmuly40v2l
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 203;

                    ;% rtB.ibusrur2xd
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 204;

                    ;% rtB.gv1pmtvbsw
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 205;

                    ;% rtB.kb2x5jvixz
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 206;

                    ;% rtB.flsufuzn5e
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 207;

                    ;% rtB.abtgoiwohv
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 208;

                    ;% rtB.beduxw1ymu
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 209;

                    ;% rtB.forfib4qci
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 210;

                    ;% rtB.bwvbzfbmcs
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 211;

                    ;% rtB.kl12oswm44
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 212;

                    ;% rtB.np3le0nu3v
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 213;

                    ;% rtB.ftetyclgts
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 214;

                    ;% rtB.ewb0dzaoy0
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 215;

                    ;% rtB.g3xlqrt005
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 216;

                    ;% rtB.osijmtr312
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 217;

                    ;% rtB.cd1ftn4bta
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 218;

                    ;% rtB.berle1tvva
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 219;

                    ;% rtB.h2jjz5a2qv
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 222;

                    ;% rtB.l5sma525nd
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 223;

                    ;% rtB.nexcdsgn2d
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 226;

                    ;% rtB.cryrla5ffh
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 227;

                    ;% rtB.knh4j1bnlk
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 228;

                    ;% rtB.g21zmwtqwk
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 229;

                    ;% rtB.i5nqw2ut0x
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 230;

                    ;% rtB.oymf0dlluq
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 231;

                    ;% rtB.grcc0yhyld
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 232;

                    ;% rtB.dpuw5qb1ej
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 233;

                    ;% rtB.ob2or5fclb
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 234;

                    ;% rtB.e3rhmc0eis
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 235;

                    ;% rtB.fmw0dq0q0b
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 236;

                    ;% rtB.i4zj4rwo33
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 237;

                    ;% rtB.pyr32xmcoi
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 238;

                    ;% rtB.gsi0x02kmw
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 239;

                    ;% rtB.oyzu5df1pd
                    section.data(126).logicalSrcIdx = 127;
                    section.data(126).dtTransOffset = 240;

                    ;% rtB.enu2mz0pbm
                    section.data(127).logicalSrcIdx = 128;
                    section.data(127).dtTransOffset = 241;

                    ;% rtB.czk4abpynu
                    section.data(128).logicalSrcIdx = 129;
                    section.data(128).dtTransOffset = 242;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% rtB.ivrji15px1
                    section.data(1).logicalSrcIdx = 132;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.ikmmb55ued
                    section.data(2).logicalSrcIdx = 133;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.l55rxlojo5
                    section.data(3).logicalSrcIdx = 134;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.fxnzenz0t0
                    section.data(4).logicalSrcIdx = 135;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.lk4jtllnjp
                    section.data(5).logicalSrcIdx = 136;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.jwg3jowgsx
                    section.data(6).logicalSrcIdx = 137;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.ir24iovz05
                    section.data(7).logicalSrcIdx = 138;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtB.e2rdvlaate
                    section.data(1).logicalSrcIdx = 139;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.djsocqavgy
                    section.data(2).logicalSrcIdx = 140;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.pwx4wsv4my
                    section.data(3).logicalSrcIdx = 141;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.oq1lllfohm
                    section.data(4).logicalSrcIdx = 142;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.nsflzt2yei
                    section.data(5).logicalSrcIdx = 143;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.jvfom1um4l
                    section.data(6).logicalSrcIdx = 144;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.flf4k30byb
                    section.data(7).logicalSrcIdx = 145;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.hm05lfzr5e
                    section.data(8).logicalSrcIdx = 146;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtB.bmnpezgtfw.dx5vs2okpx
                    section.data(1).logicalSrcIdx = 147;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.bmnpezgtfw.dabsrwbxoq
                    section.data(2).logicalSrcIdx = 148;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.bmnpezgtfw.j31i20akpf
                    section.data(3).logicalSrcIdx = 149;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.bmnpezgtfw.ffksdxmgpu
                    section.data(4).logicalSrcIdx = 150;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.bmnpezgtfw.luma25gcen
                    section.data(5).logicalSrcIdx = 151;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.bmnpezgtfw.dpa2iut1so
                    section.data(6).logicalSrcIdx = 152;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.bmnpezgtfw.huhfoe0tl4
                    section.data(7).logicalSrcIdx = 153;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.bmnpezgtfw.hti1si4rdk
                    section.data(8).logicalSrcIdx = 154;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.bmnpezgtfw.kwrf33mt0y
                    section.data(9).logicalSrcIdx = 155;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.bmnpezgtfw.ejxr3kbwjl
                    section.data(10).logicalSrcIdx = 156;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.ad2zto0ceq.fzopq45nfd
                    section.data(1).logicalSrcIdx = 157;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% rtB.ad2zto0ceq.e0o1bd20vo
                    section.data(1).logicalSrcIdx = 158;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.ad2zto0ceq.abgdmof3z2
                    section.data(2).logicalSrcIdx = 159;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.ad2zto0ceq.p1jp4mdoen
                    section.data(3).logicalSrcIdx = 160;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.ad2zto0ceq.duvtsehdce
                    section.data(4).logicalSrcIdx = 161;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.ad2zto0ceq.fv1mrzbe4c
                    section.data(5).logicalSrcIdx = 162;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.ad2zto0ceq.lmktjrl5f5
                    section.data(6).logicalSrcIdx = 163;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.ad2zto0ceq.hwwfjbcp1v
                    section.data(7).logicalSrcIdx = 164;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.ad2zto0ceq.eusr0f43yb
                    section.data(8).logicalSrcIdx = 165;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.ad2zto0ceq.jbrsw5znzy
                    section.data(9).logicalSrcIdx = 166;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.ad2zto0ceq.jxvuawgxub
                    section.data(10).logicalSrcIdx = 167;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.ad2zto0ceq.m0rfj5bblp
                    section.data(11).logicalSrcIdx = 168;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.ad2zto0ceq.d1oat1xcqk
                    section.data(12).logicalSrcIdx = 169;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.ad2zto0ceq.f1cqvpbkph
                    section.data(13).logicalSrcIdx = 170;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.ad2zto0ceq.esxwvptqwa
                    section.data(14).logicalSrcIdx = 171;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.ad2zto0ceq.m0df3zixb5
                    section.data(15).logicalSrcIdx = 172;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.ad2zto0ceq.ie103btofq
                    section.data(16).logicalSrcIdx = 173;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.ad2zto0ceq.fnbby4ss5l
                    section.data(17).logicalSrcIdx = 174;
                    section.data(17).dtTransOffset = 16;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtB.oy0o2e1tch.dx5vs2okpx
                    section.data(1).logicalSrcIdx = 175;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.oy0o2e1tch.dabsrwbxoq
                    section.data(2).logicalSrcIdx = 176;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.oy0o2e1tch.j31i20akpf
                    section.data(3).logicalSrcIdx = 177;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.oy0o2e1tch.ffksdxmgpu
                    section.data(4).logicalSrcIdx = 178;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.oy0o2e1tch.luma25gcen
                    section.data(5).logicalSrcIdx = 179;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.oy0o2e1tch.dpa2iut1so
                    section.data(6).logicalSrcIdx = 180;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.oy0o2e1tch.huhfoe0tl4
                    section.data(7).logicalSrcIdx = 181;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.oy0o2e1tch.hti1si4rdk
                    section.data(8).logicalSrcIdx = 182;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.oy0o2e1tch.kwrf33mt0y
                    section.data(9).logicalSrcIdx = 183;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.oy0o2e1tch.ejxr3kbwjl
                    section.data(10).logicalSrcIdx = 184;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            sigMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.ine2cb2czx.fzopq45nfd
                    section.data(1).logicalSrcIdx = 185;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(8) = section;
            clear section

            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% rtB.ine2cb2czx.e0o1bd20vo
                    section.data(1).logicalSrcIdx = 186;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.ine2cb2czx.abgdmof3z2
                    section.data(2).logicalSrcIdx = 187;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.ine2cb2czx.p1jp4mdoen
                    section.data(3).logicalSrcIdx = 188;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.ine2cb2czx.duvtsehdce
                    section.data(4).logicalSrcIdx = 189;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.ine2cb2czx.fv1mrzbe4c
                    section.data(5).logicalSrcIdx = 190;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.ine2cb2czx.lmktjrl5f5
                    section.data(6).logicalSrcIdx = 191;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.ine2cb2czx.hwwfjbcp1v
                    section.data(7).logicalSrcIdx = 192;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.ine2cb2czx.eusr0f43yb
                    section.data(8).logicalSrcIdx = 193;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.ine2cb2czx.jbrsw5znzy
                    section.data(9).logicalSrcIdx = 194;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.ine2cb2czx.jxvuawgxub
                    section.data(10).logicalSrcIdx = 195;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.ine2cb2czx.m0rfj5bblp
                    section.data(11).logicalSrcIdx = 196;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.ine2cb2czx.d1oat1xcqk
                    section.data(12).logicalSrcIdx = 197;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.ine2cb2czx.f1cqvpbkph
                    section.data(13).logicalSrcIdx = 198;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.ine2cb2czx.esxwvptqwa
                    section.data(14).logicalSrcIdx = 199;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.ine2cb2czx.m0df3zixb5
                    section.data(15).logicalSrcIdx = 200;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.ine2cb2czx.ie103btofq
                    section.data(16).logicalSrcIdx = 201;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.ine2cb2czx.fnbby4ss5l
                    section.data(17).logicalSrcIdx = 202;
                    section.data(17).dtTransOffset = 16;

            nTotData = nTotData + section.nData;
            sigMap.sections(9) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtB.ceg2xz1h3k.dx5vs2okpx
                    section.data(1).logicalSrcIdx = 203;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.ceg2xz1h3k.dabsrwbxoq
                    section.data(2).logicalSrcIdx = 204;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.ceg2xz1h3k.j31i20akpf
                    section.data(3).logicalSrcIdx = 205;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.ceg2xz1h3k.ffksdxmgpu
                    section.data(4).logicalSrcIdx = 206;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.ceg2xz1h3k.luma25gcen
                    section.data(5).logicalSrcIdx = 207;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.ceg2xz1h3k.dpa2iut1so
                    section.data(6).logicalSrcIdx = 208;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.ceg2xz1h3k.huhfoe0tl4
                    section.data(7).logicalSrcIdx = 209;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.ceg2xz1h3k.hti1si4rdk
                    section.data(8).logicalSrcIdx = 210;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.ceg2xz1h3k.kwrf33mt0y
                    section.data(9).logicalSrcIdx = 211;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.ceg2xz1h3k.ejxr3kbwjl
                    section.data(10).logicalSrcIdx = 212;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            sigMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.f5dx3nomiq.fzopq45nfd
                    section.data(1).logicalSrcIdx = 213;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(11) = section;
            clear section

            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% rtB.f5dx3nomiq.e0o1bd20vo
                    section.data(1).logicalSrcIdx = 214;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.f5dx3nomiq.abgdmof3z2
                    section.data(2).logicalSrcIdx = 215;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.f5dx3nomiq.p1jp4mdoen
                    section.data(3).logicalSrcIdx = 216;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.f5dx3nomiq.duvtsehdce
                    section.data(4).logicalSrcIdx = 217;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.f5dx3nomiq.fv1mrzbe4c
                    section.data(5).logicalSrcIdx = 218;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.f5dx3nomiq.lmktjrl5f5
                    section.data(6).logicalSrcIdx = 219;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.f5dx3nomiq.hwwfjbcp1v
                    section.data(7).logicalSrcIdx = 220;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.f5dx3nomiq.eusr0f43yb
                    section.data(8).logicalSrcIdx = 221;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.f5dx3nomiq.jbrsw5znzy
                    section.data(9).logicalSrcIdx = 222;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.f5dx3nomiq.jxvuawgxub
                    section.data(10).logicalSrcIdx = 223;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.f5dx3nomiq.m0rfj5bblp
                    section.data(11).logicalSrcIdx = 224;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.f5dx3nomiq.d1oat1xcqk
                    section.data(12).logicalSrcIdx = 225;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.f5dx3nomiq.f1cqvpbkph
                    section.data(13).logicalSrcIdx = 226;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.f5dx3nomiq.esxwvptqwa
                    section.data(14).logicalSrcIdx = 227;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.f5dx3nomiq.m0df3zixb5
                    section.data(15).logicalSrcIdx = 228;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.f5dx3nomiq.ie103btofq
                    section.data(16).logicalSrcIdx = 229;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.f5dx3nomiq.fnbby4ss5l
                    section.data(17).logicalSrcIdx = 230;
                    section.data(17).dtTransOffset = 16;

            nTotData = nTotData + section.nData;
            sigMap.sections(12) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtB.niwklhwsx3v.dx5vs2okpx
                    section.data(1).logicalSrcIdx = 231;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.niwklhwsx3v.dabsrwbxoq
                    section.data(2).logicalSrcIdx = 232;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.niwklhwsx3v.j31i20akpf
                    section.data(3).logicalSrcIdx = 233;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.niwklhwsx3v.ffksdxmgpu
                    section.data(4).logicalSrcIdx = 234;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.niwklhwsx3v.luma25gcen
                    section.data(5).logicalSrcIdx = 235;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.niwklhwsx3v.dpa2iut1so
                    section.data(6).logicalSrcIdx = 236;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.niwklhwsx3v.huhfoe0tl4
                    section.data(7).logicalSrcIdx = 237;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.niwklhwsx3v.hti1si4rdk
                    section.data(8).logicalSrcIdx = 238;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.niwklhwsx3v.kwrf33mt0y
                    section.data(9).logicalSrcIdx = 239;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.niwklhwsx3v.ejxr3kbwjl
                    section.data(10).logicalSrcIdx = 240;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            sigMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.dcv1n5znmuv.fzopq45nfd
                    section.data(1).logicalSrcIdx = 241;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(14) = section;
            clear section

            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% rtB.dcv1n5znmuv.e0o1bd20vo
                    section.data(1).logicalSrcIdx = 242;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.dcv1n5znmuv.abgdmof3z2
                    section.data(2).logicalSrcIdx = 243;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.dcv1n5znmuv.p1jp4mdoen
                    section.data(3).logicalSrcIdx = 244;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.dcv1n5znmuv.duvtsehdce
                    section.data(4).logicalSrcIdx = 245;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.dcv1n5znmuv.fv1mrzbe4c
                    section.data(5).logicalSrcIdx = 246;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.dcv1n5znmuv.lmktjrl5f5
                    section.data(6).logicalSrcIdx = 247;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.dcv1n5znmuv.hwwfjbcp1v
                    section.data(7).logicalSrcIdx = 248;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.dcv1n5znmuv.eusr0f43yb
                    section.data(8).logicalSrcIdx = 249;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.dcv1n5znmuv.jbrsw5znzy
                    section.data(9).logicalSrcIdx = 250;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.dcv1n5znmuv.jxvuawgxub
                    section.data(10).logicalSrcIdx = 251;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.dcv1n5znmuv.m0rfj5bblp
                    section.data(11).logicalSrcIdx = 252;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.dcv1n5znmuv.d1oat1xcqk
                    section.data(12).logicalSrcIdx = 253;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.dcv1n5znmuv.f1cqvpbkph
                    section.data(13).logicalSrcIdx = 254;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.dcv1n5znmuv.esxwvptqwa
                    section.data(14).logicalSrcIdx = 255;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.dcv1n5znmuv.m0df3zixb5
                    section.data(15).logicalSrcIdx = 256;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.dcv1n5znmuv.ie103btofq
                    section.data(16).logicalSrcIdx = 257;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.dcv1n5znmuv.fnbby4ss5l
                    section.data(17).logicalSrcIdx = 258;
                    section.data(17).dtTransOffset = 16;

            nTotData = nTotData + section.nData;
            sigMap.sections(15) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 50;
        sectIdxOffset = 15;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.cml5jfi20y
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.mhmstimj0b
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.kntnmaf2k0
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.kwcc2dn5eb
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.hnx04unhpe
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.dudloqqeo4
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.gqpntl3qzq
                    section.data(2).logicalSrcIdx = 6;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ixe520xgwg
                    section.data(3).logicalSrcIdx = 7;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.di0bxs2fw4
                    section.data(4).logicalSrcIdx = 8;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 94;
            section.data(94)  = dumData; %prealloc

                    ;% rtDW.lleaa2bu3k
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.mhdsbfag3p
                    section.data(2).logicalSrcIdx = 10;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.dnpambpqv0
                    section.data(3).logicalSrcIdx = 11;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.irtn1pigh1
                    section.data(4).logicalSrcIdx = 12;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.pjw5fg5uo2
                    section.data(5).logicalSrcIdx = 13;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.mnnhpr22z4
                    section.data(6).logicalSrcIdx = 14;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.lmayfj3d40
                    section.data(7).logicalSrcIdx = 15;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.ldsnwmeuov
                    section.data(8).logicalSrcIdx = 16;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.eumyrp5pyl
                    section.data(9).logicalSrcIdx = 17;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.jxnrobm0ap
                    section.data(10).logicalSrcIdx = 18;
                    section.data(10).dtTransOffset = 10;

                    ;% rtDW.d5um3n4xta
                    section.data(11).logicalSrcIdx = 19;
                    section.data(11).dtTransOffset = 12;

                    ;% rtDW.i4rkudpol2
                    section.data(12).logicalSrcIdx = 20;
                    section.data(12).dtTransOffset = 14;

                    ;% rtDW.mnxn4u1r32
                    section.data(13).logicalSrcIdx = 21;
                    section.data(13).dtTransOffset = 15;

                    ;% rtDW.ejizxh3xbq
                    section.data(14).logicalSrcIdx = 22;
                    section.data(14).dtTransOffset = 16;

                    ;% rtDW.j0j3gkyaz4
                    section.data(15).logicalSrcIdx = 23;
                    section.data(15).dtTransOffset = 18;

                    ;% rtDW.lmdt0p1zhx
                    section.data(16).logicalSrcIdx = 24;
                    section.data(16).dtTransOffset = 19;

                    ;% rtDW.jpqy31tugr
                    section.data(17).logicalSrcIdx = 25;
                    section.data(17).dtTransOffset = 20;

                    ;% rtDW.dflcaojudt
                    section.data(18).logicalSrcIdx = 26;
                    section.data(18).dtTransOffset = 22;

                    ;% rtDW.iigab0hdaa
                    section.data(19).logicalSrcIdx = 27;
                    section.data(19).dtTransOffset = 23;

                    ;% rtDW.akeuyokorb
                    section.data(20).logicalSrcIdx = 28;
                    section.data(20).dtTransOffset = 24;

                    ;% rtDW.jmszhlo2dw
                    section.data(21).logicalSrcIdx = 29;
                    section.data(21).dtTransOffset = 26;

                    ;% rtDW.nprei0xhbm
                    section.data(22).logicalSrcIdx = 30;
                    section.data(22).dtTransOffset = 28;

                    ;% rtDW.drw25ppflg
                    section.data(23).logicalSrcIdx = 31;
                    section.data(23).dtTransOffset = 30;

                    ;% rtDW.gyvu0bzqc2
                    section.data(24).logicalSrcIdx = 32;
                    section.data(24).dtTransOffset = 32;

                    ;% rtDW.kqrjzmxmmj
                    section.data(25).logicalSrcIdx = 33;
                    section.data(25).dtTransOffset = 34;

                    ;% rtDW.kkjbzurbd4
                    section.data(26).logicalSrcIdx = 34;
                    section.data(26).dtTransOffset = 36;

                    ;% rtDW.cw143vujbc
                    section.data(27).logicalSrcIdx = 35;
                    section.data(27).dtTransOffset = 38;

                    ;% rtDW.lnvjgcmtya
                    section.data(28).logicalSrcIdx = 36;
                    section.data(28).dtTransOffset = 39;

                    ;% rtDW.n21jehczyz
                    section.data(29).logicalSrcIdx = 37;
                    section.data(29).dtTransOffset = 40;

                    ;% rtDW.bpekxkgz5r
                    section.data(30).logicalSrcIdx = 38;
                    section.data(30).dtTransOffset = 42;

                    ;% rtDW.m4njp3jixa
                    section.data(31).logicalSrcIdx = 39;
                    section.data(31).dtTransOffset = 43;

                    ;% rtDW.csy2ievxof
                    section.data(32).logicalSrcIdx = 40;
                    section.data(32).dtTransOffset = 44;

                    ;% rtDW.bd1snjdvvz
                    section.data(33).logicalSrcIdx = 41;
                    section.data(33).dtTransOffset = 46;

                    ;% rtDW.e1v1lccx05
                    section.data(34).logicalSrcIdx = 42;
                    section.data(34).dtTransOffset = 541;

                    ;% rtDW.mbily23r2x
                    section.data(35).logicalSrcIdx = 43;
                    section.data(35).dtTransOffset = 542;

                    ;% rtDW.pqpdae1rkg
                    section.data(36).logicalSrcIdx = 44;
                    section.data(36).dtTransOffset = 543;

                    ;% rtDW.phvkytgqfg
                    section.data(37).logicalSrcIdx = 45;
                    section.data(37).dtTransOffset = 544;

                    ;% rtDW.ifcf4n4s50
                    section.data(38).logicalSrcIdx = 46;
                    section.data(38).dtTransOffset = 546;

                    ;% rtDW.gk2gihlorz
                    section.data(39).logicalSrcIdx = 47;
                    section.data(39).dtTransOffset = 548;

                    ;% rtDW.nsbxtmm1cn
                    section.data(40).logicalSrcIdx = 48;
                    section.data(40).dtTransOffset = 549;

                    ;% rtDW.a3g1n3kium
                    section.data(41).logicalSrcIdx = 49;
                    section.data(41).dtTransOffset = 551;

                    ;% rtDW.hp1lyjf2r0
                    section.data(42).logicalSrcIdx = 50;
                    section.data(42).dtTransOffset = 553;

                    ;% rtDW.gzhstadlci
                    section.data(43).logicalSrcIdx = 51;
                    section.data(43).dtTransOffset = 554;

                    ;% rtDW.ccgn2qrmeh
                    section.data(44).logicalSrcIdx = 52;
                    section.data(44).dtTransOffset = 556;

                    ;% rtDW.bx22px25rp
                    section.data(45).logicalSrcIdx = 53;
                    section.data(45).dtTransOffset = 557;

                    ;% rtDW.hln4rpfipj
                    section.data(46).logicalSrcIdx = 54;
                    section.data(46).dtTransOffset = 559;

                    ;% rtDW.o1yfo40v0b
                    section.data(47).logicalSrcIdx = 55;
                    section.data(47).dtTransOffset = 560;

                    ;% rtDW.mnjjjealba
                    section.data(48).logicalSrcIdx = 56;
                    section.data(48).dtTransOffset = 562;

                    ;% rtDW.drp2s1fkbw
                    section.data(49).logicalSrcIdx = 57;
                    section.data(49).dtTransOffset = 693;

                    ;% rtDW.nqs0e4qiyi
                    section.data(50).logicalSrcIdx = 58;
                    section.data(50).dtTransOffset = 694;

                    ;% rtDW.hx3x1whwix
                    section.data(51).logicalSrcIdx = 59;
                    section.data(51).dtTransOffset = 695;

                    ;% rtDW.ndjycy0ncu
                    section.data(52).logicalSrcIdx = 60;
                    section.data(52).dtTransOffset = 696;

                    ;% rtDW.gdarws5cet
                    section.data(53).logicalSrcIdx = 61;
                    section.data(53).dtTransOffset = 697;

                    ;% rtDW.os4eodixdj
                    section.data(54).logicalSrcIdx = 62;
                    section.data(54).dtTransOffset = 698;

                    ;% rtDW.knkvo1aqav
                    section.data(55).logicalSrcIdx = 63;
                    section.data(55).dtTransOffset = 699;

                    ;% rtDW.ecexmjp4cp
                    section.data(56).logicalSrcIdx = 64;
                    section.data(56).dtTransOffset = 700;

                    ;% rtDW.mbhhqhviac
                    section.data(57).logicalSrcIdx = 65;
                    section.data(57).dtTransOffset = 701;

                    ;% rtDW.jzzoqjidxr
                    section.data(58).logicalSrcIdx = 66;
                    section.data(58).dtTransOffset = 702;

                    ;% rtDW.k54sskerfg
                    section.data(59).logicalSrcIdx = 67;
                    section.data(59).dtTransOffset = 703;

                    ;% rtDW.m0gn5rj2kr
                    section.data(60).logicalSrcIdx = 68;
                    section.data(60).dtTransOffset = 704;

                    ;% rtDW.hy4y4azdi4
                    section.data(61).logicalSrcIdx = 69;
                    section.data(61).dtTransOffset = 705;

                    ;% rtDW.eiwgc3nri0
                    section.data(62).logicalSrcIdx = 70;
                    section.data(62).dtTransOffset = 706;

                    ;% rtDW.bgbumsdjr3
                    section.data(63).logicalSrcIdx = 71;
                    section.data(63).dtTransOffset = 707;

                    ;% rtDW.amrbuea2lh
                    section.data(64).logicalSrcIdx = 72;
                    section.data(64).dtTransOffset = 708;

                    ;% rtDW.gqklbmgxqa
                    section.data(65).logicalSrcIdx = 73;
                    section.data(65).dtTransOffset = 709;

                    ;% rtDW.ewtzj1ulsa
                    section.data(66).logicalSrcIdx = 74;
                    section.data(66).dtTransOffset = 710;

                    ;% rtDW.e3hszyant0
                    section.data(67).logicalSrcIdx = 75;
                    section.data(67).dtTransOffset = 711;

                    ;% rtDW.jxnpnaq25g
                    section.data(68).logicalSrcIdx = 76;
                    section.data(68).dtTransOffset = 725;

                    ;% rtDW.jvb3vjuzk4
                    section.data(69).logicalSrcIdx = 77;
                    section.data(69).dtTransOffset = 732;

                    ;% rtDW.kq3kho1kqh
                    section.data(70).logicalSrcIdx = 78;
                    section.data(70).dtTransOffset = 733;

                    ;% rtDW.enl4e2rnxb
                    section.data(71).logicalSrcIdx = 79;
                    section.data(71).dtTransOffset = 734;

                    ;% rtDW.nc1x4jgsma
                    section.data(72).logicalSrcIdx = 80;
                    section.data(72).dtTransOffset = 735;

                    ;% rtDW.kii05o3yax
                    section.data(73).logicalSrcIdx = 81;
                    section.data(73).dtTransOffset = 736;

                    ;% rtDW.mg4cbnlg4c
                    section.data(74).logicalSrcIdx = 82;
                    section.data(74).dtTransOffset = 737;

                    ;% rtDW.kihvbrbcpv
                    section.data(75).logicalSrcIdx = 83;
                    section.data(75).dtTransOffset = 738;

                    ;% rtDW.prx0yypsvk
                    section.data(76).logicalSrcIdx = 84;
                    section.data(76).dtTransOffset = 739;

                    ;% rtDW.lsdqnk4xlu
                    section.data(77).logicalSrcIdx = 85;
                    section.data(77).dtTransOffset = 740;

                    ;% rtDW.ix0hnlqu2r
                    section.data(78).logicalSrcIdx = 86;
                    section.data(78).dtTransOffset = 741;

                    ;% rtDW.bv3syfxdof
                    section.data(79).logicalSrcIdx = 87;
                    section.data(79).dtTransOffset = 742;

                    ;% rtDW.fg2hqk5r45
                    section.data(80).logicalSrcIdx = 88;
                    section.data(80).dtTransOffset = 743;

                    ;% rtDW.dwhdkxhrtq
                    section.data(81).logicalSrcIdx = 89;
                    section.data(81).dtTransOffset = 744;

                    ;% rtDW.nb0nsgoo0u
                    section.data(82).logicalSrcIdx = 90;
                    section.data(82).dtTransOffset = 745;

                    ;% rtDW.nu3wxhpd51
                    section.data(83).logicalSrcIdx = 91;
                    section.data(83).dtTransOffset = 746;

                    ;% rtDW.pfubnfutaq
                    section.data(84).logicalSrcIdx = 92;
                    section.data(84).dtTransOffset = 747;

                    ;% rtDW.cqc0irro5b
                    section.data(85).logicalSrcIdx = 93;
                    section.data(85).dtTransOffset = 748;

                    ;% rtDW.h4l0ou2ddg
                    section.data(86).logicalSrcIdx = 94;
                    section.data(86).dtTransOffset = 749;

                    ;% rtDW.eb5mx31pjn
                    section.data(87).logicalSrcIdx = 95;
                    section.data(87).dtTransOffset = 750;

                    ;% rtDW.ezlzuq3fbv
                    section.data(88).logicalSrcIdx = 96;
                    section.data(88).dtTransOffset = 751;

                    ;% rtDW.d4faujrfth
                    section.data(89).logicalSrcIdx = 97;
                    section.data(89).dtTransOffset = 752;

                    ;% rtDW.kphwtawaqz
                    section.data(90).logicalSrcIdx = 98;
                    section.data(90).dtTransOffset = 753;

                    ;% rtDW.hvukvjq53j
                    section.data(91).logicalSrcIdx = 99;
                    section.data(91).dtTransOffset = 754;

                    ;% rtDW.ks53dh003g
                    section.data(92).logicalSrcIdx = 100;
                    section.data(92).dtTransOffset = 755;

                    ;% rtDW.clmqb1pdfv
                    section.data(93).logicalSrcIdx = 101;
                    section.data(93).dtTransOffset = 756;

                    ;% rtDW.gew3kluww1
                    section.data(94).logicalSrcIdx = 102;
                    section.data(94).dtTransOffset = 757;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% rtDW.ciq1zaxdkw.TimePtr
                    section.data(1).logicalSrcIdx = 103;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.be221z1e1o
                    section.data(2).logicalSrcIdx = 104;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.bobjb1gwl3
                    section.data(3).logicalSrcIdx = 105;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.om3futd4ar
                    section.data(4).logicalSrcIdx = 106;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.fyybdlvdts
                    section.data(5).logicalSrcIdx = 107;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.mlpq2qtz1m.LoggedData
                    section.data(6).logicalSrcIdx = 108;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.i2hdj1parb
                    section.data(7).logicalSrcIdx = 109;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.bssh5wu3k0
                    section.data(8).logicalSrcIdx = 110;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.fcgov4gdnu
                    section.data(9).logicalSrcIdx = 111;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.f22kwc3yyn
                    section.data(10).logicalSrcIdx = 112;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.j5j3pnskwr
                    section.data(11).logicalSrcIdx = 113;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.nnylulku3q
                    section.data(12).logicalSrcIdx = 114;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.pcl4ti3bhu
                    section.data(13).logicalSrcIdx = 115;
                    section.data(13).dtTransOffset = 13;

                    ;% rtDW.hocinu3cdc
                    section.data(14).logicalSrcIdx = 116;
                    section.data(14).dtTransOffset = 15;

                    ;% rtDW.nlsw5gkqqh
                    section.data(15).logicalSrcIdx = 117;
                    section.data(15).dtTransOffset = 17;

                    ;% rtDW.l2gaomszid.AQHandles
                    section.data(16).logicalSrcIdx = 118;
                    section.data(16).dtTransOffset = 19;

                    ;% rtDW.n4nsnzk31c.AQHandles
                    section.data(17).logicalSrcIdx = 119;
                    section.data(17).dtTransOffset = 27;

                    ;% rtDW.fj3is30pqt.AQHandles
                    section.data(18).logicalSrcIdx = 120;
                    section.data(18).dtTransOffset = 40;

                    ;% rtDW.jil25orid4.AQHandles
                    section.data(19).logicalSrcIdx = 121;
                    section.data(19).dtTransOffset = 49;

                    ;% rtDW.dwazaymsmu.AQHandles
                    section.data(20).logicalSrcIdx = 122;
                    section.data(20).dtTransOffset = 52;

                    ;% rtDW.fuzg1wrtyn.AQHandles
                    section.data(21).logicalSrcIdx = 123;
                    section.data(21).dtTransOffset = 53;

                    ;% rtDW.jjbfkypoxr.AQHandles
                    section.data(22).logicalSrcIdx = 124;
                    section.data(22).dtTransOffset = 55;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% rtDW.irqpk4eujy
                    section.data(1).logicalSrcIdx = 125;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.n053elo50a
                    section.data(2).logicalSrcIdx = 126;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.akcaxq4eds
                    section.data(3).logicalSrcIdx = 127;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.bevg3qw0v1
                    section.data(4).logicalSrcIdx = 128;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.iwis52ytjn
                    section.data(5).logicalSrcIdx = 129;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ft2syetfwj
                    section.data(6).logicalSrcIdx = 130;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.f2zcb1kdcc
                    section.data(7).logicalSrcIdx = 131;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 11;
            section.data(11)  = dumData; %prealloc

                    ;% rtDW.fttgqbbz2t
                    section.data(1).logicalSrcIdx = 132;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.pzq0qcfe1g
                    section.data(2).logicalSrcIdx = 133;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ocuc0fx3yt
                    section.data(3).logicalSrcIdx = 134;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.j2iveckht0
                    section.data(4).logicalSrcIdx = 135;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ov0wafkzaq
                    section.data(5).logicalSrcIdx = 136;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.iczzdtqy5e
                    section.data(6).logicalSrcIdx = 137;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.ad3m1g22te
                    section.data(7).logicalSrcIdx = 138;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.inbicjhyb2
                    section.data(8).logicalSrcIdx = 139;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.diztvqoynn
                    section.data(9).logicalSrcIdx = 140;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.lnwmgfkxv2
                    section.data(10).logicalSrcIdx = 141;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.ffyc0jrq3l
                    section.data(11).logicalSrcIdx = 142;
                    section.data(11).dtTransOffset = 10;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.hobzuhirjy.PrevIndex
                    section.data(1).logicalSrcIdx = 143;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.nav4ts0xbw
                    section.data(2).logicalSrcIdx = 144;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.mk2icbigfr
                    section.data(3).logicalSrcIdx = 145;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.jpo2cxovr2
                    section.data(1).logicalSrcIdx = 146;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.hvru5zoyw2
                    section.data(2).logicalSrcIdx = 147;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 15;
            section.data(15)  = dumData; %prealloc

                    ;% rtDW.jewpplfdpv
                    section.data(1).logicalSrcIdx = 148;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ks13g0z1fz
                    section.data(2).logicalSrcIdx = 149;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.i3kbf35ki2
                    section.data(3).logicalSrcIdx = 150;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.kygfiwzyjy
                    section.data(4).logicalSrcIdx = 151;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.jbtrltpzom
                    section.data(5).logicalSrcIdx = 152;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ils0ktw10b
                    section.data(6).logicalSrcIdx = 153;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.iaa5doa1i3
                    section.data(7).logicalSrcIdx = 154;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.baxj4vfhht
                    section.data(8).logicalSrcIdx = 155;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.nqncny2lp3
                    section.data(9).logicalSrcIdx = 156;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.eiyaxzreeq
                    section.data(10).logicalSrcIdx = 157;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.aklj53pmll
                    section.data(11).logicalSrcIdx = 158;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.k2t41dz4ml
                    section.data(12).logicalSrcIdx = 159;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.mwatrxyd41
                    section.data(13).logicalSrcIdx = 160;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.fp2ysmwzwb
                    section.data(14).logicalSrcIdx = 161;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.ean3ada2te
                    section.data(15).logicalSrcIdx = 162;
                    section.data(15).dtTransOffset = 14;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 40;
            section.data(40)  = dumData; %prealloc

                    ;% rtDW.lh2z4v1vt3
                    section.data(1).logicalSrcIdx = 163;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.kbadzhl2q2
                    section.data(2).logicalSrcIdx = 164;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.omubgfroil
                    section.data(3).logicalSrcIdx = 165;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.d4i31jxdbs
                    section.data(4).logicalSrcIdx = 166;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.pzjsealmzb
                    section.data(5).logicalSrcIdx = 167;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.pnr3woeyee
                    section.data(6).logicalSrcIdx = 168;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.hk2ma0nauv
                    section.data(7).logicalSrcIdx = 169;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.o01dcxciro
                    section.data(8).logicalSrcIdx = 170;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.cw4uypxdhg
                    section.data(9).logicalSrcIdx = 171;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.ods4qrghxn
                    section.data(10).logicalSrcIdx = 172;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.p23lyrh5pj
                    section.data(11).logicalSrcIdx = 173;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.dq35m12czr
                    section.data(12).logicalSrcIdx = 174;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.juodv5kdgu
                    section.data(13).logicalSrcIdx = 175;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.ip4xwb00nz
                    section.data(14).logicalSrcIdx = 176;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.fa3mzqv20e
                    section.data(15).logicalSrcIdx = 177;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.hwri2skcao
                    section.data(16).logicalSrcIdx = 178;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.jxww0n1r1s
                    section.data(17).logicalSrcIdx = 179;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.jn0jhxlxbq
                    section.data(18).logicalSrcIdx = 180;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.pf02qi5htd
                    section.data(19).logicalSrcIdx = 181;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.dbvvl5p34e
                    section.data(20).logicalSrcIdx = 182;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.mwjzgrgnkd
                    section.data(21).logicalSrcIdx = 183;
                    section.data(21).dtTransOffset = 20;

                    ;% rtDW.lg1wlc23qz
                    section.data(22).logicalSrcIdx = 184;
                    section.data(22).dtTransOffset = 21;

                    ;% rtDW.mutwygyu4c
                    section.data(23).logicalSrcIdx = 185;
                    section.data(23).dtTransOffset = 22;

                    ;% rtDW.clkz1keqp1
                    section.data(24).logicalSrcIdx = 186;
                    section.data(24).dtTransOffset = 23;

                    ;% rtDW.o04ugsqef4
                    section.data(25).logicalSrcIdx = 187;
                    section.data(25).dtTransOffset = 24;

                    ;% rtDW.iqlep0aexa
                    section.data(26).logicalSrcIdx = 188;
                    section.data(26).dtTransOffset = 25;

                    ;% rtDW.nhdda3nybj
                    section.data(27).logicalSrcIdx = 189;
                    section.data(27).dtTransOffset = 26;

                    ;% rtDW.iunmcluswp
                    section.data(28).logicalSrcIdx = 190;
                    section.data(28).dtTransOffset = 27;

                    ;% rtDW.h1ccnwgcjr
                    section.data(29).logicalSrcIdx = 191;
                    section.data(29).dtTransOffset = 28;

                    ;% rtDW.bzpmcehbnd
                    section.data(30).logicalSrcIdx = 192;
                    section.data(30).dtTransOffset = 29;

                    ;% rtDW.g5spffg4ga
                    section.data(31).logicalSrcIdx = 193;
                    section.data(31).dtTransOffset = 30;

                    ;% rtDW.lobb2dlaih
                    section.data(32).logicalSrcIdx = 194;
                    section.data(32).dtTransOffset = 31;

                    ;% rtDW.kecct2hx35
                    section.data(33).logicalSrcIdx = 195;
                    section.data(33).dtTransOffset = 32;

                    ;% rtDW.nhuq4j3u3v
                    section.data(34).logicalSrcIdx = 196;
                    section.data(34).dtTransOffset = 33;

                    ;% rtDW.lzvl3m5s3c
                    section.data(35).logicalSrcIdx = 197;
                    section.data(35).dtTransOffset = 34;

                    ;% rtDW.i1t2u0w2xh
                    section.data(36).logicalSrcIdx = 198;
                    section.data(36).dtTransOffset = 35;

                    ;% rtDW.dtjity5osd
                    section.data(37).logicalSrcIdx = 199;
                    section.data(37).dtTransOffset = 36;

                    ;% rtDW.ptv1rv5avw
                    section.data(38).logicalSrcIdx = 200;
                    section.data(38).dtTransOffset = 37;

                    ;% rtDW.ky5fxtm0ia
                    section.data(39).logicalSrcIdx = 201;
                    section.data(39).dtTransOffset = 38;

                    ;% rtDW.klbtwaqkk1
                    section.data(40).logicalSrcIdx = 202;
                    section.data(40).dtTransOffset = 39;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.bmnpezgtfw.kfovwheeuv
                    section.data(1).logicalSrcIdx = 203;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.bmnpezgtfw.o03vw25i0s.modelTStart
                    section.data(2).logicalSrcIdx = 204;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.bmnpezgtfw.cnf0kklene.TUbufferPtrs
                    section.data(1).logicalSrcIdx = 205;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.bmnpezgtfw.mhd233skah.Tail
                    section.data(1).logicalSrcIdx = 206;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.bmnpezgtfw.mkvvheiule
                    section.data(2).logicalSrcIdx = 207;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.bmnpezgtfw.f5ocuublly
                    section.data(1).logicalSrcIdx = 208;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.bmnpezgtfw.mzkce2qaq4
                    section.data(2).logicalSrcIdx = 209;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.bmnpezgtfw.jxxnycvq5b
                    section.data(1).logicalSrcIdx = 210;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.ad2zto0ceq.ire3odvk4q
                    section.data(1).logicalSrcIdx = 211;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ad2zto0ceq.iigdoh2d2j
                    section.data(2).logicalSrcIdx = 212;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ad2zto0ceq.m50nvhcvdy.modelTStart
                    section.data(3).logicalSrcIdx = 213;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ad2zto0ceq.g3i5kks1he.modelTStart
                    section.data(4).logicalSrcIdx = 214;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.ad2zto0ceq.g1hkwoc3vm.TUbufferPtrs
                    section.data(1).logicalSrcIdx = 215;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ad2zto0ceq.d3lpaonarv.TUbufferPtrs
                    section.data(2).logicalSrcIdx = 216;
                    section.data(2).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.ad2zto0ceq.eyderrq2ko.Tail
                    section.data(1).logicalSrcIdx = 217;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ad2zto0ceq.f0npzgzqdo.Tail
                    section.data(2).logicalSrcIdx = 218;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(18) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ad2zto0ceq.i3khug3ve5
                    section.data(1).logicalSrcIdx = 219;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(19) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ad2zto0ceq.kert0igju2
                    section.data(1).logicalSrcIdx = 220;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(20) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.oy0o2e1tch.kfovwheeuv
                    section.data(1).logicalSrcIdx = 221;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.oy0o2e1tch.o03vw25i0s.modelTStart
                    section.data(2).logicalSrcIdx = 222;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(21) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.oy0o2e1tch.cnf0kklene.TUbufferPtrs
                    section.data(1).logicalSrcIdx = 223;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(22) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.oy0o2e1tch.mhd233skah.Tail
                    section.data(1).logicalSrcIdx = 224;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.oy0o2e1tch.mkvvheiule
                    section.data(2).logicalSrcIdx = 225;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(23) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.oy0o2e1tch.f5ocuublly
                    section.data(1).logicalSrcIdx = 226;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.oy0o2e1tch.mzkce2qaq4
                    section.data(2).logicalSrcIdx = 227;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(24) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.oy0o2e1tch.jxxnycvq5b
                    section.data(1).logicalSrcIdx = 228;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(25) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.ine2cb2czx.ire3odvk4q
                    section.data(1).logicalSrcIdx = 229;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ine2cb2czx.iigdoh2d2j
                    section.data(2).logicalSrcIdx = 230;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ine2cb2czx.m50nvhcvdy.modelTStart
                    section.data(3).logicalSrcIdx = 231;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ine2cb2czx.g3i5kks1he.modelTStart
                    section.data(4).logicalSrcIdx = 232;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(26) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.ine2cb2czx.g1hkwoc3vm.TUbufferPtrs
                    section.data(1).logicalSrcIdx = 233;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ine2cb2czx.d3lpaonarv.TUbufferPtrs
                    section.data(2).logicalSrcIdx = 234;
                    section.data(2).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(27) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.ine2cb2czx.eyderrq2ko.Tail
                    section.data(1).logicalSrcIdx = 235;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ine2cb2czx.f0npzgzqdo.Tail
                    section.data(2).logicalSrcIdx = 236;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(28) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ine2cb2czx.i3khug3ve5
                    section.data(1).logicalSrcIdx = 237;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(29) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ine2cb2czx.kert0igju2
                    section.data(1).logicalSrcIdx = 238;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(30) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.ceg2xz1h3k.kfovwheeuv
                    section.data(1).logicalSrcIdx = 239;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ceg2xz1h3k.o03vw25i0s.modelTStart
                    section.data(2).logicalSrcIdx = 240;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(31) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ceg2xz1h3k.cnf0kklene.TUbufferPtrs
                    section.data(1).logicalSrcIdx = 241;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(32) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.ceg2xz1h3k.mhd233skah.Tail
                    section.data(1).logicalSrcIdx = 242;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ceg2xz1h3k.mkvvheiule
                    section.data(2).logicalSrcIdx = 243;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(33) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.ceg2xz1h3k.f5ocuublly
                    section.data(1).logicalSrcIdx = 244;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ceg2xz1h3k.mzkce2qaq4
                    section.data(2).logicalSrcIdx = 245;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(34) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ceg2xz1h3k.jxxnycvq5b
                    section.data(1).logicalSrcIdx = 246;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(35) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.f5dx3nomiq.ire3odvk4q
                    section.data(1).logicalSrcIdx = 247;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.f5dx3nomiq.iigdoh2d2j
                    section.data(2).logicalSrcIdx = 248;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.f5dx3nomiq.m50nvhcvdy.modelTStart
                    section.data(3).logicalSrcIdx = 249;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.f5dx3nomiq.g3i5kks1he.modelTStart
                    section.data(4).logicalSrcIdx = 250;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(36) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.f5dx3nomiq.g1hkwoc3vm.TUbufferPtrs
                    section.data(1).logicalSrcIdx = 251;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.f5dx3nomiq.d3lpaonarv.TUbufferPtrs
                    section.data(2).logicalSrcIdx = 252;
                    section.data(2).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(37) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.f5dx3nomiq.eyderrq2ko.Tail
                    section.data(1).logicalSrcIdx = 253;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.f5dx3nomiq.f0npzgzqdo.Tail
                    section.data(2).logicalSrcIdx = 254;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(38) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.f5dx3nomiq.i3khug3ve5
                    section.data(1).logicalSrcIdx = 255;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(39) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.f5dx3nomiq.kert0igju2
                    section.data(1).logicalSrcIdx = 256;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(40) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.niwklhwsx3v.kfovwheeuv
                    section.data(1).logicalSrcIdx = 257;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.niwklhwsx3v.o03vw25i0s.modelTStart
                    section.data(2).logicalSrcIdx = 258;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(41) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.niwklhwsx3v.cnf0kklene.TUbufferPtrs
                    section.data(1).logicalSrcIdx = 259;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(42) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.niwklhwsx3v.mhd233skah.Tail
                    section.data(1).logicalSrcIdx = 260;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.niwklhwsx3v.mkvvheiule
                    section.data(2).logicalSrcIdx = 261;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(43) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.niwklhwsx3v.f5ocuublly
                    section.data(1).logicalSrcIdx = 262;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.niwklhwsx3v.mzkce2qaq4
                    section.data(2).logicalSrcIdx = 263;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(44) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.niwklhwsx3v.jxxnycvq5b
                    section.data(1).logicalSrcIdx = 264;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(45) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.dcv1n5znmuv.ire3odvk4q
                    section.data(1).logicalSrcIdx = 265;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dcv1n5znmuv.iigdoh2d2j
                    section.data(2).logicalSrcIdx = 266;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.dcv1n5znmuv.m50nvhcvdy.modelTStart
                    section.data(3).logicalSrcIdx = 267;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.dcv1n5znmuv.g3i5kks1he.modelTStart
                    section.data(4).logicalSrcIdx = 268;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(46) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.dcv1n5znmuv.g1hkwoc3vm.TUbufferPtrs
                    section.data(1).logicalSrcIdx = 269;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dcv1n5znmuv.d3lpaonarv.TUbufferPtrs
                    section.data(2).logicalSrcIdx = 270;
                    section.data(2).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(47) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.dcv1n5znmuv.eyderrq2ko.Tail
                    section.data(1).logicalSrcIdx = 271;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dcv1n5znmuv.f0npzgzqdo.Tail
                    section.data(2).logicalSrcIdx = 272;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(48) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.dcv1n5znmuv.i3khug3ve5
                    section.data(1).logicalSrcIdx = 273;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(49) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.dcv1n5znmuv.kert0igju2
                    section.data(1).logicalSrcIdx = 274;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(50) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 960970257;
    targMap.checksum1 = 100470832;
    targMap.checksum2 = 370566452;
    targMap.checksum3 = 1436950756;


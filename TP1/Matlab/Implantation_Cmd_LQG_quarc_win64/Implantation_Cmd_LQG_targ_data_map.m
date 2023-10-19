    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 6;
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
        ;% Auto data (Implantation_Cmd_LQG_P)
        ;%
            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% Implantation_Cmd_LQG_P.A
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% Implantation_Cmd_LQG_P.K_lq
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 4;

                    ;% Implantation_Cmd_LQG_P.Kw
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

                    ;% Implantation_Cmd_LQG_P.Kz
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 7;

                    ;% Implantation_Cmd_LQG_P.M_lq
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 8;

                    ;% Implantation_Cmd_LQG_P.Te1
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 9;

                    ;% Implantation_Cmd_LQG_P.Te2
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 10;

                    ;% Implantation_Cmd_LQG_P.BaseLEDColour_color
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% Implantation_Cmd_LQG_P.HILRead_analog_channels
                    section.data(1).logicalSrcIdx = 8;
                    section.data(1).dtTransOffset = 0;

                    ;% Implantation_Cmd_LQG_P.HILWrite_analog_channels
                    section.data(2).logicalSrcIdx = 9;
                    section.data(2).dtTransOffset = 2;

                    ;% Implantation_Cmd_LQG_P.HILRead_digital_channels
                    section.data(3).logicalSrcIdx = 10;
                    section.data(3).dtTransOffset = 4;

                    ;% Implantation_Cmd_LQG_P.HILWrite_digital_channels
                    section.data(4).logicalSrcIdx = 11;
                    section.data(4).dtTransOffset = 7;

                    ;% Implantation_Cmd_LQG_P.HILRead_encoder_channels
                    section.data(5).logicalSrcIdx = 12;
                    section.data(5).dtTransOffset = 9;

                    ;% Implantation_Cmd_LQG_P.HILRead_other_channels
                    section.data(6).logicalSrcIdx = 13;
                    section.data(6).dtTransOffset = 11;

                    ;% Implantation_Cmd_LQG_P.HILWrite_other_channels
                    section.data(7).logicalSrcIdx = 14;
                    section.data(7).dtTransOffset = 19;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 35;
            section.data(35)  = dumData; %prealloc

                    ;% Implantation_Cmd_LQG_P.HILInitialize_OOTerminate
                    section.data(1).logicalSrcIdx = 15;
                    section.data(1).dtTransOffset = 0;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_OOExit
                    section.data(2).logicalSrcIdx = 16;
                    section.data(2).dtTransOffset = 1;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_OOStart
                    section.data(3).logicalSrcIdx = 17;
                    section.data(3).dtTransOffset = 2;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_OOEnter
                    section.data(4).logicalSrcIdx = 18;
                    section.data(4).dtTransOffset = 3;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AOFinal
                    section.data(5).logicalSrcIdx = 19;
                    section.data(5).dtTransOffset = 4;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_OOFinal
                    section.data(6).logicalSrcIdx = 20;
                    section.data(6).dtTransOffset = 5;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AIHigh
                    section.data(7).logicalSrcIdx = 21;
                    section.data(7).dtTransOffset = 8;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AILow
                    section.data(8).logicalSrcIdx = 22;
                    section.data(8).dtTransOffset = 9;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AOHigh
                    section.data(9).logicalSrcIdx = 23;
                    section.data(9).dtTransOffset = 10;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AOLow
                    section.data(10).logicalSrcIdx = 24;
                    section.data(10).dtTransOffset = 11;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AOInitial
                    section.data(11).logicalSrcIdx = 25;
                    section.data(11).dtTransOffset = 12;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AOWatchdog
                    section.data(12).logicalSrcIdx = 26;
                    section.data(12).dtTransOffset = 13;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_OOInitial
                    section.data(13).logicalSrcIdx = 27;
                    section.data(13).dtTransOffset = 14;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_OOWatchdog
                    section.data(14).logicalSrcIdx = 28;
                    section.data(14).dtTransOffset = 17;

                    ;% Implantation_Cmd_LQG_P.Pitchcountstodeg_Gain
                    section.data(15).logicalSrcIdx = 29;
                    section.data(15).dtTransOffset = 20;

                    ;% Implantation_Cmd_LQG_P.RateTransition_InitialCondition
                    section.data(16).logicalSrcIdx = 30;
                    section.data(16).dtTransOffset = 21;

                    ;% Implantation_Cmd_LQG_P.Gain2_Gain
                    section.data(17).logicalSrcIdx = 31;
                    section.data(17).dtTransOffset = 22;

                    ;% Implantation_Cmd_LQG_P.UnitDelay1_InitialCondition
                    section.data(18).logicalSrcIdx = 32;
                    section.data(18).dtTransOffset = 23;

                    ;% Implantation_Cmd_LQG_P.Gain2_Gain_f
                    section.data(19).logicalSrcIdx = 33;
                    section.data(19).dtTransOffset = 24;

                    ;% Implantation_Cmd_LQG_P.UnitDelay_InitialCondition
                    section.data(20).logicalSrcIdx = 34;
                    section.data(20).dtTransOffset = 25;

                    ;% Implantation_Cmd_LQG_P.u4V_UpperSat
                    section.data(21).logicalSrcIdx = 35;
                    section.data(21).dtTransOffset = 26;

                    ;% Implantation_Cmd_LQG_P.u4V_LowerSat
                    section.data(22).logicalSrcIdx = 36;
                    section.data(22).dtTransOffset = 27;

                    ;% Implantation_Cmd_LQG_P.u4V_UpperSat_n
                    section.data(23).logicalSrcIdx = 37;
                    section.data(23).dtTransOffset = 28;

                    ;% Implantation_Cmd_LQG_P.u4V_LowerSat_o
                    section.data(24).logicalSrcIdx = 38;
                    section.data(24).dtTransOffset = 29;

                    ;% Implantation_Cmd_LQG_P.YawConstantdeg2_Value
                    section.data(25).logicalSrcIdx = 39;
                    section.data(25).dtTransOffset = 30;

                    ;% Implantation_Cmd_LQG_P.PitchMotorEnable_Value
                    section.data(26).logicalSrcIdx = 40;
                    section.data(26).dtTransOffset = 31;

                    ;% Implantation_Cmd_LQG_P.YawEnableMotor_Value
                    section.data(27).logicalSrcIdx = 41;
                    section.data(27).dtTransOffset = 32;

                    ;% Implantation_Cmd_LQG_P.PulseGenerator_Amp
                    section.data(28).logicalSrcIdx = 42;
                    section.data(28).dtTransOffset = 33;

                    ;% Implantation_Cmd_LQG_P.PulseGenerator_PhaseDelay
                    section.data(29).logicalSrcIdx = 43;
                    section.data(29).dtTransOffset = 34;

                    ;% Implantation_Cmd_LQG_P.Constant_Value
                    section.data(30).logicalSrcIdx = 44;
                    section.data(30).dtTransOffset = 35;

                    ;% Implantation_Cmd_LQG_P.Gain_Gain
                    section.data(31).logicalSrcIdx = 45;
                    section.data(31).dtTransOffset = 36;

                    ;% Implantation_Cmd_LQG_P.DiscreteStateSpace_C
                    section.data(32).logicalSrcIdx = 46;
                    section.data(32).dtTransOffset = 37;

                    ;% Implantation_Cmd_LQG_P.DiscreteStateSpace_D
                    section.data(33).logicalSrcIdx = 47;
                    section.data(33).dtTransOffset = 41;

                    ;% Implantation_Cmd_LQG_P.DiscreteStateSpace_InitialCondi
                    section.data(34).logicalSrcIdx = 48;
                    section.data(34).dtTransOffset = 45;

                    ;% Implantation_Cmd_LQG_P.Gain6_Gain
                    section.data(35).logicalSrcIdx = 49;
                    section.data(35).dtTransOffset = 46;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% Implantation_Cmd_LQG_P.HILInitialize_CKChannels
                    section.data(1).logicalSrcIdx = 50;
                    section.data(1).dtTransOffset = 0;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_DOWatchdog
                    section.data(2).logicalSrcIdx = 51;
                    section.data(2).dtTransOffset = 1;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_EIInitial
                    section.data(3).logicalSrcIdx = 52;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AIChannels
                    section.data(1).logicalSrcIdx = 53;
                    section.data(1).dtTransOffset = 0;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AOChannels
                    section.data(2).logicalSrcIdx = 54;
                    section.data(2).dtTransOffset = 2;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_DOChannels
                    section.data(3).logicalSrcIdx = 55;
                    section.data(3).dtTransOffset = 4;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_EIChannels
                    section.data(4).logicalSrcIdx = 56;
                    section.data(4).dtTransOffset = 6;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_EIQuadrature
                    section.data(5).logicalSrcIdx = 57;
                    section.data(5).dtTransOffset = 10;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_OOChannels
                    section.data(6).logicalSrcIdx = 58;
                    section.data(6).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 37;
            section.data(37)  = dumData; %prealloc

                    ;% Implantation_Cmd_LQG_P.HILInitialize_Active
                    section.data(1).logicalSrcIdx = 59;
                    section.data(1).dtTransOffset = 0;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AOTerminate
                    section.data(2).logicalSrcIdx = 60;
                    section.data(2).dtTransOffset = 1;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AOExit
                    section.data(3).logicalSrcIdx = 61;
                    section.data(3).dtTransOffset = 2;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_DOTerminate
                    section.data(4).logicalSrcIdx = 62;
                    section.data(4).dtTransOffset = 3;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_DOExit
                    section.data(5).logicalSrcIdx = 63;
                    section.data(5).dtTransOffset = 4;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_POTerminate
                    section.data(6).logicalSrcIdx = 64;
                    section.data(6).dtTransOffset = 5;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_POExit
                    section.data(7).logicalSrcIdx = 65;
                    section.data(7).dtTransOffset = 6;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_CKPStart
                    section.data(8).logicalSrcIdx = 66;
                    section.data(8).dtTransOffset = 7;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_CKPEnter
                    section.data(9).logicalSrcIdx = 67;
                    section.data(9).dtTransOffset = 8;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_CKStart
                    section.data(10).logicalSrcIdx = 68;
                    section.data(10).dtTransOffset = 9;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_CKEnter
                    section.data(11).logicalSrcIdx = 69;
                    section.data(11).dtTransOffset = 10;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AIPStart
                    section.data(12).logicalSrcIdx = 70;
                    section.data(12).dtTransOffset = 11;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AIPEnter
                    section.data(13).logicalSrcIdx = 71;
                    section.data(13).dtTransOffset = 12;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AOPStart
                    section.data(14).logicalSrcIdx = 72;
                    section.data(14).dtTransOffset = 13;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AOPEnter
                    section.data(15).logicalSrcIdx = 73;
                    section.data(15).dtTransOffset = 14;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AOStart
                    section.data(16).logicalSrcIdx = 74;
                    section.data(16).dtTransOffset = 15;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AOEnter
                    section.data(17).logicalSrcIdx = 75;
                    section.data(17).dtTransOffset = 16;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_AOReset
                    section.data(18).logicalSrcIdx = 76;
                    section.data(18).dtTransOffset = 17;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_DOPStart
                    section.data(19).logicalSrcIdx = 77;
                    section.data(19).dtTransOffset = 18;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_DOPEnter
                    section.data(20).logicalSrcIdx = 78;
                    section.data(20).dtTransOffset = 19;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_DOStart
                    section.data(21).logicalSrcIdx = 79;
                    section.data(21).dtTransOffset = 20;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_DOEnter
                    section.data(22).logicalSrcIdx = 80;
                    section.data(22).dtTransOffset = 21;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_DOReset
                    section.data(23).logicalSrcIdx = 81;
                    section.data(23).dtTransOffset = 22;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_EIPStart
                    section.data(24).logicalSrcIdx = 82;
                    section.data(24).dtTransOffset = 23;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_EIPEnter
                    section.data(25).logicalSrcIdx = 83;
                    section.data(25).dtTransOffset = 24;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_EIStart
                    section.data(26).logicalSrcIdx = 84;
                    section.data(26).dtTransOffset = 25;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_EIEnter
                    section.data(27).logicalSrcIdx = 85;
                    section.data(27).dtTransOffset = 26;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_POPStart
                    section.data(28).logicalSrcIdx = 86;
                    section.data(28).dtTransOffset = 27;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_POPEnter
                    section.data(29).logicalSrcIdx = 87;
                    section.data(29).dtTransOffset = 28;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_POStart
                    section.data(30).logicalSrcIdx = 88;
                    section.data(30).dtTransOffset = 29;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_POEnter
                    section.data(31).logicalSrcIdx = 89;
                    section.data(31).dtTransOffset = 30;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_POReset
                    section.data(32).logicalSrcIdx = 90;
                    section.data(32).dtTransOffset = 31;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_OOReset
                    section.data(33).logicalSrcIdx = 91;
                    section.data(33).dtTransOffset = 32;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_DOFinal
                    section.data(34).logicalSrcIdx = 92;
                    section.data(34).dtTransOffset = 33;

                    ;% Implantation_Cmd_LQG_P.HILInitialize_DOInitial
                    section.data(35).logicalSrcIdx = 93;
                    section.data(35).dtTransOffset = 34;

                    ;% Implantation_Cmd_LQG_P.HILRead_Active
                    section.data(36).logicalSrcIdx = 94;
                    section.data(36).dtTransOffset = 35;

                    ;% Implantation_Cmd_LQG_P.HILWrite_Active
                    section.data(37).logicalSrcIdx = 95;
                    section.data(37).dtTransOffset = 36;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
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
        nTotSects     = 1;
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
        ;% Auto data (Implantation_Cmd_LQG_B)
        ;%
            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% Implantation_Cmd_LQG_B.HILRead_o1
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% Implantation_Cmd_LQG_B.HILRead_o2
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% Implantation_Cmd_LQG_B.RateTransition
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% Implantation_Cmd_LQG_B.Gain2
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% Implantation_Cmd_LQG_B.Add1
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 5;

                    ;% Implantation_Cmd_LQG_B.u4V
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 6;

                    ;% Implantation_Cmd_LQG_B.Add4
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 7;

                    ;% Implantation_Cmd_LQG_B.Clock
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 8;

                    ;% Implantation_Cmd_LQG_B.Theta_refdegrs
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 9;

                    ;% Implantation_Cmd_LQG_B.Gain
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 10;

                    ;% Implantation_Cmd_LQG_B.DiscreteStateSpace
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 11;

                    ;% Implantation_Cmd_LQG_B.TmpSignalConversionAtDiscreteSt
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 13;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
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
        nTotSects     = 6;
        sectIdxOffset = 1;

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
        ;% Auto data (Implantation_Cmd_LQG_DW)
        ;%
            section.nData     = 15;
            section.data(15)  = dumData; %prealloc

                    ;% Implantation_Cmd_LQG_DW.UnitDelay1_DSTATE
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% Implantation_Cmd_LQG_DW.UnitDelay_DSTATE
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% Implantation_Cmd_LQG_DW.DiscreteStateSpace_DSTATE
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% Implantation_Cmd_LQG_DW.HILInitialize_AIMinimums
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

                    ;% Implantation_Cmd_LQG_DW.HILInitialize_AIMaximums
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 6;

                    ;% Implantation_Cmd_LQG_DW.HILInitialize_AOMinimums
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 8;

                    ;% Implantation_Cmd_LQG_DW.HILInitialize_AOMaximums
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 10;

                    ;% Implantation_Cmd_LQG_DW.HILInitialize_AOVoltages
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 12;

                    ;% Implantation_Cmd_LQG_DW.HILInitialize_FilterFrequency
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 14;

                    ;% Implantation_Cmd_LQG_DW.HILRead_AnalogBuffer
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 18;

                    ;% Implantation_Cmd_LQG_DW.HILRead_OtherBuffer
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 20;

                    ;% Implantation_Cmd_LQG_DW.RateTransition_Buffer0
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 28;

                    ;% Implantation_Cmd_LQG_DW.HILWrite_AnalogBuffer
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 29;

                    ;% Implantation_Cmd_LQG_DW.HILWrite_OtherBuffer
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 31;

                    ;% Implantation_Cmd_LQG_DW.RateTransition2_Buffer
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 34;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Implantation_Cmd_LQG_DW.HILInitialize_Card
                    section.data(1).logicalSrcIdx = 15;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% Implantation_Cmd_LQG_DW.HILRead_PWORK
                    section.data(1).logicalSrcIdx = 16;
                    section.data(1).dtTransOffset = 0;

                    ;% Implantation_Cmd_LQG_DW.HILWrite_PWORK
                    section.data(2).logicalSrcIdx = 17;
                    section.data(2).dtTransOffset = 1;

                    ;% Implantation_Cmd_LQG_DW.CommandeVp_PWORK.LoggedData
                    section.data(3).logicalSrcIdx = 18;
                    section.data(3).dtTransOffset = 2;

                    ;% Implantation_Cmd_LQG_DW.CurrentA_PWORK.LoggedData
                    section.data(4).logicalSrcIdx = 19;
                    section.data(4).dtTransOffset = 3;

                    ;% Implantation_Cmd_LQG_DW.ToWorkspace1_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 20;
                    section.data(5).dtTransOffset = 4;

                    ;% Implantation_Cmd_LQG_DW.ToWorkspace3_PWORK.LoggedData
                    section.data(6).logicalSrcIdx = 21;
                    section.data(6).dtTransOffset = 5;

                    ;% Implantation_Cmd_LQG_DW.ToWorkspace4_PWORK.LoggedData
                    section.data(7).logicalSrcIdx = 22;
                    section.data(7).dtTransOffset = 6;

                    ;% Implantation_Cmd_LQG_DW.ToWorkspace2_PWORK.LoggedData
                    section.data(8).logicalSrcIdx = 23;
                    section.data(8).dtTransOffset = 7;

                    ;% Implantation_Cmd_LQG_DW.PitchEncoderdeg_PWORK.LoggedData
                    section.data(9).logicalSrcIdx = 24;
                    section.data(9).dtTransOffset = 8;

                    ;% Implantation_Cmd_LQG_DW.ToWorkspace_PWORK.LoggedData
                    section.data(10).logicalSrcIdx = 25;
                    section.data(10).dtTransOffset = 9;

                    ;% Implantation_Cmd_LQG_DW.ToWorkspace5_PWORK.LoggedData
                    section.data(11).logicalSrcIdx = 26;
                    section.data(11).dtTransOffset = 10;

                    ;% Implantation_Cmd_LQG_DW.ToWorkspace6_PWORK.LoggedData
                    section.data(12).logicalSrcIdx = 27;
                    section.data(12).dtTransOffset = 11;

                    ;% Implantation_Cmd_LQG_DW.ToWorkspace7_PWORK.LoggedData
                    section.data(13).logicalSrcIdx = 28;
                    section.data(13).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% Implantation_Cmd_LQG_DW.HILInitialize_ClockModes
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

                    ;% Implantation_Cmd_LQG_DW.HILInitialize_DOStates
                    section.data(2).logicalSrcIdx = 30;
                    section.data(2).dtTransOffset = 1;

                    ;% Implantation_Cmd_LQG_DW.HILInitialize_QuadratureModes
                    section.data(3).logicalSrcIdx = 31;
                    section.data(3).dtTransOffset = 3;

                    ;% Implantation_Cmd_LQG_DW.HILInitialize_InitialEICounts
                    section.data(4).logicalSrcIdx = 32;
                    section.data(4).dtTransOffset = 7;

                    ;% Implantation_Cmd_LQG_DW.HILRead_EncoderBuffer
                    section.data(5).logicalSrcIdx = 33;
                    section.data(5).dtTransOffset = 11;

                    ;% Implantation_Cmd_LQG_DW.clockTickCounter
                    section.data(6).logicalSrcIdx = 34;
                    section.data(6).dtTransOffset = 13;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Implantation_Cmd_LQG_DW.HILInitialize_DOBits
                    section.data(1).logicalSrcIdx = 35;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% Implantation_Cmd_LQG_DW.HILRead_DigitalBuffer
                    section.data(1).logicalSrcIdx = 36;
                    section.data(1).dtTransOffset = 0;

                    ;% Implantation_Cmd_LQG_DW.HILWrite_DigitalBuffer
                    section.data(2).logicalSrcIdx = 37;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
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


    targMap.checksum0 = 1609556039;
    targMap.checksum1 = 3805405871;
    targMap.checksum2 = 842302721;
    targMap.checksum3 = 4221120297;


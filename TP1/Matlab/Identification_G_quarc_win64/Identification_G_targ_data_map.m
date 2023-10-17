    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 7;
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
        ;% Auto data (Identification_G_P)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Identification_G_P.BaseLEDColour_color
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% Identification_G_P.HILRead_analog_channels
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

                    ;% Identification_G_P.HILWrite_analog_channels
                    section.data(2).logicalSrcIdx = 2;
                    section.data(2).dtTransOffset = 2;

                    ;% Identification_G_P.HILRead_digital_channels
                    section.data(3).logicalSrcIdx = 3;
                    section.data(3).dtTransOffset = 4;

                    ;% Identification_G_P.HILWrite_digital_channels
                    section.data(4).logicalSrcIdx = 4;
                    section.data(4).dtTransOffset = 7;

                    ;% Identification_G_P.HILRead_encoder_channels
                    section.data(5).logicalSrcIdx = 5;
                    section.data(5).dtTransOffset = 9;

                    ;% Identification_G_P.HILRead_other_channels
                    section.data(6).logicalSrcIdx = 6;
                    section.data(6).dtTransOffset = 11;

                    ;% Identification_G_P.HILWrite_other_channels
                    section.data(7).logicalSrcIdx = 7;
                    section.data(7).dtTransOffset = 19;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 25;
            section.data(25)  = dumData; %prealloc

                    ;% Identification_G_P.HILInitialize_OOTerminate
                    section.data(1).logicalSrcIdx = 8;
                    section.data(1).dtTransOffset = 0;

                    ;% Identification_G_P.HILInitialize_OOExit
                    section.data(2).logicalSrcIdx = 9;
                    section.data(2).dtTransOffset = 1;

                    ;% Identification_G_P.HILInitialize_OOStart
                    section.data(3).logicalSrcIdx = 10;
                    section.data(3).dtTransOffset = 2;

                    ;% Identification_G_P.HILInitialize_OOEnter
                    section.data(4).logicalSrcIdx = 11;
                    section.data(4).dtTransOffset = 3;

                    ;% Identification_G_P.HILInitialize_AOFinal
                    section.data(5).logicalSrcIdx = 12;
                    section.data(5).dtTransOffset = 4;

                    ;% Identification_G_P.HILInitialize_OOFinal
                    section.data(6).logicalSrcIdx = 13;
                    section.data(6).dtTransOffset = 5;

                    ;% Identification_G_P.HILInitialize_AIHigh
                    section.data(7).logicalSrcIdx = 14;
                    section.data(7).dtTransOffset = 8;

                    ;% Identification_G_P.HILInitialize_AILow
                    section.data(8).logicalSrcIdx = 15;
                    section.data(8).dtTransOffset = 9;

                    ;% Identification_G_P.HILInitialize_AOHigh
                    section.data(9).logicalSrcIdx = 16;
                    section.data(9).dtTransOffset = 10;

                    ;% Identification_G_P.HILInitialize_AOLow
                    section.data(10).logicalSrcIdx = 17;
                    section.data(10).dtTransOffset = 11;

                    ;% Identification_G_P.HILInitialize_AOInitial
                    section.data(11).logicalSrcIdx = 18;
                    section.data(11).dtTransOffset = 12;

                    ;% Identification_G_P.HILInitialize_AOWatchdog
                    section.data(12).logicalSrcIdx = 19;
                    section.data(12).dtTransOffset = 13;

                    ;% Identification_G_P.HILInitialize_OOInitial
                    section.data(13).logicalSrcIdx = 20;
                    section.data(13).dtTransOffset = 14;

                    ;% Identification_G_P.HILInitialize_OOWatchdog
                    section.data(14).logicalSrcIdx = 21;
                    section.data(14).dtTransOffset = 17;

                    ;% Identification_G_P.Pitchcountstodeg_Gain
                    section.data(15).logicalSrcIdx = 22;
                    section.data(15).dtTransOffset = 20;

                    ;% Identification_G_P.Step_Time
                    section.data(16).logicalSrcIdx = 23;
                    section.data(16).dtTransOffset = 21;

                    ;% Identification_G_P.Step_Y0
                    section.data(17).logicalSrcIdx = 24;
                    section.data(17).dtTransOffset = 22;

                    ;% Identification_G_P.Step_YFinal
                    section.data(18).logicalSrcIdx = 25;
                    section.data(18).dtTransOffset = 23;

                    ;% Identification_G_P.u4V_UpperSat
                    section.data(19).logicalSrcIdx = 26;
                    section.data(19).dtTransOffset = 24;

                    ;% Identification_G_P.u4V_LowerSat
                    section.data(20).logicalSrcIdx = 27;
                    section.data(20).dtTransOffset = 25;

                    ;% Identification_G_P.YawConstantdeg2_Value
                    section.data(21).logicalSrcIdx = 28;
                    section.data(21).dtTransOffset = 26;

                    ;% Identification_G_P.PitchMotorEnable_Value
                    section.data(22).logicalSrcIdx = 29;
                    section.data(22).dtTransOffset = 27;

                    ;% Identification_G_P.YawEnableMotor_Value
                    section.data(23).logicalSrcIdx = 30;
                    section.data(23).dtTransOffset = 28;

                    ;% Identification_G_P.Gain2_Gain
                    section.data(24).logicalSrcIdx = 31;
                    section.data(24).dtTransOffset = 29;

                    ;% Identification_G_P.Gain_Gain
                    section.data(25).logicalSrcIdx = 32;
                    section.data(25).dtTransOffset = 30;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% Identification_G_P.HILInitialize_CKChannels
                    section.data(1).logicalSrcIdx = 33;
                    section.data(1).dtTransOffset = 0;

                    ;% Identification_G_P.HILInitialize_DOWatchdog
                    section.data(2).logicalSrcIdx = 34;
                    section.data(2).dtTransOffset = 1;

                    ;% Identification_G_P.HILInitialize_EIInitial
                    section.data(3).logicalSrcIdx = 35;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% Identification_G_P.HILInitialize_AIChannels
                    section.data(1).logicalSrcIdx = 36;
                    section.data(1).dtTransOffset = 0;

                    ;% Identification_G_P.HILInitialize_AOChannels
                    section.data(2).logicalSrcIdx = 37;
                    section.data(2).dtTransOffset = 2;

                    ;% Identification_G_P.HILInitialize_DOChannels
                    section.data(3).logicalSrcIdx = 38;
                    section.data(3).dtTransOffset = 4;

                    ;% Identification_G_P.HILInitialize_EIChannels
                    section.data(4).logicalSrcIdx = 39;
                    section.data(4).dtTransOffset = 6;

                    ;% Identification_G_P.HILInitialize_EIQuadrature
                    section.data(5).logicalSrcIdx = 40;
                    section.data(5).dtTransOffset = 10;

                    ;% Identification_G_P.HILInitialize_OOChannels
                    section.data(6).logicalSrcIdx = 41;
                    section.data(6).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 37;
            section.data(37)  = dumData; %prealloc

                    ;% Identification_G_P.HILInitialize_Active
                    section.data(1).logicalSrcIdx = 42;
                    section.data(1).dtTransOffset = 0;

                    ;% Identification_G_P.HILInitialize_AOTerminate
                    section.data(2).logicalSrcIdx = 43;
                    section.data(2).dtTransOffset = 1;

                    ;% Identification_G_P.HILInitialize_AOExit
                    section.data(3).logicalSrcIdx = 44;
                    section.data(3).dtTransOffset = 2;

                    ;% Identification_G_P.HILInitialize_DOTerminate
                    section.data(4).logicalSrcIdx = 45;
                    section.data(4).dtTransOffset = 3;

                    ;% Identification_G_P.HILInitialize_DOExit
                    section.data(5).logicalSrcIdx = 46;
                    section.data(5).dtTransOffset = 4;

                    ;% Identification_G_P.HILInitialize_POTerminate
                    section.data(6).logicalSrcIdx = 47;
                    section.data(6).dtTransOffset = 5;

                    ;% Identification_G_P.HILInitialize_POExit
                    section.data(7).logicalSrcIdx = 48;
                    section.data(7).dtTransOffset = 6;

                    ;% Identification_G_P.HILInitialize_CKPStart
                    section.data(8).logicalSrcIdx = 49;
                    section.data(8).dtTransOffset = 7;

                    ;% Identification_G_P.HILInitialize_CKPEnter
                    section.data(9).logicalSrcIdx = 50;
                    section.data(9).dtTransOffset = 8;

                    ;% Identification_G_P.HILInitialize_CKStart
                    section.data(10).logicalSrcIdx = 51;
                    section.data(10).dtTransOffset = 9;

                    ;% Identification_G_P.HILInitialize_CKEnter
                    section.data(11).logicalSrcIdx = 52;
                    section.data(11).dtTransOffset = 10;

                    ;% Identification_G_P.HILInitialize_AIPStart
                    section.data(12).logicalSrcIdx = 53;
                    section.data(12).dtTransOffset = 11;

                    ;% Identification_G_P.HILInitialize_AIPEnter
                    section.data(13).logicalSrcIdx = 54;
                    section.data(13).dtTransOffset = 12;

                    ;% Identification_G_P.HILInitialize_AOPStart
                    section.data(14).logicalSrcIdx = 55;
                    section.data(14).dtTransOffset = 13;

                    ;% Identification_G_P.HILInitialize_AOPEnter
                    section.data(15).logicalSrcIdx = 56;
                    section.data(15).dtTransOffset = 14;

                    ;% Identification_G_P.HILInitialize_AOStart
                    section.data(16).logicalSrcIdx = 57;
                    section.data(16).dtTransOffset = 15;

                    ;% Identification_G_P.HILInitialize_AOEnter
                    section.data(17).logicalSrcIdx = 58;
                    section.data(17).dtTransOffset = 16;

                    ;% Identification_G_P.HILInitialize_AOReset
                    section.data(18).logicalSrcIdx = 59;
                    section.data(18).dtTransOffset = 17;

                    ;% Identification_G_P.HILInitialize_DOPStart
                    section.data(19).logicalSrcIdx = 60;
                    section.data(19).dtTransOffset = 18;

                    ;% Identification_G_P.HILInitialize_DOPEnter
                    section.data(20).logicalSrcIdx = 61;
                    section.data(20).dtTransOffset = 19;

                    ;% Identification_G_P.HILInitialize_DOStart
                    section.data(21).logicalSrcIdx = 62;
                    section.data(21).dtTransOffset = 20;

                    ;% Identification_G_P.HILInitialize_DOEnter
                    section.data(22).logicalSrcIdx = 63;
                    section.data(22).dtTransOffset = 21;

                    ;% Identification_G_P.HILInitialize_DOReset
                    section.data(23).logicalSrcIdx = 64;
                    section.data(23).dtTransOffset = 22;

                    ;% Identification_G_P.HILInitialize_EIPStart
                    section.data(24).logicalSrcIdx = 65;
                    section.data(24).dtTransOffset = 23;

                    ;% Identification_G_P.HILInitialize_EIPEnter
                    section.data(25).logicalSrcIdx = 66;
                    section.data(25).dtTransOffset = 24;

                    ;% Identification_G_P.HILInitialize_EIStart
                    section.data(26).logicalSrcIdx = 67;
                    section.data(26).dtTransOffset = 25;

                    ;% Identification_G_P.HILInitialize_EIEnter
                    section.data(27).logicalSrcIdx = 68;
                    section.data(27).dtTransOffset = 26;

                    ;% Identification_G_P.HILInitialize_POPStart
                    section.data(28).logicalSrcIdx = 69;
                    section.data(28).dtTransOffset = 27;

                    ;% Identification_G_P.HILInitialize_POPEnter
                    section.data(29).logicalSrcIdx = 70;
                    section.data(29).dtTransOffset = 28;

                    ;% Identification_G_P.HILInitialize_POStart
                    section.data(30).logicalSrcIdx = 71;
                    section.data(30).dtTransOffset = 29;

                    ;% Identification_G_P.HILInitialize_POEnter
                    section.data(31).logicalSrcIdx = 72;
                    section.data(31).dtTransOffset = 30;

                    ;% Identification_G_P.HILInitialize_POReset
                    section.data(32).logicalSrcIdx = 73;
                    section.data(32).dtTransOffset = 31;

                    ;% Identification_G_P.HILInitialize_OOReset
                    section.data(33).logicalSrcIdx = 74;
                    section.data(33).dtTransOffset = 32;

                    ;% Identification_G_P.HILInitialize_DOFinal
                    section.data(34).logicalSrcIdx = 75;
                    section.data(34).dtTransOffset = 33;

                    ;% Identification_G_P.HILInitialize_DOInitial
                    section.data(35).logicalSrcIdx = 76;
                    section.data(35).dtTransOffset = 34;

                    ;% Identification_G_P.HILRead_Active
                    section.data(36).logicalSrcIdx = 77;
                    section.data(36).dtTransOffset = 35;

                    ;% Identification_G_P.HILWrite_Active
                    section.data(37).logicalSrcIdx = 78;
                    section.data(37).dtTransOffset = 36;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Identification_G_P.ManualSwitch_CurrentSetting
                    section.data(1).logicalSrcIdx = 79;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
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
        ;% Auto data (Identification_G_B)
        ;%
            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% Identification_G_B.HILRead_o1
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% Identification_G_B.HILRead_o2
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% Identification_G_B.VpVolts
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% Identification_G_B.Gain2
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% Identification_G_B.Gain
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 5;

                    ;% Identification_G_B.Clock
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 6;

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
        nTotSects     = 7;
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
        ;% Auto data (Identification_G_DW)
        ;%
            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% Identification_G_DW.HILInitialize_AIMinimums
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% Identification_G_DW.HILInitialize_AIMaximums
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% Identification_G_DW.HILInitialize_AOMinimums
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

                    ;% Identification_G_DW.HILInitialize_AOMaximums
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% Identification_G_DW.HILInitialize_AOVoltages
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 8;

                    ;% Identification_G_DW.HILInitialize_FilterFrequency
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 10;

                    ;% Identification_G_DW.HILRead_AnalogBuffer
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 14;

                    ;% Identification_G_DW.HILRead_OtherBuffer
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 16;

                    ;% Identification_G_DW.HILWrite_AnalogBuffer
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 24;

                    ;% Identification_G_DW.HILWrite_OtherBuffer
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 26;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Identification_G_DW.HILInitialize_Card
                    section.data(1).logicalSrcIdx = 10;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% Identification_G_DW.HILRead_PWORK
                    section.data(1).logicalSrcIdx = 11;
                    section.data(1).dtTransOffset = 0;

                    ;% Identification_G_DW.FromWs_PWORK.TimePtr
                    section.data(2).logicalSrcIdx = 12;
                    section.data(2).dtTransOffset = 1;

                    ;% Identification_G_DW.HILWrite_PWORK
                    section.data(3).logicalSrcIdx = 13;
                    section.data(3).dtTransOffset = 2;

                    ;% Identification_G_DW.CurrentA_PWORK.LoggedData
                    section.data(4).logicalSrcIdx = 14;
                    section.data(4).dtTransOffset = 3;

                    ;% Identification_G_DW.Omegamoteur_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 15;
                    section.data(5).dtTransOffset = 4;

                    ;% Identification_G_DW.Theta_PWORK.LoggedData
                    section.data(6).logicalSrcIdx = 16;
                    section.data(6).dtTransOffset = 5;

                    ;% Identification_G_DW.ToWorkspace_PWORK.LoggedData
                    section.data(7).logicalSrcIdx = 17;
                    section.data(7).dtTransOffset = 6;

                    ;% Identification_G_DW.ToWorkspace1_PWORK.LoggedData
                    section.data(8).logicalSrcIdx = 18;
                    section.data(8).dtTransOffset = 7;

                    ;% Identification_G_DW.ToWorkspace3_PWORK.LoggedData
                    section.data(9).logicalSrcIdx = 19;
                    section.data(9).dtTransOffset = 8;

                    ;% Identification_G_DW.ToWorkspace2_PWORK.LoggedData
                    section.data(10).logicalSrcIdx = 20;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% Identification_G_DW.HILInitialize_ClockModes
                    section.data(1).logicalSrcIdx = 21;
                    section.data(1).dtTransOffset = 0;

                    ;% Identification_G_DW.HILInitialize_DOStates
                    section.data(2).logicalSrcIdx = 22;
                    section.data(2).dtTransOffset = 1;

                    ;% Identification_G_DW.HILInitialize_QuadratureModes
                    section.data(3).logicalSrcIdx = 23;
                    section.data(3).dtTransOffset = 3;

                    ;% Identification_G_DW.HILInitialize_InitialEICounts
                    section.data(4).logicalSrcIdx = 24;
                    section.data(4).dtTransOffset = 7;

                    ;% Identification_G_DW.HILRead_EncoderBuffer
                    section.data(5).logicalSrcIdx = 25;
                    section.data(5).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Identification_G_DW.FromWs_IWORK.PrevIndex
                    section.data(1).logicalSrcIdx = 26;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% Identification_G_DW.HILInitialize_DOBits
                    section.data(1).logicalSrcIdx = 27;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% Identification_G_DW.HILRead_DigitalBuffer
                    section.data(1).logicalSrcIdx = 28;
                    section.data(1).dtTransOffset = 0;

                    ;% Identification_G_DW.HILWrite_DigitalBuffer
                    section.data(2).logicalSrcIdx = 29;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
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


    targMap.checksum0 = 2976841618;
    targMap.checksum1 = 3973257881;
    targMap.checksum2 = 3739339448;
    targMap.checksum3 = 1195223190;


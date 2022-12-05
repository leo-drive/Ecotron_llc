function msg = vw_golf(msgname,type)
  if(255==type)
  msg = struct;
  msg.num=67;
  msg.list= cell(1, msg.num);
  msg.list{1}='Message';
  msg.list{2}='Message';
  msg.list{3}='NMH_Getriebe_01';
  msg.list{4}='NMH_Gateway';
  msg.list{5}='Message';
  msg.list{6}='KN_Getriebe_01';
  msg.list{7}='Message';
  msg.list{8}='Message';
  msg.list{9}='Message';
  msg.list{10}='Kombi_02';
  msg.list{11}='VIN_01';
  msg.list{12}='Diagnose_01';
  msg.list{13}='Motor_18';
  msg.list{14}='Motor_16';
  msg.list{15}='ESP_20';
  msg.list{16}='BCM_01';
  msg.list{17}='Motor_Code_01';
  msg.list{18}='Motor_07';
  msg.list{19}='Dimmung_01';
  msg.list{20}='Message';
  msg.list{21}='Systeminfo_01';
  msg.list{22}='Message';
  msg.list{23}='Gateway_74';
  msg.list{24}='Gateway_72';
  msg.list{25}='Message';
  msg.list{26}='Getriebe_14';
  msg.list{27}='Motor_26';
  msg.list{28}='Klemmen_Status_01';
  msg.list{29}='Motor_14';
  msg.list{30}='WBA_03';
  msg.list{31}='ESP_07';
  msg.list{32}='OBD_01';
  msg.list{33}='Charisma_01';
  msg.list{34}='BEM_05';
  msg.list{35}='Motor_17';
  msg.list{36}='TSK_07';
  msg.list{37}='Kombi_01';
  msg.list{38}='Message';
  msg.list{39}='Message';
  msg.list{40}='Brake';
  msg.list{41}='Message';
  msg.list{42}='Message';
  msg.list{43}='Message';
  msg.list{44}='Message';
  msg.list{45}='Message';
  msg.list{46}='Getriebe_13';
  msg.list{47}='GRA_ACC_01';
  msg.list{48}='Motor_20';
  msg.list{49}='TSK_06';
  msg.list{50}='Message';
  msg.list{51}='ESP_10';
  msg.list{52}='Motor_04';
  msg.list{53}='ESP_05';
  msg.list{54}='Message';
  msg.list{55}='EPB_01';
  msg.list{56}='ESP_02';
  msg.list{57}='ESP_21';
  msg.list{58}='Message';
  msg.list{59}='GearShiftSwitch';
  msg.list{60}='ESP_19';
  msg.list{61}='Message';
  msg.list{62}='Getriebe_12';
  msg.list{63}='Getriebe_11';
  msg.list{64}='Motor_12';
  msg.list{65}='Motor_11';
  msg.list{66}='LWI_01';
  msg.list{67}='Airbag_01';
  else 
  msg = struct;
  switch msgname 
%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:1
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('1B0003D2');
    ECOCAN.Message.idext = 'EXTENDED';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:2
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('1B0000FD');
    ECOCAN.Message.idext = 'EXTENDED';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:NMH_Getriebe_01
%Message Number:3
case 'NMH_Getriebe_01'
    ECOCAN.NMH_Getriebe_01 = struct;
    ECOCAN.NMH_Getriebe_01.name = 'NMH_Getriebe_01';
    ECOCAN.NMH_Getriebe_01.description = 'NMH_Getriebe_01';
    ECOCAN.NMH_Getriebe_01.protocol  = 'ECOCAN';
    ECOCAN.NMH_Getriebe_01.id = hex2dec('1B000077');
    ECOCAN.NMH_Getriebe_01.idext = 'EXTENDED';
    ECOCAN.NMH_Getriebe_01.payload_size =8;
    ECOCAN.NMH_Getriebe_01.interval =-1;

    ECOCAN.NMH_Getriebe_01.fields{1}.name = 'NM_Getriebe_01_SNI';
    ECOCAN.NMH_Getriebe_01.fields{1}.units = '';
    ECOCAN.NMH_Getriebe_01.fields{1}.start_bit = 0;
    ECOCAN.NMH_Getriebe_01.fields{1}.bit_length = 8;
    ECOCAN.NMH_Getriebe_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Getriebe_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Getriebe_01.fields{1}.scale = 1;
    ECOCAN.NMH_Getriebe_01.fields{1}.offset = 0;
    ECOCAN.NMH_Getriebe_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.NMH_Getriebe_01.fields{1}.multiplex_value = 0;

    ECOCAN.NMH_Getriebe_01.fields{2}.name = 'NM_Getriebe_01_NM_State';
    ECOCAN.NMH_Getriebe_01.fields{2}.units = '';
    ECOCAN.NMH_Getriebe_01.fields{2}.start_bit = 16;
    ECOCAN.NMH_Getriebe_01.fields{2}.bit_length = 6;
    ECOCAN.NMH_Getriebe_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Getriebe_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Getriebe_01.fields{2}.scale = 1;
    ECOCAN.NMH_Getriebe_01.fields{2}.offset = 0;
    ECOCAN.NMH_Getriebe_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.NMH_Getriebe_01.fields{2}.multiplex_value = 0;

    ECOCAN.NMH_Getriebe_01.fields{3}.name = 'NM_Getriebe_01_Car_Wakeup';
    ECOCAN.NMH_Getriebe_01.fields{3}.units = '';
    ECOCAN.NMH_Getriebe_01.fields{3}.start_bit = 22;
    ECOCAN.NMH_Getriebe_01.fields{3}.bit_length = 1;
    ECOCAN.NMH_Getriebe_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Getriebe_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Getriebe_01.fields{3}.scale = 1;
    ECOCAN.NMH_Getriebe_01.fields{3}.offset = 0;
    ECOCAN.NMH_Getriebe_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.NMH_Getriebe_01.fields{3}.multiplex_value = 0;

    ECOCAN.NMH_Getriebe_01.fields{4}.name = 'NM_Getriebe_01_Wakeup';
    ECOCAN.NMH_Getriebe_01.fields{4}.units = '';
    ECOCAN.NMH_Getriebe_01.fields{4}.start_bit = 24;
    ECOCAN.NMH_Getriebe_01.fields{4}.bit_length = 8;
    ECOCAN.NMH_Getriebe_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Getriebe_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Getriebe_01.fields{4}.scale = 1;
    ECOCAN.NMH_Getriebe_01.fields{4}.offset = 0;
    ECOCAN.NMH_Getriebe_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.NMH_Getriebe_01.fields{4}.multiplex_value = 0;

    ECOCAN.NMH_Getriebe_01.fields{5}.name = 'NM_Getriebe_01_NM_aktiv_KL15';
    ECOCAN.NMH_Getriebe_01.fields{5}.units = '';
    ECOCAN.NMH_Getriebe_01.fields{5}.start_bit = 32;
    ECOCAN.NMH_Getriebe_01.fields{5}.bit_length = 1;
    ECOCAN.NMH_Getriebe_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Getriebe_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Getriebe_01.fields{5}.scale = 1;
    ECOCAN.NMH_Getriebe_01.fields{5}.offset = 0;
    ECOCAN.NMH_Getriebe_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.NMH_Getriebe_01.fields{5}.multiplex_value = 0;

    ECOCAN.NMH_Getriebe_01.fields{6}.name = 'NM_Getriebe_01_NM_aktiv_Diagnose';
    ECOCAN.NMH_Getriebe_01.fields{6}.units = '';
    ECOCAN.NMH_Getriebe_01.fields{6}.start_bit = 33;
    ECOCAN.NMH_Getriebe_01.fields{6}.bit_length = 1;
    ECOCAN.NMH_Getriebe_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Getriebe_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Getriebe_01.fields{6}.scale = 1;
    ECOCAN.NMH_Getriebe_01.fields{6}.offset = 0;
    ECOCAN.NMH_Getriebe_01.fields{6}.multiplex_type = 'Standard';
    ECOCAN.NMH_Getriebe_01.fields{6}.multiplex_value = 0;

    ECOCAN.NMH_Getriebe_01.fields{7}.name = 'NM_Getriebe_01_NM_aktiv_Tmin';
    ECOCAN.NMH_Getriebe_01.fields{7}.units = '';
    ECOCAN.NMH_Getriebe_01.fields{7}.start_bit = 34;
    ECOCAN.NMH_Getriebe_01.fields{7}.bit_length = 1;
    ECOCAN.NMH_Getriebe_01.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Getriebe_01.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Getriebe_01.fields{7}.scale = 1;
    ECOCAN.NMH_Getriebe_01.fields{7}.offset = 0;
    ECOCAN.NMH_Getriebe_01.fields{7}.multiplex_type = 'Standard';
    ECOCAN.NMH_Getriebe_01.fields{7}.multiplex_value = 0;

    ECOCAN.NMH_Getriebe_01.fields{8}.name = 'NM_Getriebe_01_NM_aktiv_v_gr_0';
    ECOCAN.NMH_Getriebe_01.fields{8}.units = '';
    ECOCAN.NMH_Getriebe_01.fields{8}.start_bit = 35;
    ECOCAN.NMH_Getriebe_01.fields{8}.bit_length = 1;
    ECOCAN.NMH_Getriebe_01.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Getriebe_01.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Getriebe_01.fields{8}.scale = 1;
    ECOCAN.NMH_Getriebe_01.fields{8}.offset = 0;
    ECOCAN.NMH_Getriebe_01.fields{8}.multiplex_type = 'Standard';
    ECOCAN.NMH_Getriebe_01.fields{8}.multiplex_value = 0;

    ECOCAN.NMH_Getriebe_01.fields{9}.name = 'NM_Getriebe_01_NM_aktiv_Pos_Erk';
    ECOCAN.NMH_Getriebe_01.fields{9}.units = '';
    ECOCAN.NMH_Getriebe_01.fields{9}.start_bit = 36;
    ECOCAN.NMH_Getriebe_01.fields{9}.bit_length = 1;
    ECOCAN.NMH_Getriebe_01.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Getriebe_01.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Getriebe_01.fields{9}.scale = 1;
    ECOCAN.NMH_Getriebe_01.fields{9}.offset = 0;
    ECOCAN.NMH_Getriebe_01.fields{9}.multiplex_type = 'Standard';
    ECOCAN.NMH_Getriebe_01.fields{9}.multiplex_value = 0;

    ECOCAN.NMH_Getriebe_01.fields{10}.name = 'NM_Getriebe_01_NM_aktiv_Umg_Bed';
    ECOCAN.NMH_Getriebe_01.fields{10}.units = '';
    ECOCAN.NMH_Getriebe_01.fields{10}.start_bit = 37;
    ECOCAN.NMH_Getriebe_01.fields{10}.bit_length = 1;
    ECOCAN.NMH_Getriebe_01.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Getriebe_01.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Getriebe_01.fields{10}.scale = 1;
    ECOCAN.NMH_Getriebe_01.fields{10}.offset = 0;
    ECOCAN.NMH_Getriebe_01.fields{10}.multiplex_type = 'Standard';
    ECOCAN.NMH_Getriebe_01.fields{10}.multiplex_value = 0;

    ECOCAN.NMH_Getriebe_01.fields{11}.name = 'NM_Getriebe_01_NL_Daten_EEPROM';
    ECOCAN.NMH_Getriebe_01.fields{11}.units = '';
    ECOCAN.NMH_Getriebe_01.fields{11}.start_bit = 48;
    ECOCAN.NMH_Getriebe_01.fields{11}.bit_length = 1;
    ECOCAN.NMH_Getriebe_01.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Getriebe_01.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Getriebe_01.fields{11}.scale = 1;
    ECOCAN.NMH_Getriebe_01.fields{11}.offset = 0;
    ECOCAN.NMH_Getriebe_01.fields{11}.multiplex_type = 'Standard';
    ECOCAN.NMH_Getriebe_01.fields{11}.multiplex_value = 0;

    ECOCAN.NMH_Getriebe_01.fields{12}.name = 'NM_Getriebe_01_UDS_CC';
    ECOCAN.NMH_Getriebe_01.fields{12}.units = '';
    ECOCAN.NMH_Getriebe_01.fields{12}.start_bit = 63;
    ECOCAN.NMH_Getriebe_01.fields{12}.bit_length = 1;
    ECOCAN.NMH_Getriebe_01.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Getriebe_01.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Getriebe_01.fields{12}.scale = 1;
    ECOCAN.NMH_Getriebe_01.fields{12}.offset = 0;
    ECOCAN.NMH_Getriebe_01.fields{12}.multiplex_type = 'Standard';
    ECOCAN.NMH_Getriebe_01.fields{12}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:NMH_Gateway
%Message Number:4
case 'NMH_Gateway'
    ECOCAN.NMH_Gateway = struct;
    ECOCAN.NMH_Gateway.name = 'NMH_Gateway';
    ECOCAN.NMH_Gateway.description = 'NMH_Gateway';
    ECOCAN.NMH_Gateway.protocol  = 'ECOCAN';
    ECOCAN.NMH_Gateway.id = hex2dec('1B000010');
    ECOCAN.NMH_Gateway.idext = 'EXTENDED';
    ECOCAN.NMH_Gateway.payload_size =8;
    ECOCAN.NMH_Gateway.interval =-1;

    ECOCAN.NMH_Gateway.fields{1}.name = 'NM_Gateway_SNI';
    ECOCAN.NMH_Gateway.fields{1}.units = '';
    ECOCAN.NMH_Gateway.fields{1}.start_bit = 0;
    ECOCAN.NMH_Gateway.fields{1}.bit_length = 8;
    ECOCAN.NMH_Gateway.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{1}.scale = 1;
    ECOCAN.NMH_Gateway.fields{1}.offset = 0;
    ECOCAN.NMH_Gateway.fields{1}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{1}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{2}.name = 'NM_Gateway_NM_State';
    ECOCAN.NMH_Gateway.fields{2}.units = '';
    ECOCAN.NMH_Gateway.fields{2}.start_bit = 16;
    ECOCAN.NMH_Gateway.fields{2}.bit_length = 6;
    ECOCAN.NMH_Gateway.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{2}.scale = 1;
    ECOCAN.NMH_Gateway.fields{2}.offset = 0;
    ECOCAN.NMH_Gateway.fields{2}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{2}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{3}.name = 'NM_Gateway_Car_Wakeup';
    ECOCAN.NMH_Gateway.fields{3}.units = '';
    ECOCAN.NMH_Gateway.fields{3}.start_bit = 22;
    ECOCAN.NMH_Gateway.fields{3}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{3}.scale = 1;
    ECOCAN.NMH_Gateway.fields{3}.offset = 0;
    ECOCAN.NMH_Gateway.fields{3}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{3}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{4}.name = 'NM_Gateway_Wakeup';
    ECOCAN.NMH_Gateway.fields{4}.units = '';
    ECOCAN.NMH_Gateway.fields{4}.start_bit = 24;
    ECOCAN.NMH_Gateway.fields{4}.bit_length = 8;
    ECOCAN.NMH_Gateway.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{4}.scale = 1;
    ECOCAN.NMH_Gateway.fields{4}.offset = 0;
    ECOCAN.NMH_Gateway.fields{4}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{4}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{5}.name = 'NM_Gateway_NM_aktiv_KL15';
    ECOCAN.NMH_Gateway.fields{5}.units = '';
    ECOCAN.NMH_Gateway.fields{5}.start_bit = 32;
    ECOCAN.NMH_Gateway.fields{5}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{5}.scale = 1;
    ECOCAN.NMH_Gateway.fields{5}.offset = 0;
    ECOCAN.NMH_Gateway.fields{5}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{5}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{6}.name = 'NM_Gateway_NM_aktiv_Diagnose';
    ECOCAN.NMH_Gateway.fields{6}.units = '';
    ECOCAN.NMH_Gateway.fields{6}.start_bit = 33;
    ECOCAN.NMH_Gateway.fields{6}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{6}.scale = 1;
    ECOCAN.NMH_Gateway.fields{6}.offset = 0;
    ECOCAN.NMH_Gateway.fields{6}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{6}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{7}.name = 'NM_Gateway_NM_aktiv_Tmin';
    ECOCAN.NMH_Gateway.fields{7}.units = '';
    ECOCAN.NMH_Gateway.fields{7}.start_bit = 34;
    ECOCAN.NMH_Gateway.fields{7}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{7}.scale = 1;
    ECOCAN.NMH_Gateway.fields{7}.offset = 0;
    ECOCAN.NMH_Gateway.fields{7}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{7}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{8}.name = 'NM_Gateway_ACAN_Aktivitaet';
    ECOCAN.NMH_Gateway.fields{8}.units = '';
    ECOCAN.NMH_Gateway.fields{8}.start_bit = 35;
    ECOCAN.NMH_Gateway.fields{8}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{8}.scale = 1;
    ECOCAN.NMH_Gateway.fields{8}.offset = 0;
    ECOCAN.NMH_Gateway.fields{8}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{8}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{9}.name = 'NM_Gateway_FCAN_Aktivitaet';
    ECOCAN.NMH_Gateway.fields{9}.units = '';
    ECOCAN.NMH_Gateway.fields{9}.start_bit = 36;
    ECOCAN.NMH_Gateway.fields{9}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{9}.scale = 1;
    ECOCAN.NMH_Gateway.fields{9}.offset = 0;
    ECOCAN.NMH_Gateway.fields{9}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{9}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{10}.name = 'NM_Gateway_KCAN_Aktivitaet';
    ECOCAN.NMH_Gateway.fields{10}.units = '';
    ECOCAN.NMH_Gateway.fields{10}.start_bit = 37;
    ECOCAN.NMH_Gateway.fields{10}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{10}.scale = 1;
    ECOCAN.NMH_Gateway.fields{10}.offset = 0;
    ECOCAN.NMH_Gateway.fields{10}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{10}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{11}.name = 'NM_Gateway_ICAN_Aktivitaet';
    ECOCAN.NMH_Gateway.fields{11}.units = '';
    ECOCAN.NMH_Gateway.fields{11}.start_bit = 38;
    ECOCAN.NMH_Gateway.fields{11}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{11}.scale = 1;
    ECOCAN.NMH_Gateway.fields{11}.offset = 0;
    ECOCAN.NMH_Gateway.fields{11}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{11}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{12}.name = 'NM_Gateway_DiagCAN_Aktivitaet';
    ECOCAN.NMH_Gateway.fields{12}.units = '';
    ECOCAN.NMH_Gateway.fields{12}.start_bit = 39;
    ECOCAN.NMH_Gateway.fields{12}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{12}.scale = 1;
    ECOCAN.NMH_Gateway.fields{12}.offset = 0;
    ECOCAN.NMH_Gateway.fields{12}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{12}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{13}.name = 'NM_Gateway_ECAN_Aktivitaet';
    ECOCAN.NMH_Gateway.fields{13}.units = '';
    ECOCAN.NMH_Gateway.fields{13}.start_bit = 40;
    ECOCAN.NMH_Gateway.fields{13}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{13}.scale = 1;
    ECOCAN.NMH_Gateway.fields{13}.offset = 0;
    ECOCAN.NMH_Gateway.fields{13}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{13}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{14}.name = 'NM_Gateway_Energie_LIN_Aktivi000';
    ECOCAN.NMH_Gateway.fields{14}.units = '';
    ECOCAN.NMH_Gateway.fields{14}.start_bit = 41;
    ECOCAN.NMH_Gateway.fields{14}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{14}.scale = 1;
    ECOCAN.NMH_Gateway.fields{14}.offset = 0;
    ECOCAN.NMH_Gateway.fields{14}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{14}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{15}.name = 'NM_Gateway_Bedien_LIN_Aktivitaet';
    ECOCAN.NMH_Gateway.fields{15}.units = '';
    ECOCAN.NMH_Gateway.fields{15}.start_bit = 42;
    ECOCAN.NMH_Gateway.fields{15}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{15}.scale = 1;
    ECOCAN.NMH_Gateway.fields{15}.offset = 0;
    ECOCAN.NMH_Gateway.fields{15}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{15}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{16}.name = 'NM_Gateway_EM_Aktivitaet';
    ECOCAN.NMH_Gateway.fields{16}.units = '';
    ECOCAN.NMH_Gateway.fields{16}.start_bit = 43;
    ECOCAN.NMH_Gateway.fields{16}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{16}.scale = 1;
    ECOCAN.NMH_Gateway.fields{16}.offset = 0;
    ECOCAN.NMH_Gateway.fields{16}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{16}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{17}.name = 'NM_Gateway_NL_EM';
    ECOCAN.NMH_Gateway.fields{17}.units = '';
    ECOCAN.NMH_Gateway.fields{17}.start_bit = 48;
    ECOCAN.NMH_Gateway.fields{17}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{17}.scale = 1;
    ECOCAN.NMH_Gateway.fields{17}.offset = 0;
    ECOCAN.NMH_Gateway.fields{17}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{17}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{18}.name = 'NM_Gateway_NL_Shutdown';
    ECOCAN.NMH_Gateway.fields{18}.units = '';
    ECOCAN.NMH_Gateway.fields{18}.start_bit = 49;
    ECOCAN.NMH_Gateway.fields{18}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{18}.scale = 1;
    ECOCAN.NMH_Gateway.fields{18}.offset = 0;
    ECOCAN.NMH_Gateway.fields{18}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{18}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{19}.name = 'NM_Gateway_NL_Spg_Messung';
    ECOCAN.NMH_Gateway.fields{19}.units = '';
    ECOCAN.NMH_Gateway.fields{19}.start_bit = 50;
    ECOCAN.NMH_Gateway.fields{19}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{19}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{19}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{19}.scale = 1;
    ECOCAN.NMH_Gateway.fields{19}.offset = 0;
    ECOCAN.NMH_Gateway.fields{19}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{19}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{20}.name = 'NM_Gateway_NL_Wakeup_Monitor';
    ECOCAN.NMH_Gateway.fields{20}.units = '';
    ECOCAN.NMH_Gateway.fields{20}.start_bit = 51;
    ECOCAN.NMH_Gateway.fields{20}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{20}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{20}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{20}.scale = 1;
    ECOCAN.NMH_Gateway.fields{20}.offset = 0;
    ECOCAN.NMH_Gateway.fields{20}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{20}.multiplex_value = 0;

    ECOCAN.NMH_Gateway.fields{21}.name = 'NM_Gateway_UDS_CC';
    ECOCAN.NMH_Gateway.fields{21}.units = '';
    ECOCAN.NMH_Gateway.fields{21}.start_bit = 63;
    ECOCAN.NMH_Gateway.fields{21}.bit_length = 1;
    ECOCAN.NMH_Gateway.fields{21}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.NMH_Gateway.fields{21}.data_type = 'UNSIGNED';
    ECOCAN.NMH_Gateway.fields{21}.scale = 1;
    ECOCAN.NMH_Gateway.fields{21}.offset = 0;
    ECOCAN.NMH_Gateway.fields{21}.multiplex_type = 'Standard';
    ECOCAN.NMH_Gateway.fields{21}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:5
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('1A555494');
    ECOCAN.Message.idext = 'EXTENDED';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:KN_Getriebe_01
%Message Number:6
case 'KN_Getriebe_01'
    ECOCAN.KN_Getriebe_01 = struct;
    ECOCAN.KN_Getriebe_01.name = 'KN_Getriebe_01';
    ECOCAN.KN_Getriebe_01.description = 'KN_Getriebe_01';
    ECOCAN.KN_Getriebe_01.protocol  = 'ECOCAN';
    ECOCAN.KN_Getriebe_01.id = hex2dec('17F00077');
    ECOCAN.KN_Getriebe_01.idext = 'EXTENDED';
    ECOCAN.KN_Getriebe_01.payload_size =8;
    ECOCAN.KN_Getriebe_01.interval =-1;

    ECOCAN.KN_Getriebe_01.fields{1}.name = 'Getriebe_Compprotection';
    ECOCAN.KN_Getriebe_01.fields{1}.units = '';
    ECOCAN.KN_Getriebe_01.fields{1}.start_bit = 0;
    ECOCAN.KN_Getriebe_01.fields{1}.bit_length = 1;
    ECOCAN.KN_Getriebe_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.KN_Getriebe_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.KN_Getriebe_01.fields{1}.scale = 1;
    ECOCAN.KN_Getriebe_01.fields{1}.offset = 0;
    ECOCAN.KN_Getriebe_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.KN_Getriebe_01.fields{1}.multiplex_value = 0;

    ECOCAN.KN_Getriebe_01.fields{2}.name = 'Getriebe_LagType';
    ECOCAN.KN_Getriebe_01.fields{2}.units = '';
    ECOCAN.KN_Getriebe_01.fields{2}.start_bit = 4;
    ECOCAN.KN_Getriebe_01.fields{2}.bit_length = 4;
    ECOCAN.KN_Getriebe_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.KN_Getriebe_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.KN_Getriebe_01.fields{2}.scale = 1;
    ECOCAN.KN_Getriebe_01.fields{2}.offset = 0;
    ECOCAN.KN_Getriebe_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.KN_Getriebe_01.fields{2}.multiplex_value = 0;

    ECOCAN.KN_Getriebe_01.fields{3}.name = 'GE_KD_Error';
    ECOCAN.KN_Getriebe_01.fields{3}.units = '';
    ECOCAN.KN_Getriebe_01.fields{3}.start_bit = 63;
    ECOCAN.KN_Getriebe_01.fields{3}.bit_length = 1;
    ECOCAN.KN_Getriebe_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.KN_Getriebe_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.KN_Getriebe_01.fields{3}.scale = 1;
    ECOCAN.KN_Getriebe_01.fields{3}.offset = 0;
    ECOCAN.KN_Getriebe_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.KN_Getriebe_01.fields{3}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:7
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('17F00010');
    ECOCAN.Message.idext = 'EXTENDED';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:8
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('12DD5501');
    ECOCAN.Message.idext = 'EXTENDED';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:9
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('12DD54BF');
    ECOCAN.Message.idext = 'EXTENDED';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Kombi_02
%Message Number:10
case 'Kombi_02'
    ECOCAN.Kombi_02 = struct;
    ECOCAN.Kombi_02.name = 'Kombi_02';
    ECOCAN.Kombi_02.description = 'Kombi_02';
    ECOCAN.Kombi_02.protocol  = 'ECOCAN';
    ECOCAN.Kombi_02.id = hex2dec('6B7');
    ECOCAN.Kombi_02.idext = 'STANDARD';
    ECOCAN.Kombi_02.payload_size =8;
    ECOCAN.Kombi_02.interval =-1;

    ECOCAN.Kombi_02.fields{1}.name = 'KBI_Kilometerstand';
    ECOCAN.Kombi_02.fields{1}.units = 'Unit_KiloMeter';
    ECOCAN.Kombi_02.fields{1}.start_bit = 0;
    ECOCAN.Kombi_02.fields{1}.bit_length = 20;
    ECOCAN.Kombi_02.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_02.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_02.fields{1}.scale = 1;
    ECOCAN.Kombi_02.fields{1}.offset = 0;
    ECOCAN.Kombi_02.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Kombi_02.fields{1}.multiplex_value = 0;

    ECOCAN.Kombi_02.fields{2}.name = 'KBI_Standzeit_02';
    ECOCAN.Kombi_02.fields{2}.units = 'Unit_Secon';
    ECOCAN.Kombi_02.fields{2}.start_bit = 20;
    ECOCAN.Kombi_02.fields{2}.bit_length = 17;
    ECOCAN.Kombi_02.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_02.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_02.fields{2}.scale = 1;
    ECOCAN.Kombi_02.fields{2}.offset = 0;
    ECOCAN.Kombi_02.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Kombi_02.fields{2}.multiplex_value = 0;

    ECOCAN.Kombi_02.fields{3}.name = 'KBI_Inhalt_Tank';
    ECOCAN.Kombi_02.fields{3}.units = 'Unit_Liter';
    ECOCAN.Kombi_02.fields{3}.start_bit = 40;
    ECOCAN.Kombi_02.fields{3}.bit_length = 7;
    ECOCAN.Kombi_02.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_02.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_02.fields{3}.scale = 1;
    ECOCAN.Kombi_02.fields{3}.offset = 0;
    ECOCAN.Kombi_02.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Kombi_02.fields{3}.multiplex_value = 0;

    ECOCAN.Kombi_02.fields{4}.name = 'KBI_FStatus_Tank';
    ECOCAN.Kombi_02.fields{4}.units = '';
    ECOCAN.Kombi_02.fields{4}.start_bit = 47;
    ECOCAN.Kombi_02.fields{4}.bit_length = 1;
    ECOCAN.Kombi_02.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_02.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_02.fields{4}.scale = 1;
    ECOCAN.Kombi_02.fields{4}.offset = 0;
    ECOCAN.Kombi_02.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Kombi_02.fields{4}.multiplex_value = 0;

    ECOCAN.Kombi_02.fields{5}.name = 'KBI_QBit_Aussen_Temp_gef';
    ECOCAN.Kombi_02.fields{5}.units = '';
    ECOCAN.Kombi_02.fields{5}.start_bit = 55;
    ECOCAN.Kombi_02.fields{5}.bit_length = 1;
    ECOCAN.Kombi_02.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_02.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_02.fields{5}.scale = 1;
    ECOCAN.Kombi_02.fields{5}.offset = 0;
    ECOCAN.Kombi_02.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Kombi_02.fields{5}.multiplex_value = 0;

    ECOCAN.Kombi_02.fields{6}.name = 'KBI_Aussen_Temp_gef';
    ECOCAN.Kombi_02.fields{6}.units = 'Unit_DegreCelsi';
    ECOCAN.Kombi_02.fields{6}.start_bit = 56;
    ECOCAN.Kombi_02.fields{6}.bit_length = 8;
    ECOCAN.Kombi_02.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_02.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_02.fields{6}.scale = 0.5;
    ECOCAN.Kombi_02.fields{6}.offset = -50;
    ECOCAN.Kombi_02.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Kombi_02.fields{6}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:VIN_01
%Message Number:11
case 'VIN_01'
    ECOCAN.VIN_01 = struct;
    ECOCAN.VIN_01.name = 'VIN_01';
    ECOCAN.VIN_01.description = 'VIN_01';
    ECOCAN.VIN_01.protocol  = 'ECOCAN';
    ECOCAN.VIN_01.id = hex2dec('6B4');
    ECOCAN.VIN_01.idext = 'STANDARD';
    ECOCAN.VIN_01.payload_size =8;
    ECOCAN.VIN_01.interval =-1;

    ECOCAN.VIN_01.fields{1}.name = 'VIN_01_MUX';
    ECOCAN.VIN_01.fields{1}.units = '';
    ECOCAN.VIN_01.fields{1}.start_bit = 0;
    ECOCAN.VIN_01.fields{1}.bit_length = 2;
    ECOCAN.VIN_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{1}.scale = 1;
    ECOCAN.VIN_01.fields{1}.offset = 0;
    ECOCAN.VIN_01.fields{1}.multiplex_type = 'Multiplexor';
    ECOCAN.VIN_01.fields{1}.multiplex_value = 0;

    ECOCAN.VIN_01.fields{2}.name = 'KS_Geheimnis_1';
    ECOCAN.VIN_01.fields{2}.units = '';
    ECOCAN.VIN_01.fields{2}.start_bit = 8;
    ECOCAN.VIN_01.fields{2}.bit_length = 8;
    ECOCAN.VIN_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{2}.scale = 1;
    ECOCAN.VIN_01.fields{2}.offset = 0;
    ECOCAN.VIN_01.fields{2}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{2}.multiplex_value = 0;

    ECOCAN.VIN_01.fields{3}.name = 'VIN_4';
    ECOCAN.VIN_01.fields{3}.units = '';
    ECOCAN.VIN_01.fields{3}.start_bit = 8;
    ECOCAN.VIN_01.fields{3}.bit_length = 8;
    ECOCAN.VIN_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{3}.scale = 1;
    ECOCAN.VIN_01.fields{3}.offset = 0;
    ECOCAN.VIN_01.fields{3}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{3}.multiplex_value = 1;

    ECOCAN.VIN_01.fields{4}.name = 'VIN_11';
    ECOCAN.VIN_01.fields{4}.units = '';
    ECOCAN.VIN_01.fields{4}.start_bit = 8;
    ECOCAN.VIN_01.fields{4}.bit_length = 8;
    ECOCAN.VIN_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{4}.scale = 1;
    ECOCAN.VIN_01.fields{4}.offset = 0;
    ECOCAN.VIN_01.fields{4}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{4}.multiplex_value = 2;

    ECOCAN.VIN_01.fields{5}.name = 'KS_Geheimnis_2';
    ECOCAN.VIN_01.fields{5}.units = '';
    ECOCAN.VIN_01.fields{5}.start_bit = 16;
    ECOCAN.VIN_01.fields{5}.bit_length = 8;
    ECOCAN.VIN_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{5}.scale = 1;
    ECOCAN.VIN_01.fields{5}.offset = 0;
    ECOCAN.VIN_01.fields{5}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{5}.multiplex_value = 0;

    ECOCAN.VIN_01.fields{6}.name = 'VIN_5';
    ECOCAN.VIN_01.fields{6}.units = '';
    ECOCAN.VIN_01.fields{6}.start_bit = 16;
    ECOCAN.VIN_01.fields{6}.bit_length = 8;
    ECOCAN.VIN_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{6}.scale = 1;
    ECOCAN.VIN_01.fields{6}.offset = 0;
    ECOCAN.VIN_01.fields{6}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{6}.multiplex_value = 1;

    ECOCAN.VIN_01.fields{7}.name = 'VIN_12';
    ECOCAN.VIN_01.fields{7}.units = '';
    ECOCAN.VIN_01.fields{7}.start_bit = 16;
    ECOCAN.VIN_01.fields{7}.bit_length = 8;
    ECOCAN.VIN_01.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{7}.scale = 1;
    ECOCAN.VIN_01.fields{7}.offset = 0;
    ECOCAN.VIN_01.fields{7}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{7}.multiplex_value = 2;

    ECOCAN.VIN_01.fields{8}.name = 'KS_Geheimnis_3';
    ECOCAN.VIN_01.fields{8}.units = '';
    ECOCAN.VIN_01.fields{8}.start_bit = 24;
    ECOCAN.VIN_01.fields{8}.bit_length = 8;
    ECOCAN.VIN_01.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{8}.scale = 1;
    ECOCAN.VIN_01.fields{8}.offset = 0;
    ECOCAN.VIN_01.fields{8}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{8}.multiplex_value = 0;

    ECOCAN.VIN_01.fields{9}.name = 'VIN_6';
    ECOCAN.VIN_01.fields{9}.units = '';
    ECOCAN.VIN_01.fields{9}.start_bit = 24;
    ECOCAN.VIN_01.fields{9}.bit_length = 8;
    ECOCAN.VIN_01.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{9}.scale = 1;
    ECOCAN.VIN_01.fields{9}.offset = 0;
    ECOCAN.VIN_01.fields{9}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{9}.multiplex_value = 1;

    ECOCAN.VIN_01.fields{10}.name = 'VIN_13';
    ECOCAN.VIN_01.fields{10}.units = '';
    ECOCAN.VIN_01.fields{10}.start_bit = 24;
    ECOCAN.VIN_01.fields{10}.bit_length = 8;
    ECOCAN.VIN_01.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{10}.scale = 1;
    ECOCAN.VIN_01.fields{10}.offset = 0;
    ECOCAN.VIN_01.fields{10}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{10}.multiplex_value = 2;

    ECOCAN.VIN_01.fields{11}.name = 'KS_Geheimnis_4';
    ECOCAN.VIN_01.fields{11}.units = '';
    ECOCAN.VIN_01.fields{11}.start_bit = 32;
    ECOCAN.VIN_01.fields{11}.bit_length = 8;
    ECOCAN.VIN_01.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{11}.scale = 1;
    ECOCAN.VIN_01.fields{11}.offset = 0;
    ECOCAN.VIN_01.fields{11}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{11}.multiplex_value = 0;

    ECOCAN.VIN_01.fields{12}.name = 'VIN_7';
    ECOCAN.VIN_01.fields{12}.units = '';
    ECOCAN.VIN_01.fields{12}.start_bit = 32;
    ECOCAN.VIN_01.fields{12}.bit_length = 8;
    ECOCAN.VIN_01.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{12}.scale = 1;
    ECOCAN.VIN_01.fields{12}.offset = 0;
    ECOCAN.VIN_01.fields{12}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{12}.multiplex_value = 1;

    ECOCAN.VIN_01.fields{13}.name = 'VIN_14';
    ECOCAN.VIN_01.fields{13}.units = '';
    ECOCAN.VIN_01.fields{13}.start_bit = 32;
    ECOCAN.VIN_01.fields{13}.bit_length = 8;
    ECOCAN.VIN_01.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{13}.scale = 1;
    ECOCAN.VIN_01.fields{13}.offset = 0;
    ECOCAN.VIN_01.fields{13}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{13}.multiplex_value = 2;

    ECOCAN.VIN_01.fields{14}.name = 'VIN_1';
    ECOCAN.VIN_01.fields{14}.units = '';
    ECOCAN.VIN_01.fields{14}.start_bit = 40;
    ECOCAN.VIN_01.fields{14}.bit_length = 8;
    ECOCAN.VIN_01.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{14}.scale = 1;
    ECOCAN.VIN_01.fields{14}.offset = 0;
    ECOCAN.VIN_01.fields{14}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{14}.multiplex_value = 0;

    ECOCAN.VIN_01.fields{15}.name = 'VIN_8';
    ECOCAN.VIN_01.fields{15}.units = '';
    ECOCAN.VIN_01.fields{15}.start_bit = 40;
    ECOCAN.VIN_01.fields{15}.bit_length = 8;
    ECOCAN.VIN_01.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{15}.scale = 1;
    ECOCAN.VIN_01.fields{15}.offset = 0;
    ECOCAN.VIN_01.fields{15}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{15}.multiplex_value = 1;

    ECOCAN.VIN_01.fields{16}.name = 'VIN_15';
    ECOCAN.VIN_01.fields{16}.units = '';
    ECOCAN.VIN_01.fields{16}.start_bit = 40;
    ECOCAN.VIN_01.fields{16}.bit_length = 8;
    ECOCAN.VIN_01.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{16}.scale = 1;
    ECOCAN.VIN_01.fields{16}.offset = 0;
    ECOCAN.VIN_01.fields{16}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{16}.multiplex_value = 2;

    ECOCAN.VIN_01.fields{17}.name = 'VIN_2';
    ECOCAN.VIN_01.fields{17}.units = '';
    ECOCAN.VIN_01.fields{17}.start_bit = 48;
    ECOCAN.VIN_01.fields{17}.bit_length = 8;
    ECOCAN.VIN_01.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{17}.scale = 1;
    ECOCAN.VIN_01.fields{17}.offset = 0;
    ECOCAN.VIN_01.fields{17}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{17}.multiplex_value = 0;

    ECOCAN.VIN_01.fields{18}.name = 'VIN_9';
    ECOCAN.VIN_01.fields{18}.units = '';
    ECOCAN.VIN_01.fields{18}.start_bit = 48;
    ECOCAN.VIN_01.fields{18}.bit_length = 8;
    ECOCAN.VIN_01.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{18}.scale = 1;
    ECOCAN.VIN_01.fields{18}.offset = 0;
    ECOCAN.VIN_01.fields{18}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{18}.multiplex_value = 1;

    ECOCAN.VIN_01.fields{19}.name = 'VIN_16';
    ECOCAN.VIN_01.fields{19}.units = '';
    ECOCAN.VIN_01.fields{19}.start_bit = 48;
    ECOCAN.VIN_01.fields{19}.bit_length = 8;
    ECOCAN.VIN_01.fields{19}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{19}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{19}.scale = 1;
    ECOCAN.VIN_01.fields{19}.offset = 0;
    ECOCAN.VIN_01.fields{19}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{19}.multiplex_value = 2;

    ECOCAN.VIN_01.fields{20}.name = 'VIN_3';
    ECOCAN.VIN_01.fields{20}.units = '';
    ECOCAN.VIN_01.fields{20}.start_bit = 56;
    ECOCAN.VIN_01.fields{20}.bit_length = 8;
    ECOCAN.VIN_01.fields{20}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{20}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{20}.scale = 1;
    ECOCAN.VIN_01.fields{20}.offset = 0;
    ECOCAN.VIN_01.fields{20}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{20}.multiplex_value = 0;

    ECOCAN.VIN_01.fields{21}.name = 'VIN_10';
    ECOCAN.VIN_01.fields{21}.units = '';
    ECOCAN.VIN_01.fields{21}.start_bit = 56;
    ECOCAN.VIN_01.fields{21}.bit_length = 8;
    ECOCAN.VIN_01.fields{21}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{21}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{21}.scale = 1;
    ECOCAN.VIN_01.fields{21}.offset = 0;
    ECOCAN.VIN_01.fields{21}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{21}.multiplex_value = 1;

    ECOCAN.VIN_01.fields{22}.name = 'VIN_17';
    ECOCAN.VIN_01.fields{22}.units = '';
    ECOCAN.VIN_01.fields{22}.start_bit = 56;
    ECOCAN.VIN_01.fields{22}.bit_length = 8;
    ECOCAN.VIN_01.fields{22}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VIN_01.fields{22}.data_type = 'UNSIGNED';
    ECOCAN.VIN_01.fields{22}.scale = 1;
    ECOCAN.VIN_01.fields{22}.offset = 0;
    ECOCAN.VIN_01.fields{22}.multiplex_type = 'Multiplexed';
    ECOCAN.VIN_01.fields{22}.multiplex_value = 2;


%%
%Network Node:Vector__XXX
%Message Name:Diagnose_01
%Message Number:12
case 'Diagnose_01'
    ECOCAN.Diagnose_01 = struct;
    ECOCAN.Diagnose_01.name = 'Diagnose_01';
    ECOCAN.Diagnose_01.description = 'Diagnose_01';
    ECOCAN.Diagnose_01.protocol  = 'ECOCAN';
    ECOCAN.Diagnose_01.id = hex2dec('6B2');
    ECOCAN.Diagnose_01.idext = 'STANDARD';
    ECOCAN.Diagnose_01.payload_size =8;
    ECOCAN.Diagnose_01.interval =-1;

    ECOCAN.Diagnose_01.fields{1}.name = 'DGN_Verlernzaehler';
    ECOCAN.Diagnose_01.fields{1}.units = '';
    ECOCAN.Diagnose_01.fields{1}.start_bit = 0;
    ECOCAN.Diagnose_01.fields{1}.bit_length = 8;
    ECOCAN.Diagnose_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Diagnose_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Diagnose_01.fields{1}.scale = 1;
    ECOCAN.Diagnose_01.fields{1}.offset = 0;
    ECOCAN.Diagnose_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Diagnose_01.fields{1}.multiplex_value = 0;

    ECOCAN.Diagnose_01.fields{2}.name = 'KBI_Kilometerstand';
    ECOCAN.Diagnose_01.fields{2}.units = 'Unit_KiloMeter';
    ECOCAN.Diagnose_01.fields{2}.start_bit = 8;
    ECOCAN.Diagnose_01.fields{2}.bit_length = 20;
    ECOCAN.Diagnose_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Diagnose_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Diagnose_01.fields{2}.scale = 1;
    ECOCAN.Diagnose_01.fields{2}.offset = 0;
    ECOCAN.Diagnose_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Diagnose_01.fields{2}.multiplex_value = 0;

    ECOCAN.Diagnose_01.fields{3}.name = 'UH_Jahr';
    ECOCAN.Diagnose_01.fields{3}.units = 'Unit_Year';
    ECOCAN.Diagnose_01.fields{3}.start_bit = 28;
    ECOCAN.Diagnose_01.fields{3}.bit_length = 7;
    ECOCAN.Diagnose_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Diagnose_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Diagnose_01.fields{3}.scale = 1;
    ECOCAN.Diagnose_01.fields{3}.offset = 2000;
    ECOCAN.Diagnose_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Diagnose_01.fields{3}.multiplex_value = 0;

    ECOCAN.Diagnose_01.fields{4}.name = 'UH_Monat';
    ECOCAN.Diagnose_01.fields{4}.units = 'Unit_Month';
    ECOCAN.Diagnose_01.fields{4}.start_bit = 35;
    ECOCAN.Diagnose_01.fields{4}.bit_length = 4;
    ECOCAN.Diagnose_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Diagnose_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Diagnose_01.fields{4}.scale = 1;
    ECOCAN.Diagnose_01.fields{4}.offset = 0;
    ECOCAN.Diagnose_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Diagnose_01.fields{4}.multiplex_value = 0;

    ECOCAN.Diagnose_01.fields{5}.name = 'UH_Tag';
    ECOCAN.Diagnose_01.fields{5}.units = 'Unit_Day';
    ECOCAN.Diagnose_01.fields{5}.start_bit = 39;
    ECOCAN.Diagnose_01.fields{5}.bit_length = 5;
    ECOCAN.Diagnose_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Diagnose_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Diagnose_01.fields{5}.scale = 1;
    ECOCAN.Diagnose_01.fields{5}.offset = 0;
    ECOCAN.Diagnose_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Diagnose_01.fields{5}.multiplex_value = 0;

    ECOCAN.Diagnose_01.fields{6}.name = 'UH_Stunde';
    ECOCAN.Diagnose_01.fields{6}.units = 'Unit_Hours';
    ECOCAN.Diagnose_01.fields{6}.start_bit = 44;
    ECOCAN.Diagnose_01.fields{6}.bit_length = 5;
    ECOCAN.Diagnose_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Diagnose_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Diagnose_01.fields{6}.scale = 1;
    ECOCAN.Diagnose_01.fields{6}.offset = 0;
    ECOCAN.Diagnose_01.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Diagnose_01.fields{6}.multiplex_value = 0;

    ECOCAN.Diagnose_01.fields{7}.name = 'UH_Minute';
    ECOCAN.Diagnose_01.fields{7}.units = 'Unit_Minut';
    ECOCAN.Diagnose_01.fields{7}.start_bit = 49;
    ECOCAN.Diagnose_01.fields{7}.bit_length = 6;
    ECOCAN.Diagnose_01.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Diagnose_01.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Diagnose_01.fields{7}.scale = 1;
    ECOCAN.Diagnose_01.fields{7}.offset = 0;
    ECOCAN.Diagnose_01.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Diagnose_01.fields{7}.multiplex_value = 0;

    ECOCAN.Diagnose_01.fields{8}.name = 'UH_Sekunde';
    ECOCAN.Diagnose_01.fields{8}.units = 'Unit_Secon';
    ECOCAN.Diagnose_01.fields{8}.start_bit = 55;
    ECOCAN.Diagnose_01.fields{8}.bit_length = 6;
    ECOCAN.Diagnose_01.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Diagnose_01.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Diagnose_01.fields{8}.scale = 1;
    ECOCAN.Diagnose_01.fields{8}.offset = 0;
    ECOCAN.Diagnose_01.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Diagnose_01.fields{8}.multiplex_value = 0;

    ECOCAN.Diagnose_01.fields{9}.name = 'Kombi_02_alt';
    ECOCAN.Diagnose_01.fields{9}.units = '';
    ECOCAN.Diagnose_01.fields{9}.start_bit = 62;
    ECOCAN.Diagnose_01.fields{9}.bit_length = 1;
    ECOCAN.Diagnose_01.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Diagnose_01.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Diagnose_01.fields{9}.scale = 1;
    ECOCAN.Diagnose_01.fields{9}.offset = 0;
    ECOCAN.Diagnose_01.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Diagnose_01.fields{9}.multiplex_value = 0;

    ECOCAN.Diagnose_01.fields{10}.name = 'Uhrzeit_01_alt';
    ECOCAN.Diagnose_01.fields{10}.units = '';
    ECOCAN.Diagnose_01.fields{10}.start_bit = 63;
    ECOCAN.Diagnose_01.fields{10}.bit_length = 1;
    ECOCAN.Diagnose_01.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Diagnose_01.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Diagnose_01.fields{10}.scale = 1;
    ECOCAN.Diagnose_01.fields{10}.offset = 0;
    ECOCAN.Diagnose_01.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Diagnose_01.fields{10}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Motor_18
%Message Number:13
case 'Motor_18'
    ECOCAN.Motor_18 = struct;
    ECOCAN.Motor_18.name = 'Motor_18';
    ECOCAN.Motor_18.description = 'Motor_18';
    ECOCAN.Motor_18.protocol  = 'ECOCAN';
    ECOCAN.Motor_18.id = hex2dec('670');
    ECOCAN.Motor_18.idext = 'STANDARD';
    ECOCAN.Motor_18.payload_size =8;
    ECOCAN.Motor_18.interval =-1;

    ECOCAN.Motor_18.fields{1}.name = 'MO_Hybrid_StartStopp_LED';
    ECOCAN.Motor_18.fields{1}.units = '';
    ECOCAN.Motor_18.fields{1}.start_bit = 43;
    ECOCAN.Motor_18.fields{1}.bit_length = 2;
    ECOCAN.Motor_18.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_18.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Motor_18.fields{1}.scale = 1;
    ECOCAN.Motor_18.fields{1}.offset = 0;
    ECOCAN.Motor_18.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Motor_18.fields{1}.multiplex_value = 0;

    ECOCAN.Motor_18.fields{2}.name = 'MO_Eis_Offroad_LED';
    ECOCAN.Motor_18.fields{2}.units = '';
    ECOCAN.Motor_18.fields{2}.start_bit = 45;
    ECOCAN.Motor_18.fields{2}.bit_length = 2;
    ECOCAN.Motor_18.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_18.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Motor_18.fields{2}.scale = 1;
    ECOCAN.Motor_18.fields{2}.offset = 0;
    ECOCAN.Motor_18.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Motor_18.fields{2}.multiplex_value = 0;

    ECOCAN.Motor_18.fields{3}.name = 'MO_Anzahl_Abgesch_Zyl';
    ECOCAN.Motor_18.fields{3}.units = '';
    ECOCAN.Motor_18.fields{3}.start_bit = 47;
    ECOCAN.Motor_18.fields{3}.bit_length = 3;
    ECOCAN.Motor_18.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_18.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Motor_18.fields{3}.scale = 1;
    ECOCAN.Motor_18.fields{3}.offset = 0;
    ECOCAN.Motor_18.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Motor_18.fields{3}.multiplex_value = 0;

    ECOCAN.Motor_18.fields{4}.name = 'MO_Zylabsch_Texte';
    ECOCAN.Motor_18.fields{4}.units = '';
    ECOCAN.Motor_18.fields{4}.start_bit = 50;
    ECOCAN.Motor_18.fields{4}.bit_length = 2;
    ECOCAN.Motor_18.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_18.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Motor_18.fields{4}.scale = 1;
    ECOCAN.Motor_18.fields{4}.offset = 0;
    ECOCAN.Motor_18.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Motor_18.fields{4}.multiplex_value = 0;

    ECOCAN.Motor_18.fields{5}.name = 'MO_E85_BS_Texte';
    ECOCAN.Motor_18.fields{5}.units = '';
    ECOCAN.Motor_18.fields{5}.start_bit = 52;
    ECOCAN.Motor_18.fields{5}.bit_length = 3;
    ECOCAN.Motor_18.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_18.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Motor_18.fields{5}.scale = 1;
    ECOCAN.Motor_18.fields{5}.offset = 0;
    ECOCAN.Motor_18.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Motor_18.fields{5}.multiplex_value = 0;

    ECOCAN.Motor_18.fields{6}.name = 'MO_Drehzahl_Warnung';
    ECOCAN.Motor_18.fields{6}.units = '';
    ECOCAN.Motor_18.fields{6}.start_bit = 55;
    ECOCAN.Motor_18.fields{6}.bit_length = 1;
    ECOCAN.Motor_18.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_18.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Motor_18.fields{6}.scale = 1;
    ECOCAN.Motor_18.fields{6}.offset = 0;
    ECOCAN.Motor_18.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Motor_18.fields{6}.multiplex_value = 0;

    ECOCAN.Motor_18.fields{7}.name = 'MO_Upper_SpeedLimit';
    ECOCAN.Motor_18.fields{7}.units = 'Unit_MinutInver';
    ECOCAN.Motor_18.fields{7}.start_bit = 56;
    ECOCAN.Motor_18.fields{7}.bit_length = 8;
    ECOCAN.Motor_18.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_18.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Motor_18.fields{7}.scale = 50;
    ECOCAN.Motor_18.fields{7}.offset = 0;
    ECOCAN.Motor_18.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Motor_18.fields{7}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Motor_16
%Message Number:14
case 'Motor_16'
    ECOCAN.Motor_16 = struct;
    ECOCAN.Motor_16.name = 'Motor_16';
    ECOCAN.Motor_16.description = 'Motor_16';
    ECOCAN.Motor_16.protocol  = 'ECOCAN';
    ECOCAN.Motor_16.id = hex2dec('65F');
    ECOCAN.Motor_16.idext = 'STANDARD';
    ECOCAN.Motor_16.payload_size =8;
    ECOCAN.Motor_16.interval =-1;

    ECOCAN.Motor_16.fields{1}.name = 'TSK_QBit_Pitch';
    ECOCAN.Motor_16.fields{1}.units = '';
    ECOCAN.Motor_16.fields{1}.start_bit = 12;
    ECOCAN.Motor_16.fields{1}.bit_length = 1;
    ECOCAN.Motor_16.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_16.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Motor_16.fields{1}.scale = 1;
    ECOCAN.Motor_16.fields{1}.offset = 0;
    ECOCAN.Motor_16.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Motor_16.fields{1}.multiplex_value = 0;

    ECOCAN.Motor_16.fields{2}.name = 'TSK_QBit_VehicleMass';
    ECOCAN.Motor_16.fields{2}.units = '';
    ECOCAN.Motor_16.fields{2}.start_bit = 13;
    ECOCAN.Motor_16.fields{2}.bit_length = 1;
    ECOCAN.Motor_16.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_16.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Motor_16.fields{2}.scale = 1;
    ECOCAN.Motor_16.fields{2}.offset = 0;
    ECOCAN.Motor_16.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Motor_16.fields{2}.multiplex_value = 0;

    ECOCAN.Motor_16.fields{3}.name = 'MO_StartVoltage_02';
    ECOCAN.Motor_16.fields{3}.units = '';
    ECOCAN.Motor_16.fields{3}.start_bit = 14;
    ECOCAN.Motor_16.fields{3}.bit_length = 2;
    ECOCAN.Motor_16.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_16.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Motor_16.fields{3}.scale = 1;
    ECOCAN.Motor_16.fields{3}.offset = 0;
    ECOCAN.Motor_16.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Motor_16.fields{3}.multiplex_value = 0;

    ECOCAN.Motor_16.fields{4}.name = 'MO_DPF_reg';
    ECOCAN.Motor_16.fields{4}.units = '';
    ECOCAN.Motor_16.fields{4}.start_bit = 16;
    ECOCAN.Motor_16.fields{4}.bit_length = 1;
    ECOCAN.Motor_16.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_16.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Motor_16.fields{4}.scale = 1;
    ECOCAN.Motor_16.fields{4}.offset = 0;
    ECOCAN.Motor_16.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Motor_16.fields{4}.multiplex_value = 0;

    ECOCAN.Motor_16.fields{5}.name = 'MO_Heaetingcurrent_EKAT';
    ECOCAN.Motor_16.fields{5}.units = 'Unit_Amper';
    ECOCAN.Motor_16.fields{5}.start_bit = 17;
    ECOCAN.Motor_16.fields{5}.bit_length = 7;
    ECOCAN.Motor_16.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_16.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Motor_16.fields{5}.scale = 1;
    ECOCAN.Motor_16.fields{5}.offset = 0;
    ECOCAN.Motor_16.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Motor_16.fields{5}.multiplex_value = 0;

    ECOCAN.Motor_16.fields{6}.name = 'MO_Heaetingcurrent_SCR';
    ECOCAN.Motor_16.fields{6}.units = 'Unit_Amper';
    ECOCAN.Motor_16.fields{6}.start_bit = 24;
    ECOCAN.Motor_16.fields{6}.bit_length = 6;
    ECOCAN.Motor_16.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_16.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Motor_16.fields{6}.scale = 1;
    ECOCAN.Motor_16.fields{6}.offset = 0;
    ECOCAN.Motor_16.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Motor_16.fields{6}.multiplex_value = 0;

    ECOCAN.Motor_16.fields{7}.name = 'TSK_VehicleMass_02';
    ECOCAN.Motor_16.fields{7}.units = 'Unit_KiloGram';
    ECOCAN.Motor_16.fields{7}.start_bit = 48;
    ECOCAN.Motor_16.fields{7}.bit_length = 8;
    ECOCAN.Motor_16.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_16.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Motor_16.fields{7}.scale = 32;
    ECOCAN.Motor_16.fields{7}.offset = 0;
    ECOCAN.Motor_16.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Motor_16.fields{7}.multiplex_value = 0;

    ECOCAN.Motor_16.fields{8}.name = 'TSK_Pitch';
    ECOCAN.Motor_16.fields{8}.units = 'Unit_PerCent';
    ECOCAN.Motor_16.fields{8}.start_bit = 56;
    ECOCAN.Motor_16.fields{8}.bit_length = 8;
    ECOCAN.Motor_16.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_16.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Motor_16.fields{8}.scale = 0.8;
    ECOCAN.Motor_16.fields{8}.offset = -101.6;
    ECOCAN.Motor_16.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Motor_16.fields{8}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:ESP_20
%Message Number:15
case 'ESP_20'
    ECOCAN.ESP_20 = struct;
    ECOCAN.ESP_20.name = 'ESP_20';
    ECOCAN.ESP_20.description = 'ESP_20';
    ECOCAN.ESP_20.protocol  = 'ECOCAN';
    ECOCAN.ESP_20.id = hex2dec('65D');
    ECOCAN.ESP_20.idext = 'STANDARD';
    ECOCAN.ESP_20.payload_size =8;
    ECOCAN.ESP_20.interval =-1;

    ECOCAN.ESP_20.fields{1}.name = 'CHECKSUM';
    ECOCAN.ESP_20.fields{1}.units = '';
    ECOCAN.ESP_20.fields{1}.start_bit = 0;
    ECOCAN.ESP_20.fields{1}.bit_length = 8;
    ECOCAN.ESP_20.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_20.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.ESP_20.fields{1}.scale = 1;
    ECOCAN.ESP_20.fields{1}.offset = 0;
    ECOCAN.ESP_20.fields{1}.multiplex_type = 'Standard';
    ECOCAN.ESP_20.fields{1}.multiplex_value = 0;

    ECOCAN.ESP_20.fields{2}.name = 'COUNTER';
    ECOCAN.ESP_20.fields{2}.units = '';
    ECOCAN.ESP_20.fields{2}.start_bit = 8;
    ECOCAN.ESP_20.fields{2}.bit_length = 4;
    ECOCAN.ESP_20.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_20.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.ESP_20.fields{2}.scale = 1;
    ECOCAN.ESP_20.fields{2}.offset = 0;
    ECOCAN.ESP_20.fields{2}.multiplex_type = 'Standard';
    ECOCAN.ESP_20.fields{2}.multiplex_value = 0;

    ECOCAN.ESP_20.fields{3}.name = 'BR_Systemtype';
    ECOCAN.ESP_20.fields{3}.units = '';
    ECOCAN.ESP_20.fields{3}.start_bit = 12;
    ECOCAN.ESP_20.fields{3}.bit_length = 2;
    ECOCAN.ESP_20.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_20.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.ESP_20.fields{3}.scale = 1;
    ECOCAN.ESP_20.fields{3}.offset = 0;
    ECOCAN.ESP_20.fields{3}.multiplex_type = 'Standard';
    ECOCAN.ESP_20.fields{3}.multiplex_value = 0;

    ECOCAN.ESP_20.fields{4}.name = 'ESP_Zaehnezahl';
    ECOCAN.ESP_20.fields{4}.units = '';
    ECOCAN.ESP_20.fields{4}.start_bit = 16;
    ECOCAN.ESP_20.fields{4}.bit_length = 8;
    ECOCAN.ESP_20.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_20.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.ESP_20.fields{4}.scale = 1;
    ECOCAN.ESP_20.fields{4}.offset = 0;
    ECOCAN.ESP_20.fields{4}.multiplex_type = 'Standard';
    ECOCAN.ESP_20.fields{4}.multiplex_value = 0;

    ECOCAN.ESP_20.fields{5}.name = 'ESP_Charisma_FahrPr';
    ECOCAN.ESP_20.fields{5}.units = '';
    ECOCAN.ESP_20.fields{5}.start_bit = 24;
    ECOCAN.ESP_20.fields{5}.bit_length = 4;
    ECOCAN.ESP_20.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_20.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.ESP_20.fields{5}.scale = 1;
    ECOCAN.ESP_20.fields{5}.offset = 0;
    ECOCAN.ESP_20.fields{5}.multiplex_type = 'Standard';
    ECOCAN.ESP_20.fields{5}.multiplex_value = 0;

    ECOCAN.ESP_20.fields{6}.name = 'ESP_Charisma_Status';
    ECOCAN.ESP_20.fields{6}.units = '';
    ECOCAN.ESP_20.fields{6}.start_bit = 28;
    ECOCAN.ESP_20.fields{6}.bit_length = 2;
    ECOCAN.ESP_20.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_20.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.ESP_20.fields{6}.scale = 1;
    ECOCAN.ESP_20.fields{6}.offset = 0;
    ECOCAN.ESP_20.fields{6}.multiplex_type = 'Standard';
    ECOCAN.ESP_20.fields{6}.multiplex_value = 0;

    ECOCAN.ESP_20.fields{7}.name = 'BR_QBit_TireCircumference';
    ECOCAN.ESP_20.fields{7}.units = '';
    ECOCAN.ESP_20.fields{7}.start_bit = 51;
    ECOCAN.ESP_20.fields{7}.bit_length = 1;
    ECOCAN.ESP_20.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_20.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.ESP_20.fields{7}.scale = 1;
    ECOCAN.ESP_20.fields{7}.offset = 0;
    ECOCAN.ESP_20.fields{7}.multiplex_type = 'Standard';
    ECOCAN.ESP_20.fields{7}.multiplex_value = 0;

    ECOCAN.ESP_20.fields{8}.name = 'BR_TireCircumference';
    ECOCAN.ESP_20.fields{8}.units = 'Unit_MilliMeter';
    ECOCAN.ESP_20.fields{8}.start_bit = 52;
    ECOCAN.ESP_20.fields{8}.bit_length = 12;
    ECOCAN.ESP_20.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_20.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.ESP_20.fields{8}.scale = 1;
    ECOCAN.ESP_20.fields{8}.offset = 0;
    ECOCAN.ESP_20.fields{8}.multiplex_type = 'Standard';
    ECOCAN.ESP_20.fields{8}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:BCM_01
%Message Number:16
case 'BCM_01'
    ECOCAN.BCM_01 = struct;
    ECOCAN.BCM_01.name = 'BCM_01';
    ECOCAN.BCM_01.description = 'BCM_01';
    ECOCAN.BCM_01.protocol  = 'ECOCAN';
    ECOCAN.BCM_01.id = hex2dec('65A');
    ECOCAN.BCM_01.idext = 'STANDARD';
    ECOCAN.BCM_01.payload_size =8;
    ECOCAN.BCM_01.interval =-1;

    ECOCAN.BCM_01.fields{1}.name = 'BCM_BrakePedal_Sensor';
    ECOCAN.BCM_01.fields{1}.units = '';
    ECOCAN.BCM_01.fields{1}.start_bit = 12;
    ECOCAN.BCM_01.fields{1}.bit_length = 1;
    ECOCAN.BCM_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{1}.scale = 1;
    ECOCAN.BCM_01.fields{1}.offset = 0;
    ECOCAN.BCM_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{1}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{2}.name = 'BCM_BrakeFluid_Sensor';
    ECOCAN.BCM_01.fields{2}.units = '';
    ECOCAN.BCM_01.fields{2}.start_bit = 13;
    ECOCAN.BCM_01.fields{2}.bit_length = 1;
    ECOCAN.BCM_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{2}.scale = 1;
    ECOCAN.BCM_01.fields{2}.offset = 0;
    ECOCAN.BCM_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{2}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{3}.name = 'BCM1_Licht_Warn';
    ECOCAN.BCM_01.fields{3}.units = '';
    ECOCAN.BCM_01.fields{3}.start_bit = 14;
    ECOCAN.BCM_01.fields{3}.bit_length = 1;
    ECOCAN.BCM_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{3}.scale = 1;
    ECOCAN.BCM_01.fields{3}.offset = 0;
    ECOCAN.BCM_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{3}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{4}.name = 'BCM_Washwater_Sensor';
    ECOCAN.BCM_01.fields{4}.units = '';
    ECOCAN.BCM_01.fields{4}.start_bit = 15;
    ECOCAN.BCM_01.fields{4}.bit_length = 1;
    ECOCAN.BCM_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{4}.scale = 1;
    ECOCAN.BCM_01.fields{4}.offset = 0;
    ECOCAN.BCM_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{4}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{5}.name = 'BCM_Coolant_Sensor';
    ECOCAN.BCM_01.fields{5}.units = '';
    ECOCAN.BCM_01.fields{5}.start_bit = 16;
    ECOCAN.BCM_01.fields{5}.bit_length = 1;
    ECOCAN.BCM_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{5}.scale = 1;
    ECOCAN.BCM_01.fields{5}.offset = 0;
    ECOCAN.BCM_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{5}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{6}.name = 'BCM1_Kl_15_HW_recognized';
    ECOCAN.BCM_01.fields{6}.units = '';
    ECOCAN.BCM_01.fields{6}.start_bit = 17;
    ECOCAN.BCM_01.fields{6}.bit_length = 1;
    ECOCAN.BCM_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{6}.scale = 1;
    ECOCAN.BCM_01.fields{6}.offset = 0;
    ECOCAN.BCM_01.fields{6}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{6}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{7}.name = 'BCM_Ice_Offroad_Button';
    ECOCAN.BCM_01.fields{7}.units = '';
    ECOCAN.BCM_01.fields{7}.start_bit = 18;
    ECOCAN.BCM_01.fields{7}.bit_length = 1;
    ECOCAN.BCM_01.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{7}.scale = 1;
    ECOCAN.BCM_01.fields{7}.offset = 0;
    ECOCAN.BCM_01.fields{7}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{7}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{8}.name = 'ZZH_Endlage_oben';
    ECOCAN.BCM_01.fields{8}.units = '';
    ECOCAN.BCM_01.fields{8}.start_bit = 19;
    ECOCAN.BCM_01.fields{8}.bit_length = 1;
    ECOCAN.BCM_01.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{8}.scale = 1;
    ECOCAN.BCM_01.fields{8}.offset = 0;
    ECOCAN.BCM_01.fields{8}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{8}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{9}.name = 'ZZH_Endlage_unten';
    ECOCAN.BCM_01.fields{9}.units = '';
    ECOCAN.BCM_01.fields{9}.start_bit = 20;
    ECOCAN.BCM_01.fields{9}.bit_length = 1;
    ECOCAN.BCM_01.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{9}.scale = 1;
    ECOCAN.BCM_01.fields{9}.offset = 0;
    ECOCAN.BCM_01.fields{9}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{9}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{10}.name = 'ZZH_Endlage_unplausibel';
    ECOCAN.BCM_01.fields{10}.units = '';
    ECOCAN.BCM_01.fields{10}.start_bit = 21;
    ECOCAN.BCM_01.fields{10}.bit_length = 1;
    ECOCAN.BCM_01.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{10}.scale = 1;
    ECOCAN.BCM_01.fields{10}.offset = 0;
    ECOCAN.BCM_01.fields{10}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{10}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{11}.name = 'BCM2_EZS_depressed';
    ECOCAN.BCM_01.fields{11}.units = '';
    ECOCAN.BCM_01.fields{11}.start_bit = 22;
    ECOCAN.BCM_01.fields{11}.bit_length = 1;
    ECOCAN.BCM_01.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{11}.scale = 1;
    ECOCAN.BCM_01.fields{11}.offset = 0;
    ECOCAN.BCM_01.fields{11}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{11}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{12}.name = 'BCM2_SST_depressed';
    ECOCAN.BCM_01.fields{12}.units = '';
    ECOCAN.BCM_01.fields{12}.start_bit = 23;
    ECOCAN.BCM_01.fields{12}.bit_length = 1;
    ECOCAN.BCM_01.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{12}.scale = 1;
    ECOCAN.BCM_01.fields{12}.offset = 0;
    ECOCAN.BCM_01.fields{12}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{12}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{13}.name = 'BCM_Hybrid_StartStopp_Button';
    ECOCAN.BCM_01.fields{13}.units = '';
    ECOCAN.BCM_01.fields{13}.start_bit = 24;
    ECOCAN.BCM_01.fields{13}.bit_length = 1;
    ECOCAN.BCM_01.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{13}.scale = 1;
    ECOCAN.BCM_01.fields{13}.offset = 0;
    ECOCAN.BCM_01.fields{13}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{13}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{14}.name = 'BCM1_Warnblink_Button';
    ECOCAN.BCM_01.fields{14}.units = '';
    ECOCAN.BCM_01.fields{14}.start_bit = 25;
    ECOCAN.BCM_01.fields{14}.bit_length = 1;
    ECOCAN.BCM_01.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{14}.scale = 1;
    ECOCAN.BCM_01.fields{14}.offset = 0;
    ECOCAN.BCM_01.fields{14}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{14}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{15}.name = 'BCM1_Valet_Parking_Button';
    ECOCAN.BCM_01.fields{15}.units = '';
    ECOCAN.BCM_01.fields{15}.start_bit = 26;
    ECOCAN.BCM_01.fields{15}.bit_length = 1;
    ECOCAN.BCM_01.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{15}.scale = 1;
    ECOCAN.BCM_01.fields{15}.offset = 0;
    ECOCAN.BCM_01.fields{15}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{15}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{16}.name = 'BCM_Remotestart_Betrieb';
    ECOCAN.BCM_01.fields{16}.units = '';
    ECOCAN.BCM_01.fields{16}.start_bit = 27;
    ECOCAN.BCM_01.fields{16}.bit_length = 1;
    ECOCAN.BCM_01.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{16}.scale = 1;
    ECOCAN.BCM_01.fields{16}.offset = 0;
    ECOCAN.BCM_01.fields{16}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{16}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{17}.name = 'BCM1_HSK_Button';
    ECOCAN.BCM_01.fields{17}.units = '';
    ECOCAN.BCM_01.fields{17}.start_bit = 28;
    ECOCAN.BCM_01.fields{17}.bit_length = 1;
    ECOCAN.BCM_01.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{17}.scale = 1;
    ECOCAN.BCM_01.fields{17}.offset = 0;
    ECOCAN.BCM_01.fields{17}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{17}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{18}.name = 'BCM1_RearBlind_Button';
    ECOCAN.BCM_01.fields{18}.units = '';
    ECOCAN.BCM_01.fields{18}.start_bit = 29;
    ECOCAN.BCM_01.fields{18}.bit_length = 1;
    ECOCAN.BCM_01.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{18}.scale = 1;
    ECOCAN.BCM_01.fields{18}.offset = 0;
    ECOCAN.BCM_01.fields{18}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{18}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{19}.name = 'BCM1_ReversingLight_Schalter';
    ECOCAN.BCM_01.fields{19}.units = '';
    ECOCAN.BCM_01.fields{19}.start_bit = 30;
    ECOCAN.BCM_01.fields{19}.bit_length = 1;
    ECOCAN.BCM_01.fields{19}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{19}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{19}.scale = 1;
    ECOCAN.BCM_01.fields{19}.offset = 0;
    ECOCAN.BCM_01.fields{19}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{19}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{20}.name = 'BCM1_MH_Schalter';
    ECOCAN.BCM_01.fields{20}.units = '';
    ECOCAN.BCM_01.fields{20}.start_bit = 31;
    ECOCAN.BCM_01.fields{20}.bit_length = 1;
    ECOCAN.BCM_01.fields{20}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{20}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{20}.scale = 1;
    ECOCAN.BCM_01.fields{20}.offset = 0;
    ECOCAN.BCM_01.fields{20}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{20}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{21}.name = 'BCM1_MH_WIV_Schalter';
    ECOCAN.BCM_01.fields{21}.units = '';
    ECOCAN.BCM_01.fields{21}.start_bit = 32;
    ECOCAN.BCM_01.fields{21}.bit_length = 1;
    ECOCAN.BCM_01.fields{21}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{21}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{21}.scale = 1;
    ECOCAN.BCM_01.fields{21}.offset = 0;
    ECOCAN.BCM_01.fields{21}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{21}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{22}.name = 'BCM_Eco_Charisma_Taste';
    ECOCAN.BCM_01.fields{22}.units = '';
    ECOCAN.BCM_01.fields{22}.start_bit = 33;
    ECOCAN.BCM_01.fields{22}.bit_length = 1;
    ECOCAN.BCM_01.fields{22}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{22}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{22}.scale = 1;
    ECOCAN.BCM_01.fields{22}.offset = 0;
    ECOCAN.BCM_01.fields{22}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{22}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{23}.name = 'BCM_Thermomanagement';
    ECOCAN.BCM_01.fields{23}.units = '';
    ECOCAN.BCM_01.fields{23}.start_bit = 34;
    ECOCAN.BCM_01.fields{23}.bit_length = 2;
    ECOCAN.BCM_01.fields{23}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{23}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{23}.scale = 1;
    ECOCAN.BCM_01.fields{23}.offset = 0;
    ECOCAN.BCM_01.fields{23}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{23}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{24}.name = 'BCM_Thermomanagement_Error';
    ECOCAN.BCM_01.fields{24}.units = '';
    ECOCAN.BCM_01.fields{24}.start_bit = 36;
    ECOCAN.BCM_01.fields{24}.bit_length = 1;
    ECOCAN.BCM_01.fields{24}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{24}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{24}.scale = 1;
    ECOCAN.BCM_01.fields{24}.offset = 0;
    ECOCAN.BCM_01.fields{24}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{24}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{25}.name = 'BCM_Thermomanagement_valid';
    ECOCAN.BCM_01.fields{25}.units = '';
    ECOCAN.BCM_01.fields{25}.start_bit = 37;
    ECOCAN.BCM_01.fields{25}.bit_length = 1;
    ECOCAN.BCM_01.fields{25}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{25}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{25}.scale = 1;
    ECOCAN.BCM_01.fields{25}.offset = 0;
    ECOCAN.BCM_01.fields{25}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{25}.multiplex_value = 0;

    ECOCAN.BCM_01.fields{26}.name = 'BCM1_Lichtwarn_Texte';
    ECOCAN.BCM_01.fields{26}.units = '';
    ECOCAN.BCM_01.fields{26}.start_bit = 38;
    ECOCAN.BCM_01.fields{26}.bit_length = 2;
    ECOCAN.BCM_01.fields{26}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BCM_01.fields{26}.data_type = 'UNSIGNED';
    ECOCAN.BCM_01.fields{26}.scale = 1;
    ECOCAN.BCM_01.fields{26}.offset = 0;
    ECOCAN.BCM_01.fields{26}.multiplex_type = 'Standard';
    ECOCAN.BCM_01.fields{26}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Motor_Code_01
%Message Number:17
case 'Motor_Code_01'
    ECOCAN.Motor_Code_01 = struct;
    ECOCAN.Motor_Code_01.name = 'Motor_Code_01';
    ECOCAN.Motor_Code_01.description = 'Motor_Code_01';
    ECOCAN.Motor_Code_01.protocol  = 'ECOCAN';
    ECOCAN.Motor_Code_01.id = hex2dec('641');
    ECOCAN.Motor_Code_01.idext = 'STANDARD';
    ECOCAN.Motor_Code_01.payload_size =8;
    ECOCAN.Motor_Code_01.interval =-1;

    ECOCAN.Motor_Code_01.fields{1}.name = 'Motor_Code_01_CRC';
    ECOCAN.Motor_Code_01.fields{1}.units = '';
    ECOCAN.Motor_Code_01.fields{1}.start_bit = 0;
    ECOCAN.Motor_Code_01.fields{1}.bit_length = 8;
    ECOCAN.Motor_Code_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{1}.scale = 1;
    ECOCAN.Motor_Code_01.fields{1}.offset = 0;
    ECOCAN.Motor_Code_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{1}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{2}.name = 'Motor_Code_01_BZ';
    ECOCAN.Motor_Code_01.fields{2}.units = '';
    ECOCAN.Motor_Code_01.fields{2}.start_bit = 8;
    ECOCAN.Motor_Code_01.fields{2}.bit_length = 4;
    ECOCAN.Motor_Code_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{2}.scale = 1;
    ECOCAN.Motor_Code_01.fields{2}.offset = 0;
    ECOCAN.Motor_Code_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{2}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{3}.name = 'MO_Faktor_Momente_02';
    ECOCAN.Motor_Code_01.fields{3}.units = '';
    ECOCAN.Motor_Code_01.fields{3}.start_bit = 12;
    ECOCAN.Motor_Code_01.fields{3}.bit_length = 2;
    ECOCAN.Motor_Code_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{3}.scale = 1;
    ECOCAN.Motor_Code_01.fields{3}.offset = 0;
    ECOCAN.Motor_Code_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{3}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{4}.name = 'MO_Hybridvehicle';
    ECOCAN.Motor_Code_01.fields{4}.units = '';
    ECOCAN.Motor_Code_01.fields{4}.start_bit = 14;
    ECOCAN.Motor_Code_01.fields{4}.bit_length = 2;
    ECOCAN.Motor_Code_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{4}.scale = 1;
    ECOCAN.Motor_Code_01.fields{4}.offset = 0;
    ECOCAN.Motor_Code_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{4}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{5}.name = 'MO_Code';
    ECOCAN.Motor_Code_01.fields{5}.units = '';
    ECOCAN.Motor_Code_01.fields{5}.start_bit = 16;
    ECOCAN.Motor_Code_01.fields{5}.bit_length = 8;
    ECOCAN.Motor_Code_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{5}.scale = 1;
    ECOCAN.Motor_Code_01.fields{5}.offset = 0;
    ECOCAN.Motor_Code_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{5}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{6}.name = 'MO_Getriebe_Code';
    ECOCAN.Motor_Code_01.fields{6}.units = '';
    ECOCAN.Motor_Code_01.fields{6}.start_bit = 24;
    ECOCAN.Motor_Code_01.fields{6}.bit_length = 6;
    ECOCAN.Motor_Code_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{6}.scale = 1;
    ECOCAN.Motor_Code_01.fields{6}.offset = 0;
    ECOCAN.Motor_Code_01.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{6}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{7}.name = 'MO_StartStopp_Codiert';
    ECOCAN.Motor_Code_01.fields{7}.units = '';
    ECOCAN.Motor_Code_01.fields{7}.start_bit = 30;
    ECOCAN.Motor_Code_01.fields{7}.bit_length = 1;
    ECOCAN.Motor_Code_01.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{7}.scale = 1;
    ECOCAN.Motor_Code_01.fields{7}.offset = 0;
    ECOCAN.Motor_Code_01.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{7}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{8}.name = 'MO_Anzahl_Zyl';
    ECOCAN.Motor_Code_01.fields{8}.units = '';
    ECOCAN.Motor_Code_01.fields{8}.start_bit = 32;
    ECOCAN.Motor_Code_01.fields{8}.bit_length = 4;
    ECOCAN.Motor_Code_01.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{8}.scale = 1;
    ECOCAN.Motor_Code_01.fields{8}.offset = 0;
    ECOCAN.Motor_Code_01.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{8}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{9}.name = 'MO_Kraftstoffart';
    ECOCAN.Motor_Code_01.fields{9}.units = '';
    ECOCAN.Motor_Code_01.fields{9}.start_bit = 36;
    ECOCAN.Motor_Code_01.fields{9}.bit_length = 4;
    ECOCAN.Motor_Code_01.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{9}.scale = 1;
    ECOCAN.Motor_Code_01.fields{9}.offset = 0;
    ECOCAN.Motor_Code_01.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{9}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{10}.name = 'MO_Hubraum';
    ECOCAN.Motor_Code_01.fields{10}.units = 'Unit_Liter';
    ECOCAN.Motor_Code_01.fields{10}.start_bit = 40;
    ECOCAN.Motor_Code_01.fields{10}.bit_length = 7;
    ECOCAN.Motor_Code_01.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{10}.scale = 0.1;
    ECOCAN.Motor_Code_01.fields{10}.offset = 0;
    ECOCAN.Motor_Code_01.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{10}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{11}.name = 'MO_SuctionSystem';
    ECOCAN.Motor_Code_01.fields{11}.units = '';
    ECOCAN.Motor_Code_01.fields{11}.start_bit = 47;
    ECOCAN.Motor_Code_01.fields{11}.bit_length = 1;
    ECOCAN.Motor_Code_01.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{11}.scale = 1;
    ECOCAN.Motor_Code_01.fields{11}.offset = 0;
    ECOCAN.Motor_Code_01.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{11}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{12}.name = 'MO_Power';
    ECOCAN.Motor_Code_01.fields{12}.units = 'Unit_KiloWatt';
    ECOCAN.Motor_Code_01.fields{12}.start_bit = 48;
    ECOCAN.Motor_Code_01.fields{12}.bit_length = 9;
    ECOCAN.Motor_Code_01.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{12}.scale = 1;
    ECOCAN.Motor_Code_01.fields{12}.offset = 0;
    ECOCAN.Motor_Code_01.fields{12}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{12}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{13}.name = 'MO_Abgastyp_EOBD';
    ECOCAN.Motor_Code_01.fields{13}.units = '';
    ECOCAN.Motor_Code_01.fields{13}.start_bit = 57;
    ECOCAN.Motor_Code_01.fields{13}.bit_length = 1;
    ECOCAN.Motor_Code_01.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{13}.scale = 1;
    ECOCAN.Motor_Code_01.fields{13}.offset = 0;
    ECOCAN.Motor_Code_01.fields{13}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{13}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{14}.name = 'MO_Abgastyp_OBD';
    ECOCAN.Motor_Code_01.fields{14}.units = '';
    ECOCAN.Motor_Code_01.fields{14}.start_bit = 58;
    ECOCAN.Motor_Code_01.fields{14}.bit_length = 1;
    ECOCAN.Motor_Code_01.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{14}.scale = 1;
    ECOCAN.Motor_Code_01.fields{14}.offset = 0;
    ECOCAN.Motor_Code_01.fields{14}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{14}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{15}.name = 'MO_DPF_verbaut';
    ECOCAN.Motor_Code_01.fields{15}.units = '';
    ECOCAN.Motor_Code_01.fields{15}.start_bit = 59;
    ECOCAN.Motor_Code_01.fields{15}.bit_length = 1;
    ECOCAN.Motor_Code_01.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{15}.scale = 1;
    ECOCAN.Motor_Code_01.fields{15}.offset = 0;
    ECOCAN.Motor_Code_01.fields{15}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{15}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{16}.name = 'TSK_Codierung';
    ECOCAN.Motor_Code_01.fields{16}.units = '';
    ECOCAN.Motor_Code_01.fields{16}.start_bit = 60;
    ECOCAN.Motor_Code_01.fields{16}.bit_length = 3;
    ECOCAN.Motor_Code_01.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{16}.scale = 1;
    ECOCAN.Motor_Code_01.fields{16}.offset = 0;
    ECOCAN.Motor_Code_01.fields{16}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{16}.multiplex_value = 0;

    ECOCAN.Motor_Code_01.fields{17}.name = 'MO_Einspritzart';
    ECOCAN.Motor_Code_01.fields{17}.units = '';
    ECOCAN.Motor_Code_01.fields{17}.start_bit = 63;
    ECOCAN.Motor_Code_01.fields{17}.bit_length = 1;
    ECOCAN.Motor_Code_01.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_Code_01.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.Motor_Code_01.fields{17}.scale = 1;
    ECOCAN.Motor_Code_01.fields{17}.offset = 0;
    ECOCAN.Motor_Code_01.fields{17}.multiplex_type = 'Standard';
    ECOCAN.Motor_Code_01.fields{17}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Motor_07
%Message Number:18
case 'Motor_07'
    ECOCAN.Motor_07 = struct;
    ECOCAN.Motor_07.name = 'Motor_07';
    ECOCAN.Motor_07.description = 'Motor_07';
    ECOCAN.Motor_07.protocol  = 'ECOCAN';
    ECOCAN.Motor_07.id = hex2dec('640');
    ECOCAN.Motor_07.idext = 'STANDARD';
    ECOCAN.Motor_07.payload_size =8;
    ECOCAN.Motor_07.interval =-1;

    ECOCAN.Motor_07.fields{1}.name = 'MO_QBit_IntakeAir_Temp';
    ECOCAN.Motor_07.fields{1}.units = '';
    ECOCAN.Motor_07.fields{1}.start_bit = 0;
    ECOCAN.Motor_07.fields{1}.bit_length = 1;
    ECOCAN.Motor_07.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{1}.scale = 1;
    ECOCAN.Motor_07.fields{1}.offset = 0;
    ECOCAN.Motor_07.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{1}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{2}.name = 'MO_QBit_Oil_Temp';
    ECOCAN.Motor_07.fields{2}.units = '';
    ECOCAN.Motor_07.fields{2}.start_bit = 1;
    ECOCAN.Motor_07.fields{2}.bit_length = 1;
    ECOCAN.Motor_07.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{2}.scale = 1;
    ECOCAN.Motor_07.fields{2}.offset = 0;
    ECOCAN.Motor_07.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{2}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{3}.name = 'MO_QBit_Coolant_Temp';
    ECOCAN.Motor_07.fields{3}.units = '';
    ECOCAN.Motor_07.fields{3}.start_bit = 2;
    ECOCAN.Motor_07.fields{3}.bit_length = 1;
    ECOCAN.Motor_07.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{3}.scale = 1;
    ECOCAN.Motor_07.fields{3}.offset = 0;
    ECOCAN.Motor_07.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{3}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{4}.name = 'MO_ActuatorTest_Soundaktuator';
    ECOCAN.Motor_07.fields{4}.units = '';
    ECOCAN.Motor_07.fields{4}.start_bit = 3;
    ECOCAN.Motor_07.fields{4}.bit_length = 1;
    ECOCAN.Motor_07.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{4}.scale = 1;
    ECOCAN.Motor_07.fields{4}.offset = 0;
    ECOCAN.Motor_07.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{4}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{5}.name = 'MO_HYB_Fehler_HV_Netz';
    ECOCAN.Motor_07.fields{5}.units = '';
    ECOCAN.Motor_07.fields{5}.start_bit = 4;
    ECOCAN.Motor_07.fields{5}.bit_length = 1;
    ECOCAN.Motor_07.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{5}.scale = 1;
    ECOCAN.Motor_07.fields{5}.offset = 0;
    ECOCAN.Motor_07.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{5}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{6}.name = 'MO_aktives_TransmissionHeating';
    ECOCAN.Motor_07.fields{6}.units = '';
    ECOCAN.Motor_07.fields{6}.start_bit = 5;
    ECOCAN.Motor_07.fields{6}.bit_length = 1;
    ECOCAN.Motor_07.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{6}.scale = 1;
    ECOCAN.Motor_07.fields{6}.offset = 0;
    ECOCAN.Motor_07.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{6}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{7}.name = 'MO_Shutoffvalve_opened';
    ECOCAN.Motor_07.fields{7}.units = '';
    ECOCAN.Motor_07.fields{7}.start_bit = 6;
    ECOCAN.Motor_07.fields{7}.bit_length = 2;
    ECOCAN.Motor_07.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{7}.scale = 1;
    ECOCAN.Motor_07.fields{7}.offset = 0;
    ECOCAN.Motor_07.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{7}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{8}.name = 'MO_IntakeAir_Temp';
    ECOCAN.Motor_07.fields{8}.units = 'Unit_DegreCelsi';
    ECOCAN.Motor_07.fields{8}.start_bit = 8;
    ECOCAN.Motor_07.fields{8}.bit_length = 8;
    ECOCAN.Motor_07.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{8}.scale = 0.75;
    ECOCAN.Motor_07.fields{8}.offset = -48;
    ECOCAN.Motor_07.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{8}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{9}.name = 'MO_Oil_Temp';
    ECOCAN.Motor_07.fields{9}.units = 'Unit_DegreCelsi';
    ECOCAN.Motor_07.fields{9}.start_bit = 16;
    ECOCAN.Motor_07.fields{9}.bit_length = 8;
    ECOCAN.Motor_07.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{9}.scale = 1;
    ECOCAN.Motor_07.fields{9}.offset = -60;
    ECOCAN.Motor_07.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{9}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{10}.name = 'MO_Coolant_Temp';
    ECOCAN.Motor_07.fields{10}.units = 'Unit_DegreCelsi';
    ECOCAN.Motor_07.fields{10}.start_bit = 24;
    ECOCAN.Motor_07.fields{10}.bit_length = 8;
    ECOCAN.Motor_07.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{10}.scale = 0.75;
    ECOCAN.Motor_07.fields{10}.offset = -48;
    ECOCAN.Motor_07.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{10}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{11}.name = 'MO_HeightInfo';
    ECOCAN.Motor_07.fields{11}.units = '';
    ECOCAN.Motor_07.fields{11}.start_bit = 32;
    ECOCAN.Motor_07.fields{11}.bit_length = 8;
    ECOCAN.Motor_07.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{11}.scale = 0.00781;
    ECOCAN.Motor_07.fields{11}.offset = 0;
    ECOCAN.Motor_07.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{11}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{12}.name = 'MO_Map';
    ECOCAN.Motor_07.fields{12}.units = '';
    ECOCAN.Motor_07.fields{12}.start_bit = 40;
    ECOCAN.Motor_07.fields{12}.bit_length = 1;
    ECOCAN.Motor_07.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{12}.scale = 1;
    ECOCAN.Motor_07.fields{12}.offset = 0;
    ECOCAN.Motor_07.fields{12}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{12}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{13}.name = 'MO_Versionsinfo';
    ECOCAN.Motor_07.fields{13}.units = '';
    ECOCAN.Motor_07.fields{13}.start_bit = 41;
    ECOCAN.Motor_07.fields{13}.bit_length = 6;
    ECOCAN.Motor_07.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{13}.scale = 1;
    ECOCAN.Motor_07.fields{13}.offset = 0;
    ECOCAN.Motor_07.fields{13}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{13}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{14}.name = 'MO_Transmission_Cooling';
    ECOCAN.Motor_07.fields{14}.units = '';
    ECOCAN.Motor_07.fields{14}.start_bit = 47;
    ECOCAN.Motor_07.fields{14}.bit_length = 1;
    ECOCAN.Motor_07.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{14}.scale = 1;
    ECOCAN.Motor_07.fields{14}.offset = 0;
    ECOCAN.Motor_07.fields{14}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{14}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{15}.name = 'MO_Mom_Inertia_02';
    ECOCAN.Motor_07.fields{15}.units = 'Unit_KiloGramMeterSquar';
    ECOCAN.Motor_07.fields{15}.start_bit = 48;
    ECOCAN.Motor_07.fields{15}.bit_length = 5;
    ECOCAN.Motor_07.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{15}.scale = 0.01;
    ECOCAN.Motor_07.fields{15}.offset = 0;
    ECOCAN.Motor_07.fields{15}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{15}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{16}.name = 'MO_HeatingPumpControl';
    ECOCAN.Motor_07.fields{16}.units = 'Unit_PerCent';
    ECOCAN.Motor_07.fields{16}.start_bit = 53;
    ECOCAN.Motor_07.fields{16}.bit_length = 4;
    ECOCAN.Motor_07.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{16}.scale = 10;
    ECOCAN.Motor_07.fields{16}.offset = 0;
    ECOCAN.Motor_07.fields{16}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{16}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{17}.name = 'MO_StartVoltage';
    ECOCAN.Motor_07.fields{17}.units = '';
    ECOCAN.Motor_07.fields{17}.start_bit = 57;
    ECOCAN.Motor_07.fields{17}.bit_length = 1;
    ECOCAN.Motor_07.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{17}.scale = 1;
    ECOCAN.Motor_07.fields{17}.offset = 0;
    ECOCAN.Motor_07.fields{17}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{17}.multiplex_value = 0;

    ECOCAN.Motor_07.fields{18}.name = 'MO_FollowUpTime_HeatingPump';
    ECOCAN.Motor_07.fields{18}.units = 'Unit_Secon';
    ECOCAN.Motor_07.fields{18}.start_bit = 58;
    ECOCAN.Motor_07.fields{18}.bit_length = 6;
    ECOCAN.Motor_07.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_07.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.Motor_07.fields{18}.scale = 15;
    ECOCAN.Motor_07.fields{18}.offset = 0;
    ECOCAN.Motor_07.fields{18}.multiplex_type = 'Standard';
    ECOCAN.Motor_07.fields{18}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Dimmung_01
%Message Number:19
case 'Dimmung_01'
    ECOCAN.Dimmung_01 = struct;
    ECOCAN.Dimmung_01.name = 'Dimmung_01';
    ECOCAN.Dimmung_01.description = 'Dimmung_01';
    ECOCAN.Dimmung_01.protocol  = 'ECOCAN';
    ECOCAN.Dimmung_01.id = hex2dec('5F0');
    ECOCAN.Dimmung_01.idext = 'STANDARD';
    ECOCAN.Dimmung_01.payload_size =8;
    ECOCAN.Dimmung_01.interval =-1;

    ECOCAN.Dimmung_01.fields{1}.name = 'DI_KL_58xd';
    ECOCAN.Dimmung_01.fields{1}.units = '';
    ECOCAN.Dimmung_01.fields{1}.start_bit = 0;
    ECOCAN.Dimmung_01.fields{1}.bit_length = 8;
    ECOCAN.Dimmung_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Dimmung_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Dimmung_01.fields{1}.scale = 1;
    ECOCAN.Dimmung_01.fields{1}.offset = 0;
    ECOCAN.Dimmung_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Dimmung_01.fields{1}.multiplex_value = 0;

    ECOCAN.Dimmung_01.fields{2}.name = 'DI_KL_58xs';
    ECOCAN.Dimmung_01.fields{2}.units = 'Unit_PerCent';
    ECOCAN.Dimmung_01.fields{2}.start_bit = 8;
    ECOCAN.Dimmung_01.fields{2}.bit_length = 7;
    ECOCAN.Dimmung_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Dimmung_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Dimmung_01.fields{2}.scale = 1;
    ECOCAN.Dimmung_01.fields{2}.offset = 0;
    ECOCAN.Dimmung_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Dimmung_01.fields{2}.multiplex_value = 0;

    ECOCAN.Dimmung_01.fields{3}.name = 'DI_Display_Nachtdesign';
    ECOCAN.Dimmung_01.fields{3}.units = '';
    ECOCAN.Dimmung_01.fields{3}.start_bit = 15;
    ECOCAN.Dimmung_01.fields{3}.bit_length = 1;
    ECOCAN.Dimmung_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Dimmung_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Dimmung_01.fields{3}.scale = 1;
    ECOCAN.Dimmung_01.fields{3}.offset = 0;
    ECOCAN.Dimmung_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Dimmung_01.fields{3}.multiplex_value = 0;

    ECOCAN.Dimmung_01.fields{4}.name = 'DI_KL_58xt';
    ECOCAN.Dimmung_01.fields{4}.units = 'Unit_PerCent';
    ECOCAN.Dimmung_01.fields{4}.start_bit = 16;
    ECOCAN.Dimmung_01.fields{4}.bit_length = 7;
    ECOCAN.Dimmung_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Dimmung_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Dimmung_01.fields{4}.scale = 1;
    ECOCAN.Dimmung_01.fields{4}.offset = 0;
    ECOCAN.Dimmung_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Dimmung_01.fields{4}.multiplex_value = 0;

    ECOCAN.Dimmung_01.fields{5}.name = 'DI_Fotosensor';
    ECOCAN.Dimmung_01.fields{5}.units = '';
    ECOCAN.Dimmung_01.fields{5}.start_bit = 24;
    ECOCAN.Dimmung_01.fields{5}.bit_length = 16;
    ECOCAN.Dimmung_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Dimmung_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Dimmung_01.fields{5}.scale = 1;
    ECOCAN.Dimmung_01.fields{5}.offset = 0;
    ECOCAN.Dimmung_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Dimmung_01.fields{5}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:20
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('5EA');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Systeminfo_01
%Message Number:21
case 'Systeminfo_01'
    ECOCAN.Systeminfo_01 = struct;
    ECOCAN.Systeminfo_01.name = 'Systeminfo_01';
    ECOCAN.Systeminfo_01.description = 'Systeminfo_01';
    ECOCAN.Systeminfo_01.protocol  = 'ECOCAN';
    ECOCAN.Systeminfo_01.id = hex2dec('585');
    ECOCAN.Systeminfo_01.idext = 'STANDARD';
    ECOCAN.Systeminfo_01.payload_size =8;
    ECOCAN.Systeminfo_01.interval =-1;

    ECOCAN.Systeminfo_01.fields{1}.name = 'SI_Sammel_SG_Fehler';
    ECOCAN.Systeminfo_01.fields{1}.units = '';
    ECOCAN.Systeminfo_01.fields{1}.start_bit = 0;
    ECOCAN.Systeminfo_01.fields{1}.bit_length = 6;
    ECOCAN.Systeminfo_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{1}.scale = 1;
    ECOCAN.Systeminfo_01.fields{1}.offset = 0;
    ECOCAN.Systeminfo_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{1}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{2}.name = 'SI_Rollenmode';
    ECOCAN.Systeminfo_01.fields{2}.units = '';
    ECOCAN.Systeminfo_01.fields{2}.start_bit = 6;
    ECOCAN.Systeminfo_01.fields{2}.bit_length = 2;
    ECOCAN.Systeminfo_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{2}.scale = 1;
    ECOCAN.Systeminfo_01.fields{2}.offset = 0;
    ECOCAN.Systeminfo_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{2}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{3}.name = 'SI_QRS_Mode';
    ECOCAN.Systeminfo_01.fields{3}.units = '';
    ECOCAN.Systeminfo_01.fields{3}.start_bit = 8;
    ECOCAN.Systeminfo_01.fields{3}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{3}.scale = 1;
    ECOCAN.Systeminfo_01.fields{3}.offset = 0;
    ECOCAN.Systeminfo_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{3}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{4}.name = 'SI_T_Mode';
    ECOCAN.Systeminfo_01.fields{4}.units = '';
    ECOCAN.Systeminfo_01.fields{4}.start_bit = 9;
    ECOCAN.Systeminfo_01.fields{4}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{4}.scale = 1;
    ECOCAN.Systeminfo_01.fields{4}.offset = 0;
    ECOCAN.Systeminfo_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{4}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{5}.name = 'SI_NWDF';
    ECOCAN.Systeminfo_01.fields{5}.units = '';
    ECOCAN.Systeminfo_01.fields{5}.start_bit = 10;
    ECOCAN.Systeminfo_01.fields{5}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{5}.scale = 1;
    ECOCAN.Systeminfo_01.fields{5}.offset = 0;
    ECOCAN.Systeminfo_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{5}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{6}.name = 'SI_NWDF_gueltig';
    ECOCAN.Systeminfo_01.fields{6}.units = '';
    ECOCAN.Systeminfo_01.fields{6}.start_bit = 11;
    ECOCAN.Systeminfo_01.fields{6}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{6}.scale = 1;
    ECOCAN.Systeminfo_01.fields{6}.offset = 0;
    ECOCAN.Systeminfo_01.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{6}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{7}.name = 'SI_Sammelfehler';
    ECOCAN.Systeminfo_01.fields{7}.units = '';
    ECOCAN.Systeminfo_01.fields{7}.start_bit = 12;
    ECOCAN.Systeminfo_01.fields{7}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{7}.scale = 1;
    ECOCAN.Systeminfo_01.fields{7}.offset = 0;
    ECOCAN.Systeminfo_01.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{7}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{8}.name = 'GW_KD_Fehler';
    ECOCAN.Systeminfo_01.fields{8}.units = '';
    ECOCAN.Systeminfo_01.fields{8}.start_bit = 13;
    ECOCAN.Systeminfo_01.fields{8}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{8}.scale = 1;
    ECOCAN.Systeminfo_01.fields{8}.offset = 0;
    ECOCAN.Systeminfo_01.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{8}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{9}.name = 'SI_BUS_01';
    ECOCAN.Systeminfo_01.fields{9}.units = '';
    ECOCAN.Systeminfo_01.fields{9}.start_bit = 16;
    ECOCAN.Systeminfo_01.fields{9}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{9}.scale = 1;
    ECOCAN.Systeminfo_01.fields{9}.offset = 0;
    ECOCAN.Systeminfo_01.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{9}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{10}.name = 'SI_BUS_02';
    ECOCAN.Systeminfo_01.fields{10}.units = '';
    ECOCAN.Systeminfo_01.fields{10}.start_bit = 17;
    ECOCAN.Systeminfo_01.fields{10}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{10}.scale = 1;
    ECOCAN.Systeminfo_01.fields{10}.offset = 0;
    ECOCAN.Systeminfo_01.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{10}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{11}.name = 'SI_BUS_03';
    ECOCAN.Systeminfo_01.fields{11}.units = '';
    ECOCAN.Systeminfo_01.fields{11}.start_bit = 18;
    ECOCAN.Systeminfo_01.fields{11}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{11}.scale = 1;
    ECOCAN.Systeminfo_01.fields{11}.offset = 0;
    ECOCAN.Systeminfo_01.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{11}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{12}.name = 'SI_BUS_04';
    ECOCAN.Systeminfo_01.fields{12}.units = '';
    ECOCAN.Systeminfo_01.fields{12}.start_bit = 19;
    ECOCAN.Systeminfo_01.fields{12}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{12}.scale = 1;
    ECOCAN.Systeminfo_01.fields{12}.offset = 0;
    ECOCAN.Systeminfo_01.fields{12}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{12}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{13}.name = 'SI_BUS_05';
    ECOCAN.Systeminfo_01.fields{13}.units = '';
    ECOCAN.Systeminfo_01.fields{13}.start_bit = 20;
    ECOCAN.Systeminfo_01.fields{13}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{13}.scale = 1;
    ECOCAN.Systeminfo_01.fields{13}.offset = 0;
    ECOCAN.Systeminfo_01.fields{13}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{13}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{14}.name = 'SI_BUS_06';
    ECOCAN.Systeminfo_01.fields{14}.units = '';
    ECOCAN.Systeminfo_01.fields{14}.start_bit = 21;
    ECOCAN.Systeminfo_01.fields{14}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{14}.scale = 1;
    ECOCAN.Systeminfo_01.fields{14}.offset = 0;
    ECOCAN.Systeminfo_01.fields{14}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{14}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{15}.name = 'SI_BUS_07';
    ECOCAN.Systeminfo_01.fields{15}.units = '';
    ECOCAN.Systeminfo_01.fields{15}.start_bit = 22;
    ECOCAN.Systeminfo_01.fields{15}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{15}.scale = 1;
    ECOCAN.Systeminfo_01.fields{15}.offset = 0;
    ECOCAN.Systeminfo_01.fields{15}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{15}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{16}.name = 'SI_BUS_08';
    ECOCAN.Systeminfo_01.fields{16}.units = '';
    ECOCAN.Systeminfo_01.fields{16}.start_bit = 23;
    ECOCAN.Systeminfo_01.fields{16}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{16}.scale = 1;
    ECOCAN.Systeminfo_01.fields{16}.offset = 0;
    ECOCAN.Systeminfo_01.fields{16}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{16}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{17}.name = 'SI_BUS_09';
    ECOCAN.Systeminfo_01.fields{17}.units = '';
    ECOCAN.Systeminfo_01.fields{17}.start_bit = 24;
    ECOCAN.Systeminfo_01.fields{17}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{17}.scale = 1;
    ECOCAN.Systeminfo_01.fields{17}.offset = 0;
    ECOCAN.Systeminfo_01.fields{17}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{17}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{18}.name = 'SI_BUS_10';
    ECOCAN.Systeminfo_01.fields{18}.units = '';
    ECOCAN.Systeminfo_01.fields{18}.start_bit = 25;
    ECOCAN.Systeminfo_01.fields{18}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{18}.scale = 1;
    ECOCAN.Systeminfo_01.fields{18}.offset = 0;
    ECOCAN.Systeminfo_01.fields{18}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{18}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{19}.name = 'SI_BUS_11';
    ECOCAN.Systeminfo_01.fields{19}.units = '';
    ECOCAN.Systeminfo_01.fields{19}.start_bit = 26;
    ECOCAN.Systeminfo_01.fields{19}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{19}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{19}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{19}.scale = 1;
    ECOCAN.Systeminfo_01.fields{19}.offset = 0;
    ECOCAN.Systeminfo_01.fields{19}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{19}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{20}.name = 'SI_BUS_12';
    ECOCAN.Systeminfo_01.fields{20}.units = '';
    ECOCAN.Systeminfo_01.fields{20}.start_bit = 27;
    ECOCAN.Systeminfo_01.fields{20}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{20}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{20}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{20}.scale = 1;
    ECOCAN.Systeminfo_01.fields{20}.offset = 0;
    ECOCAN.Systeminfo_01.fields{20}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{20}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{21}.name = 'SI_BUS_13';
    ECOCAN.Systeminfo_01.fields{21}.units = '';
    ECOCAN.Systeminfo_01.fields{21}.start_bit = 28;
    ECOCAN.Systeminfo_01.fields{21}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{21}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{21}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{21}.scale = 1;
    ECOCAN.Systeminfo_01.fields{21}.offset = 0;
    ECOCAN.Systeminfo_01.fields{21}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{21}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{22}.name = 'SI_BUS_14';
    ECOCAN.Systeminfo_01.fields{22}.units = '';
    ECOCAN.Systeminfo_01.fields{22}.start_bit = 29;
    ECOCAN.Systeminfo_01.fields{22}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{22}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{22}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{22}.scale = 1;
    ECOCAN.Systeminfo_01.fields{22}.offset = 0;
    ECOCAN.Systeminfo_01.fields{22}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{22}.multiplex_value = 0;

    ECOCAN.Systeminfo_01.fields{23}.name = 'SI_BUS_15';
    ECOCAN.Systeminfo_01.fields{23}.units = '';
    ECOCAN.Systeminfo_01.fields{23}.start_bit = 30;
    ECOCAN.Systeminfo_01.fields{23}.bit_length = 1;
    ECOCAN.Systeminfo_01.fields{23}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Systeminfo_01.fields{23}.data_type = 'UNSIGNED';
    ECOCAN.Systeminfo_01.fields{23}.scale = 1;
    ECOCAN.Systeminfo_01.fields{23}.offset = 0;
    ECOCAN.Systeminfo_01.fields{23}.multiplex_type = 'Standard';
    ECOCAN.Systeminfo_01.fields{23}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:22
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('556');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Gateway_74
%Message Number:23
case 'Gateway_74'
    ECOCAN.Gateway_74 = struct;
    ECOCAN.Gateway_74.name = 'Gateway_74';
    ECOCAN.Gateway_74.description = 'Gateway_74';
    ECOCAN.Gateway_74.protocol  = 'ECOCAN';
    ECOCAN.Gateway_74.id = hex2dec('3DD');
    ECOCAN.Gateway_74.idext = 'STANDARD';
    ECOCAN.Gateway_74.payload_size =8;
    ECOCAN.Gateway_74.interval =-1;

    ECOCAN.Gateway_74.fields{1}.name = 'LH_EPS_01_alt';
    ECOCAN.Gateway_74.fields{1}.units = '';
    ECOCAN.Gateway_74.fields{1}.start_bit = 0;
    ECOCAN.Gateway_74.fields{1}.bit_length = 1;
    ECOCAN.Gateway_74.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{1}.scale = 1;
    ECOCAN.Gateway_74.fields{1}.offset = 0;
    ECOCAN.Gateway_74.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{1}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{2}.name = 'Kessy_04_alt';
    ECOCAN.Gateway_74.fields{2}.units = '';
    ECOCAN.Gateway_74.fields{2}.start_bit = 1;
    ECOCAN.Gateway_74.fields{2}.bit_length = 1;
    ECOCAN.Gateway_74.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{2}.scale = 1;
    ECOCAN.Gateway_74.fields{2}.offset = 0;
    ECOCAN.Gateway_74.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{2}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{3}.name = 'LIN_2_alt';
    ECOCAN.Gateway_74.fields{3}.units = '';
    ECOCAN.Gateway_74.fields{3}.start_bit = 2;
    ECOCAN.Gateway_74.fields{3}.bit_length = 1;
    ECOCAN.Gateway_74.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{3}.scale = 1;
    ECOCAN.Gateway_74.fields{3}.offset = 0;
    ECOCAN.Gateway_74.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{3}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{4}.name = 'MFG_01_alt';
    ECOCAN.Gateway_74.fields{4}.units = '';
    ECOCAN.Gateway_74.fields{4}.start_bit = 3;
    ECOCAN.Gateway_74.fields{4}.bit_length = 1;
    ECOCAN.Gateway_74.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{4}.scale = 1;
    ECOCAN.Gateway_74.fields{4}.offset = 0;
    ECOCAN.Gateway_74.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{4}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{5}.name = 'GW_74_va_14';
    ECOCAN.Gateway_74.fields{5}.units = '';
    ECOCAN.Gateway_74.fields{5}.start_bit = 4;
    ECOCAN.Gateway_74.fields{5}.bit_length = 1;
    ECOCAN.Gateway_74.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{5}.scale = 1;
    ECOCAN.Gateway_74.fields{5}.offset = 0;
    ECOCAN.Gateway_74.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{5}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{6}.name = 'Klima_02_alt';
    ECOCAN.Gateway_74.fields{6}.units = '';
    ECOCAN.Gateway_74.fields{6}.start_bit = 5;
    ECOCAN.Gateway_74.fields{6}.bit_length = 1;
    ECOCAN.Gateway_74.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{6}.scale = 1;
    ECOCAN.Gateway_74.fields{6}.offset = 0;
    ECOCAN.Gateway_74.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{6}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{7}.name = 'Parkhilfe_01_alt';
    ECOCAN.Gateway_74.fields{7}.units = '';
    ECOCAN.Gateway_74.fields{7}.start_bit = 6;
    ECOCAN.Gateway_74.fields{7}.bit_length = 1;
    ECOCAN.Gateway_74.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{7}.scale = 1;
    ECOCAN.Gateway_74.fields{7}.offset = 0;
    ECOCAN.Gateway_74.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{7}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{8}.name = 'ELV_01_alt';
    ECOCAN.Gateway_74.fields{8}.units = '';
    ECOCAN.Gateway_74.fields{8}.start_bit = 7;
    ECOCAN.Gateway_74.fields{8}.bit_length = 1;
    ECOCAN.Gateway_74.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{8}.scale = 1;
    ECOCAN.Gateway_74.fields{8}.offset = 0;
    ECOCAN.Gateway_74.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{8}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{9}.name = 'KY_StartStopp_Info';
    ECOCAN.Gateway_74.fields{9}.units = '';
    ECOCAN.Gateway_74.fields{9}.start_bit = 16;
    ECOCAN.Gateway_74.fields{9}.bit_length = 2;
    ECOCAN.Gateway_74.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{9}.scale = 1;
    ECOCAN.Gateway_74.fields{9}.offset = 0;
    ECOCAN.Gateway_74.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{9}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{10}.name = 'PH_StartStopp_Info';
    ECOCAN.Gateway_74.fields{10}.units = '';
    ECOCAN.Gateway_74.fields{10}.start_bit = 18;
    ECOCAN.Gateway_74.fields{10}.bit_length = 2;
    ECOCAN.Gateway_74.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{10}.scale = 1;
    ECOCAN.Gateway_74.fields{10}.offset = 0;
    ECOCAN.Gateway_74.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{10}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{11}.name = 'EPS_HandleBar_Position';
    ECOCAN.Gateway_74.fields{11}.units = '';
    ECOCAN.Gateway_74.fields{11}.start_bit = 20;
    ECOCAN.Gateway_74.fields{11}.bit_length = 2;
    ECOCAN.Gateway_74.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{11}.scale = 1;
    ECOCAN.Gateway_74.fields{11}.offset = 0;
    ECOCAN.Gateway_74.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{11}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{12}.name = 'ELV_Anf_Klemme_50';
    ECOCAN.Gateway_74.fields{12}.units = '';
    ECOCAN.Gateway_74.fields{12}.start_bit = 22;
    ECOCAN.Gateway_74.fields{12}.bit_length = 1;
    ECOCAN.Gateway_74.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{12}.scale = 1;
    ECOCAN.Gateway_74.fields{12}.offset = 0;
    ECOCAN.Gateway_74.fields{12}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{12}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{13}.name = 'MF_StartStopp_Info';
    ECOCAN.Gateway_74.fields{13}.units = '';
    ECOCAN.Gateway_74.fields{13}.start_bit = 25;
    ECOCAN.Gateway_74.fields{13}.bit_length = 2;
    ECOCAN.Gateway_74.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{13}.scale = 1;
    ECOCAN.Gateway_74.fields{13}.offset = 0;
    ECOCAN.Gateway_74.fields{13}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{13}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{14}.name = 'KL_BlowerVoltage_Target';
    ECOCAN.Gateway_74.fields{14}.units = 'Unit_Volt';
    ECOCAN.Gateway_74.fields{14}.start_bit = 40;
    ECOCAN.Gateway_74.fields{14}.bit_length = 8;
    ECOCAN.Gateway_74.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{14}.scale = 0.05;
    ECOCAN.Gateway_74.fields{14}.offset = 0.5;
    ECOCAN.Gateway_74.fields{14}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{14}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{15}.name = 'KL_Recirculationflap_Status';
    ECOCAN.Gateway_74.fields{15}.units = '';
    ECOCAN.Gateway_74.fields{15}.start_bit = 48;
    ECOCAN.Gateway_74.fields{15}.bit_length = 4;
    ECOCAN.Gateway_74.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{15}.scale = 1;
    ECOCAN.Gateway_74.fields{15}.offset = 0;
    ECOCAN.Gateway_74.fields{15}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{15}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{16}.name = 'MFL_Tip_Down';
    ECOCAN.Gateway_74.fields{16}.units = '';
    ECOCAN.Gateway_74.fields{16}.start_bit = 56;
    ECOCAN.Gateway_74.fields{16}.bit_length = 1;
    ECOCAN.Gateway_74.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{16}.scale = 1;
    ECOCAN.Gateway_74.fields{16}.offset = 0;
    ECOCAN.Gateway_74.fields{16}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{16}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{17}.name = 'MFL_Tip_Up';
    ECOCAN.Gateway_74.fields{17}.units = '';
    ECOCAN.Gateway_74.fields{17}.start_bit = 57;
    ECOCAN.Gateway_74.fields{17}.bit_length = 1;
    ECOCAN.Gateway_74.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{17}.scale = 1;
    ECOCAN.Gateway_74.fields{17}.offset = 0;
    ECOCAN.Gateway_74.fields{17}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{17}.multiplex_value = 0;

    ECOCAN.Gateway_74.fields{18}.name = 'LS_Tiptronic_Error';
    ECOCAN.Gateway_74.fields{18}.units = '';
    ECOCAN.Gateway_74.fields{18}.start_bit = 58;
    ECOCAN.Gateway_74.fields{18}.bit_length = 1;
    ECOCAN.Gateway_74.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_74.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_74.fields{18}.scale = 1;
    ECOCAN.Gateway_74.fields{18}.offset = 0;
    ECOCAN.Gateway_74.fields{18}.multiplex_type = 'Standard';
    ECOCAN.Gateway_74.fields{18}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Gateway_72
%Message Number:24
case 'Gateway_72'
    ECOCAN.Gateway_72 = struct;
    ECOCAN.Gateway_72.name = 'Gateway_72';
    ECOCAN.Gateway_72.description = 'Gateway_72';
    ECOCAN.Gateway_72.protocol  = 'ECOCAN';
    ECOCAN.Gateway_72.id = hex2dec('3DB');
    ECOCAN.Gateway_72.idext = 'STANDARD';
    ECOCAN.Gateway_72.payload_size =8;
    ECOCAN.Gateway_72.interval =-1;

    ECOCAN.Gateway_72.fields{1}.name = 'BCM_01_alt';
    ECOCAN.Gateway_72.fields{1}.units = '';
    ECOCAN.Gateway_72.fields{1}.start_bit = 0;
    ECOCAN.Gateway_72.fields{1}.bit_length = 1;
    ECOCAN.Gateway_72.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{1}.scale = 1;
    ECOCAN.Gateway_72.fields{1}.offset = 0;
    ECOCAN.Gateway_72.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{1}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{2}.name = 'SMLS_01_alt';
    ECOCAN.Gateway_72.fields{2}.units = '';
    ECOCAN.Gateway_72.fields{2}.start_bit = 1;
    ECOCAN.Gateway_72.fields{2}.bit_length = 1;
    ECOCAN.Gateway_72.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{2}.scale = 1;
    ECOCAN.Gateway_72.fields{2}.offset = 0;
    ECOCAN.Gateway_72.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{2}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{3}.name = 'ZV_02_alt';
    ECOCAN.Gateway_72.fields{3}.units = '';
    ECOCAN.Gateway_72.fields{3}.start_bit = 2;
    ECOCAN.Gateway_72.fields{3}.bit_length = 1;
    ECOCAN.Gateway_72.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{3}.scale = 1;
    ECOCAN.Gateway_72.fields{3}.offset = 0;
    ECOCAN.Gateway_72.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{3}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{4}.name = 'Wischer_01_alt';
    ECOCAN.Gateway_72.fields{4}.units = '';
    ECOCAN.Gateway_72.fields{4}.start_bit = 3;
    ECOCAN.Gateway_72.fields{4}.bit_length = 1;
    ECOCAN.Gateway_72.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{4}.scale = 1;
    ECOCAN.Gateway_72.fields{4}.offset = 0;
    ECOCAN.Gateway_72.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{4}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{5}.name = 'Anhaenger_01_alt';
    ECOCAN.Gateway_72.fields{5}.units = '';
    ECOCAN.Gateway_72.fields{5}.start_bit = 4;
    ECOCAN.Gateway_72.fields{5}.bit_length = 1;
    ECOCAN.Gateway_72.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{5}.scale = 1;
    ECOCAN.Gateway_72.fields{5}.offset = 0;
    ECOCAN.Gateway_72.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{5}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{6}.name = 'Klima_Sensor_02_alt';
    ECOCAN.Gateway_72.fields{6}.units = '';
    ECOCAN.Gateway_72.fields{6}.start_bit = 5;
    ECOCAN.Gateway_72.fields{6}.bit_length = 1;
    ECOCAN.Gateway_72.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{6}.scale = 1;
    ECOCAN.Gateway_72.fields{6}.offset = 0;
    ECOCAN.Gateway_72.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{6}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{7}.name = 'VSG_01_alt';
    ECOCAN.Gateway_72.fields{7}.units = '';
    ECOCAN.Gateway_72.fields{7}.start_bit = 6;
    ECOCAN.Gateway_72.fields{7}.bit_length = 1;
    ECOCAN.Gateway_72.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{7}.scale = 1;
    ECOCAN.Gateway_72.fields{7}.offset = 0;
    ECOCAN.Gateway_72.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{7}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{8}.name = 'Klima_01_alt';
    ECOCAN.Gateway_72.fields{8}.units = '';
    ECOCAN.Gateway_72.fields{8}.start_bit = 7;
    ECOCAN.Gateway_72.fields{8}.bit_length = 1;
    ECOCAN.Gateway_72.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{8}.scale = 1;
    ECOCAN.Gateway_72.fields{8}.offset = 0;
    ECOCAN.Gateway_72.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{8}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{9}.name = 'WFS_01_alt';
    ECOCAN.Gateway_72.fields{9}.units = '';
    ECOCAN.Gateway_72.fields{9}.start_bit = 8;
    ECOCAN.Gateway_72.fields{9}.bit_length = 1;
    ECOCAN.Gateway_72.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{9}.scale = 1;
    ECOCAN.Gateway_72.fields{9}.offset = 0;
    ECOCAN.Gateway_72.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{9}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{10}.name = 'Licht_Anf_01_alt';
    ECOCAN.Gateway_72.fields{10}.units = '';
    ECOCAN.Gateway_72.fields{10}.start_bit = 9;
    ECOCAN.Gateway_72.fields{10}.bit_length = 1;
    ECOCAN.Gateway_72.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{10}.scale = 1;
    ECOCAN.Gateway_72.fields{10}.offset = 0;
    ECOCAN.Gateway_72.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{10}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{11}.name = 'ZV_HFS_offen';
    ECOCAN.Gateway_72.fields{11}.units = '';
    ECOCAN.Gateway_72.fields{11}.start_bit = 20;
    ECOCAN.Gateway_72.fields{11}.bit_length = 1;
    ECOCAN.Gateway_72.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{11}.scale = 1;
    ECOCAN.Gateway_72.fields{11}.offset = 0;
    ECOCAN.Gateway_72.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{11}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{12}.name = 'ZV_HBFS_offen';
    ECOCAN.Gateway_72.fields{12}.units = '';
    ECOCAN.Gateway_72.fields{12}.start_bit = 21;
    ECOCAN.Gateway_72.fields{12}.bit_length = 1;
    ECOCAN.Gateway_72.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{12}.scale = 1;
    ECOCAN.Gateway_72.fields{12}.offset = 0;
    ECOCAN.Gateway_72.fields{12}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{12}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{13}.name = 'VS_VD_offen_ver';
    ECOCAN.Gateway_72.fields{13}.units = '';
    ECOCAN.Gateway_72.fields{13}.start_bit = 22;
    ECOCAN.Gateway_72.fields{13}.bit_length = 1;
    ECOCAN.Gateway_72.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{13}.scale = 1;
    ECOCAN.Gateway_72.fields{13}.offset = 0;
    ECOCAN.Gateway_72.fields{13}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{13}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{14}.name = 'VS_VD_zu_ver';
    ECOCAN.Gateway_72.fields{14}.units = '';
    ECOCAN.Gateway_72.fields{14}.start_bit = 23;
    ECOCAN.Gateway_72.fields{14}.bit_length = 1;
    ECOCAN.Gateway_72.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{14}.scale = 1;
    ECOCAN.Gateway_72.fields{14}.offset = 0;
    ECOCAN.Gateway_72.fields{14}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{14}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{15}.name = 'ZV_BT_offen';
    ECOCAN.Gateway_72.fields{15}.units = '';
    ECOCAN.Gateway_72.fields{15}.start_bit = 24;
    ECOCAN.Gateway_72.fields{15}.bit_length = 1;
    ECOCAN.Gateway_72.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{15}.scale = 1;
    ECOCAN.Gateway_72.fields{15}.offset = 0;
    ECOCAN.Gateway_72.fields{15}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{15}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{16}.name = 'BCM1_ReversingLight_Switch';
    ECOCAN.Gateway_72.fields{16}.units = '';
    ECOCAN.Gateway_72.fields{16}.start_bit = 25;
    ECOCAN.Gateway_72.fields{16}.bit_length = 1;
    ECOCAN.Gateway_72.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{16}.scale = 1;
    ECOCAN.Gateway_72.fields{16}.offset = 0;
    ECOCAN.Gateway_72.fields{16}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{16}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{17}.name = 'ZV_FT_offen';
    ECOCAN.Gateway_72.fields{17}.units = '';
    ECOCAN.Gateway_72.fields{17}.start_bit = 26;
    ECOCAN.Gateway_72.fields{17}.bit_length = 1;
    ECOCAN.Gateway_72.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{17}.scale = 1;
    ECOCAN.Gateway_72.fields{17}.offset = 0;
    ECOCAN.Gateway_72.fields{17}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{17}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{18}.name = 'Wiper_Front_Active';
    ECOCAN.Gateway_72.fields{18}.units = '';
    ECOCAN.Gateway_72.fields{18}.start_bit = 27;
    ECOCAN.Gateway_72.fields{18}.bit_length = 1;
    ECOCAN.Gateway_72.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{18}.scale = 1;
    ECOCAN.Gateway_72.fields{18}.offset = 0;
    ECOCAN.Gateway_72.fields{18}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{18}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{19}.name = 'AAG_Followers_Recognized';
    ECOCAN.Gateway_72.fields{19}.units = '';
    ECOCAN.Gateway_72.fields{19}.start_bit = 28;
    ECOCAN.Gateway_72.fields{19}.bit_length = 1;
    ECOCAN.Gateway_72.fields{19}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{19}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{19}.scale = 1;
    ECOCAN.Gateway_72.fields{19}.offset = 0;
    ECOCAN.Gateway_72.fields{19}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{19}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{20}.name = 'BCM1_MH_Schalter';
    ECOCAN.Gateway_72.fields{20}.units = '';
    ECOCAN.Gateway_72.fields{20}.start_bit = 29;
    ECOCAN.Gateway_72.fields{20}.bit_length = 1;
    ECOCAN.Gateway_72.fields{20}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{20}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{20}.scale = 1;
    ECOCAN.Gateway_72.fields{20}.offset = 0;
    ECOCAN.Gateway_72.fields{20}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{20}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{21}.name = 'ZV_HD_offen';
    ECOCAN.Gateway_72.fields{21}.units = '';
    ECOCAN.Gateway_72.fields{21}.start_bit = 30;
    ECOCAN.Gateway_72.fields{21}.bit_length = 1;
    ECOCAN.Gateway_72.fields{21}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{21}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{21}.scale = 1;
    ECOCAN.Gateway_72.fields{21}.offset = 0;
    ECOCAN.Gateway_72.fields{21}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{21}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{22}.name = 'Wash_front_active';
    ECOCAN.Gateway_72.fields{22}.units = '';
    ECOCAN.Gateway_72.fields{22}.start_bit = 31;
    ECOCAN.Gateway_72.fields{22}.bit_length = 1;
    ECOCAN.Gateway_72.fields{22}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{22}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{22}.scale = 1;
    ECOCAN.Gateway_72.fields{22}.offset = 0;
    ECOCAN.Gateway_72.fields{22}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{22}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{23}.name = 'KL_Thermomanagement';
    ECOCAN.Gateway_72.fields{23}.units = '';
    ECOCAN.Gateway_72.fields{23}.start_bit = 32;
    ECOCAN.Gateway_72.fields{23}.bit_length = 2;
    ECOCAN.Gateway_72.fields{23}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{23}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{23}.scale = 1;
    ECOCAN.Gateway_72.fields{23}.offset = 0;
    ECOCAN.Gateway_72.fields{23}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{23}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{24}.name = 'WFS_Driving_Authorization_Key';
    ECOCAN.Gateway_72.fields{24}.units = '';
    ECOCAN.Gateway_72.fields{24}.start_bit = 34;
    ECOCAN.Gateway_72.fields{24}.bit_length = 4;
    ECOCAN.Gateway_72.fields{24}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{24}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{24}.scale = 1;
    ECOCAN.Gateway_72.fields{24}.offset = 0;
    ECOCAN.Gateway_72.fields{24}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{24}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{25}.name = 'BCM1_RFahrlicht_Fzg_Anf';
    ECOCAN.Gateway_72.fields{25}.units = '';
    ECOCAN.Gateway_72.fields{25}.start_bit = 38;
    ECOCAN.Gateway_72.fields{25}.bit_length = 1;
    ECOCAN.Gateway_72.fields{25}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{25}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{25}.scale = 1;
    ECOCAN.Gateway_72.fields{25}.offset = 0;
    ECOCAN.Gateway_72.fields{25}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{25}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{26}.name = 'BCM1_RFahrlicht_Ahg_Anf';
    ECOCAN.Gateway_72.fields{26}.units = '';
    ECOCAN.Gateway_72.fields{26}.start_bit = 39;
    ECOCAN.Gateway_72.fields{26}.bit_length = 1;
    ECOCAN.Gateway_72.fields{26}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{26}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{26}.scale = 1;
    ECOCAN.Gateway_72.fields{26}.offset = 0;
    ECOCAN.Gateway_72.fields{26}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{26}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{27}.name = 'BH_High_Beam';
    ECOCAN.Gateway_72.fields{27}.units = '';
    ECOCAN.Gateway_72.fields{27}.start_bit = 49;
    ECOCAN.Gateway_72.fields{27}.bit_length = 1;
    ECOCAN.Gateway_72.fields{27}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{27}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{27}.scale = 1;
    ECOCAN.Gateway_72.fields{27}.offset = 0;
    ECOCAN.Gateway_72.fields{27}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{27}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{28}.name = 'BH_Blinker_Left';
    ECOCAN.Gateway_72.fields{28}.units = '';
    ECOCAN.Gateway_72.fields{28}.start_bit = 50;
    ECOCAN.Gateway_72.fields{28}.bit_length = 1;
    ECOCAN.Gateway_72.fields{28}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{28}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{28}.scale = 1;
    ECOCAN.Gateway_72.fields{28}.offset = 0;
    ECOCAN.Gateway_72.fields{28}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{28}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{29}.name = 'BH_Blinker_Right';
    ECOCAN.Gateway_72.fields{29}.units = '';
    ECOCAN.Gateway_72.fields{29}.start_bit = 51;
    ECOCAN.Gateway_72.fields{29}.bit_length = 1;
    ECOCAN.Gateway_72.fields{29}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{29}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{29}.scale = 1;
    ECOCAN.Gateway_72.fields{29}.offset = 0;
    ECOCAN.Gateway_72.fields{29}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{29}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{30}.name = 'BCM1_OBD_FStatus_ATemp';
    ECOCAN.Gateway_72.fields{30}.units = '';
    ECOCAN.Gateway_72.fields{30}.start_bit = 52;
    ECOCAN.Gateway_72.fields{30}.bit_length = 4;
    ECOCAN.Gateway_72.fields{30}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{30}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{30}.scale = 1;
    ECOCAN.Gateway_72.fields{30}.offset = 0;
    ECOCAN.Gateway_72.fields{30}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{30}.multiplex_value = 0;

    ECOCAN.Gateway_72.fields{31}.name = 'BCM1_Outside_Temp_Approximate';
    ECOCAN.Gateway_72.fields{31}.units = 'Unit_DegreCelsi';
    ECOCAN.Gateway_72.fields{31}.start_bit = 56;
    ECOCAN.Gateway_72.fields{31}.bit_length = 8;
    ECOCAN.Gateway_72.fields{31}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Gateway_72.fields{31}.data_type = 'UNSIGNED';
    ECOCAN.Gateway_72.fields{31}.scale = 0.5;
    ECOCAN.Gateway_72.fields{31}.offset = -50;
    ECOCAN.Gateway_72.fields{31}.multiplex_type = 'Standard';
    ECOCAN.Gateway_72.fields{31}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:25
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('3D4');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Getriebe_14
%Message Number:26
case 'Getriebe_14'
    ECOCAN.Getriebe_14 = struct;
    ECOCAN.Getriebe_14.name = 'Getriebe_14';
    ECOCAN.Getriebe_14.description = 'Getriebe_14';
    ECOCAN.Getriebe_14.protocol  = 'ECOCAN';
    ECOCAN.Getriebe_14.id = hex2dec('3C8');
    ECOCAN.Getriebe_14.idext = 'STANDARD';
    ECOCAN.Getriebe_14.payload_size =8;
    ECOCAN.Getriebe_14.interval =-1;

    ECOCAN.Getriebe_14.fields{1}.name = 'GE_OBD_Shutoffvalve';
    ECOCAN.Getriebe_14.fields{1}.units = '';
    ECOCAN.Getriebe_14.fields{1}.start_bit = 12;
    ECOCAN.Getriebe_14.fields{1}.bit_length = 4;
    ECOCAN.Getriebe_14.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_14.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_14.fields{1}.scale = 1;
    ECOCAN.Getriebe_14.fields{1}.offset = 0;
    ECOCAN.Getriebe_14.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_14.fields{1}.multiplex_value = 0;

    ECOCAN.Getriebe_14.fields{2}.name = 'GE_amax_possible';
    ECOCAN.Getriebe_14.fields{2}.units = 'Unit_MeterPerSeconSquar';
    ECOCAN.Getriebe_14.fields{2}.start_bit = 16;
    ECOCAN.Getriebe_14.fields{2}.bit_length = 9;
    ECOCAN.Getriebe_14.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_14.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_14.fields{2}.scale = 0.024;
    ECOCAN.Getriebe_14.fields{2}.offset = -2.016;
    ECOCAN.Getriebe_14.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_14.fields{2}.multiplex_value = 0;

    ECOCAN.Getriebe_14.fields{3}.name = 'GE_Charisma_FahrPr';
    ECOCAN.Getriebe_14.fields{3}.units = '';
    ECOCAN.Getriebe_14.fields{3}.start_bit = 25;
    ECOCAN.Getriebe_14.fields{3}.bit_length = 4;
    ECOCAN.Getriebe_14.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_14.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_14.fields{3}.scale = 1;
    ECOCAN.Getriebe_14.fields{3}.offset = 0;
    ECOCAN.Getriebe_14.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_14.fields{3}.multiplex_value = 0;

    ECOCAN.Getriebe_14.fields{4}.name = 'GE_Charisma_Status';
    ECOCAN.Getriebe_14.fields{4}.units = '';
    ECOCAN.Getriebe_14.fields{4}.start_bit = 29;
    ECOCAN.Getriebe_14.fields{4}.bit_length = 2;
    ECOCAN.Getriebe_14.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_14.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_14.fields{4}.scale = 1;
    ECOCAN.Getriebe_14.fields{4}.offset = 0;
    ECOCAN.Getriebe_14.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_14.fields{4}.multiplex_value = 0;

    ECOCAN.Getriebe_14.fields{5}.name = 'GE_Lossmoment';
    ECOCAN.Getriebe_14.fields{5}.units = '';
    ECOCAN.Getriebe_14.fields{5}.start_bit = 32;
    ECOCAN.Getriebe_14.fields{5}.bit_length = 8;
    ECOCAN.Getriebe_14.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_14.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_14.fields{5}.scale = 1;
    ECOCAN.Getriebe_14.fields{5}.offset = 0;
    ECOCAN.Getriebe_14.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_14.fields{5}.multiplex_value = 0;

    ECOCAN.Getriebe_14.fields{6}.name = 'GE_Freigabe_Verfallsinfo_WFS';
    ECOCAN.Getriebe_14.fields{6}.units = '';
    ECOCAN.Getriebe_14.fields{6}.start_bit = 49;
    ECOCAN.Getriebe_14.fields{6}.bit_length = 1;
    ECOCAN.Getriebe_14.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_14.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_14.fields{6}.scale = 1;
    ECOCAN.Getriebe_14.fields{6}.offset = 0;
    ECOCAN.Getriebe_14.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_14.fields{6}.multiplex_value = 0;

    ECOCAN.Getriebe_14.fields{7}.name = 'GE_Codierung_MSG';
    ECOCAN.Getriebe_14.fields{7}.units = '';
    ECOCAN.Getriebe_14.fields{7}.start_bit = 50;
    ECOCAN.Getriebe_14.fields{7}.bit_length = 1;
    ECOCAN.Getriebe_14.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_14.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_14.fields{7}.scale = 1;
    ECOCAN.Getriebe_14.fields{7}.offset = 0;
    ECOCAN.Getriebe_14.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_14.fields{7}.multiplex_value = 0;

    ECOCAN.Getriebe_14.fields{8}.name = 'GE_LaunchControl';
    ECOCAN.Getriebe_14.fields{8}.units = '';
    ECOCAN.Getriebe_14.fields{8}.start_bit = 51;
    ECOCAN.Getriebe_14.fields{8}.bit_length = 1;
    ECOCAN.Getriebe_14.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_14.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_14.fields{8}.scale = 1;
    ECOCAN.Getriebe_14.fields{8}.offset = 0;
    ECOCAN.Getriebe_14.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_14.fields{8}.multiplex_value = 0;

    ECOCAN.Getriebe_14.fields{9}.name = 'GE_Heating_Request';
    ECOCAN.Getriebe_14.fields{9}.units = '';
    ECOCAN.Getriebe_14.fields{9}.start_bit = 52;
    ECOCAN.Getriebe_14.fields{9}.bit_length = 2;
    ECOCAN.Getriebe_14.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_14.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_14.fields{9}.scale = 1;
    ECOCAN.Getriebe_14.fields{9}.offset = 0;
    ECOCAN.Getriebe_14.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_14.fields{9}.multiplex_value = 0;

    ECOCAN.Getriebe_14.fields{10}.name = 'GE_OBD_Status';
    ECOCAN.Getriebe_14.fields{10}.units = '';
    ECOCAN.Getriebe_14.fields{10}.start_bit = 54;
    ECOCAN.Getriebe_14.fields{10}.bit_length = 1;
    ECOCAN.Getriebe_14.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_14.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_14.fields{10}.scale = 1;
    ECOCAN.Getriebe_14.fields{10}.offset = 0;
    ECOCAN.Getriebe_14.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_14.fields{10}.multiplex_value = 0;

    ECOCAN.Getriebe_14.fields{11}.name = 'GE_LFR_Adaption';
    ECOCAN.Getriebe_14.fields{11}.units = '';
    ECOCAN.Getriebe_14.fields{11}.start_bit = 55;
    ECOCAN.Getriebe_14.fields{11}.bit_length = 1;
    ECOCAN.Getriebe_14.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_14.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_14.fields{11}.scale = 1;
    ECOCAN.Getriebe_14.fields{11}.offset = 0;
    ECOCAN.Getriebe_14.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_14.fields{11}.multiplex_value = 0;

    ECOCAN.Getriebe_14.fields{12}.name = 'GE_Sumpftemperatur';
    ECOCAN.Getriebe_14.fields{12}.units = 'Unit_DegreCelsi';
    ECOCAN.Getriebe_14.fields{12}.start_bit = 56;
    ECOCAN.Getriebe_14.fields{12}.bit_length = 8;
    ECOCAN.Getriebe_14.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_14.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_14.fields{12}.scale = 1;
    ECOCAN.Getriebe_14.fields{12}.offset = -58;
    ECOCAN.Getriebe_14.fields{12}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_14.fields{12}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Motor_26
%Message Number:27
case 'Motor_26'
    ECOCAN.Motor_26 = struct;
    ECOCAN.Motor_26.name = 'Motor_26';
    ECOCAN.Motor_26.description = 'Motor_26';
    ECOCAN.Motor_26.protocol  = 'ECOCAN';
    ECOCAN.Motor_26.id = hex2dec('3C7');
    ECOCAN.Motor_26.idext = 'STANDARD';
    ECOCAN.Motor_26.payload_size =8;
    ECOCAN.Motor_26.interval =-1;

    ECOCAN.Motor_26.fields{1}.name = 'MO_HYB_Status_HV_Charge';
    ECOCAN.Motor_26.fields{1}.units = '';
    ECOCAN.Motor_26.fields{1}.start_bit = 8;
    ECOCAN.Motor_26.fields{1}.bit_length = 3;
    ECOCAN.Motor_26.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{1}.scale = 1;
    ECOCAN.Motor_26.fields{1}.offset = 0;
    ECOCAN.Motor_26.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{1}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{2}.name = 'WIV_Display_Active';
    ECOCAN.Motor_26.fields{2}.units = '';
    ECOCAN.Motor_26.fields{2}.start_bit = 12;
    ECOCAN.Motor_26.fields{2}.bit_length = 1;
    ECOCAN.Motor_26.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{2}.scale = 1;
    ECOCAN.Motor_26.fields{2}.offset = 0;
    ECOCAN.Motor_26.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{2}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{3}.name = 'WIV_Oelmin_Warn';
    ECOCAN.Motor_26.fields{3}.units = '';
    ECOCAN.Motor_26.fields{3}.start_bit = 13;
    ECOCAN.Motor_26.fields{3}.bit_length = 1;
    ECOCAN.Motor_26.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{3}.scale = 1;
    ECOCAN.Motor_26.fields{3}.offset = 0;
    ECOCAN.Motor_26.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{3}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{4}.name = 'WIV_SensorFailure';
    ECOCAN.Motor_26.fields{4}.units = '';
    ECOCAN.Motor_26.fields{4}.start_bit = 14;
    ECOCAN.Motor_26.fields{4}.bit_length = 1;
    ECOCAN.Motor_26.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{4}.scale = 1;
    ECOCAN.Motor_26.fields{4}.offset = 0;
    ECOCAN.Motor_26.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{4}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{5}.name = 'WIV_Tilt';
    ECOCAN.Motor_26.fields{5}.units = '';
    ECOCAN.Motor_26.fields{5}.start_bit = 15;
    ECOCAN.Motor_26.fields{5}.bit_length = 1;
    ECOCAN.Motor_26.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{5}.scale = 1;
    ECOCAN.Motor_26.fields{5}.offset = 0;
    ECOCAN.Motor_26.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{5}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{6}.name = 'WIV_Oil_Level';
    ECOCAN.Motor_26.fields{6}.units = 'Unit_PerCent';
    ECOCAN.Motor_26.fields{6}.start_bit = 16;
    ECOCAN.Motor_26.fields{6}.bit_length = 4;
    ECOCAN.Motor_26.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{6}.scale = 12.5;
    ECOCAN.Motor_26.fields{6}.offset = 0;
    ECOCAN.Motor_26.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{6}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{7}.name = 'MO_Status_HWP';
    ECOCAN.Motor_26.fields{7}.units = '';
    ECOCAN.Motor_26.fields{7}.start_bit = 20;
    ECOCAN.Motor_26.fields{7}.bit_length = 2;
    ECOCAN.Motor_26.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{7}.scale = 1;
    ECOCAN.Motor_26.fields{7}.offset = 0;
    ECOCAN.Motor_26.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{7}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{8}.name = 'WIV_Oilsystem_active';
    ECOCAN.Motor_26.fields{8}.units = '';
    ECOCAN.Motor_26.fields{8}.start_bit = 24;
    ECOCAN.Motor_26.fields{8}.bit_length = 1;
    ECOCAN.Motor_26.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{8}.scale = 1;
    ECOCAN.Motor_26.fields{8}.offset = 0;
    ECOCAN.Motor_26.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{8}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{9}.name = 'WIV_not_at_operating_temp';
    ECOCAN.Motor_26.fields{9}.units = '';
    ECOCAN.Motor_26.fields{9}.start_bit = 25;
    ECOCAN.Motor_26.fields{9}.bit_length = 1;
    ECOCAN.Motor_26.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{9}.scale = 1;
    ECOCAN.Motor_26.fields{9}.offset = 0;
    ECOCAN.Motor_26.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{9}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{10}.name = 'WIV_Overfuel_Warning';
    ECOCAN.Motor_26.fields{10}.units = '';
    ECOCAN.Motor_26.fields{10}.start_bit = 26;
    ECOCAN.Motor_26.fields{10}.bit_length = 1;
    ECOCAN.Motor_26.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{10}.scale = 1;
    ECOCAN.Motor_26.fields{10}.offset = 0;
    ECOCAN.Motor_26.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{10}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{11}.name = 'WIV_Running_Motor';
    ECOCAN.Motor_26.fields{11}.units = '';
    ECOCAN.Motor_26.fields{11}.start_bit = 27;
    ECOCAN.Motor_26.fields{11}.bit_length = 1;
    ECOCAN.Motor_26.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{11}.scale = 1;
    ECOCAN.Motor_26.fields{11}.offset = 0;
    ECOCAN.Motor_26.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{11}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{12}.name = 'MO_HYB_Text_1';
    ECOCAN.Motor_26.fields{12}.units = '';
    ECOCAN.Motor_26.fields{12}.start_bit = 28;
    ECOCAN.Motor_26.fields{12}.bit_length = 1;
    ECOCAN.Motor_26.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{12}.scale = 1;
    ECOCAN.Motor_26.fields{12}.offset = 0;
    ECOCAN.Motor_26.fields{12}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{12}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{13}.name = 'MO_HYB_Text_2';
    ECOCAN.Motor_26.fields{13}.units = '';
    ECOCAN.Motor_26.fields{13}.start_bit = 29;
    ECOCAN.Motor_26.fields{13}.bit_length = 1;
    ECOCAN.Motor_26.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{13}.scale = 1;
    ECOCAN.Motor_26.fields{13}.offset = 0;
    ECOCAN.Motor_26.fields{13}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{13}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{14}.name = 'MO_HYB_Text_3';
    ECOCAN.Motor_26.fields{14}.units = '';
    ECOCAN.Motor_26.fields{14}.start_bit = 30;
    ECOCAN.Motor_26.fields{14}.bit_length = 1;
    ECOCAN.Motor_26.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{14}.scale = 1;
    ECOCAN.Motor_26.fields{14}.offset = 0;
    ECOCAN.Motor_26.fields{14}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{14}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{15}.name = 'MO_HYB_Text_4';
    ECOCAN.Motor_26.fields{15}.units = '';
    ECOCAN.Motor_26.fields{15}.start_bit = 31;
    ECOCAN.Motor_26.fields{15}.bit_length = 1;
    ECOCAN.Motor_26.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{15}.scale = 1;
    ECOCAN.Motor_26.fields{15}.offset = 0;
    ECOCAN.Motor_26.fields{15}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{15}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{16}.name = 'MO_Text_Motorstart';
    ECOCAN.Motor_26.fields{16}.units = '';
    ECOCAN.Motor_26.fields{16}.start_bit = 32;
    ECOCAN.Motor_26.fields{16}.bit_length = 4;
    ECOCAN.Motor_26.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{16}.scale = 1;
    ECOCAN.Motor_26.fields{16}.offset = 0;
    ECOCAN.Motor_26.fields{16}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{16}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{17}.name = 'MO_HYB_Text_5';
    ECOCAN.Motor_26.fields{17}.units = '';
    ECOCAN.Motor_26.fields{17}.start_bit = 36;
    ECOCAN.Motor_26.fields{17}.bit_length = 1;
    ECOCAN.Motor_26.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{17}.scale = 1;
    ECOCAN.Motor_26.fields{17}.offset = 0;
    ECOCAN.Motor_26.fields{17}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{17}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{18}.name = 'MO_HYB_Text_6';
    ECOCAN.Motor_26.fields{18}.units = '';
    ECOCAN.Motor_26.fields{18}.start_bit = 37;
    ECOCAN.Motor_26.fields{18}.bit_length = 1;
    ECOCAN.Motor_26.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{18}.scale = 1;
    ECOCAN.Motor_26.fields{18}.offset = 0;
    ECOCAN.Motor_26.fields{18}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{18}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{19}.name = 'MO_HYB_Text_7';
    ECOCAN.Motor_26.fields{19}.units = '';
    ECOCAN.Motor_26.fields{19}.start_bit = 38;
    ECOCAN.Motor_26.fields{19}.bit_length = 1;
    ECOCAN.Motor_26.fields{19}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{19}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{19}.scale = 1;
    ECOCAN.Motor_26.fields{19}.offset = 0;
    ECOCAN.Motor_26.fields{19}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{19}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{20}.name = 'MO_Text_Partikelfil_Reg';
    ECOCAN.Motor_26.fields{20}.units = '';
    ECOCAN.Motor_26.fields{20}.start_bit = 41;
    ECOCAN.Motor_26.fields{20}.bit_length = 1;
    ECOCAN.Motor_26.fields{20}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{20}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{20}.scale = 1;
    ECOCAN.Motor_26.fields{20}.offset = 0;
    ECOCAN.Motor_26.fields{20}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{20}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{21}.name = 'WIV_OilAmount';
    ECOCAN.Motor_26.fields{21}.units = 'Unit_MilliLiter';
    ECOCAN.Motor_26.fields{21}.start_bit = 43;
    ECOCAN.Motor_26.fields{21}.bit_length = 5;
    ECOCAN.Motor_26.fields{21}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{21}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{21}.scale = 125;
    ECOCAN.Motor_26.fields{21}.offset = 0;
    ECOCAN.Motor_26.fields{21}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{21}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{22}.name = 'MO_SystemLamp';
    ECOCAN.Motor_26.fields{22}.units = '';
    ECOCAN.Motor_26.fields{22}.start_bit = 48;
    ECOCAN.Motor_26.fields{22}.bit_length = 1;
    ECOCAN.Motor_26.fields{22}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{22}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{22}.scale = 1;
    ECOCAN.Motor_26.fields{22}.offset = 0;
    ECOCAN.Motor_26.fields{22}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{22}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{23}.name = 'MO_OBD2_Lampe';
    ECOCAN.Motor_26.fields{23}.units = '';
    ECOCAN.Motor_26.fields{23}.start_bit = 49;
    ECOCAN.Motor_26.fields{23}.bit_length = 1;
    ECOCAN.Motor_26.fields{23}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{23}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{23}.scale = 1;
    ECOCAN.Motor_26.fields{23}.offset = 0;
    ECOCAN.Motor_26.fields{23}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{23}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{24}.name = 'MO_Hotlight';
    ECOCAN.Motor_26.fields{24}.units = '';
    ECOCAN.Motor_26.fields{24}.start_bit = 50;
    ECOCAN.Motor_26.fields{24}.bit_length = 1;
    ECOCAN.Motor_26.fields{24}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{24}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{24}.scale = 1;
    ECOCAN.Motor_26.fields{24}.offset = 0;
    ECOCAN.Motor_26.fields{24}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{24}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{25}.name = 'MO_Partikel_Lampe';
    ECOCAN.Motor_26.fields{25}.units = '';
    ECOCAN.Motor_26.fields{25}.start_bit = 51;
    ECOCAN.Motor_26.fields{25}.bit_length = 1;
    ECOCAN.Motor_26.fields{25}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{25}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{25}.scale = 1;
    ECOCAN.Motor_26.fields{25}.offset = 0;
    ECOCAN.Motor_26.fields{25}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{25}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{26}.name = 'MO_Winterdrivingprog';
    ECOCAN.Motor_26.fields{26}.units = '';
    ECOCAN.Motor_26.fields{26}.start_bit = 52;
    ECOCAN.Motor_26.fields{26}.bit_length = 1;
    ECOCAN.Motor_26.fields{26}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{26}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{26}.scale = 1;
    ECOCAN.Motor_26.fields{26}.offset = 0;
    ECOCAN.Motor_26.fields{26}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{26}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{27}.name = 'WIV_Oil_not_available';
    ECOCAN.Motor_26.fields{27}.units = '';
    ECOCAN.Motor_26.fields{27}.start_bit = 53;
    ECOCAN.Motor_26.fields{27}.bit_length = 1;
    ECOCAN.Motor_26.fields{27}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{27}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{27}.scale = 1;
    ECOCAN.Motor_26.fields{27}.offset = 0;
    ECOCAN.Motor_26.fields{27}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{27}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{28}.name = 'WIV_refill_indicator';
    ECOCAN.Motor_26.fields{28}.units = '';
    ECOCAN.Motor_26.fields{28}.start_bit = 54;
    ECOCAN.Motor_26.fields{28}.bit_length = 1;
    ECOCAN.Motor_26.fields{28}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{28}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{28}.scale = 1;
    ECOCAN.Motor_26.fields{28}.offset = 0;
    ECOCAN.Motor_26.fields{28}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{28}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{29}.name = 'WIV_Ueberfuell_deaktiv';
    ECOCAN.Motor_26.fields{29}.units = '';
    ECOCAN.Motor_26.fields{29}.start_bit = 55;
    ECOCAN.Motor_26.fields{29}.bit_length = 1;
    ECOCAN.Motor_26.fields{29}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{29}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{29}.scale = 1;
    ECOCAN.Motor_26.fields{29}.offset = 0;
    ECOCAN.Motor_26.fields{29}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{29}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{30}.name = 'WIV_Running_Out_Fuel_Warn';
    ECOCAN.Motor_26.fields{30}.units = '';
    ECOCAN.Motor_26.fields{30}.start_bit = 56;
    ECOCAN.Motor_26.fields{30}.bit_length = 1;
    ECOCAN.Motor_26.fields{30}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{30}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{30}.scale = 1;
    ECOCAN.Motor_26.fields{30}.offset = 0;
    ECOCAN.Motor_26.fields{30}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{30}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{31}.name = 'MO_Fuel_Cap_Lamp';
    ECOCAN.Motor_26.fields{31}.units = '';
    ECOCAN.Motor_26.fields{31}.start_bit = 57;
    ECOCAN.Motor_26.fields{31}.bit_length = 1;
    ECOCAN.Motor_26.fields{31}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{31}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{31}.scale = 1;
    ECOCAN.Motor_26.fields{31}.offset = 0;
    ECOCAN.Motor_26.fields{31}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{31}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{32}.name = 'MO_Text_FuelCapWarning';
    ECOCAN.Motor_26.fields{32}.units = '';
    ECOCAN.Motor_26.fields{32}.start_bit = 58;
    ECOCAN.Motor_26.fields{32}.bit_length = 1;
    ECOCAN.Motor_26.fields{32}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{32}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{32}.scale = 1;
    ECOCAN.Motor_26.fields{32}.offset = 0;
    ECOCAN.Motor_26.fields{32}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{32}.multiplex_value = 0;

    ECOCAN.Motor_26.fields{33}.name = 'WIV_Oeldr_Warn_Motor';
    ECOCAN.Motor_26.fields{33}.units = '';
    ECOCAN.Motor_26.fields{33}.start_bit = 60;
    ECOCAN.Motor_26.fields{33}.bit_length = 1;
    ECOCAN.Motor_26.fields{33}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_26.fields{33}.data_type = 'UNSIGNED';
    ECOCAN.Motor_26.fields{33}.scale = 1;
    ECOCAN.Motor_26.fields{33}.offset = 0;
    ECOCAN.Motor_26.fields{33}.multiplex_type = 'Standard';
    ECOCAN.Motor_26.fields{33}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Klemmen_Status_01
%Message Number:28
case 'Klemmen_Status_01'
    ECOCAN.Klemmen_Status_01 = struct;
    ECOCAN.Klemmen_Status_01.name = 'Klemmen_Status_01';
    ECOCAN.Klemmen_Status_01.description = 'Klemmen_Status_01';
    ECOCAN.Klemmen_Status_01.protocol  = 'ECOCAN';
    ECOCAN.Klemmen_Status_01.id = hex2dec('3C0');
    ECOCAN.Klemmen_Status_01.idext = 'STANDARD';
    ECOCAN.Klemmen_Status_01.payload_size =4;
    ECOCAN.Klemmen_Status_01.interval =-1;

    ECOCAN.Klemmen_Status_01.fields{1}.name = 'CHECKSUM';
    ECOCAN.Klemmen_Status_01.fields{1}.units = '';
    ECOCAN.Klemmen_Status_01.fields{1}.start_bit = 0;
    ECOCAN.Klemmen_Status_01.fields{1}.bit_length = 8;
    ECOCAN.Klemmen_Status_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Klemmen_Status_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Klemmen_Status_01.fields{1}.scale = 1;
    ECOCAN.Klemmen_Status_01.fields{1}.offset = 0;
    ECOCAN.Klemmen_Status_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Klemmen_Status_01.fields{1}.multiplex_value = 0;

    ECOCAN.Klemmen_Status_01.fields{2}.name = 'COUNTER';
    ECOCAN.Klemmen_Status_01.fields{2}.units = '';
    ECOCAN.Klemmen_Status_01.fields{2}.start_bit = 8;
    ECOCAN.Klemmen_Status_01.fields{2}.bit_length = 4;
    ECOCAN.Klemmen_Status_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Klemmen_Status_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Klemmen_Status_01.fields{2}.scale = 1;
    ECOCAN.Klemmen_Status_01.fields{2}.offset = 0;
    ECOCAN.Klemmen_Status_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Klemmen_Status_01.fields{2}.multiplex_value = 0;

    ECOCAN.Klemmen_Status_01.fields{3}.name = 'ZAS_Kl_S';
    ECOCAN.Klemmen_Status_01.fields{3}.units = '';
    ECOCAN.Klemmen_Status_01.fields{3}.start_bit = 16;
    ECOCAN.Klemmen_Status_01.fields{3}.bit_length = 1;
    ECOCAN.Klemmen_Status_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Klemmen_Status_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Klemmen_Status_01.fields{3}.scale = 1;
    ECOCAN.Klemmen_Status_01.fields{3}.offset = 0;
    ECOCAN.Klemmen_Status_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Klemmen_Status_01.fields{3}.multiplex_value = 0;

    ECOCAN.Klemmen_Status_01.fields{4}.name = 'ZAS_Kl_15';
    ECOCAN.Klemmen_Status_01.fields{4}.units = '';
    ECOCAN.Klemmen_Status_01.fields{4}.start_bit = 17;
    ECOCAN.Klemmen_Status_01.fields{4}.bit_length = 1;
    ECOCAN.Klemmen_Status_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Klemmen_Status_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Klemmen_Status_01.fields{4}.scale = 1;
    ECOCAN.Klemmen_Status_01.fields{4}.offset = 0;
    ECOCAN.Klemmen_Status_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Klemmen_Status_01.fields{4}.multiplex_value = 0;

    ECOCAN.Klemmen_Status_01.fields{5}.name = 'ZAS_Kl_X';
    ECOCAN.Klemmen_Status_01.fields{5}.units = '';
    ECOCAN.Klemmen_Status_01.fields{5}.start_bit = 18;
    ECOCAN.Klemmen_Status_01.fields{5}.bit_length = 1;
    ECOCAN.Klemmen_Status_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Klemmen_Status_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Klemmen_Status_01.fields{5}.scale = 1;
    ECOCAN.Klemmen_Status_01.fields{5}.offset = 0;
    ECOCAN.Klemmen_Status_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Klemmen_Status_01.fields{5}.multiplex_value = 0;

    ECOCAN.Klemmen_Status_01.fields{6}.name = 'ZAS_Kl_50';
    ECOCAN.Klemmen_Status_01.fields{6}.units = '';
    ECOCAN.Klemmen_Status_01.fields{6}.start_bit = 19;
    ECOCAN.Klemmen_Status_01.fields{6}.bit_length = 1;
    ECOCAN.Klemmen_Status_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Klemmen_Status_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Klemmen_Status_01.fields{6}.scale = 1;
    ECOCAN.Klemmen_Status_01.fields{6}.offset = 0;
    ECOCAN.Klemmen_Status_01.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Klemmen_Status_01.fields{6}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Motor_14
%Message Number:29
case 'Motor_14'
    ECOCAN.Motor_14 = struct;
    ECOCAN.Motor_14.name = 'Motor_14';
    ECOCAN.Motor_14.description = 'Motor_14';
    ECOCAN.Motor_14.protocol  = 'ECOCAN';
    ECOCAN.Motor_14.id = hex2dec('3BE');
    ECOCAN.Motor_14.idext = 'STANDARD';
    ECOCAN.Motor_14.payload_size =8;
    ECOCAN.Motor_14.interval =-1;

    ECOCAN.Motor_14.fields{1}.name = 'MO_StartStopp_Status';
    ECOCAN.Motor_14.fields{1}.units = '';
    ECOCAN.Motor_14.fields{1}.start_bit = 12;
    ECOCAN.Motor_14.fields{1}.bit_length = 2;
    ECOCAN.Motor_14.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{1}.scale = 1;
    ECOCAN.Motor_14.fields{1}.offset = 0;
    ECOCAN.Motor_14.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{1}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{2}.name = 'MO_StartStopp_Restart';
    ECOCAN.Motor_14.fields{2}.units = '';
    ECOCAN.Motor_14.fields{2}.start_bit = 14;
    ECOCAN.Motor_14.fields{2}.bit_length = 1;
    ECOCAN.Motor_14.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{2}.scale = 1;
    ECOCAN.Motor_14.fields{2}.offset = 0;
    ECOCAN.Motor_14.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{2}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{3}.name = 'MO_StartStopp_Motorstopp';
    ECOCAN.Motor_14.fields{3}.units = '';
    ECOCAN.Motor_14.fields{3}.start_bit = 15;
    ECOCAN.Motor_14.fields{3}.bit_length = 1;
    ECOCAN.Motor_14.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{3}.scale = 1;
    ECOCAN.Motor_14.fields{3}.offset = 0;
    ECOCAN.Motor_14.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{3}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{4}.name = 'MO_Freig_Reku';
    ECOCAN.Motor_14.fields{4}.units = '';
    ECOCAN.Motor_14.fields{4}.start_bit = 16;
    ECOCAN.Motor_14.fields{4}.bit_length = 2;
    ECOCAN.Motor_14.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{4}.scale = 1;
    ECOCAN.Motor_14.fields{4}.offset = 0;
    ECOCAN.Motor_14.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{4}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{5}.name = 'MO_Kl_75';
    ECOCAN.Motor_14.fields{5}.units = '';
    ECOCAN.Motor_14.fields{5}.start_bit = 18;
    ECOCAN.Motor_14.fields{5}.bit_length = 1;
    ECOCAN.Motor_14.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{5}.scale = 1;
    ECOCAN.Motor_14.fields{5}.offset = 0;
    ECOCAN.Motor_14.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{5}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{6}.name = 'MO_Kl_50';
    ECOCAN.Motor_14.fields{6}.units = '';
    ECOCAN.Motor_14.fields{6}.start_bit = 19;
    ECOCAN.Motor_14.fields{6}.bit_length = 1;
    ECOCAN.Motor_14.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{6}.scale = 1;
    ECOCAN.Motor_14.fields{6}.offset = 0;
    ECOCAN.Motor_14.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{6}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{7}.name = 'MO_Gearposition';
    ECOCAN.Motor_14.fields{7}.units = '';
    ECOCAN.Motor_14.fields{7}.start_bit = 20;
    ECOCAN.Motor_14.fields{7}.bit_length = 4;
    ECOCAN.Motor_14.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{7}.scale = 1;
    ECOCAN.Motor_14.fields{7}.offset = 0;
    ECOCAN.Motor_14.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{7}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{8}.name = 'MO_StartStopp_DriverRequest';
    ECOCAN.Motor_14.fields{8}.units = '';
    ECOCAN.Motor_14.fields{8}.start_bit = 24;
    ECOCAN.Motor_14.fields{8}.bit_length = 2;
    ECOCAN.Motor_14.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{8}.scale = 1;
    ECOCAN.Motor_14.fields{8}.offset = 0;
    ECOCAN.Motor_14.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{8}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{9}.name = 'MO_HYB_ReadinesstoDrive';
    ECOCAN.Motor_14.fields{9}.units = '';
    ECOCAN.Motor_14.fields{9}.start_bit = 26;
    ECOCAN.Motor_14.fields{9}.bit_length = 1;
    ECOCAN.Motor_14.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{9}.scale = 1;
    ECOCAN.Motor_14.fields{9}.offset = 0;
    ECOCAN.Motor_14.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{9}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{10}.name = 'MO_Ext_E_Fahrt_aktiv';
    ECOCAN.Motor_14.fields{10}.units = '';
    ECOCAN.Motor_14.fields{10}.start_bit = 27;
    ECOCAN.Motor_14.fields{10}.bit_length = 1;
    ECOCAN.Motor_14.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{10}.scale = 1;
    ECOCAN.Motor_14.fields{10}.offset = 0;
    ECOCAN.Motor_14.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{10}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{11}.name = 'MO_Driver_Brake';
    ECOCAN.Motor_14.fields{11}.units = '';
    ECOCAN.Motor_14.fields{11}.start_bit = 28;
    ECOCAN.Motor_14.fields{11}.bit_length = 1;
    ECOCAN.Motor_14.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{11}.scale = 1;
    ECOCAN.Motor_14.fields{11}.offset = 0;
    ECOCAN.Motor_14.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{11}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{12}.name = 'MO_QBit_Driver_Brake';
    ECOCAN.Motor_14.fields{12}.units = '';
    ECOCAN.Motor_14.fields{12}.start_bit = 29;
    ECOCAN.Motor_14.fields{12}.bit_length = 1;
    ECOCAN.Motor_14.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{12}.scale = 1;
    ECOCAN.Motor_14.fields{12}.offset = 0;
    ECOCAN.Motor_14.fields{12}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{12}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{13}.name = 'MO_BLS';
    ECOCAN.Motor_14.fields{13}.units = '';
    ECOCAN.Motor_14.fields{13}.start_bit = 30;
    ECOCAN.Motor_14.fields{13}.bit_length = 1;
    ECOCAN.Motor_14.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{13}.scale = 1;
    ECOCAN.Motor_14.fields{13}.offset = 0;
    ECOCAN.Motor_14.fields{13}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{13}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{14}.name = 'MO_Consistency_BrakePedal';
    ECOCAN.Motor_14.fields{14}.units = '';
    ECOCAN.Motor_14.fields{14}.start_bit = 31;
    ECOCAN.Motor_14.fields{14}.bit_length = 1;
    ECOCAN.Motor_14.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{14}.scale = 1;
    ECOCAN.Motor_14.fields{14}.offset = 0;
    ECOCAN.Motor_14.fields{14}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{14}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{15}.name = 'MO_Timeout_ESP';
    ECOCAN.Motor_14.fields{15}.units = '';
    ECOCAN.Motor_14.fields{15}.start_bit = 32;
    ECOCAN.Motor_14.fields{15}.bit_length = 1;
    ECOCAN.Motor_14.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{15}.scale = 1;
    ECOCAN.Motor_14.fields{15}.offset = 0;
    ECOCAN.Motor_14.fields{15}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{15}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{16}.name = 'MO_Klima_Eingr';
    ECOCAN.Motor_14.fields{16}.units = '';
    ECOCAN.Motor_14.fields{16}.start_bit = 33;
    ECOCAN.Motor_14.fields{16}.bit_length = 2;
    ECOCAN.Motor_14.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{16}.scale = 1;
    ECOCAN.Motor_14.fields{16}.offset = 0;
    ECOCAN.Motor_14.fields{16}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{16}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{17}.name = 'MO_Aussp_Anlass';
    ECOCAN.Motor_14.fields{17}.units = '';
    ECOCAN.Motor_14.fields{17}.start_bit = 35;
    ECOCAN.Motor_14.fields{17}.bit_length = 1;
    ECOCAN.Motor_14.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{17}.scale = 1;
    ECOCAN.Motor_14.fields{17}.offset = 0;
    ECOCAN.Motor_14.fields{17}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{17}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{18}.name = 'MO_Freig_Anlass';
    ECOCAN.Motor_14.fields{18}.units = '';
    ECOCAN.Motor_14.fields{18}.start_bit = 36;
    ECOCAN.Motor_14.fields{18}.bit_length = 1;
    ECOCAN.Motor_14.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{18}.scale = 1;
    ECOCAN.Motor_14.fields{18}.offset = 0;
    ECOCAN.Motor_14.fields{18}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{18}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{19}.name = 'MO_Kuppl_schalter';
    ECOCAN.Motor_14.fields{19}.units = '';
    ECOCAN.Motor_14.fields{19}.start_bit = 37;
    ECOCAN.Motor_14.fields{19}.bit_length = 1;
    ECOCAN.Motor_14.fields{19}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{19}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{19}.scale = 1;
    ECOCAN.Motor_14.fields{19}.offset = 0;
    ECOCAN.Motor_14.fields{19}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{19}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{20}.name = 'MO_Interlock';
    ECOCAN.Motor_14.fields{20}.units = '';
    ECOCAN.Motor_14.fields{20}.start_bit = 38;
    ECOCAN.Motor_14.fields{20}.bit_length = 1;
    ECOCAN.Motor_14.fields{20}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{20}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{20}.scale = 1;
    ECOCAN.Motor_14.fields{20}.offset = 0;
    ECOCAN.Motor_14.fields{20}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{20}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{21}.name = 'MO_Motor_laeuft';
    ECOCAN.Motor_14.fields{21}.units = '';
    ECOCAN.Motor_14.fields{21}.start_bit = 39;
    ECOCAN.Motor_14.fields{21}.bit_length = 1;
    ECOCAN.Motor_14.fields{21}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{21}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{21}.scale = 1;
    ECOCAN.Motor_14.fields{21}.offset = 0;
    ECOCAN.Motor_14.fields{21}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{21}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{22}.name = 'MO_Kickdown';
    ECOCAN.Motor_14.fields{22}.units = '';
    ECOCAN.Motor_14.fields{22}.start_bit = 40;
    ECOCAN.Motor_14.fields{22}.bit_length = 1;
    ECOCAN.Motor_14.fields{22}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{22}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{22}.scale = 1;
    ECOCAN.Motor_14.fields{22}.offset = 0;
    ECOCAN.Motor_14.fields{22}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{22}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{23}.name = 'MO_Status_Zylabschalt_01';
    ECOCAN.Motor_14.fields{23}.units = '';
    ECOCAN.Motor_14.fields{23}.start_bit = 41;
    ECOCAN.Motor_14.fields{23}.bit_length = 1;
    ECOCAN.Motor_14.fields{23}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{23}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{23}.scale = 1;
    ECOCAN.Motor_14.fields{23}.offset = 0;
    ECOCAN.Motor_14.fields{23}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{23}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{24}.name = 'MO_EKlKomLeiRed';
    ECOCAN.Motor_14.fields{24}.units = '';
    ECOCAN.Motor_14.fields{24}.start_bit = 42;
    ECOCAN.Motor_14.fields{24}.bit_length = 2;
    ECOCAN.Motor_14.fields{24}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{24}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{24}.scale = 1;
    ECOCAN.Motor_14.fields{24}.offset = 0;
    ECOCAN.Motor_14.fields{24}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{24}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{25}.name = 'MO_Handshake_STH';
    ECOCAN.Motor_14.fields{25}.units = '';
    ECOCAN.Motor_14.fields{25}.start_bit = 44;
    ECOCAN.Motor_14.fields{25}.bit_length = 1;
    ECOCAN.Motor_14.fields{25}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{25}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{25}.scale = 1;
    ECOCAN.Motor_14.fields{25}.offset = 0;
    ECOCAN.Motor_14.fields{25}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{25}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{26}.name = 'MO_BKV_LowPressureWarning';
    ECOCAN.Motor_14.fields{26}.units = '';
    ECOCAN.Motor_14.fields{26}.start_bit = 45;
    ECOCAN.Motor_14.fields{26}.bit_length = 1;
    ECOCAN.Motor_14.fields{26}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{26}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{26}.scale = 1;
    ECOCAN.Motor_14.fields{26}.offset = 0;
    ECOCAN.Motor_14.fields{26}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{26}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{27}.name = 'MO_Freigabe_Segeln';
    ECOCAN.Motor_14.fields{27}.units = '';
    ECOCAN.Motor_14.fields{27}.start_bit = 46;
    ECOCAN.Motor_14.fields{27}.bit_length = 1;
    ECOCAN.Motor_14.fields{27}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{27}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{27}.scale = 1;
    ECOCAN.Motor_14.fields{27}.offset = 0;
    ECOCAN.Motor_14.fields{27}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{27}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{28}.name = 'MO_PTC_Status';
    ECOCAN.Motor_14.fields{28}.units = '';
    ECOCAN.Motor_14.fields{28}.start_bit = 47;
    ECOCAN.Motor_14.fields{28}.bit_length = 3;
    ECOCAN.Motor_14.fields{28}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{28}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{28}.scale = 1;
    ECOCAN.Motor_14.fields{28}.offset = 0;
    ECOCAN.Motor_14.fields{28}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{28}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{29}.name = 'MO_QBit_Gearposition';
    ECOCAN.Motor_14.fields{29}.units = '';
    ECOCAN.Motor_14.fields{29}.start_bit = 50;
    ECOCAN.Motor_14.fields{29}.bit_length = 1;
    ECOCAN.Motor_14.fields{29}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{29}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{29}.scale = 1;
    ECOCAN.Motor_14.fields{29}.offset = 0;
    ECOCAN.Motor_14.fields{29}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{29}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{30}.name = 'MO_GearPosition_Signal_Source';
    ECOCAN.Motor_14.fields{30}.units = '';
    ECOCAN.Motor_14.fields{30}.start_bit = 51;
    ECOCAN.Motor_14.fields{30}.bit_length = 1;
    ECOCAN.Motor_14.fields{30}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{30}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{30}.scale = 1;
    ECOCAN.Motor_14.fields{30}.offset = 0;
    ECOCAN.Motor_14.fields{30}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{30}.multiplex_value = 0;

    ECOCAN.Motor_14.fields{31}.name = 'MO_Remotestart_Betrieb';
    ECOCAN.Motor_14.fields{31}.units = '';
    ECOCAN.Motor_14.fields{31}.start_bit = 52;
    ECOCAN.Motor_14.fields{31}.bit_length = 1;
    ECOCAN.Motor_14.fields{31}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_14.fields{31}.data_type = 'UNSIGNED';
    ECOCAN.Motor_14.fields{31}.scale = 1;
    ECOCAN.Motor_14.fields{31}.offset = 0;
    ECOCAN.Motor_14.fields{31}.multiplex_type = 'Standard';
    ECOCAN.Motor_14.fields{31}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:WBA_03
%Message Number:30
case 'WBA_03'
    ECOCAN.WBA_03 = struct;
    ECOCAN.WBA_03.name = 'WBA_03';
    ECOCAN.WBA_03.description = 'WBA_03';
    ECOCAN.WBA_03.protocol  = 'ECOCAN';
    ECOCAN.WBA_03.id = hex2dec('394');
    ECOCAN.WBA_03.idext = 'STANDARD';
    ECOCAN.WBA_03.payload_size =8;
    ECOCAN.WBA_03.interval =-1;

    ECOCAN.WBA_03.fields{1}.name = 'WBA_03_CRC';
    ECOCAN.WBA_03.fields{1}.units = '';
    ECOCAN.WBA_03.fields{1}.start_bit = 0;
    ECOCAN.WBA_03.fields{1}.bit_length = 8;
    ECOCAN.WBA_03.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.WBA_03.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.WBA_03.fields{1}.scale = 1;
    ECOCAN.WBA_03.fields{1}.offset = 0;
    ECOCAN.WBA_03.fields{1}.multiplex_type = 'Standard';
    ECOCAN.WBA_03.fields{1}.multiplex_value = 0;

    ECOCAN.WBA_03.fields{2}.name = 'WBA_03_BZ';
    ECOCAN.WBA_03.fields{2}.units = '';
    ECOCAN.WBA_03.fields{2}.start_bit = 8;
    ECOCAN.WBA_03.fields{2}.bit_length = 4;
    ECOCAN.WBA_03.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.WBA_03.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.WBA_03.fields{2}.scale = 1;
    ECOCAN.WBA_03.fields{2}.offset = 0;
    ECOCAN.WBA_03.fields{2}.multiplex_type = 'Standard';
    ECOCAN.WBA_03.fields{2}.multiplex_value = 0;

    ECOCAN.WBA_03.fields{3}.name = 'WBA_SpeedLevel_02';
    ECOCAN.WBA_03.fields{3}.units = '';
    ECOCAN.WBA_03.fields{3}.start_bit = 12;
    ECOCAN.WBA_03.fields{3}.bit_length = 4;
    ECOCAN.WBA_03.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.WBA_03.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.WBA_03.fields{3}.scale = 1;
    ECOCAN.WBA_03.fields{3}.offset = 0;
    ECOCAN.WBA_03.fields{3}.multiplex_type = 'Standard';
    ECOCAN.WBA_03.fields{3}.multiplex_value = 0;

    ECOCAN.WBA_03.fields{4}.name = 'WBA_TargetSpeedLevel';
    ECOCAN.WBA_03.fields{4}.units = '';
    ECOCAN.WBA_03.fields{4}.start_bit = 16;
    ECOCAN.WBA_03.fields{4}.bit_length = 4;
    ECOCAN.WBA_03.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.WBA_03.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.WBA_03.fields{4}.scale = 1;
    ECOCAN.WBA_03.fields{4}.offset = 0;
    ECOCAN.WBA_03.fields{4}.multiplex_type = 'Standard';
    ECOCAN.WBA_03.fields{4}.multiplex_value = 0;

    ECOCAN.WBA_03.fields{5}.name = 'WBA_GE_Warnung_02';
    ECOCAN.WBA_03.fields{5}.units = '';
    ECOCAN.WBA_03.fields{5}.start_bit = 20;
    ECOCAN.WBA_03.fields{5}.bit_length = 4;
    ECOCAN.WBA_03.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.WBA_03.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.WBA_03.fields{5}.scale = 1;
    ECOCAN.WBA_03.fields{5}.offset = 0;
    ECOCAN.WBA_03.fields{5}.multiplex_type = 'Standard';
    ECOCAN.WBA_03.fields{5}.multiplex_value = 0;

    ECOCAN.WBA_03.fields{6}.name = 'WBA_eing_Gang_02';
    ECOCAN.WBA_03.fields{6}.units = '';
    ECOCAN.WBA_03.fields{6}.start_bit = 24;
    ECOCAN.WBA_03.fields{6}.bit_length = 4;
    ECOCAN.WBA_03.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.WBA_03.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.WBA_03.fields{6}.scale = 1;
    ECOCAN.WBA_03.fields{6}.offset = 0;
    ECOCAN.WBA_03.fields{6}.multiplex_type = 'Standard';
    ECOCAN.WBA_03.fields{6}.multiplex_value = 0;

    ECOCAN.WBA_03.fields{7}.name = 'WBA_GE_Texte';
    ECOCAN.WBA_03.fields{7}.units = '';
    ECOCAN.WBA_03.fields{7}.start_bit = 28;
    ECOCAN.WBA_03.fields{7}.bit_length = 3;
    ECOCAN.WBA_03.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.WBA_03.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.WBA_03.fields{7}.scale = 1;
    ECOCAN.WBA_03.fields{7}.offset = 0;
    ECOCAN.WBA_03.fields{7}.multiplex_type = 'Standard';
    ECOCAN.WBA_03.fields{7}.multiplex_value = 0;

    ECOCAN.WBA_03.fields{8}.name = 'WBA_Segeln_aktiv';
    ECOCAN.WBA_03.fields{8}.units = '';
    ECOCAN.WBA_03.fields{8}.start_bit = 31;
    ECOCAN.WBA_03.fields{8}.bit_length = 1;
    ECOCAN.WBA_03.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.WBA_03.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.WBA_03.fields{8}.scale = 1;
    ECOCAN.WBA_03.fields{8}.offset = 0;
    ECOCAN.WBA_03.fields{8}.multiplex_type = 'Standard';
    ECOCAN.WBA_03.fields{8}.multiplex_value = 0;

    ECOCAN.WBA_03.fields{9}.name = 'WBA_Schaltschema';
    ECOCAN.WBA_03.fields{9}.units = '';
    ECOCAN.WBA_03.fields{9}.start_bit = 32;
    ECOCAN.WBA_03.fields{9}.bit_length = 5;
    ECOCAN.WBA_03.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.WBA_03.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.WBA_03.fields{9}.scale = 1;
    ECOCAN.WBA_03.fields{9}.offset = 0;
    ECOCAN.WBA_03.fields{9}.multiplex_type = 'Standard';
    ECOCAN.WBA_03.fields{9}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:ESP_07
%Message Number:31
case 'ESP_07'
    ECOCAN.ESP_07 = struct;
    ECOCAN.ESP_07.name = 'ESP_07';
    ECOCAN.ESP_07.description = 'ESP_07';
    ECOCAN.ESP_07.protocol  = 'ECOCAN';
    ECOCAN.ESP_07.id = hex2dec('392');
    ECOCAN.ESP_07.idext = 'STANDARD';
    ECOCAN.ESP_07.payload_size =8;
    ECOCAN.ESP_07.interval =-1;

    ECOCAN.ESP_07.fields{1}.name = 'ESP_07_CRC';
    ECOCAN.ESP_07.fields{1}.units = '';
    ECOCAN.ESP_07.fields{1}.start_bit = 0;
    ECOCAN.ESP_07.fields{1}.bit_length = 8;
    ECOCAN.ESP_07.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{1}.scale = 1;
    ECOCAN.ESP_07.fields{1}.offset = 0;
    ECOCAN.ESP_07.fields{1}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{1}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{2}.name = 'ESP_07_BZ';
    ECOCAN.ESP_07.fields{2}.units = '';
    ECOCAN.ESP_07.fields{2}.start_bit = 8;
    ECOCAN.ESP_07.fields{2}.bit_length = 4;
    ECOCAN.ESP_07.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{2}.scale = 1;
    ECOCAN.ESP_07.fields{2}.offset = 0;
    ECOCAN.ESP_07.fields{2}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{2}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{3}.name = 'ESP_ACC_LDE';
    ECOCAN.ESP_07.fields{3}.units = '';
    ECOCAN.ESP_07.fields{3}.start_bit = 12;
    ECOCAN.ESP_07.fields{3}.bit_length = 1;
    ECOCAN.ESP_07.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{3}.scale = 1;
    ECOCAN.ESP_07.fields{3}.offset = 0;
    ECOCAN.ESP_07.fields{3}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{3}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{4}.name = 'ESP_Quattro_Drive';
    ECOCAN.ESP_07.fields{4}.units = '';
    ECOCAN.ESP_07.fields{4}.start_bit = 13;
    ECOCAN.ESP_07.fields{4}.bit_length = 1;
    ECOCAN.ESP_07.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{4}.scale = 1;
    ECOCAN.ESP_07.fields{4}.offset = 0;
    ECOCAN.ESP_07.fields{4}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{4}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{5}.name = 'ESP_Codierung_ADS';
    ECOCAN.ESP_07.fields{5}.units = '';
    ECOCAN.ESP_07.fields{5}.start_bit = 14;
    ECOCAN.ESP_07.fields{5}.bit_length = 2;
    ECOCAN.ESP_07.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{5}.scale = 1;
    ECOCAN.ESP_07.fields{5}.offset = 0;
    ECOCAN.ESP_07.fields{5}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{5}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{6}.name = 'ESP_RTA_HL';
    ECOCAN.ESP_07.fields{6}.units = 'Unit_PerCent';
    ECOCAN.ESP_07.fields{6}.start_bit = 16;
    ECOCAN.ESP_07.fields{6}.bit_length = 8;
    ECOCAN.ESP_07.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{6}.scale = 4.882813E-02;
    ECOCAN.ESP_07.fields{6}.offset = -6.20117;
    ECOCAN.ESP_07.fields{6}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{6}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{7}.name = 'ESP_RTA_HR';
    ECOCAN.ESP_07.fields{7}.units = 'Unit_PerCent';
    ECOCAN.ESP_07.fields{7}.start_bit = 24;
    ECOCAN.ESP_07.fields{7}.bit_length = 8;
    ECOCAN.ESP_07.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{7}.scale = 4.882813E-02;
    ECOCAN.ESP_07.fields{7}.offset = -6.20117;
    ECOCAN.ESP_07.fields{7}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{7}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{8}.name = 'ESP_RTA_VR';
    ECOCAN.ESP_07.fields{8}.units = 'Unit_PerCent';
    ECOCAN.ESP_07.fields{8}.start_bit = 32;
    ECOCAN.ESP_07.fields{8}.bit_length = 8;
    ECOCAN.ESP_07.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{8}.scale = 4.882813E-02;
    ECOCAN.ESP_07.fields{8}.offset = -6.20117;
    ECOCAN.ESP_07.fields{8}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{8}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{9}.name = 'OBD_Error_WheelSensor_BL';
    ECOCAN.ESP_07.fields{9}.units = '';
    ECOCAN.ESP_07.fields{9}.start_bit = 40;
    ECOCAN.ESP_07.fields{9}.bit_length = 4;
    ECOCAN.ESP_07.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{9}.scale = 1;
    ECOCAN.ESP_07.fields{9}.offset = 0;
    ECOCAN.ESP_07.fields{9}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{9}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{10}.name = 'OBD_Error_WheelSensor_BR';
    ECOCAN.ESP_07.fields{10}.units = '';
    ECOCAN.ESP_07.fields{10}.start_bit = 44;
    ECOCAN.ESP_07.fields{10}.bit_length = 4;
    ECOCAN.ESP_07.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{10}.scale = 1;
    ECOCAN.ESP_07.fields{10}.offset = 0;
    ECOCAN.ESP_07.fields{10}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{10}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{11}.name = 'OBD_Error_WheelSensor_FL';
    ECOCAN.ESP_07.fields{11}.units = '';
    ECOCAN.ESP_07.fields{11}.start_bit = 48;
    ECOCAN.ESP_07.fields{11}.bit_length = 4;
    ECOCAN.ESP_07.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{11}.scale = 1;
    ECOCAN.ESP_07.fields{11}.offset = 0;
    ECOCAN.ESP_07.fields{11}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{11}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{12}.name = 'OBD_Error_WheelSensor_FR';
    ECOCAN.ESP_07.fields{12}.units = '';
    ECOCAN.ESP_07.fields{12}.start_bit = 52;
    ECOCAN.ESP_07.fields{12}.bit_length = 4;
    ECOCAN.ESP_07.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{12}.scale = 1;
    ECOCAN.ESP_07.fields{12}.offset = 0;
    ECOCAN.ESP_07.fields{12}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{12}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{13}.name = 'ESP_DriveType_Qualification';
    ECOCAN.ESP_07.fields{13}.units = '';
    ECOCAN.ESP_07.fields{13}.start_bit = 56;
    ECOCAN.ESP_07.fields{13}.bit_length = 1;
    ECOCAN.ESP_07.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{13}.scale = 1;
    ECOCAN.ESP_07.fields{13}.offset = 0;
    ECOCAN.ESP_07.fields{13}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{13}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{14}.name = 'ESP_Offroad_Modus';
    ECOCAN.ESP_07.fields{14}.units = '';
    ECOCAN.ESP_07.fields{14}.start_bit = 57;
    ECOCAN.ESP_07.fields{14}.bit_length = 1;
    ECOCAN.ESP_07.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{14}.scale = 1;
    ECOCAN.ESP_07.fields{14}.offset = 0;
    ECOCAN.ESP_07.fields{14}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{14}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{15}.name = 'ESP_MKB_Canbetriggered';
    ECOCAN.ESP_07.fields{15}.units = '';
    ECOCAN.ESP_07.fields{15}.start_bit = 58;
    ECOCAN.ESP_07.fields{15}.bit_length = 1;
    ECOCAN.ESP_07.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{15}.scale = 1;
    ECOCAN.ESP_07.fields{15}.offset = 0;
    ECOCAN.ESP_07.fields{15}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{15}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{16}.name = 'ESP_MKB_Status';
    ECOCAN.ESP_07.fields{16}.units = '';
    ECOCAN.ESP_07.fields{16}.start_bit = 59;
    ECOCAN.ESP_07.fields{16}.bit_length = 1;
    ECOCAN.ESP_07.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{16}.scale = 1;
    ECOCAN.ESP_07.fields{16}.offset = 0;
    ECOCAN.ESP_07.fields{16}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{16}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{17}.name = 'ESP_CM_Variante';
    ECOCAN.ESP_07.fields{17}.units = '';
    ECOCAN.ESP_07.fields{17}.start_bit = 60;
    ECOCAN.ESP_07.fields{17}.bit_length = 1;
    ECOCAN.ESP_07.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{17}.scale = 1;
    ECOCAN.ESP_07.fields{17}.offset = 0;
    ECOCAN.ESP_07.fields{17}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{17}.multiplex_value = 0;

    ECOCAN.ESP_07.fields{18}.name = 'ESP_OBD_Status';
    ECOCAN.ESP_07.fields{18}.units = '';
    ECOCAN.ESP_07.fields{18}.start_bit = 61;
    ECOCAN.ESP_07.fields{18}.bit_length = 1;
    ECOCAN.ESP_07.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_07.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.ESP_07.fields{18}.scale = 1;
    ECOCAN.ESP_07.fields{18}.offset = 0;
    ECOCAN.ESP_07.fields{18}.multiplex_type = 'Standard';
    ECOCAN.ESP_07.fields{18}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:OBD_01
%Message Number:32
case 'OBD_01'
    ECOCAN.OBD_01 = struct;
    ECOCAN.OBD_01.name = 'OBD_01';
    ECOCAN.OBD_01.description = 'OBD_01';
    ECOCAN.OBD_01.protocol  = 'ECOCAN';
    ECOCAN.OBD_01.id = hex2dec('391');
    ECOCAN.OBD_01.idext = 'STANDARD';
    ECOCAN.OBD_01.payload_size =8;
    ECOCAN.OBD_01.interval =-1;

    ECOCAN.OBD_01.fields{1}.name = 'OBD_Calc_Load_Val';
    ECOCAN.OBD_01.fields{1}.units = 'Unit_PerCent';
    ECOCAN.OBD_01.fields{1}.start_bit = 0;
    ECOCAN.OBD_01.fields{1}.bit_length = 8;
    ECOCAN.OBD_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.OBD_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.OBD_01.fields{1}.scale = 0.3921569;
    ECOCAN.OBD_01.fields{1}.offset = 0;
    ECOCAN.OBD_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.OBD_01.fields{1}.multiplex_value = 0;

    ECOCAN.OBD_01.fields{2}.name = 'OBD_Eng_Cool_Temp';
    ECOCAN.OBD_01.fields{2}.units = 'Unit_DegreCelsi';
    ECOCAN.OBD_01.fields{2}.start_bit = 8;
    ECOCAN.OBD_01.fields{2}.bit_length = 8;
    ECOCAN.OBD_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.OBD_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.OBD_01.fields{2}.scale = 1;
    ECOCAN.OBD_01.fields{2}.offset = -40;
    ECOCAN.OBD_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.OBD_01.fields{2}.multiplex_value = 0;

    ECOCAN.OBD_01.fields{3}.name = 'OBD_Abs_Throttle_Pos';
    ECOCAN.OBD_01.fields{3}.units = 'Unit_PerCent';
    ECOCAN.OBD_01.fields{3}.start_bit = 16;
    ECOCAN.OBD_01.fields{3}.bit_length = 8;
    ECOCAN.OBD_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.OBD_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.OBD_01.fields{3}.scale = 0.3921569;
    ECOCAN.OBD_01.fields{3}.offset = 0;
    ECOCAN.OBD_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.OBD_01.fields{3}.multiplex_value = 0;

    ECOCAN.OBD_01.fields{4}.name = 'OBD_Abs_Load_Val';
    ECOCAN.OBD_01.fields{4}.units = 'Unit_PerCent';
    ECOCAN.OBD_01.fields{4}.start_bit = 24;
    ECOCAN.OBD_01.fields{4}.bit_length = 16;
    ECOCAN.OBD_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.OBD_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.OBD_01.fields{4}.scale = 0.3921569;
    ECOCAN.OBD_01.fields{4}.offset = 0;
    ECOCAN.OBD_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.OBD_01.fields{4}.multiplex_value = 0;

    ECOCAN.OBD_01.fields{5}.name = 'OBD_Abs_Pedal_Pos';
    ECOCAN.OBD_01.fields{5}.units = 'Unit_PerCent';
    ECOCAN.OBD_01.fields{5}.start_bit = 40;
    ECOCAN.OBD_01.fields{5}.bit_length = 8;
    ECOCAN.OBD_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.OBD_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.OBD_01.fields{5}.scale = 0.3921569;
    ECOCAN.OBD_01.fields{5}.offset = 0;
    ECOCAN.OBD_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.OBD_01.fields{5}.multiplex_value = 0;

    ECOCAN.OBD_01.fields{6}.name = 'OBD_Kaltstart_Denominator';
    ECOCAN.OBD_01.fields{6}.units = '';
    ECOCAN.OBD_01.fields{6}.start_bit = 59;
    ECOCAN.OBD_01.fields{6}.bit_length = 1;
    ECOCAN.OBD_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.OBD_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.OBD_01.fields{6}.scale = 1;
    ECOCAN.OBD_01.fields{6}.offset = 0;
    ECOCAN.OBD_01.fields{6}.multiplex_type = 'Standard';
    ECOCAN.OBD_01.fields{6}.multiplex_value = 0;

    ECOCAN.OBD_01.fields{7}.name = 'OBD_Minimum_Trip';
    ECOCAN.OBD_01.fields{7}.units = '';
    ECOCAN.OBD_01.fields{7}.start_bit = 60;
    ECOCAN.OBD_01.fields{7}.bit_length = 1;
    ECOCAN.OBD_01.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.OBD_01.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.OBD_01.fields{7}.scale = 1;
    ECOCAN.OBD_01.fields{7}.offset = 0;
    ECOCAN.OBD_01.fields{7}.multiplex_type = 'Standard';
    ECOCAN.OBD_01.fields{7}.multiplex_value = 0;

    ECOCAN.OBD_01.fields{8}.name = 'OBD_Driving_Cycle';
    ECOCAN.OBD_01.fields{8}.units = '';
    ECOCAN.OBD_01.fields{8}.start_bit = 61;
    ECOCAN.OBD_01.fields{8}.bit_length = 1;
    ECOCAN.OBD_01.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.OBD_01.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.OBD_01.fields{8}.scale = 1;
    ECOCAN.OBD_01.fields{8}.offset = 0;
    ECOCAN.OBD_01.fields{8}.multiplex_type = 'Standard';
    ECOCAN.OBD_01.fields{8}.multiplex_value = 0;

    ECOCAN.OBD_01.fields{9}.name = 'OBD_Warm_Up_Cycle';
    ECOCAN.OBD_01.fields{9}.units = '';
    ECOCAN.OBD_01.fields{9}.start_bit = 62;
    ECOCAN.OBD_01.fields{9}.bit_length = 1;
    ECOCAN.OBD_01.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.OBD_01.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.OBD_01.fields{9}.scale = 1;
    ECOCAN.OBD_01.fields{9}.offset = 0;
    ECOCAN.OBD_01.fields{9}.multiplex_type = 'Standard';
    ECOCAN.OBD_01.fields{9}.multiplex_value = 0;

    ECOCAN.OBD_01.fields{10}.name = 'OBD_Normed_Trip';
    ECOCAN.OBD_01.fields{10}.units = '';
    ECOCAN.OBD_01.fields{10}.start_bit = 63;
    ECOCAN.OBD_01.fields{10}.bit_length = 1;
    ECOCAN.OBD_01.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.OBD_01.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.OBD_01.fields{10}.scale = 1;
    ECOCAN.OBD_01.fields{10}.offset = 0;
    ECOCAN.OBD_01.fields{10}.multiplex_type = 'Standard';
    ECOCAN.OBD_01.fields{10}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Charisma_01
%Message Number:33
case 'Charisma_01'
    ECOCAN.Charisma_01 = struct;
    ECOCAN.Charisma_01.name = 'Charisma_01';
    ECOCAN.Charisma_01.description = 'Charisma_01';
    ECOCAN.Charisma_01.protocol  = 'ECOCAN';
    ECOCAN.Charisma_01.id = hex2dec('385');
    ECOCAN.Charisma_01.idext = 'STANDARD';
    ECOCAN.Charisma_01.payload_size =8;
    ECOCAN.Charisma_01.interval =-1;

    ECOCAN.Charisma_01.fields{1}.name = 'CHA_Ziel_FahrPr_ALR';
    ECOCAN.Charisma_01.fields{1}.units = '';
    ECOCAN.Charisma_01.fields{1}.start_bit = 0;
    ECOCAN.Charisma_01.fields{1}.bit_length = 4;
    ECOCAN.Charisma_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{1}.scale = 1;
    ECOCAN.Charisma_01.fields{1}.offset = 0;
    ECOCAN.Charisma_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{1}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{2}.name = 'CHA_Ziel_FahrPr_ESP';
    ECOCAN.Charisma_01.fields{2}.units = '';
    ECOCAN.Charisma_01.fields{2}.start_bit = 4;
    ECOCAN.Charisma_01.fields{2}.bit_length = 4;
    ECOCAN.Charisma_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{2}.scale = 1;
    ECOCAN.Charisma_01.fields{2}.offset = 0;
    ECOCAN.Charisma_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{2}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{3}.name = 'CHA_Ziel_FahrPr_FL';
    ECOCAN.Charisma_01.fields{3}.units = '';
    ECOCAN.Charisma_01.fields{3}.start_bit = 8;
    ECOCAN.Charisma_01.fields{3}.bit_length = 4;
    ECOCAN.Charisma_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{3}.scale = 1;
    ECOCAN.Charisma_01.fields{3}.offset = 0;
    ECOCAN.Charisma_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{3}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{4}.name = 'CHA_Fahrer_Umschaltung';
    ECOCAN.Charisma_01.fields{4}.units = '';
    ECOCAN.Charisma_01.fields{4}.start_bit = 14;
    ECOCAN.Charisma_01.fields{4}.bit_length = 1;
    ECOCAN.Charisma_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{4}.scale = 1;
    ECOCAN.Charisma_01.fields{4}.offset = 0;
    ECOCAN.Charisma_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{4}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{5}.name = 'CHA_Ziel_FahrPr_MO';
    ECOCAN.Charisma_01.fields{5}.units = '';
    ECOCAN.Charisma_01.fields{5}.start_bit = 16;
    ECOCAN.Charisma_01.fields{5}.bit_length = 4;
    ECOCAN.Charisma_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{5}.scale = 1;
    ECOCAN.Charisma_01.fields{5}.offset = 0;
    ECOCAN.Charisma_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{5}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{6}.name = 'CHA_Ziel_FahrPr_GE';
    ECOCAN.Charisma_01.fields{6}.units = '';
    ECOCAN.Charisma_01.fields{6}.start_bit = 20;
    ECOCAN.Charisma_01.fields{6}.bit_length = 4;
    ECOCAN.Charisma_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{6}.scale = 1;
    ECOCAN.Charisma_01.fields{6}.offset = 0;
    ECOCAN.Charisma_01.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{6}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{7}.name = 'CHA_Ziel_FahrPr_ST';
    ECOCAN.Charisma_01.fields{7}.units = '';
    ECOCAN.Charisma_01.fields{7}.start_bit = 24;
    ECOCAN.Charisma_01.fields{7}.bit_length = 4;
    ECOCAN.Charisma_01.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{7}.scale = 1;
    ECOCAN.Charisma_01.fields{7}.offset = 0;
    ECOCAN.Charisma_01.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{7}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{8}.name = 'CHA_Ziel_FahrPr_SCU';
    ECOCAN.Charisma_01.fields{8}.units = '';
    ECOCAN.Charisma_01.fields{8}.start_bit = 28;
    ECOCAN.Charisma_01.fields{8}.bit_length = 4;
    ECOCAN.Charisma_01.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{8}.scale = 1;
    ECOCAN.Charisma_01.fields{8}.offset = 0;
    ECOCAN.Charisma_01.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{8}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{9}.name = 'CHA_Ziel_FahrPr_DR';
    ECOCAN.Charisma_01.fields{9}.units = '';
    ECOCAN.Charisma_01.fields{9}.start_bit = 32;
    ECOCAN.Charisma_01.fields{9}.bit_length = 4;
    ECOCAN.Charisma_01.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{9}.scale = 1;
    ECOCAN.Charisma_01.fields{9}.offset = 0;
    ECOCAN.Charisma_01.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{9}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{10}.name = 'CHA_Ziel_FahrPr_QS';
    ECOCAN.Charisma_01.fields{10}.units = '';
    ECOCAN.Charisma_01.fields{10}.start_bit = 36;
    ECOCAN.Charisma_01.fields{10}.bit_length = 4;
    ECOCAN.Charisma_01.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{10}.scale = 1;
    ECOCAN.Charisma_01.fields{10}.offset = 0;
    ECOCAN.Charisma_01.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{10}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{11}.name = 'CHA_Ziel_FahrPr_AFS';
    ECOCAN.Charisma_01.fields{11}.units = '';
    ECOCAN.Charisma_01.fields{11}.start_bit = 40;
    ECOCAN.Charisma_01.fields{11}.bit_length = 4;
    ECOCAN.Charisma_01.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{11}.scale = 1;
    ECOCAN.Charisma_01.fields{11}.offset = 0;
    ECOCAN.Charisma_01.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{11}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{12}.name = 'CHA_Ziel_FahrPr_RGS';
    ECOCAN.Charisma_01.fields{12}.units = '';
    ECOCAN.Charisma_01.fields{12}.start_bit = 44;
    ECOCAN.Charisma_01.fields{12}.bit_length = 4;
    ECOCAN.Charisma_01.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{12}.scale = 1;
    ECOCAN.Charisma_01.fields{12}.offset = 0;
    ECOCAN.Charisma_01.fields{12}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{12}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{13}.name = 'CHA_Ziel_FahrPr_EPS';
    ECOCAN.Charisma_01.fields{13}.units = '';
    ECOCAN.Charisma_01.fields{13}.start_bit = 48;
    ECOCAN.Charisma_01.fields{13}.bit_length = 4;
    ECOCAN.Charisma_01.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{13}.scale = 1;
    ECOCAN.Charisma_01.fields{13}.offset = 0;
    ECOCAN.Charisma_01.fields{13}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{13}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{14}.name = 'CHA_Ziel_FahrPr_ACC';
    ECOCAN.Charisma_01.fields{14}.units = '';
    ECOCAN.Charisma_01.fields{14}.start_bit = 52;
    ECOCAN.Charisma_01.fields{14}.bit_length = 4;
    ECOCAN.Charisma_01.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{14}.scale = 1;
    ECOCAN.Charisma_01.fields{14}.offset = 0;
    ECOCAN.Charisma_01.fields{14}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{14}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{15}.name = 'CHA_Ziel_FahrPr_SAK';
    ECOCAN.Charisma_01.fields{15}.units = '';
    ECOCAN.Charisma_01.fields{15}.start_bit = 56;
    ECOCAN.Charisma_01.fields{15}.bit_length = 4;
    ECOCAN.Charisma_01.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{15}.scale = 1;
    ECOCAN.Charisma_01.fields{15}.offset = 0;
    ECOCAN.Charisma_01.fields{15}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{15}.multiplex_value = 0;

    ECOCAN.Charisma_01.fields{16}.name = 'CHA_Ziel_FahrPr_MStSt';
    ECOCAN.Charisma_01.fields{16}.units = '';
    ECOCAN.Charisma_01.fields{16}.start_bit = 60;
    ECOCAN.Charisma_01.fields{16}.bit_length = 4;
    ECOCAN.Charisma_01.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Charisma_01.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.Charisma_01.fields{16}.scale = 1;
    ECOCAN.Charisma_01.fields{16}.offset = 0;
    ECOCAN.Charisma_01.fields{16}.multiplex_type = 'Standard';
    ECOCAN.Charisma_01.fields{16}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:BEM_05
%Message Number:34
case 'BEM_05'
    ECOCAN.BEM_05 = struct;
    ECOCAN.BEM_05.name = 'BEM_05';
    ECOCAN.BEM_05.description = 'BEM_05';
    ECOCAN.BEM_05.protocol  = 'ECOCAN';
    ECOCAN.BEM_05.id = hex2dec('365');
    ECOCAN.BEM_05.idext = 'STANDARD';
    ECOCAN.BEM_05.payload_size =8;
    ECOCAN.BEM_05.interval =-1;

    ECOCAN.BEM_05.fields{1}.name = 'BEM_P_Generator';
    ECOCAN.BEM_05.fields{1}.units = 'Unit_Watt';
    ECOCAN.BEM_05.fields{1}.start_bit = 16;
    ECOCAN.BEM_05.fields{1}.bit_length = 8;
    ECOCAN.BEM_05.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BEM_05.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.BEM_05.fields{1}.scale = 50;
    ECOCAN.BEM_05.fields{1}.offset = 0;
    ECOCAN.BEM_05.fields{1}.multiplex_type = 'Standard';
    ECOCAN.BEM_05.fields{1}.multiplex_value = 0;

    ECOCAN.BEM_05.fields{2}.name = 'BEM_n_LLA';
    ECOCAN.BEM_05.fields{2}.units = '';
    ECOCAN.BEM_05.fields{2}.start_bit = 24;
    ECOCAN.BEM_05.fields{2}.bit_length = 2;
    ECOCAN.BEM_05.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BEM_05.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.BEM_05.fields{2}.scale = 1;
    ECOCAN.BEM_05.fields{2}.offset = 0;
    ECOCAN.BEM_05.fields{2}.multiplex_type = 'Standard';
    ECOCAN.BEM_05.fields{2}.multiplex_value = 0;

    ECOCAN.BEM_05.fields{3}.name = 'BEM_01_CutOffStages';
    ECOCAN.BEM_05.fields{3}.units = '';
    ECOCAN.BEM_05.fields{3}.start_bit = 26;
    ECOCAN.BEM_05.fields{3}.bit_length = 3;
    ECOCAN.BEM_05.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BEM_05.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.BEM_05.fields{3}.scale = 1;
    ECOCAN.BEM_05.fields{3}.offset = 0;
    ECOCAN.BEM_05.fields{3}.multiplex_type = 'Standard';
    ECOCAN.BEM_05.fields{3}.multiplex_value = 0;

    ECOCAN.BEM_05.fields{4}.name = 'BEM_Anf_KL';
    ECOCAN.BEM_05.fields{4}.units = '';
    ECOCAN.BEM_05.fields{4}.start_bit = 29;
    ECOCAN.BEM_05.fields{4}.bit_length = 1;
    ECOCAN.BEM_05.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BEM_05.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.BEM_05.fields{4}.scale = 1;
    ECOCAN.BEM_05.fields{4}.offset = 0;
    ECOCAN.BEM_05.fields{4}.multiplex_type = 'Standard';
    ECOCAN.BEM_05.fields{4}.multiplex_value = 0;

    ECOCAN.BEM_05.fields{5}.name = 'BEM_StartStopp_Info';
    ECOCAN.BEM_05.fields{5}.units = '';
    ECOCAN.BEM_05.fields{5}.start_bit = 30;
    ECOCAN.BEM_05.fields{5}.bit_length = 2;
    ECOCAN.BEM_05.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BEM_05.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.BEM_05.fields{5}.scale = 1;
    ECOCAN.BEM_05.fields{5}.offset = 0;
    ECOCAN.BEM_05.fields{5}.multiplex_type = 'Standard';
    ECOCAN.BEM_05.fields{5}.multiplex_value = 0;

    ECOCAN.BEM_05.fields{6}.name = 'BEM_DFM';
    ECOCAN.BEM_05.fields{6}.units = '';
    ECOCAN.BEM_05.fields{6}.start_bit = 32;
    ECOCAN.BEM_05.fields{6}.bit_length = 5;
    ECOCAN.BEM_05.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BEM_05.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.BEM_05.fields{6}.scale = 3.225;
    ECOCAN.BEM_05.fields{6}.offset = 0.025;
    ECOCAN.BEM_05.fields{6}.multiplex_type = 'Standard';
    ECOCAN.BEM_05.fields{6}.multiplex_value = 0;

    ECOCAN.BEM_05.fields{7}.name = 'BEM_EMLIN_Invalid';
    ECOCAN.BEM_05.fields{7}.units = '';
    ECOCAN.BEM_05.fields{7}.start_bit = 37;
    ECOCAN.BEM_05.fields{7}.bit_length = 1;
    ECOCAN.BEM_05.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BEM_05.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.BEM_05.fields{7}.scale = 1;
    ECOCAN.BEM_05.fields{7}.offset = 0;
    ECOCAN.BEM_05.fields{7}.multiplex_type = 'Standard';
    ECOCAN.BEM_05.fields{7}.multiplex_value = 0;

    ECOCAN.BEM_05.fields{8}.name = 'BEM_Batt_Ab';
    ECOCAN.BEM_05.fields{8}.units = '';
    ECOCAN.BEM_05.fields{8}.start_bit = 38;
    ECOCAN.BEM_05.fields{8}.bit_length = 1;
    ECOCAN.BEM_05.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BEM_05.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.BEM_05.fields{8}.scale = 1;
    ECOCAN.BEM_05.fields{8}.offset = 0;
    ECOCAN.BEM_05.fields{8}.multiplex_type = 'Standard';
    ECOCAN.BEM_05.fields{8}.multiplex_value = 0;

    ECOCAN.BEM_05.fields{9}.name = 'BEM_Segel_Info';
    ECOCAN.BEM_05.fields{9}.units = '';
    ECOCAN.BEM_05.fields{9}.start_bit = 48;
    ECOCAN.BEM_05.fields{9}.bit_length = 2;
    ECOCAN.BEM_05.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BEM_05.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.BEM_05.fields{9}.scale = 1;
    ECOCAN.BEM_05.fields{9}.offset = 0;
    ECOCAN.BEM_05.fields{9}.multiplex_type = 'Standard';
    ECOCAN.BEM_05.fields{9}.multiplex_value = 0;

    ECOCAN.BEM_05.fields{10}.name = 'BEM_HYB_DC_uSollLV';
    ECOCAN.BEM_05.fields{10}.units = 'Unit_Volt';
    ECOCAN.BEM_05.fields{10}.start_bit = 50;
    ECOCAN.BEM_05.fields{10}.bit_length = 6;
    ECOCAN.BEM_05.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BEM_05.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.BEM_05.fields{10}.scale = 0.1;
    ECOCAN.BEM_05.fields{10}.offset = 10.6;
    ECOCAN.BEM_05.fields{10}.multiplex_type = 'Standard';
    ECOCAN.BEM_05.fields{10}.multiplex_value = 0;

    ECOCAN.BEM_05.fields{11}.name = 'BEM_HYB_DC_uMinLV';
    ECOCAN.BEM_05.fields{11}.units = 'Unit_Volt';
    ECOCAN.BEM_05.fields{11}.start_bit = 56;
    ECOCAN.BEM_05.fields{11}.bit_length = 8;
    ECOCAN.BEM_05.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.BEM_05.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.BEM_05.fields{11}.scale = 0.1;
    ECOCAN.BEM_05.fields{11}.offset = 0;
    ECOCAN.BEM_05.fields{11}.multiplex_type = 'Standard';
    ECOCAN.BEM_05.fields{11}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Motor_17
%Message Number:35
case 'Motor_17'
    ECOCAN.Motor_17 = struct;
    ECOCAN.Motor_17.name = 'Motor_17';
    ECOCAN.Motor_17.description = 'Motor_17';
    ECOCAN.Motor_17.protocol  = 'ECOCAN';
    ECOCAN.Motor_17.id = hex2dec('32C');
    ECOCAN.Motor_17.idext = 'STANDARD';
    ECOCAN.Motor_17.payload_size =8;
    ECOCAN.Motor_17.interval =-1;

    ECOCAN.Motor_17.fields{1}.name = 'MO_Prio_MAX_DesiredSpeed';
    ECOCAN.Motor_17.fields{1}.units = '';
    ECOCAN.Motor_17.fields{1}.start_bit = 12;
    ECOCAN.Motor_17.fields{1}.bit_length = 1;
    ECOCAN.Motor_17.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_17.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Motor_17.fields{1}.scale = 1;
    ECOCAN.Motor_17.fields{1}.offset = 0;
    ECOCAN.Motor_17.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Motor_17.fields{1}.multiplex_value = 0;

    ECOCAN.Motor_17.fields{2}.name = 'MO_Prio_MIN_DesiredSpeed';
    ECOCAN.Motor_17.fields{2}.units = '';
    ECOCAN.Motor_17.fields{2}.start_bit = 13;
    ECOCAN.Motor_17.fields{2}.bit_length = 1;
    ECOCAN.Motor_17.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_17.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Motor_17.fields{2}.scale = 1;
    ECOCAN.Motor_17.fields{2}.offset = 0;
    ECOCAN.Motor_17.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Motor_17.fields{2}.multiplex_value = 0;

    ECOCAN.Motor_17.fields{3}.name = 'MO_Luftpfad_aktiv';
    ECOCAN.Motor_17.fields{3}.units = '';
    ECOCAN.Motor_17.fields{3}.start_bit = 14;
    ECOCAN.Motor_17.fields{3}.bit_length = 1;
    ECOCAN.Motor_17.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_17.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Motor_17.fields{3}.scale = 1;
    ECOCAN.Motor_17.fields{3}.offset = 0;
    ECOCAN.Motor_17.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Motor_17.fields{3}.multiplex_value = 0;

    ECOCAN.Motor_17.fields{4}.name = 'MO_v_Begrenz_Aktivierbar';
    ECOCAN.Motor_17.fields{4}.units = '';
    ECOCAN.Motor_17.fields{4}.start_bit = 15;
    ECOCAN.Motor_17.fields{4}.bit_length = 1;
    ECOCAN.Motor_17.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_17.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Motor_17.fields{4}.scale = 1;
    ECOCAN.Motor_17.fields{4}.offset = 0;
    ECOCAN.Motor_17.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Motor_17.fields{4}.multiplex_value = 0;

    ECOCAN.Motor_17.fields{5}.name = 'MO_SpeedInfluencing';
    ECOCAN.Motor_17.fields{5}.units = 'Unit_PerCent';
    ECOCAN.Motor_17.fields{5}.start_bit = 16;
    ECOCAN.Motor_17.fields{5}.bit_length = 8;
    ECOCAN.Motor_17.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_17.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Motor_17.fields{5}.scale = 0.39;
    ECOCAN.Motor_17.fields{5}.offset = 0;
    ECOCAN.Motor_17.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Motor_17.fields{5}.multiplex_value = 0;

    ECOCAN.Motor_17.fields{6}.name = 'MO_MIN_DesiredSpeed';
    ECOCAN.Motor_17.fields{6}.units = 'Unit_MinutInver';
    ECOCAN.Motor_17.fields{6}.start_bit = 24;
    ECOCAN.Motor_17.fields{6}.bit_length = 8;
    ECOCAN.Motor_17.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_17.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Motor_17.fields{6}.scale = 25;
    ECOCAN.Motor_17.fields{6}.offset = 0;
    ECOCAN.Motor_17.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Motor_17.fields{6}.multiplex_value = 0;

    ECOCAN.Motor_17.fields{7}.name = 'MO_MAX_DesiredSpeed';
    ECOCAN.Motor_17.fields{7}.units = 'Unit_MinutInver';
    ECOCAN.Motor_17.fields{7}.start_bit = 32;
    ECOCAN.Motor_17.fields{7}.bit_length = 9;
    ECOCAN.Motor_17.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_17.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Motor_17.fields{7}.scale = 25;
    ECOCAN.Motor_17.fields{7}.offset = 0;
    ECOCAN.Motor_17.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Motor_17.fields{7}.multiplex_value = 0;

    ECOCAN.Motor_17.fields{8}.name = 'MO_Charisma_FahrPr';
    ECOCAN.Motor_17.fields{8}.units = '';
    ECOCAN.Motor_17.fields{8}.start_bit = 41;
    ECOCAN.Motor_17.fields{8}.bit_length = 4;
    ECOCAN.Motor_17.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_17.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Motor_17.fields{8}.scale = 1;
    ECOCAN.Motor_17.fields{8}.offset = 0;
    ECOCAN.Motor_17.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Motor_17.fields{8}.multiplex_value = 0;

    ECOCAN.Motor_17.fields{9}.name = 'MO_Charisma_Status';
    ECOCAN.Motor_17.fields{9}.units = '';
    ECOCAN.Motor_17.fields{9}.start_bit = 45;
    ECOCAN.Motor_17.fields{9}.bit_length = 2;
    ECOCAN.Motor_17.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_17.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Motor_17.fields{9}.scale = 1;
    ECOCAN.Motor_17.fields{9}.offset = 0;
    ECOCAN.Motor_17.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Motor_17.fields{9}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:TSK_07
%Message Number:36
case 'TSK_07'
    ECOCAN.TSK_07 = struct;
    ECOCAN.TSK_07.name = 'TSK_07';
    ECOCAN.TSK_07.description = 'TSK_07';
    ECOCAN.TSK_07.protocol  = 'ECOCAN';
    ECOCAN.TSK_07.id = hex2dec('31E');
    ECOCAN.TSK_07.idext = 'STANDARD';
    ECOCAN.TSK_07.payload_size =8;
    ECOCAN.TSK_07.interval =-1;

    ECOCAN.TSK_07.fields{1}.name = 'TSK_07_CRC';
    ECOCAN.TSK_07.fields{1}.units = '';
    ECOCAN.TSK_07.fields{1}.start_bit = 0;
    ECOCAN.TSK_07.fields{1}.bit_length = 8;
    ECOCAN.TSK_07.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_07.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.TSK_07.fields{1}.scale = 1;
    ECOCAN.TSK_07.fields{1}.offset = 0;
    ECOCAN.TSK_07.fields{1}.multiplex_type = 'Standard';
    ECOCAN.TSK_07.fields{1}.multiplex_value = 0;

    ECOCAN.TSK_07.fields{2}.name = 'TSK_07_BZ';
    ECOCAN.TSK_07.fields{2}.units = '';
    ECOCAN.TSK_07.fields{2}.start_bit = 8;
    ECOCAN.TSK_07.fields{2}.bit_length = 4;
    ECOCAN.TSK_07.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_07.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.TSK_07.fields{2}.scale = 1;
    ECOCAN.TSK_07.fields{2}.offset = 0;
    ECOCAN.TSK_07.fields{2}.multiplex_type = 'Standard';
    ECOCAN.TSK_07.fields{2}.multiplex_value = 0;

    ECOCAN.TSK_07.fields{3}.name = 'TSK_DesiredSpeed';
    ECOCAN.TSK_07.fields{3}.units = 'Unit_KiloMeterPerHour';
    ECOCAN.TSK_07.fields{3}.start_bit = 12;
    ECOCAN.TSK_07.fields{3}.bit_length = 10;
    ECOCAN.TSK_07.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_07.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.TSK_07.fields{3}.scale = 0.32;
    ECOCAN.TSK_07.fields{3}.offset = 0;
    ECOCAN.TSK_07.fields{3}.multiplex_type = 'Standard';
    ECOCAN.TSK_07.fields{3}.multiplex_value = 0;

    ECOCAN.TSK_07.fields{4}.name = 'TSK_Texts_Primaerance';
    ECOCAN.TSK_07.fields{4}.units = '';
    ECOCAN.TSK_07.fields{4}.start_bit = 48;
    ECOCAN.TSK_07.fields{4}.bit_length = 5;
    ECOCAN.TSK_07.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_07.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.TSK_07.fields{4}.scale = 1;
    ECOCAN.TSK_07.fields{4}.offset = 0;
    ECOCAN.TSK_07.fields{4}.multiplex_type = 'Standard';
    ECOCAN.TSK_07.fields{4}.multiplex_value = 0;

    ECOCAN.TSK_07.fields{5}.name = 'TSK_Limiter_Display';
    ECOCAN.TSK_07.fields{5}.units = '';
    ECOCAN.TSK_07.fields{5}.start_bit = 55;
    ECOCAN.TSK_07.fields{5}.bit_length = 1;
    ECOCAN.TSK_07.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_07.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.TSK_07.fields{5}.scale = 1;
    ECOCAN.TSK_07.fields{5}.offset = 0;
    ECOCAN.TSK_07.fields{5}.multiplex_type = 'Standard';
    ECOCAN.TSK_07.fields{5}.multiplex_value = 0;

    ECOCAN.TSK_07.fields{6}.name = 'TSK_Status_Display';
    ECOCAN.TSK_07.fields{6}.units = '';
    ECOCAN.TSK_07.fields{6}.start_bit = 61;
    ECOCAN.TSK_07.fields{6}.bit_length = 3;
    ECOCAN.TSK_07.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_07.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.TSK_07.fields{6}.scale = 1;
    ECOCAN.TSK_07.fields{6}.offset = 0;
    ECOCAN.TSK_07.fields{6}.multiplex_type = 'Standard';
    ECOCAN.TSK_07.fields{6}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Kombi_01
%Message Number:37
case 'Kombi_01'
    ECOCAN.Kombi_01 = struct;
    ECOCAN.Kombi_01.name = 'Kombi_01';
    ECOCAN.Kombi_01.description = 'Kombi_01';
    ECOCAN.Kombi_01.protocol  = 'ECOCAN';
    ECOCAN.Kombi_01.id = hex2dec('30B');
    ECOCAN.Kombi_01.idext = 'STANDARD';
    ECOCAN.Kombi_01.payload_size =8;
    ECOCAN.Kombi_01.interval =-1;

    ECOCAN.Kombi_01.fields{1}.name = 'KBI_ABS_Lampe';
    ECOCAN.Kombi_01.fields{1}.units = '';
    ECOCAN.Kombi_01.fields{1}.start_bit = 0;
    ECOCAN.Kombi_01.fields{1}.bit_length = 1;
    ECOCAN.Kombi_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{1}.scale = 1;
    ECOCAN.Kombi_01.fields{1}.offset = 0;
    ECOCAN.Kombi_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{1}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{2}.name = 'KBI_ESP_Lampe';
    ECOCAN.Kombi_01.fields{2}.units = '';
    ECOCAN.Kombi_01.fields{2}.start_bit = 1;
    ECOCAN.Kombi_01.fields{2}.bit_length = 1;
    ECOCAN.Kombi_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{2}.scale = 1;
    ECOCAN.Kombi_01.fields{2}.offset = 0;
    ECOCAN.Kombi_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{2}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{3}.name = 'KBI_BKL_Lampe';
    ECOCAN.Kombi_01.fields{3}.units = '';
    ECOCAN.Kombi_01.fields{3}.start_bit = 2;
    ECOCAN.Kombi_01.fields{3}.bit_length = 1;
    ECOCAN.Kombi_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{3}.scale = 1;
    ECOCAN.Kombi_01.fields{3}.offset = 0;
    ECOCAN.Kombi_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{3}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{4}.name = 'KBI_Airbag_Lampe';
    ECOCAN.Kombi_01.fields{4}.units = '';
    ECOCAN.Kombi_01.fields{4}.start_bit = 3;
    ECOCAN.Kombi_01.fields{4}.bit_length = 1;
    ECOCAN.Kombi_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{4}.scale = 1;
    ECOCAN.Kombi_01.fields{4}.offset = 0;
    ECOCAN.Kombi_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{4}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{5}.name = 'KBI_SILA_gueltig';
    ECOCAN.Kombi_01.fields{5}.units = '';
    ECOCAN.Kombi_01.fields{5}.start_bit = 4;
    ECOCAN.Kombi_01.fields{5}.bit_length = 1;
    ECOCAN.Kombi_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{5}.scale = 1;
    ECOCAN.Kombi_01.fields{5}.offset = 0;
    ECOCAN.Kombi_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{5}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{6}.name = 'KBI_Lenkung_Lampe';
    ECOCAN.Kombi_01.fields{6}.units = '';
    ECOCAN.Kombi_01.fields{6}.start_bit = 5;
    ECOCAN.Kombi_01.fields{6}.bit_length = 1;
    ECOCAN.Kombi_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{6}.scale = 1;
    ECOCAN.Kombi_01.fields{6}.offset = 0;
    ECOCAN.Kombi_01.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{6}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{7}.name = 'KBI_Vorglueh_System_Lampe';
    ECOCAN.Kombi_01.fields{7}.units = '';
    ECOCAN.Kombi_01.fields{7}.start_bit = 6;
    ECOCAN.Kombi_01.fields{7}.bit_length = 1;
    ECOCAN.Kombi_01.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{7}.scale = 1;
    ECOCAN.Kombi_01.fields{7}.offset = 0;
    ECOCAN.Kombi_01.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{7}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{8}.name = 'KBI_NV_in_Anzeige';
    ECOCAN.Kombi_01.fields{8}.units = '';
    ECOCAN.Kombi_01.fields{8}.start_bit = 7;
    ECOCAN.Kombi_01.fields{8}.bit_length = 1;
    ECOCAN.Kombi_01.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{8}.scale = 1;
    ECOCAN.Kombi_01.fields{8}.offset = 0;
    ECOCAN.Kombi_01.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{8}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{9}.name = 'Kombi_01_BZ';
    ECOCAN.Kombi_01.fields{9}.units = '';
    ECOCAN.Kombi_01.fields{9}.start_bit = 8;
    ECOCAN.Kombi_01.fields{9}.bit_length = 4;
    ECOCAN.Kombi_01.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{9}.scale = 1;
    ECOCAN.Kombi_01.fields{9}.offset = 0;
    ECOCAN.Kombi_01.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{9}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{10}.name = 'KBI_Anzeigestatus_ACC';
    ECOCAN.Kombi_01.fields{10}.units = '';
    ECOCAN.Kombi_01.fields{10}.start_bit = 12;
    ECOCAN.Kombi_01.fields{10}.bit_length = 1;
    ECOCAN.Kombi_01.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{10}.scale = 1;
    ECOCAN.Kombi_01.fields{10}.offset = 0;
    ECOCAN.Kombi_01.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{10}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{11}.name = 'KBI_Anzeigestatus_GRA';
    ECOCAN.Kombi_01.fields{11}.units = '';
    ECOCAN.Kombi_01.fields{11}.start_bit = 13;
    ECOCAN.Kombi_01.fields{11}.bit_length = 2;
    ECOCAN.Kombi_01.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{11}.scale = 1;
    ECOCAN.Kombi_01.fields{11}.offset = 0;
    ECOCAN.Kombi_01.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{11}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{12}.name = 'KBI_Oeldruck_Schalter';
    ECOCAN.Kombi_01.fields{12}.units = '';
    ECOCAN.Kombi_01.fields{12}.start_bit = 15;
    ECOCAN.Kombi_01.fields{12}.bit_length = 1;
    ECOCAN.Kombi_01.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{12}.scale = 1;
    ECOCAN.Kombi_01.fields{12}.offset = 0;
    ECOCAN.Kombi_01.fields{12}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{12}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{13}.name = 'KBI_Tankwarnung';
    ECOCAN.Kombi_01.fields{13}.units = '';
    ECOCAN.Kombi_01.fields{13}.start_bit = 16;
    ECOCAN.Kombi_01.fields{13}.bit_length = 1;
    ECOCAN.Kombi_01.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{13}.scale = 1;
    ECOCAN.Kombi_01.fields{13}.offset = 0;
    ECOCAN.Kombi_01.fields{13}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{13}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{14}.name = 'KBI_MFA_v_Einheit_01';
    ECOCAN.Kombi_01.fields{14}.units = '';
    ECOCAN.Kombi_01.fields{14}.start_bit = 17;
    ECOCAN.Kombi_01.fields{14}.bit_length = 1;
    ECOCAN.Kombi_01.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{14}.scale = 1;
    ECOCAN.Kombi_01.fields{14}.offset = 0;
    ECOCAN.Kombi_01.fields{14}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{14}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{15}.name = 'KBI_im_Stellgliedtest';
    ECOCAN.Kombi_01.fields{15}.units = '';
    ECOCAN.Kombi_01.fields{15}.start_bit = 18;
    ECOCAN.Kombi_01.fields{15}.bit_length = 1;
    ECOCAN.Kombi_01.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{15}.scale = 1;
    ECOCAN.Kombi_01.fields{15}.offset = 0;
    ECOCAN.Kombi_01.fields{15}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{15}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{16}.name = 'KBI_Anzeigefehler_LDW';
    ECOCAN.Kombi_01.fields{16}.units = '';
    ECOCAN.Kombi_01.fields{16}.start_bit = 19;
    ECOCAN.Kombi_01.fields{16}.bit_length = 2;
    ECOCAN.Kombi_01.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{16}.scale = 1;
    ECOCAN.Kombi_01.fields{16}.offset = 0;
    ECOCAN.Kombi_01.fields{16}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{16}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{17}.name = 'KBI_Variante_USA';
    ECOCAN.Kombi_01.fields{17}.units = '';
    ECOCAN.Kombi_01.fields{17}.start_bit = 21;
    ECOCAN.Kombi_01.fields{17}.bit_length = 1;
    ECOCAN.Kombi_01.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{17}.scale = 1;
    ECOCAN.Kombi_01.fields{17}.offset = 0;
    ECOCAN.Kombi_01.fields{17}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{17}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{18}.name = 'KBI_Oeldruckwarnung';
    ECOCAN.Kombi_01.fields{18}.units = '';
    ECOCAN.Kombi_01.fields{18}.start_bit = 22;
    ECOCAN.Kombi_01.fields{18}.bit_length = 1;
    ECOCAN.Kombi_01.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{18}.scale = 1;
    ECOCAN.Kombi_01.fields{18}.offset = 0;
    ECOCAN.Kombi_01.fields{18}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{18}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{19}.name = 'KBI_Handbremse';
    ECOCAN.Kombi_01.fields{19}.units = '';
    ECOCAN.Kombi_01.fields{19}.start_bit = 23;
    ECOCAN.Kombi_01.fields{19}.bit_length = 1;
    ECOCAN.Kombi_01.fields{19}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{19}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{19}.scale = 1;
    ECOCAN.Kombi_01.fields{19}.offset = 0;
    ECOCAN.Kombi_01.fields{19}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{19}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{20}.name = 'KBI_V_Digital';
    ECOCAN.Kombi_01.fields{20}.units = '';
    ECOCAN.Kombi_01.fields{20}.start_bit = 24;
    ECOCAN.Kombi_01.fields{20}.bit_length = 9;
    ECOCAN.Kombi_01.fields{20}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{20}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{20}.scale = 1;
    ECOCAN.Kombi_01.fields{20}.offset = 0;
    ECOCAN.Kombi_01.fields{20}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{20}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{21}.name = 'KBI_PLA_in_Anzeige';
    ECOCAN.Kombi_01.fields{21}.units = '';
    ECOCAN.Kombi_01.fields{21}.start_bit = 33;
    ECOCAN.Kombi_01.fields{21}.bit_length = 1;
    ECOCAN.Kombi_01.fields{21}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{21}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{21}.scale = 1;
    ECOCAN.Kombi_01.fields{21}.offset = 0;
    ECOCAN.Kombi_01.fields{21}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{21}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{22}.name = 'KBI_Anzeigefehler_NV';
    ECOCAN.Kombi_01.fields{22}.units = '';
    ECOCAN.Kombi_01.fields{22}.start_bit = 34;
    ECOCAN.Kombi_01.fields{22}.bit_length = 1;
    ECOCAN.Kombi_01.fields{22}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{22}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{22}.scale = 1;
    ECOCAN.Kombi_01.fields{22}.offset = 0;
    ECOCAN.Kombi_01.fields{22}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{22}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{23}.name = 'KBI_Anzeigestatus_LIM';
    ECOCAN.Kombi_01.fields{23}.units = '';
    ECOCAN.Kombi_01.fields{23}.start_bit = 35;
    ECOCAN.Kombi_01.fields{23}.bit_length = 2;
    ECOCAN.Kombi_01.fields{23}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{23}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{23}.scale = 1;
    ECOCAN.Kombi_01.fields{23}.offset = 0;
    ECOCAN.Kombi_01.fields{23}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{23}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{24}.name = 'KBI_angez_Geschw';
    ECOCAN.Kombi_01.fields{24}.units = 'Unit_KiloMeterPerHour';
    ECOCAN.Kombi_01.fields{24}.start_bit = 48;
    ECOCAN.Kombi_01.fields{24}.bit_length = 10;
    ECOCAN.Kombi_01.fields{24}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{24}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{24}.scale = 0.32;
    ECOCAN.Kombi_01.fields{24}.offset = 0;
    ECOCAN.Kombi_01.fields{24}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{24}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{25}.name = 'KBI_Einheit_Tacho';
    ECOCAN.Kombi_01.fields{25}.units = '';
    ECOCAN.Kombi_01.fields{25}.start_bit = 58;
    ECOCAN.Kombi_01.fields{25}.bit_length = 1;
    ECOCAN.Kombi_01.fields{25}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{25}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{25}.scale = 1;
    ECOCAN.Kombi_01.fields{25}.offset = 0;
    ECOCAN.Kombi_01.fields{25}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{25}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{26}.name = 'KBI_Konsistenz_ACC';
    ECOCAN.Kombi_01.fields{26}.units = '';
    ECOCAN.Kombi_01.fields{26}.start_bit = 59;
    ECOCAN.Kombi_01.fields{26}.bit_length = 1;
    ECOCAN.Kombi_01.fields{26}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{26}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{26}.scale = 1;
    ECOCAN.Kombi_01.fields{26}.offset = 0;
    ECOCAN.Kombi_01.fields{26}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{26}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{27}.name = 'KBI_Fehler_Anzeige_ACC';
    ECOCAN.Kombi_01.fields{27}.units = '';
    ECOCAN.Kombi_01.fields{27}.start_bit = 60;
    ECOCAN.Kombi_01.fields{27}.bit_length = 1;
    ECOCAN.Kombi_01.fields{27}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{27}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{27}.scale = 1;
    ECOCAN.Kombi_01.fields{27}.offset = 0;
    ECOCAN.Kombi_01.fields{27}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{27}.multiplex_value = 0;

    ECOCAN.Kombi_01.fields{28}.name = 'KBI_Anzeigefehler_SWA';
    ECOCAN.Kombi_01.fields{28}.units = '';
    ECOCAN.Kombi_01.fields{28}.start_bit = 61;
    ECOCAN.Kombi_01.fields{28}.bit_length = 2;
    ECOCAN.Kombi_01.fields{28}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Kombi_01.fields{28}.data_type = 'UNSIGNED';
    ECOCAN.Kombi_01.fields{28}.scale = 1;
    ECOCAN.Kombi_01.fields{28}.offset = 0;
    ECOCAN.Kombi_01.fields{28}.multiplex_type = 'Standard';
    ECOCAN.Kombi_01.fields{28}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:38
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('20F');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:39
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('1A0');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Brake
%Message Number:40
case 'Brake'
    ECOCAN.Brake = struct;
    ECOCAN.Brake.name = 'Brake';
    ECOCAN.Brake.description = 'Brake';
    ECOCAN.Brake.protocol  = 'ECOCAN';
    ECOCAN.Brake.id = hex2dec('176');
    ECOCAN.Brake.idext = 'STANDARD';
    ECOCAN.Brake.payload_size =8;
    ECOCAN.Brake.interval =-1;

    ECOCAN.Brake.fields{1}.name = 'Brake_pedal_pos';
    ECOCAN.Brake.fields{1}.units = '-';
    ECOCAN.Brake.fields{1}.start_bit = 40;
    ECOCAN.Brake.fields{1}.bit_length = 8;
    ECOCAN.Brake.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Brake.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Brake.fields{1}.scale = 1;
    ECOCAN.Brake.fields{1}.offset = 0;
    ECOCAN.Brake.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Brake.fields{1}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:41
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('153');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:42
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('14E');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:43
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('149');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:44
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('148');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:45
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('144');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Getriebe_13
%Message Number:46
case 'Getriebe_13'
    ECOCAN.Getriebe_13 = struct;
    ECOCAN.Getriebe_13.name = 'Getriebe_13';
    ECOCAN.Getriebe_13.description = 'Getriebe_13';
    ECOCAN.Getriebe_13.protocol  = 'ECOCAN';
    ECOCAN.Getriebe_13.id = hex2dec('12D');
    ECOCAN.Getriebe_13.idext = 'STANDARD';
    ECOCAN.Getriebe_13.payload_size =8;
    ECOCAN.Getriebe_13.interval =-1;

    ECOCAN.Getriebe_13.fields{1}.name = 'Getriebe_13_CRC';
    ECOCAN.Getriebe_13.fields{1}.units = '';
    ECOCAN.Getriebe_13.fields{1}.start_bit = 0;
    ECOCAN.Getriebe_13.fields{1}.bit_length = 8;
    ECOCAN.Getriebe_13.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_13.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_13.fields{1}.scale = 1;
    ECOCAN.Getriebe_13.fields{1}.offset = 0;
    ECOCAN.Getriebe_13.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_13.fields{1}.multiplex_value = 0;

    ECOCAN.Getriebe_13.fields{2}.name = 'Getriebe_13_BZ';
    ECOCAN.Getriebe_13.fields{2}.units = '';
    ECOCAN.Getriebe_13.fields{2}.start_bit = 8;
    ECOCAN.Getriebe_13.fields{2}.bit_length = 4;
    ECOCAN.Getriebe_13.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_13.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_13.fields{2}.scale = 1;
    ECOCAN.Getriebe_13.fields{2}.offset = 0;
    ECOCAN.Getriebe_13.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_13.fields{2}.multiplex_value = 0;

    ECOCAN.Getriebe_13.fields{3}.name = 'GE_StartStopp_Info';
    ECOCAN.Getriebe_13.fields{3}.units = '';
    ECOCAN.Getriebe_13.fields{3}.start_bit = 12;
    ECOCAN.Getriebe_13.fields{3}.bit_length = 2;
    ECOCAN.Getriebe_13.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_13.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_13.fields{3}.scale = 1;
    ECOCAN.Getriebe_13.fields{3}.offset = 0;
    ECOCAN.Getriebe_13.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_13.fields{3}.multiplex_value = 0;

    ECOCAN.Getriebe_13.fields{4}.name = 'GE_Langfr_Schutzmom_02';
    ECOCAN.Getriebe_13.fields{4}.units = 'Unit_NewtoMeter';
    ECOCAN.Getriebe_13.fields{4}.start_bit = 14;
    ECOCAN.Getriebe_13.fields{4}.bit_length = 9;
    ECOCAN.Getriebe_13.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_13.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_13.fields{4}.scale = 1;
    ECOCAN.Getriebe_13.fields{4}.offset = 0;
    ECOCAN.Getriebe_13.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_13.fields{4}.multiplex_value = 0;

    ECOCAN.Getriebe_13.fields{5}.name = 'GE_InputSpeed';
    ECOCAN.Getriebe_13.fields{5}.units = 'Unit_MinutInver';
    ECOCAN.Getriebe_13.fields{5}.start_bit = 48;
    ECOCAN.Getriebe_13.fields{5}.bit_length = 14;
    ECOCAN.Getriebe_13.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_13.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_13.fields{5}.scale = 1;
    ECOCAN.Getriebe_13.fields{5}.offset = 0;
    ECOCAN.Getriebe_13.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_13.fields{5}.multiplex_value = 0;

    ECOCAN.Getriebe_13.fields{6}.name = 'GE_EmergencyRun';
    ECOCAN.Getriebe_13.fields{6}.units = '';
    ECOCAN.Getriebe_13.fields{6}.start_bit = 62;
    ECOCAN.Getriebe_13.fields{6}.bit_length = 1;
    ECOCAN.Getriebe_13.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_13.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_13.fields{6}.scale = 1;
    ECOCAN.Getriebe_13.fields{6}.offset = 0;
    ECOCAN.Getriebe_13.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_13.fields{6}.multiplex_value = 0;

    ECOCAN.Getriebe_13.fields{7}.name = 'GE_Freig_Langfr_Schutzmom';
    ECOCAN.Getriebe_13.fields{7}.units = '';
    ECOCAN.Getriebe_13.fields{7}.start_bit = 63;
    ECOCAN.Getriebe_13.fields{7}.bit_length = 1;
    ECOCAN.Getriebe_13.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_13.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_13.fields{7}.scale = 1;
    ECOCAN.Getriebe_13.fields{7}.offset = 0;
    ECOCAN.Getriebe_13.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_13.fields{7}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:GRA_ACC_01
%Message Number:47
case 'GRA_ACC_01'
    ECOCAN.GRA_ACC_01 = struct;
    ECOCAN.GRA_ACC_01.name = 'GRA_ACC_01';
    ECOCAN.GRA_ACC_01.description = 'GRA_ACC_01';
    ECOCAN.GRA_ACC_01.protocol  = 'ECOCAN';
    ECOCAN.GRA_ACC_01.id = hex2dec('12B');
    ECOCAN.GRA_ACC_01.idext = 'STANDARD';
    ECOCAN.GRA_ACC_01.payload_size =8;
    ECOCAN.GRA_ACC_01.interval =-1;

    ECOCAN.GRA_ACC_01.fields{1}.name = 'CHECKSUM';
    ECOCAN.GRA_ACC_01.fields{1}.units = '';
    ECOCAN.GRA_ACC_01.fields{1}.start_bit = 0;
    ECOCAN.GRA_ACC_01.fields{1}.bit_length = 8;
    ECOCAN.GRA_ACC_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{1}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{1}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{1}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{2}.name = 'COUNTER';
    ECOCAN.GRA_ACC_01.fields{2}.units = '';
    ECOCAN.GRA_ACC_01.fields{2}.start_bit = 8;
    ECOCAN.GRA_ACC_01.fields{2}.bit_length = 4;
    ECOCAN.GRA_ACC_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{2}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{2}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{2}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{3}.name = 'GRA_MainSwitch';
    ECOCAN.GRA_ACC_01.fields{3}.units = '';
    ECOCAN.GRA_ACC_01.fields{3}.start_bit = 12;
    ECOCAN.GRA_ACC_01.fields{3}.bit_length = 1;
    ECOCAN.GRA_ACC_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{3}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{3}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{3}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{4}.name = 'GRA_Abort';
    ECOCAN.GRA_ACC_01.fields{4}.units = '';
    ECOCAN.GRA_ACC_01.fields{4}.start_bit = 13;
    ECOCAN.GRA_ACC_01.fields{4}.bit_length = 1;
    ECOCAN.GRA_ACC_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{4}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{4}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{4}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{5}.name = 'GRA_Typ_MainSwitch';
    ECOCAN.GRA_ACC_01.fields{5}.units = '';
    ECOCAN.GRA_ACC_01.fields{5}.start_bit = 14;
    ECOCAN.GRA_ACC_01.fields{5}.bit_length = 1;
    ECOCAN.GRA_ACC_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{5}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{5}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{5}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{6}.name = 'GRA_Limiter';
    ECOCAN.GRA_ACC_01.fields{6}.units = '';
    ECOCAN.GRA_ACC_01.fields{6}.start_bit = 15;
    ECOCAN.GRA_ACC_01.fields{6}.bit_length = 1;
    ECOCAN.GRA_ACC_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{6}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{6}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{6}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{6}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{7}.name = 'GRA_Tip_Setzen';
    ECOCAN.GRA_ACC_01.fields{7}.units = '';
    ECOCAN.GRA_ACC_01.fields{7}.start_bit = 16;
    ECOCAN.GRA_ACC_01.fields{7}.bit_length = 1;
    ECOCAN.GRA_ACC_01.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{7}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{7}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{7}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{7}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{8}.name = 'GRA_Tip_Hoch';
    ECOCAN.GRA_ACC_01.fields{8}.units = '';
    ECOCAN.GRA_ACC_01.fields{8}.start_bit = 17;
    ECOCAN.GRA_ACC_01.fields{8}.bit_length = 1;
    ECOCAN.GRA_ACC_01.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{8}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{8}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{8}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{8}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{9}.name = 'GRA_Tip_Runter';
    ECOCAN.GRA_ACC_01.fields{9}.units = '';
    ECOCAN.GRA_ACC_01.fields{9}.start_bit = 18;
    ECOCAN.GRA_ACC_01.fields{9}.bit_length = 1;
    ECOCAN.GRA_ACC_01.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{9}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{9}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{9}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{9}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{10}.name = 'GRA_Tip_Resumption';
    ECOCAN.GRA_ACC_01.fields{10}.units = '';
    ECOCAN.GRA_ACC_01.fields{10}.start_bit = 19;
    ECOCAN.GRA_ACC_01.fields{10}.bit_length = 1;
    ECOCAN.GRA_ACC_01.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{10}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{10}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{10}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{10}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{11}.name = 'GRA_Adjustment_time_gap';
    ECOCAN.GRA_ACC_01.fields{11}.units = '';
    ECOCAN.GRA_ACC_01.fields{11}.start_bit = 20;
    ECOCAN.GRA_ACC_01.fields{11}.bit_length = 2;
    ECOCAN.GRA_ACC_01.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{11}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{11}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{11}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{11}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{12}.name = 'GRA_Coding';
    ECOCAN.GRA_ACC_01.fields{12}.units = '';
    ECOCAN.GRA_ACC_01.fields{12}.start_bit = 22;
    ECOCAN.GRA_ACC_01.fields{12}.bit_length = 2;
    ECOCAN.GRA_ACC_01.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{12}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{12}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{12}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{12}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{13}.name = 'GRA_Error';
    ECOCAN.GRA_ACC_01.fields{13}.units = '';
    ECOCAN.GRA_ACC_01.fields{13}.start_bit = 24;
    ECOCAN.GRA_ACC_01.fields{13}.bit_length = 1;
    ECOCAN.GRA_ACC_01.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{13}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{13}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{13}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{13}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{14}.name = 'GRA_Typ468';
    ECOCAN.GRA_ACC_01.fields{14}.units = '';
    ECOCAN.GRA_ACC_01.fields{14}.start_bit = 25;
    ECOCAN.GRA_ACC_01.fields{14}.bit_length = 2;
    ECOCAN.GRA_ACC_01.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{14}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{14}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{14}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{14}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{15}.name = 'GRA_Tip_Step_2';
    ECOCAN.GRA_ACC_01.fields{15}.units = '';
    ECOCAN.GRA_ACC_01.fields{15}.start_bit = 27;
    ECOCAN.GRA_ACC_01.fields{15}.bit_length = 1;
    ECOCAN.GRA_ACC_01.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{15}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{15}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{15}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{15}.multiplex_value = 0;

    ECOCAN.GRA_ACC_01.fields{16}.name = 'GRA_ButtonTypeInfo';
    ECOCAN.GRA_ACC_01.fields{16}.units = '';
    ECOCAN.GRA_ACC_01.fields{16}.start_bit = 28;
    ECOCAN.GRA_ACC_01.fields{16}.bit_length = 2;
    ECOCAN.GRA_ACC_01.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GRA_ACC_01.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.GRA_ACC_01.fields{16}.scale = 1;
    ECOCAN.GRA_ACC_01.fields{16}.offset = 0;
    ECOCAN.GRA_ACC_01.fields{16}.multiplex_type = 'Standard';
    ECOCAN.GRA_ACC_01.fields{16}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Motor_20
%Message Number:48
case 'Motor_20'
    ECOCAN.Motor_20 = struct;
    ECOCAN.Motor_20.name = 'Motor_20';
    ECOCAN.Motor_20.description = 'Motor_20';
    ECOCAN.Motor_20.protocol  = 'ECOCAN';
    ECOCAN.Motor_20.id = hex2dec('121');
    ECOCAN.Motor_20.idext = 'STANDARD';
    ECOCAN.Motor_20.payload_size =8;
    ECOCAN.Motor_20.interval =-1;

    ECOCAN.Motor_20.fields{1}.name = 'CHECKSUM';
    ECOCAN.Motor_20.fields{1}.units = '';
    ECOCAN.Motor_20.fields{1}.start_bit = 0;
    ECOCAN.Motor_20.fields{1}.bit_length = 8;
    ECOCAN.Motor_20.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_20.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Motor_20.fields{1}.scale = 1;
    ECOCAN.Motor_20.fields{1}.offset = 0;
    ECOCAN.Motor_20.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Motor_20.fields{1}.multiplex_value = 0;

    ECOCAN.Motor_20.fields{2}.name = 'COUNTER';
    ECOCAN.Motor_20.fields{2}.units = '';
    ECOCAN.Motor_20.fields{2}.start_bit = 8;
    ECOCAN.Motor_20.fields{2}.bit_length = 4;
    ECOCAN.Motor_20.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_20.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Motor_20.fields{2}.scale = 1;
    ECOCAN.Motor_20.fields{2}.offset = 0;
    ECOCAN.Motor_20.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Motor_20.fields{2}.multiplex_value = 0;

    ECOCAN.Motor_20.fields{3}.name = 'MO_AcceleratorRawValue_01';
    ECOCAN.Motor_20.fields{3}.units = 'Unit_PerCent';
    ECOCAN.Motor_20.fields{3}.start_bit = 12;
    ECOCAN.Motor_20.fields{3}.bit_length = 8;
    ECOCAN.Motor_20.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_20.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Motor_20.fields{3}.scale = 0.4;
    ECOCAN.Motor_20.fields{3}.offset = 0;
    ECOCAN.Motor_20.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Motor_20.fields{3}.multiplex_value = 0;

    ECOCAN.Motor_20.fields{4}.name = 'MO_QBit_AcceleratorPedalValue_01';
    ECOCAN.Motor_20.fields{4}.units = '';
    ECOCAN.Motor_20.fields{4}.start_bit = 20;
    ECOCAN.Motor_20.fields{4}.bit_length = 1;
    ECOCAN.Motor_20.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_20.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Motor_20.fields{4}.scale = 1;
    ECOCAN.Motor_20.fields{4}.offset = 0;
    ECOCAN.Motor_20.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Motor_20.fields{4}.multiplex_value = 0;

    ECOCAN.Motor_20.fields{5}.name = 'MO_AcceleratorPedalGradient';
    ECOCAN.Motor_20.fields{5}.units = 'Unit_PerCentPerSecon';
    ECOCAN.Motor_20.fields{5}.start_bit = 21;
    ECOCAN.Motor_20.fields{5}.bit_length = 8;
    ECOCAN.Motor_20.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_20.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Motor_20.fields{5}.scale = 25;
    ECOCAN.Motor_20.fields{5}.offset = 0;
    ECOCAN.Motor_20.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Motor_20.fields{5}.multiplex_value = 0;

    ECOCAN.Motor_20.fields{6}.name = 'MO_Sig_AcceleratorPedalGradient';
    ECOCAN.Motor_20.fields{6}.units = '';
    ECOCAN.Motor_20.fields{6}.start_bit = 29;
    ECOCAN.Motor_20.fields{6}.bit_length = 1;
    ECOCAN.Motor_20.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_20.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Motor_20.fields{6}.scale = 1;
    ECOCAN.Motor_20.fields{6}.offset = 0;
    ECOCAN.Motor_20.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Motor_20.fields{6}.multiplex_value = 0;

    ECOCAN.Motor_20.fields{7}.name = 'MO_rel_ManifoldPressure';
    ECOCAN.Motor_20.fields{7}.units = 'Unit_MilliBar';
    ECOCAN.Motor_20.fields{7}.start_bit = 30;
    ECOCAN.Motor_20.fields{7}.bit_length = 6;
    ECOCAN.Motor_20.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_20.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Motor_20.fields{7}.scale = 18;
    ECOCAN.Motor_20.fields{7}.offset = 0;
    ECOCAN.Motor_20.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Motor_20.fields{7}.multiplex_value = 0;

    ECOCAN.Motor_20.fields{8}.name = 'MO_rel_ManifoldPressure_gem_err';
    ECOCAN.Motor_20.fields{8}.units = '';
    ECOCAN.Motor_20.fields{8}.start_bit = 36;
    ECOCAN.Motor_20.fields{8}.bit_length = 1;
    ECOCAN.Motor_20.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_20.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Motor_20.fields{8}.scale = 1;
    ECOCAN.Motor_20.fields{8}.offset = 0;
    ECOCAN.Motor_20.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Motor_20.fields{8}.multiplex_value = 0;

    ECOCAN.Motor_20.fields{9}.name = 'MO_Moment_im_Neutral';
    ECOCAN.Motor_20.fields{9}.units = '';
    ECOCAN.Motor_20.fields{9}.start_bit = 37;
    ECOCAN.Motor_20.fields{9}.bit_length = 1;
    ECOCAN.Motor_20.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_20.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Motor_20.fields{9}.scale = 1;
    ECOCAN.Motor_20.fields{9}.offset = 0;
    ECOCAN.Motor_20.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Motor_20.fields{9}.multiplex_value = 0;

    ECOCAN.Motor_20.fields{10}.name = 'MO_FuelCutOff';
    ECOCAN.Motor_20.fields{10}.units = '';
    ECOCAN.Motor_20.fields{10}.start_bit = 38;
    ECOCAN.Motor_20.fields{10}.bit_length = 1;
    ECOCAN.Motor_20.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_20.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Motor_20.fields{10}.scale = 1;
    ECOCAN.Motor_20.fields{10}.offset = 0;
    ECOCAN.Motor_20.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Motor_20.fields{10}.multiplex_value = 0;

    ECOCAN.Motor_20.fields{11}.name = 'MO_Target_Speed_Idle';
    ECOCAN.Motor_20.fields{11}.units = 'Unit_MinutInver';
    ECOCAN.Motor_20.fields{11}.start_bit = 40;
    ECOCAN.Motor_20.fields{11}.bit_length = 8;
    ECOCAN.Motor_20.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_20.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Motor_20.fields{11}.scale = 10;
    ECOCAN.Motor_20.fields{11}.offset = 0;
    ECOCAN.Motor_20.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Motor_20.fields{11}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:TSK_06
%Message Number:49
case 'TSK_06'
    ECOCAN.TSK_06 = struct;
    ECOCAN.TSK_06.name = 'TSK_06';
    ECOCAN.TSK_06.description = 'TSK_06';
    ECOCAN.TSK_06.protocol  = 'ECOCAN';
    ECOCAN.TSK_06.id = hex2dec('120');
    ECOCAN.TSK_06.idext = 'STANDARD';
    ECOCAN.TSK_06.payload_size =8;
    ECOCAN.TSK_06.interval =-1;

    ECOCAN.TSK_06.fields{1}.name = 'CHECKSUM';
    ECOCAN.TSK_06.fields{1}.units = '';
    ECOCAN.TSK_06.fields{1}.start_bit = 0;
    ECOCAN.TSK_06.fields{1}.bit_length = 8;
    ECOCAN.TSK_06.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_06.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.TSK_06.fields{1}.scale = 1;
    ECOCAN.TSK_06.fields{1}.offset = 0;
    ECOCAN.TSK_06.fields{1}.multiplex_type = 'Standard';
    ECOCAN.TSK_06.fields{1}.multiplex_value = 0;

    ECOCAN.TSK_06.fields{2}.name = 'COUNTER';
    ECOCAN.TSK_06.fields{2}.units = '';
    ECOCAN.TSK_06.fields{2}.start_bit = 8;
    ECOCAN.TSK_06.fields{2}.bit_length = 4;
    ECOCAN.TSK_06.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_06.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.TSK_06.fields{2}.scale = 1;
    ECOCAN.TSK_06.fields{2}.offset = 0;
    ECOCAN.TSK_06.fields{2}.multiplex_type = 'Standard';
    ECOCAN.TSK_06.fields{2}.multiplex_value = 0;

    ECOCAN.TSK_06.fields{3}.name = 'TSK_WheelBrakeTorque';
    ECOCAN.TSK_06.fields{3}.units = 'Unit_NewtoMeter';
    ECOCAN.TSK_06.fields{3}.start_bit = 12;
    ECOCAN.TSK_06.fields{3}.bit_length = 12;
    ECOCAN.TSK_06.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_06.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.TSK_06.fields{3}.scale = 8;
    ECOCAN.TSK_06.fields{3}.offset = 0;
    ECOCAN.TSK_06.fields{3}.multiplex_type = 'Standard';
    ECOCAN.TSK_06.fields{3}.multiplex_value = 0;

    ECOCAN.TSK_06.fields{4}.name = 'TSK_Status';
    ECOCAN.TSK_06.fields{4}.units = '';
    ECOCAN.TSK_06.fields{4}.start_bit = 24;
    ECOCAN.TSK_06.fields{4}.bit_length = 3;
    ECOCAN.TSK_06.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_06.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.TSK_06.fields{4}.scale = 1;
    ECOCAN.TSK_06.fields{4}.offset = 0;
    ECOCAN.TSK_06.fields{4}.multiplex_type = 'Standard';
    ECOCAN.TSK_06.fields{4}.multiplex_value = 0;

    ECOCAN.TSK_06.fields{5}.name = 'TSK_v_Limitation_aktiv';
    ECOCAN.TSK_06.fields{5}.units = '';
    ECOCAN.TSK_06.fields{5}.start_bit = 27;
    ECOCAN.TSK_06.fields{5}.bit_length = 1;
    ECOCAN.TSK_06.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_06.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.TSK_06.fields{5}.scale = 1;
    ECOCAN.TSK_06.fields{5}.offset = 0;
    ECOCAN.TSK_06.fields{5}.multiplex_type = 'Standard';
    ECOCAN.TSK_06.fields{5}.multiplex_value = 0;

    ECOCAN.TSK_06.fields{6}.name = 'TSK_Standby_Anf_ESP';
    ECOCAN.TSK_06.fields{6}.units = '';
    ECOCAN.TSK_06.fields{6}.start_bit = 28;
    ECOCAN.TSK_06.fields{6}.bit_length = 1;
    ECOCAN.TSK_06.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_06.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.TSK_06.fields{6}.scale = 1;
    ECOCAN.TSK_06.fields{6}.offset = 0;
    ECOCAN.TSK_06.fields{6}.multiplex_type = 'Standard';
    ECOCAN.TSK_06.fields{6}.multiplex_value = 0;

    ECOCAN.TSK_06.fields{7}.name = 'TSK_Freig_Verzoeg_Anf';
    ECOCAN.TSK_06.fields{7}.units = '';
    ECOCAN.TSK_06.fields{7}.start_bit = 30;
    ECOCAN.TSK_06.fields{7}.bit_length = 1;
    ECOCAN.TSK_06.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_06.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.TSK_06.fields{7}.scale = 1;
    ECOCAN.TSK_06.fields{7}.offset = 0;
    ECOCAN.TSK_06.fields{7}.multiplex_type = 'Standard';
    ECOCAN.TSK_06.fields{7}.multiplex_value = 0;

    ECOCAN.TSK_06.fields{8}.name = 'TSK_Limiter_Selected';
    ECOCAN.TSK_06.fields{8}.units = '';
    ECOCAN.TSK_06.fields{8}.start_bit = 31;
    ECOCAN.TSK_06.fields{8}.bit_length = 1;
    ECOCAN.TSK_06.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_06.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.TSK_06.fields{8}.scale = 1;
    ECOCAN.TSK_06.fields{8}.offset = 0;
    ECOCAN.TSK_06.fields{8}.multiplex_type = 'Standard';
    ECOCAN.TSK_06.fields{8}.multiplex_value = 0;

    ECOCAN.TSK_06.fields{9}.name = 'TSK_ax_Transmission_02';
    ECOCAN.TSK_06.fields{9}.units = 'Unit_MeterPerSeconSquar';
    ECOCAN.TSK_06.fields{9}.start_bit = 48;
    ECOCAN.TSK_06.fields{9}.bit_length = 9;
    ECOCAN.TSK_06.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_06.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.TSK_06.fields{9}.scale = 0.024;
    ECOCAN.TSK_06.fields{9}.offset = -2.016;
    ECOCAN.TSK_06.fields{9}.multiplex_type = 'Standard';
    ECOCAN.TSK_06.fields{9}.multiplex_value = 0;

    ECOCAN.TSK_06.fields{10}.name = 'TSK_Compulsory_ESP';
    ECOCAN.TSK_06.fields{10}.units = '';
    ECOCAN.TSK_06.fields{10}.start_bit = 57;
    ECOCAN.TSK_06.fields{10}.bit_length = 1;
    ECOCAN.TSK_06.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_06.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.TSK_06.fields{10}.scale = 1;
    ECOCAN.TSK_06.fields{10}.offset = 0;
    ECOCAN.TSK_06.fields{10}.multiplex_type = 'Standard';
    ECOCAN.TSK_06.fields{10}.multiplex_value = 0;

    ECOCAN.TSK_06.fields{11}.name = 'TSK_zul_RuleDeviation';
    ECOCAN.TSK_06.fields{11}.units = 'Unit_MeterPerSeconSquar';
    ECOCAN.TSK_06.fields{11}.start_bit = 58;
    ECOCAN.TSK_06.fields{11}.bit_length = 6;
    ECOCAN.TSK_06.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.TSK_06.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.TSK_06.fields{11}.scale = 0.024;
    ECOCAN.TSK_06.fields{11}.offset = 0;
    ECOCAN.TSK_06.fields{11}.multiplex_type = 'Standard';
    ECOCAN.TSK_06.fields{11}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:50
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('11B');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:ESP_10
%Message Number:51
case 'ESP_10'
    ECOCAN.ESP_10 = struct;
    ECOCAN.ESP_10.name = 'ESP_10';
    ECOCAN.ESP_10.description = 'ESP_10';
    ECOCAN.ESP_10.protocol  = 'ECOCAN';
    ECOCAN.ESP_10.id = hex2dec('116');
    ECOCAN.ESP_10.idext = 'STANDARD';
    ECOCAN.ESP_10.payload_size =8;
    ECOCAN.ESP_10.interval =-1;

    ECOCAN.ESP_10.fields{1}.name = 'ESP_10_CRC';
    ECOCAN.ESP_10.fields{1}.units = '';
    ECOCAN.ESP_10.fields{1}.start_bit = 0;
    ECOCAN.ESP_10.fields{1}.bit_length = 8;
    ECOCAN.ESP_10.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{1}.scale = 1;
    ECOCAN.ESP_10.fields{1}.offset = 0;
    ECOCAN.ESP_10.fields{1}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{1}.multiplex_value = 0;

    ECOCAN.ESP_10.fields{2}.name = 'ESP_10_BZ';
    ECOCAN.ESP_10.fields{2}.units = '';
    ECOCAN.ESP_10.fields{2}.start_bit = 8;
    ECOCAN.ESP_10.fields{2}.bit_length = 4;
    ECOCAN.ESP_10.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{2}.scale = 1;
    ECOCAN.ESP_10.fields{2}.offset = 0;
    ECOCAN.ESP_10.fields{2}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{2}.multiplex_value = 0;

    ECOCAN.ESP_10.fields{3}.name = 'ESP_QBit_DisplacementPulse_FL';
    ECOCAN.ESP_10.fields{3}.units = '';
    ECOCAN.ESP_10.fields{3}.start_bit = 12;
    ECOCAN.ESP_10.fields{3}.bit_length = 1;
    ECOCAN.ESP_10.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{3}.scale = 1;
    ECOCAN.ESP_10.fields{3}.offset = 0;
    ECOCAN.ESP_10.fields{3}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{3}.multiplex_value = 0;

    ECOCAN.ESP_10.fields{4}.name = 'ESP_QBit_DisplacementPulse_FR';
    ECOCAN.ESP_10.fields{4}.units = '';
    ECOCAN.ESP_10.fields{4}.start_bit = 13;
    ECOCAN.ESP_10.fields{4}.bit_length = 1;
    ECOCAN.ESP_10.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{4}.scale = 1;
    ECOCAN.ESP_10.fields{4}.offset = 0;
    ECOCAN.ESP_10.fields{4}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{4}.multiplex_value = 0;

    ECOCAN.ESP_10.fields{5}.name = 'ESP_QBit_DisplacementPulse_BL';
    ECOCAN.ESP_10.fields{5}.units = '';
    ECOCAN.ESP_10.fields{5}.start_bit = 14;
    ECOCAN.ESP_10.fields{5}.bit_length = 1;
    ECOCAN.ESP_10.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{5}.scale = 1;
    ECOCAN.ESP_10.fields{5}.offset = 0;
    ECOCAN.ESP_10.fields{5}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{5}.multiplex_value = 0;

    ECOCAN.ESP_10.fields{6}.name = 'ESP_QBit_DisplacementPulse_BR';
    ECOCAN.ESP_10.fields{6}.units = '';
    ECOCAN.ESP_10.fields{6}.start_bit = 15;
    ECOCAN.ESP_10.fields{6}.bit_length = 1;
    ECOCAN.ESP_10.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{6}.scale = 1;
    ECOCAN.ESP_10.fields{6}.offset = 0;
    ECOCAN.ESP_10.fields{6}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{6}.multiplex_value = 0;

    ECOCAN.ESP_10.fields{7}.name = 'ESP_DisplacementPulse_FL';
    ECOCAN.ESP_10.fields{7}.units = '';
    ECOCAN.ESP_10.fields{7}.start_bit = 16;
    ECOCAN.ESP_10.fields{7}.bit_length = 10;
    ECOCAN.ESP_10.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{7}.scale = 1;
    ECOCAN.ESP_10.fields{7}.offset = 0;
    ECOCAN.ESP_10.fields{7}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{7}.multiplex_value = 0;

    ECOCAN.ESP_10.fields{8}.name = 'ESP_DisplacementPulse_FR';
    ECOCAN.ESP_10.fields{8}.units = '';
    ECOCAN.ESP_10.fields{8}.start_bit = 26;
    ECOCAN.ESP_10.fields{8}.bit_length = 10;
    ECOCAN.ESP_10.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{8}.scale = 1;
    ECOCAN.ESP_10.fields{8}.offset = 0;
    ECOCAN.ESP_10.fields{8}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{8}.multiplex_value = 0;

    ECOCAN.ESP_10.fields{9}.name = 'ESP_DisplacementPulse_BL';
    ECOCAN.ESP_10.fields{9}.units = '';
    ECOCAN.ESP_10.fields{9}.start_bit = 36;
    ECOCAN.ESP_10.fields{9}.bit_length = 10;
    ECOCAN.ESP_10.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{9}.scale = 1;
    ECOCAN.ESP_10.fields{9}.offset = 0;
    ECOCAN.ESP_10.fields{9}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{9}.multiplex_value = 0;

    ECOCAN.ESP_10.fields{10}.name = 'ESP_DisplacementPulse_BR';
    ECOCAN.ESP_10.fields{10}.units = '';
    ECOCAN.ESP_10.fields{10}.start_bit = 46;
    ECOCAN.ESP_10.fields{10}.bit_length = 10;
    ECOCAN.ESP_10.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{10}.scale = 1;
    ECOCAN.ESP_10.fields{10}.offset = 0;
    ECOCAN.ESP_10.fields{10}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{10}.multiplex_value = 0;

    ECOCAN.ESP_10.fields{11}.name = 'ESP_FL_DirectionofTravel';
    ECOCAN.ESP_10.fields{11}.units = '';
    ECOCAN.ESP_10.fields{11}.start_bit = 56;
    ECOCAN.ESP_10.fields{11}.bit_length = 2;
    ECOCAN.ESP_10.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{11}.scale = 1;
    ECOCAN.ESP_10.fields{11}.offset = 0;
    ECOCAN.ESP_10.fields{11}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{11}.multiplex_value = 0;

    ECOCAN.ESP_10.fields{12}.name = 'ESP_FR_DirectionofTravel';
    ECOCAN.ESP_10.fields{12}.units = '';
    ECOCAN.ESP_10.fields{12}.start_bit = 58;
    ECOCAN.ESP_10.fields{12}.bit_length = 2;
    ECOCAN.ESP_10.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{12}.scale = 1;
    ECOCAN.ESP_10.fields{12}.offset = 0;
    ECOCAN.ESP_10.fields{12}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{12}.multiplex_value = 0;

    ECOCAN.ESP_10.fields{13}.name = 'ESP_BL_DirectionofTravel';
    ECOCAN.ESP_10.fields{13}.units = '';
    ECOCAN.ESP_10.fields{13}.start_bit = 60;
    ECOCAN.ESP_10.fields{13}.bit_length = 2;
    ECOCAN.ESP_10.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{13}.scale = 1;
    ECOCAN.ESP_10.fields{13}.offset = 0;
    ECOCAN.ESP_10.fields{13}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{13}.multiplex_value = 0;

    ECOCAN.ESP_10.fields{14}.name = 'ESP_BR_DirectionofTravel';
    ECOCAN.ESP_10.fields{14}.units = '';
    ECOCAN.ESP_10.fields{14}.start_bit = 62;
    ECOCAN.ESP_10.fields{14}.bit_length = 2;
    ECOCAN.ESP_10.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_10.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.ESP_10.fields{14}.scale = 1;
    ECOCAN.ESP_10.fields{14}.offset = 0;
    ECOCAN.ESP_10.fields{14}.multiplex_type = 'Standard';
    ECOCAN.ESP_10.fields{14}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Motor_04
%Message Number:52
case 'Motor_04'
    ECOCAN.Motor_04 = struct;
    ECOCAN.Motor_04.name = 'Motor_04';
    ECOCAN.Motor_04.description = 'Motor_04';
    ECOCAN.Motor_04.protocol  = 'ECOCAN';
    ECOCAN.Motor_04.id = hex2dec('107');
    ECOCAN.Motor_04.idext = 'STANDARD';
    ECOCAN.Motor_04.payload_size =8;
    ECOCAN.Motor_04.interval =-1;

    ECOCAN.Motor_04.fields{1}.name = 'MO_Is_gear';
    ECOCAN.Motor_04.fields{1}.units = '';
    ECOCAN.Motor_04.fields{1}.start_bit = 8;
    ECOCAN.Motor_04.fields{1}.bit_length = 4;
    ECOCAN.Motor_04.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_04.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Motor_04.fields{1}.scale = 1;
    ECOCAN.Motor_04.fields{1}.offset = 0;
    ECOCAN.Motor_04.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Motor_04.fields{1}.multiplex_value = 0;

    ECOCAN.Motor_04.fields{2}.name = 'MO_target_gear';
    ECOCAN.Motor_04.fields{2}.units = '';
    ECOCAN.Motor_04.fields{2}.start_bit = 12;
    ECOCAN.Motor_04.fields{2}.bit_length = 4;
    ECOCAN.Motor_04.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_04.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Motor_04.fields{2}.scale = 1;
    ECOCAN.Motor_04.fields{2}.offset = 0;
    ECOCAN.Motor_04.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Motor_04.fields{2}.multiplex_value = 0;

    ECOCAN.Motor_04.fields{3}.name = 'MO_OilPressure';
    ECOCAN.Motor_04.fields{3}.units = 'Unit_Bar';
    ECOCAN.Motor_04.fields{3}.start_bit = 16;
    ECOCAN.Motor_04.fields{3}.bit_length = 8;
    ECOCAN.Motor_04.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_04.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Motor_04.fields{3}.scale = 0.04;
    ECOCAN.Motor_04.fields{3}.offset = 0;
    ECOCAN.Motor_04.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Motor_04.fields{3}.multiplex_value = 0;

    ECOCAN.Motor_04.fields{4}.name = 'MO_DisplaySpeed';
    ECOCAN.Motor_04.fields{4}.units = 'Unit_MinutInver';
    ECOCAN.Motor_04.fields{4}.start_bit = 24;
    ECOCAN.Motor_04.fields{4}.bit_length = 12;
    ECOCAN.Motor_04.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_04.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Motor_04.fields{4}.scale = 3;
    ECOCAN.Motor_04.fields{4}.offset = 0;
    ECOCAN.Motor_04.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Motor_04.fields{4}.multiplex_value = 0;

    ECOCAN.Motor_04.fields{5}.name = 'MO_Available_SwitchingSensitivit';
    ECOCAN.Motor_04.fields{5}.units = '';
    ECOCAN.Motor_04.fields{5}.start_bit = 38;
    ECOCAN.Motor_04.fields{5}.bit_length = 1;
    ECOCAN.Motor_04.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_04.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Motor_04.fields{5}.scale = 1;
    ECOCAN.Motor_04.fields{5}.offset = 0;
    ECOCAN.Motor_04.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Motor_04.fields{5}.multiplex_value = 0;

    ECOCAN.Motor_04.fields{6}.name = 'MO_BoostPressure';
    ECOCAN.Motor_04.fields{6}.units = 'Unit_Bar';
    ECOCAN.Motor_04.fields{6}.start_bit = 39;
    ECOCAN.Motor_04.fields{6}.bit_length = 9;
    ECOCAN.Motor_04.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_04.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Motor_04.fields{6}.scale = 0.01;
    ECOCAN.Motor_04.fields{6}.offset = 0;
    ECOCAN.Motor_04.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Motor_04.fields{6}.multiplex_value = 0;

    ECOCAN.Motor_04.fields{7}.name = 'MO_KVS';
    ECOCAN.Motor_04.fields{7}.units = 'Unit_MicroLiter';
    ECOCAN.Motor_04.fields{7}.start_bit = 48;
    ECOCAN.Motor_04.fields{7}.bit_length = 15;
    ECOCAN.Motor_04.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_04.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Motor_04.fields{7}.scale = 1;
    ECOCAN.Motor_04.fields{7}.offset = 0;
    ECOCAN.Motor_04.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Motor_04.fields{7}.multiplex_value = 0;

    ECOCAN.Motor_04.fields{8}.name = 'MO_KVS_Overflow';
    ECOCAN.Motor_04.fields{8}.units = '';
    ECOCAN.Motor_04.fields{8}.start_bit = 63;
    ECOCAN.Motor_04.fields{8}.bit_length = 1;
    ECOCAN.Motor_04.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_04.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Motor_04.fields{8}.scale = 1;
    ECOCAN.Motor_04.fields{8}.offset = 0;
    ECOCAN.Motor_04.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Motor_04.fields{8}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:ESP_05
%Message Number:53
case 'ESP_05'
    ECOCAN.ESP_05 = struct;
    ECOCAN.ESP_05.name = 'ESP_05';
    ECOCAN.ESP_05.description = 'ESP_05';
    ECOCAN.ESP_05.protocol  = 'ECOCAN';
    ECOCAN.ESP_05.id = hex2dec('106');
    ECOCAN.ESP_05.idext = 'STANDARD';
    ECOCAN.ESP_05.payload_size =8;
    ECOCAN.ESP_05.interval =-1;

    ECOCAN.ESP_05.fields{1}.name = 'CHECKSUM';
    ECOCAN.ESP_05.fields{1}.units = '';
    ECOCAN.ESP_05.fields{1}.start_bit = 0;
    ECOCAN.ESP_05.fields{1}.bit_length = 8;
    ECOCAN.ESP_05.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{1}.scale = 1;
    ECOCAN.ESP_05.fields{1}.offset = 0;
    ECOCAN.ESP_05.fields{1}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{1}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{2}.name = 'COUNTER';
    ECOCAN.ESP_05.fields{2}.units = '';
    ECOCAN.ESP_05.fields{2}.start_bit = 8;
    ECOCAN.ESP_05.fields{2}.bit_length = 4;
    ECOCAN.ESP_05.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{2}.scale = 1;
    ECOCAN.ESP_05.fields{2}.offset = 0;
    ECOCAN.ESP_05.fields{2}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{2}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{3}.name = 'ESP_QBit_BrakePressure';
    ECOCAN.ESP_05.fields{3}.units = '';
    ECOCAN.ESP_05.fields{3}.start_bit = 12;
    ECOCAN.ESP_05.fields{3}.bit_length = 1;
    ECOCAN.ESP_05.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{3}.scale = 1;
    ECOCAN.ESP_05.fields{3}.offset = 0;
    ECOCAN.ESP_05.fields{3}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{3}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{4}.name = 'ESP_QBit_Driver_Brake';
    ECOCAN.ESP_05.fields{4}.units = '';
    ECOCAN.ESP_05.fields{4}.start_bit = 13;
    ECOCAN.ESP_05.fields{4}.bit_length = 1;
    ECOCAN.ESP_05.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{4}.scale = 1;
    ECOCAN.ESP_05.fields{4}.offset = 0;
    ECOCAN.ESP_05.fields{4}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{4}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{5}.name = 'ESP_Negative_Pressure_Threshold';
    ECOCAN.ESP_05.fields{5}.units = '';
    ECOCAN.ESP_05.fields{5}.start_bit = 14;
    ECOCAN.ESP_05.fields{5}.bit_length = 2;
    ECOCAN.ESP_05.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{5}.scale = 1;
    ECOCAN.ESP_05.fields{5}.offset = 0;
    ECOCAN.ESP_05.fields{5}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{5}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{6}.name = 'ESP_BrakePressure';
    ECOCAN.ESP_05.fields{6}.units = 'Unit_Bar';
    ECOCAN.ESP_05.fields{6}.start_bit = 16;
    ECOCAN.ESP_05.fields{6}.bit_length = 10;
    ECOCAN.ESP_05.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{6}.scale = 0.3;
    ECOCAN.ESP_05.fields{6}.offset = -30;
    ECOCAN.ESP_05.fields{6}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{6}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{7}.name = 'ESP_Driver_Brake';
    ECOCAN.ESP_05.fields{7}.units = '';
    ECOCAN.ESP_05.fields{7}.start_bit = 26;
    ECOCAN.ESP_05.fields{7}.bit_length = 1;
    ECOCAN.ESP_05.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{7}.scale = 1;
    ECOCAN.ESP_05.fields{7}.offset = 0;
    ECOCAN.ESP_05.fields{7}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{7}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{8}.name = 'ESP_Verz_TSK_aktiv';
    ECOCAN.ESP_05.fields{8}.units = '';
    ECOCAN.ESP_05.fields{8}.start_bit = 27;
    ECOCAN.ESP_05.fields{8}.bit_length = 1;
    ECOCAN.ESP_05.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{8}.scale = 1;
    ECOCAN.ESP_05.fields{8}.offset = 0;
    ECOCAN.ESP_05.fields{8}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{8}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{9}.name = 'ESP_SteeringIntervention_ADS';
    ECOCAN.ESP_05.fields{9}.units = '';
    ECOCAN.ESP_05.fields{9}.start_bit = 28;
    ECOCAN.ESP_05.fields{9}.bit_length = 1;
    ECOCAN.ESP_05.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{9}.scale = 1;
    ECOCAN.ESP_05.fields{9}.offset = 0;
    ECOCAN.ESP_05.fields{9}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{9}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{10}.name = 'ESP_Consistency_TSK';
    ECOCAN.ESP_05.fields{10}.units = '';
    ECOCAN.ESP_05.fields{10}.start_bit = 29;
    ECOCAN.ESP_05.fields{10}.bit_length = 1;
    ECOCAN.ESP_05.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{10}.scale = 1;
    ECOCAN.ESP_05.fields{10}.offset = 0;
    ECOCAN.ESP_05.fields{10}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{10}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{11}.name = 'ESP_BrakePressure_AWV2';
    ECOCAN.ESP_05.fields{11}.units = '';
    ECOCAN.ESP_05.fields{11}.start_bit = 30;
    ECOCAN.ESP_05.fields{11}.bit_length = 1;
    ECOCAN.ESP_05.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{11}.scale = 1;
    ECOCAN.ESP_05.fields{11}.offset = 0;
    ECOCAN.ESP_05.fields{11}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{11}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{12}.name = 'ESP_Consistency_AWV2';
    ECOCAN.ESP_05.fields{12}.units = '';
    ECOCAN.ESP_05.fields{12}.start_bit = 31;
    ECOCAN.ESP_05.fields{12}.bit_length = 1;
    ECOCAN.ESP_05.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{12}.scale = 1;
    ECOCAN.ESP_05.fields{12}.offset = 0;
    ECOCAN.ESP_05.fields{12}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{12}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{13}.name = 'ECD_Error';
    ECOCAN.ESP_05.fields{13}.units = '';
    ECOCAN.ESP_05.fields{13}.start_bit = 32;
    ECOCAN.ESP_05.fields{13}.bit_length = 1;
    ECOCAN.ESP_05.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{13}.scale = 1;
    ECOCAN.ESP_05.fields{13}.offset = 0;
    ECOCAN.ESP_05.fields{13}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{13}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{14}.name = 'ECD_not_available';
    ECOCAN.ESP_05.fields{14}.units = '';
    ECOCAN.ESP_05.fields{14}.start_bit = 33;
    ECOCAN.ESP_05.fields{14}.bit_length = 1;
    ECOCAN.ESP_05.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{14}.scale = 1;
    ECOCAN.ESP_05.fields{14}.offset = 0;
    ECOCAN.ESP_05.fields{14}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{14}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{15}.name = 'ESP_Status_BrakeTemp';
    ECOCAN.ESP_05.fields{15}.units = '';
    ECOCAN.ESP_05.fields{15}.start_bit = 34;
    ECOCAN.ESP_05.fields{15}.bit_length = 1;
    ECOCAN.ESP_05.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{15}.scale = 1;
    ECOCAN.ESP_05.fields{15}.offset = 0;
    ECOCAN.ESP_05.fields{15}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{15}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{16}.name = 'ESP_Autohold_Standby';
    ECOCAN.ESP_05.fields{16}.units = '';
    ECOCAN.ESP_05.fields{16}.start_bit = 35;
    ECOCAN.ESP_05.fields{16}.bit_length = 1;
    ECOCAN.ESP_05.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{16}.scale = 1;
    ECOCAN.ESP_05.fields{16}.offset = 0;
    ECOCAN.ESP_05.fields{16}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{16}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{17}.name = 'ESP_HDC_Standby';
    ECOCAN.ESP_05.fields{17}.units = '';
    ECOCAN.ESP_05.fields{17}.start_bit = 36;
    ECOCAN.ESP_05.fields{17}.bit_length = 1;
    ECOCAN.ESP_05.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{17}.scale = 1;
    ECOCAN.ESP_05.fields{17}.offset = 0;
    ECOCAN.ESP_05.fields{17}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{17}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{18}.name = 'ESP_HBA_aktiv';
    ECOCAN.ESP_05.fields{18}.units = '';
    ECOCAN.ESP_05.fields{18}.start_bit = 37;
    ECOCAN.ESP_05.fields{18}.bit_length = 1;
    ECOCAN.ESP_05.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{18}.scale = 1;
    ECOCAN.ESP_05.fields{18}.offset = 0;
    ECOCAN.ESP_05.fields{18}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{18}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{19}.name = 'ESP_Prefill_triggered';
    ECOCAN.ESP_05.fields{19}.units = '';
    ECOCAN.ESP_05.fields{19}.start_bit = 38;
    ECOCAN.ESP_05.fields{19}.bit_length = 1;
    ECOCAN.ESP_05.fields{19}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{19}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{19}.scale = 1;
    ECOCAN.ESP_05.fields{19}.offset = 0;
    ECOCAN.ESP_05.fields{19}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{19}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{20}.name = 'ESP_ReverseTravel_Recognized';
    ECOCAN.ESP_05.fields{20}.units = '';
    ECOCAN.ESP_05.fields{20}.start_bit = 39;
    ECOCAN.ESP_05.fields{20}.bit_length = 1;
    ECOCAN.ESP_05.fields{20}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{20}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{20}.scale = 1;
    ECOCAN.ESP_05.fields{20}.offset = 0;
    ECOCAN.ESP_05.fields{20}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{20}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{21}.name = 'ESP_Status_TractionHelp';
    ECOCAN.ESP_05.fields{21}.units = '';
    ECOCAN.ESP_05.fields{21}.start_bit = 40;
    ECOCAN.ESP_05.fields{21}.bit_length = 1;
    ECOCAN.ESP_05.fields{21}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{21}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{21}.scale = 1;
    ECOCAN.ESP_05.fields{21}.offset = 0;
    ECOCAN.ESP_05.fields{21}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{21}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{22}.name = 'ESP_HDC_aktiv';
    ECOCAN.ESP_05.fields{22}.units = '';
    ECOCAN.ESP_05.fields{22}.start_bit = 41;
    ECOCAN.ESP_05.fields{22}.bit_length = 1;
    ECOCAN.ESP_05.fields{22}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{22}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{22}.scale = 1;
    ECOCAN.ESP_05.fields{22}.offset = 0;
    ECOCAN.ESP_05.fields{22}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{22}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{23}.name = 'ESP_StartStopp_Info';
    ECOCAN.ESP_05.fields{23}.units = '';
    ECOCAN.ESP_05.fields{23}.start_bit = 42;
    ECOCAN.ESP_05.fields{23}.bit_length = 2;
    ECOCAN.ESP_05.fields{23}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{23}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{23}.scale = 1;
    ECOCAN.ESP_05.fields{23}.offset = 0;
    ECOCAN.ESP_05.fields{23}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{23}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{24}.name = 'ESP_Intervention_HL';
    ECOCAN.ESP_05.fields{24}.units = '';
    ECOCAN.ESP_05.fields{24}.start_bit = 44;
    ECOCAN.ESP_05.fields{24}.bit_length = 1;
    ECOCAN.ESP_05.fields{24}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{24}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{24}.scale = 1;
    ECOCAN.ESP_05.fields{24}.offset = 0;
    ECOCAN.ESP_05.fields{24}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{24}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{25}.name = 'ESP_Intervention_HR';
    ECOCAN.ESP_05.fields{25}.units = '';
    ECOCAN.ESP_05.fields{25}.start_bit = 45;
    ECOCAN.ESP_05.fields{25}.bit_length = 1;
    ECOCAN.ESP_05.fields{25}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{25}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{25}.scale = 1;
    ECOCAN.ESP_05.fields{25}.offset = 0;
    ECOCAN.ESP_05.fields{25}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{25}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{26}.name = 'ESP_Intervention_VL';
    ECOCAN.ESP_05.fields{26}.units = '';
    ECOCAN.ESP_05.fields{26}.start_bit = 46;
    ECOCAN.ESP_05.fields{26}.bit_length = 1;
    ECOCAN.ESP_05.fields{26}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{26}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{26}.scale = 1;
    ECOCAN.ESP_05.fields{26}.offset = 0;
    ECOCAN.ESP_05.fields{26}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{26}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{27}.name = 'ESP_Intervention_VR';
    ECOCAN.ESP_05.fields{27}.units = '';
    ECOCAN.ESP_05.fields{27}.start_bit = 47;
    ECOCAN.ESP_05.fields{27}.bit_length = 1;
    ECOCAN.ESP_05.fields{27}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{27}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{27}.scale = 1;
    ECOCAN.ESP_05.fields{27}.offset = 0;
    ECOCAN.ESP_05.fields{27}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{27}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{28}.name = 'ESP_BKV_Vacuum';
    ECOCAN.ESP_05.fields{28}.units = 'Unit_MilliBar';
    ECOCAN.ESP_05.fields{28}.start_bit = 48;
    ECOCAN.ESP_05.fields{28}.bit_length = 8;
    ECOCAN.ESP_05.fields{28}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{28}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{28}.scale = 4;
    ECOCAN.ESP_05.fields{28}.offset = 0;
    ECOCAN.ESP_05.fields{28}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{28}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{29}.name = 'ESP_Autohold_aktiv';
    ECOCAN.ESP_05.fields{29}.units = '';
    ECOCAN.ESP_05.fields{29}.start_bit = 56;
    ECOCAN.ESP_05.fields{29}.bit_length = 1;
    ECOCAN.ESP_05.fields{29}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{29}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{29}.scale = 1;
    ECOCAN.ESP_05.fields{29}.offset = 0;
    ECOCAN.ESP_05.fields{29}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{29}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{30}.name = 'ESP_FStatus_TractionHelp';
    ECOCAN.ESP_05.fields{30}.units = '';
    ECOCAN.ESP_05.fields{30}.start_bit = 57;
    ECOCAN.ESP_05.fields{30}.bit_length = 1;
    ECOCAN.ESP_05.fields{30}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{30}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{30}.scale = 1;
    ECOCAN.ESP_05.fields{30}.offset = 0;
    ECOCAN.ESP_05.fields{30}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{30}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{31}.name = 'ESP_Verz_EPB_aktiv';
    ECOCAN.ESP_05.fields{31}.units = '';
    ECOCAN.ESP_05.fields{31}.start_bit = 58;
    ECOCAN.ESP_05.fields{31}.bit_length = 1;
    ECOCAN.ESP_05.fields{31}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{31}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{31}.scale = 1;
    ECOCAN.ESP_05.fields{31}.offset = 0;
    ECOCAN.ESP_05.fields{31}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{31}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{32}.name = 'ECD_BrakeLight';
    ECOCAN.ESP_05.fields{32}.units = '';
    ECOCAN.ESP_05.fields{32}.start_bit = 59;
    ECOCAN.ESP_05.fields{32}.bit_length = 1;
    ECOCAN.ESP_05.fields{32}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{32}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{32}.scale = 1;
    ECOCAN.ESP_05.fields{32}.offset = 0;
    ECOCAN.ESP_05.fields{32}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{32}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{33}.name = 'ESP_Verzoeg_EPB_verf';
    ECOCAN.ESP_05.fields{33}.units = '';
    ECOCAN.ESP_05.fields{33}.start_bit = 60;
    ECOCAN.ESP_05.fields{33}.bit_length = 1;
    ECOCAN.ESP_05.fields{33}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{33}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{33}.scale = 1;
    ECOCAN.ESP_05.fields{33}.offset = 0;
    ECOCAN.ESP_05.fields{33}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{33}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{34}.name = 'ESP_Status_BrakePressure';
    ECOCAN.ESP_05.fields{34}.units = '';
    ECOCAN.ESP_05.fields{34}.start_bit = 61;
    ECOCAN.ESP_05.fields{34}.bit_length = 1;
    ECOCAN.ESP_05.fields{34}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{34}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{34}.scale = 1;
    ECOCAN.ESP_05.fields{34}.offset = 0;
    ECOCAN.ESP_05.fields{34}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{34}.multiplex_value = 0;

    ECOCAN.ESP_05.fields{35}.name = 'ESP_Requirement_EPB';
    ECOCAN.ESP_05.fields{35}.units = '';
    ECOCAN.ESP_05.fields{35}.start_bit = 62;
    ECOCAN.ESP_05.fields{35}.bit_length = 2;
    ECOCAN.ESP_05.fields{35}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_05.fields{35}.data_type = 'UNSIGNED';
    ECOCAN.ESP_05.fields{35}.scale = 1;
    ECOCAN.ESP_05.fields{35}.offset = 0;
    ECOCAN.ESP_05.fields{35}.multiplex_type = 'Standard';
    ECOCAN.ESP_05.fields{35}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:54
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('105');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:EPB_01
%Message Number:55
case 'EPB_01'
    ECOCAN.EPB_01 = struct;
    ECOCAN.EPB_01.name = 'EPB_01';
    ECOCAN.EPB_01.description = 'EPB_01';
    ECOCAN.EPB_01.protocol  = 'ECOCAN';
    ECOCAN.EPB_01.id = hex2dec('104');
    ECOCAN.EPB_01.idext = 'STANDARD';
    ECOCAN.EPB_01.payload_size =8;
    ECOCAN.EPB_01.interval =-1;

    ECOCAN.EPB_01.fields{1}.name = 'EPB_01_CRC';
    ECOCAN.EPB_01.fields{1}.units = '';
    ECOCAN.EPB_01.fields{1}.start_bit = 0;
    ECOCAN.EPB_01.fields{1}.bit_length = 8;
    ECOCAN.EPB_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{1}.scale = 1;
    ECOCAN.EPB_01.fields{1}.offset = 0;
    ECOCAN.EPB_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{1}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{2}.name = 'EPB_01_BZ';
    ECOCAN.EPB_01.fields{2}.units = '';
    ECOCAN.EPB_01.fields{2}.start_bit = 8;
    ECOCAN.EPB_01.fields{2}.bit_length = 4;
    ECOCAN.EPB_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{2}.scale = 1;
    ECOCAN.EPB_01.fields{2}.offset = 0;
    ECOCAN.EPB_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{2}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{3}.name = 'EPB_QBit_LongitudinalAcceleratio';
    ECOCAN.EPB_01.fields{3}.units = '';
    ECOCAN.EPB_01.fields{3}.start_bit = 12;
    ECOCAN.EPB_01.fields{3}.bit_length = 1;
    ECOCAN.EPB_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{3}.scale = 1;
    ECOCAN.EPB_01.fields{3}.offset = 0;
    ECOCAN.EPB_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{3}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{4}.name = 'EPB_QBit_PedalTravel_Clutch';
    ECOCAN.EPB_01.fields{4}.units = '';
    ECOCAN.EPB_01.fields{4}.start_bit = 13;
    ECOCAN.EPB_01.fields{4}.bit_length = 1;
    ECOCAN.EPB_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{4}.scale = 1;
    ECOCAN.EPB_01.fields{4}.offset = 0;
    ECOCAN.EPB_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{4}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{5}.name = 'EPB_BCM2_Motor_Wakeup';
    ECOCAN.EPB_01.fields{5}.units = '';
    ECOCAN.EPB_01.fields{5}.start_bit = 14;
    ECOCAN.EPB_01.fields{5}.bit_length = 1;
    ECOCAN.EPB_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{5}.scale = 1;
    ECOCAN.EPB_01.fields{5}.offset = 0;
    ECOCAN.EPB_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{5}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{6}.name = 'EPB_Freig_Verzoeg_Anf';
    ECOCAN.EPB_01.fields{6}.units = '';
    ECOCAN.EPB_01.fields{6}.start_bit = 15;
    ECOCAN.EPB_01.fields{6}.bit_length = 1;
    ECOCAN.EPB_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{6}.scale = 1;
    ECOCAN.EPB_01.fields{6}.offset = 0;
    ECOCAN.EPB_01.fields{6}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{6}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{7}.name = 'EPB_Verzoeg_Anf';
    ECOCAN.EPB_01.fields{7}.units = 'Unit_MeterPerSeconSquar';
    ECOCAN.EPB_01.fields{7}.start_bit = 16;
    ECOCAN.EPB_01.fields{7}.bit_length = 8;
    ECOCAN.EPB_01.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{7}.scale = 0.048;
    ECOCAN.EPB_01.fields{7}.offset = -7.968;
    ECOCAN.EPB_01.fields{7}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{7}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{8}.name = 'EPB_LongitudinalAcceleration';
    ECOCAN.EPB_01.fields{8}.units = 'Unit_PerCentOfForceOfGravi';
    ECOCAN.EPB_01.fields{8}.start_bit = 24;
    ECOCAN.EPB_01.fields{8}.bit_length = 8;
    ECOCAN.EPB_01.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{8}.scale = 1;
    ECOCAN.EPB_01.fields{8}.offset = -128;
    ECOCAN.EPB_01.fields{8}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{8}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{9}.name = 'EPB_PedalTravel_Clutch';
    ECOCAN.EPB_01.fields{9}.units = 'Unit_PerCent';
    ECOCAN.EPB_01.fields{9}.start_bit = 32;
    ECOCAN.EPB_01.fields{9}.bit_length = 8;
    ECOCAN.EPB_01.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{9}.scale = 0.4;
    ECOCAN.EPB_01.fields{9}.offset = 0;
    ECOCAN.EPB_01.fields{9}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{9}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{10}.name = 'EPB_StartUp_Request_Recognized';
    ECOCAN.EPB_01.fields{10}.units = '';
    ECOCAN.EPB_01.fields{10}.start_bit = 48;
    ECOCAN.EPB_01.fields{10}.bit_length = 1;
    ECOCAN.EPB_01.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{10}.scale = 1;
    ECOCAN.EPB_01.fields{10}.offset = 0;
    ECOCAN.EPB_01.fields{10}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{10}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{11}.name = 'EPB_DAA_Randbed_erf';
    ECOCAN.EPB_01.fields{11}.units = '';
    ECOCAN.EPB_01.fields{11}.start_bit = 49;
    ECOCAN.EPB_01.fields{11}.bit_length = 1;
    ECOCAN.EPB_01.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{11}.scale = 1;
    ECOCAN.EPB_01.fields{11}.offset = 0;
    ECOCAN.EPB_01.fields{11}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{11}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{12}.name = 'EPB_ErrorStatus';
    ECOCAN.EPB_01.fields{12}.units = '';
    ECOCAN.EPB_01.fields{12}.start_bit = 50;
    ECOCAN.EPB_01.fields{12}.bit_length = 2;
    ECOCAN.EPB_01.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{12}.scale = 1;
    ECOCAN.EPB_01.fields{12}.offset = 0;
    ECOCAN.EPB_01.fields{12}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{12}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{13}.name = 'EPB_SwitchStatus';
    ECOCAN.EPB_01.fields{13}.units = '';
    ECOCAN.EPB_01.fields{13}.start_bit = 52;
    ECOCAN.EPB_01.fields{13}.bit_length = 2;
    ECOCAN.EPB_01.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{13}.scale = 1;
    ECOCAN.EPB_01.fields{13}.offset = 0;
    ECOCAN.EPB_01.fields{13}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{13}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{14}.name = 'EPB_QBit_SwitchStatus';
    ECOCAN.EPB_01.fields{14}.units = '';
    ECOCAN.EPB_01.fields{14}.start_bit = 54;
    ECOCAN.EPB_01.fields{14}.bit_length = 1;
    ECOCAN.EPB_01.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{14}.scale = 1;
    ECOCAN.EPB_01.fields{14}.offset = 0;
    ECOCAN.EPB_01.fields{14}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{14}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{15}.name = 'EPB_Consistency_ACC';
    ECOCAN.EPB_01.fields{15}.units = '';
    ECOCAN.EPB_01.fields{15}.start_bit = 55;
    ECOCAN.EPB_01.fields{15}.bit_length = 1;
    ECOCAN.EPB_01.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{15}.scale = 1;
    ECOCAN.EPB_01.fields{15}.offset = 0;
    ECOCAN.EPB_01.fields{15}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{15}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{16}.name = 'EPB_Tension';
    ECOCAN.EPB_01.fields{16}.units = 'Unit_KiloNewto';
    ECOCAN.EPB_01.fields{16}.start_bit = 56;
    ECOCAN.EPB_01.fields{16}.bit_length = 5;
    ECOCAN.EPB_01.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{16}.scale = 1;
    ECOCAN.EPB_01.fields{16}.offset = 0;
    ECOCAN.EPB_01.fields{16}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{16}.multiplex_value = 0;

    ECOCAN.EPB_01.fields{17}.name = 'EPB_Status';
    ECOCAN.EPB_01.fields{17}.units = '';
    ECOCAN.EPB_01.fields{17}.start_bit = 61;
    ECOCAN.EPB_01.fields{17}.bit_length = 2;
    ECOCAN.EPB_01.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.EPB_01.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.EPB_01.fields{17}.scale = 1;
    ECOCAN.EPB_01.fields{17}.offset = 0;
    ECOCAN.EPB_01.fields{17}.multiplex_type = 'Standard';
    ECOCAN.EPB_01.fields{17}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:ESP_02
%Message Number:56
case 'ESP_02'
    ECOCAN.ESP_02 = struct;
    ECOCAN.ESP_02.name = 'ESP_02';
    ECOCAN.ESP_02.description = 'ESP_02';
    ECOCAN.ESP_02.protocol  = 'ECOCAN';
    ECOCAN.ESP_02.id = hex2dec('101');
    ECOCAN.ESP_02.idext = 'STANDARD';
    ECOCAN.ESP_02.payload_size =8;
    ECOCAN.ESP_02.interval =-1;

    ECOCAN.ESP_02.fields{1}.name = 'ESP_02_CRC';
    ECOCAN.ESP_02.fields{1}.units = '';
    ECOCAN.ESP_02.fields{1}.start_bit = 0;
    ECOCAN.ESP_02.fields{1}.bit_length = 8;
    ECOCAN.ESP_02.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{1}.scale = 1;
    ECOCAN.ESP_02.fields{1}.offset = 0;
    ECOCAN.ESP_02.fields{1}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{1}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{2}.name = 'ESP_02_BZ';
    ECOCAN.ESP_02.fields{2}.units = '';
    ECOCAN.ESP_02.fields{2}.start_bit = 8;
    ECOCAN.ESP_02.fields{2}.bit_length = 4;
    ECOCAN.ESP_02.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{2}.scale = 1;
    ECOCAN.ESP_02.fields{2}.offset = 0;
    ECOCAN.ESP_02.fields{2}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{2}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{3}.name = 'ESP_QBit_YawRate';
    ECOCAN.ESP_02.fields{3}.units = '';
    ECOCAN.ESP_02.fields{3}.start_bit = 12;
    ECOCAN.ESP_02.fields{3}.bit_length = 1;
    ECOCAN.ESP_02.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{3}.scale = 1;
    ECOCAN.ESP_02.fields{3}.offset = 0;
    ECOCAN.ESP_02.fields{3}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{3}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{4}.name = 'ESP_QBit_LongitudinalAcceleratio';
    ECOCAN.ESP_02.fields{4}.units = '';
    ECOCAN.ESP_02.fields{4}.start_bit = 13;
    ECOCAN.ESP_02.fields{4}.bit_length = 1;
    ECOCAN.ESP_02.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{4}.scale = 1;
    ECOCAN.ESP_02.fields{4}.offset = 0;
    ECOCAN.ESP_02.fields{4}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{4}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{5}.name = 'ESP_QBit_Lateral';
    ECOCAN.ESP_02.fields{5}.units = '';
    ECOCAN.ESP_02.fields{5}.start_bit = 14;
    ECOCAN.ESP_02.fields{5}.bit_length = 1;
    ECOCAN.ESP_02.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{5}.scale = 1;
    ECOCAN.ESP_02.fields{5}.offset = 0;
    ECOCAN.ESP_02.fields{5}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{5}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{6}.name = 'ESP_Standstillflag';
    ECOCAN.ESP_02.fields{6}.units = '';
    ECOCAN.ESP_02.fields{6}.start_bit = 15;
    ECOCAN.ESP_02.fields{6}.bit_length = 1;
    ECOCAN.ESP_02.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{6}.scale = 1;
    ECOCAN.ESP_02.fields{6}.offset = 0;
    ECOCAN.ESP_02.fields{6}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{6}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{7}.name = 'ESP_LateralAcceleration';
    ECOCAN.ESP_02.fields{7}.units = 'Unit_ForceOfGravi';
    ECOCAN.ESP_02.fields{7}.start_bit = 16;
    ECOCAN.ESP_02.fields{7}.bit_length = 8;
    ECOCAN.ESP_02.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{7}.scale = 0.01;
    ECOCAN.ESP_02.fields{7}.offset = -1.27;
    ECOCAN.ESP_02.fields{7}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{7}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{8}.name = 'ESP_LongitudinalAcceleration';
    ECOCAN.ESP_02.fields{8}.units = 'Unit_MeterPerSeconSquar';
    ECOCAN.ESP_02.fields{8}.start_bit = 24;
    ECOCAN.ESP_02.fields{8}.bit_length = 10;
    ECOCAN.ESP_02.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{8}.scale = 0.03125;
    ECOCAN.ESP_02.fields{8}.offset = -16;
    ECOCAN.ESP_02.fields{8}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{8}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{9}.name = 'ESP_Verteil_Wankmom';
    ECOCAN.ESP_02.fields{9}.units = '';
    ECOCAN.ESP_02.fields{9}.start_bit = 34;
    ECOCAN.ESP_02.fields{9}.bit_length = 5;
    ECOCAN.ESP_02.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{9}.scale = 0.1;
    ECOCAN.ESP_02.fields{9}.offset = -1;
    ECOCAN.ESP_02.fields{9}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{9}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{10}.name = 'ESP_QBit_Anf_Vert_Wank';
    ECOCAN.ESP_02.fields{10}.units = '';
    ECOCAN.ESP_02.fields{10}.start_bit = 39;
    ECOCAN.ESP_02.fields{10}.bit_length = 1;
    ECOCAN.ESP_02.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{10}.scale = 1;
    ECOCAN.ESP_02.fields{10}.offset = 0;
    ECOCAN.ESP_02.fields{10}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{10}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{11}.name = 'ESP_YawRate';
    ECOCAN.ESP_02.fields{11}.units = 'Unit_DegreOfArcPerSecon';
    ECOCAN.ESP_02.fields{11}.start_bit = 40;
    ECOCAN.ESP_02.fields{11}.bit_length = 14;
    ECOCAN.ESP_02.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{11}.scale = 0.01;
    ECOCAN.ESP_02.fields{11}.offset = 0;
    ECOCAN.ESP_02.fields{11}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{11}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{12}.name = 'ESP_VZ_YawRate';
    ECOCAN.ESP_02.fields{12}.units = '';
    ECOCAN.ESP_02.fields{12}.start_bit = 54;
    ECOCAN.ESP_02.fields{12}.bit_length = 1;
    ECOCAN.ESP_02.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{12}.scale = 1;
    ECOCAN.ESP_02.fields{12}.offset = 0;
    ECOCAN.ESP_02.fields{12}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{12}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{13}.name = 'ESP_EmergencyBrakeIndicator';
    ECOCAN.ESP_02.fields{13}.units = '';
    ECOCAN.ESP_02.fields{13}.start_bit = 55;
    ECOCAN.ESP_02.fields{13}.bit_length = 1;
    ECOCAN.ESP_02.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{13}.scale = 1;
    ECOCAN.ESP_02.fields{13}.offset = 0;
    ECOCAN.ESP_02.fields{13}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{13}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{14}.name = 'ESP_StartVoltage';
    ECOCAN.ESP_02.fields{14}.units = '';
    ECOCAN.ESP_02.fields{14}.start_bit = 56;
    ECOCAN.ESP_02.fields{14}.bit_length = 1;
    ECOCAN.ESP_02.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{14}.scale = 1;
    ECOCAN.ESP_02.fields{14}.offset = 0;
    ECOCAN.ESP_02.fields{14}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{14}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{15}.name = 'ESP_PLA_Cancellation';
    ECOCAN.ESP_02.fields{15}.units = '';
    ECOCAN.ESP_02.fields{15}.start_bit = 57;
    ECOCAN.ESP_02.fields{15}.bit_length = 3;
    ECOCAN.ESP_02.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{15}.scale = 1;
    ECOCAN.ESP_02.fields{15}.offset = 0;
    ECOCAN.ESP_02.fields{15}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{15}.multiplex_value = 0;

    ECOCAN.ESP_02.fields{16}.name = 'ESP_Status_ESP_PLA';
    ECOCAN.ESP_02.fields{16}.units = '';
    ECOCAN.ESP_02.fields{16}.start_bit = 60;
    ECOCAN.ESP_02.fields{16}.bit_length = 4;
    ECOCAN.ESP_02.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_02.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.ESP_02.fields{16}.scale = 1;
    ECOCAN.ESP_02.fields{16}.offset = 0;
    ECOCAN.ESP_02.fields{16}.multiplex_type = 'Standard';
    ECOCAN.ESP_02.fields{16}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:ESP_21
%Message Number:57
case 'ESP_21'
    ECOCAN.ESP_21 = struct;
    ECOCAN.ESP_21.name = 'ESP_21';
    ECOCAN.ESP_21.description = 'ESP_21';
    ECOCAN.ESP_21.protocol  = 'ECOCAN';
    ECOCAN.ESP_21.id = hex2dec('FD');
    ECOCAN.ESP_21.idext = 'STANDARD';
    ECOCAN.ESP_21.payload_size =8;
    ECOCAN.ESP_21.interval =-1;

    ECOCAN.ESP_21.fields{1}.name = 'CHECKSUM';
    ECOCAN.ESP_21.fields{1}.units = '';
    ECOCAN.ESP_21.fields{1}.start_bit = 0;
    ECOCAN.ESP_21.fields{1}.bit_length = 8;
    ECOCAN.ESP_21.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{1}.scale = 1;
    ECOCAN.ESP_21.fields{1}.offset = 0;
    ECOCAN.ESP_21.fields{1}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{1}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{2}.name = 'COUNTER';
    ECOCAN.ESP_21.fields{2}.units = '';
    ECOCAN.ESP_21.fields{2}.start_bit = 8;
    ECOCAN.ESP_21.fields{2}.bit_length = 4;
    ECOCAN.ESP_21.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{2}.scale = 1;
    ECOCAN.ESP_21.fields{2}.offset = 0;
    ECOCAN.ESP_21.fields{2}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{2}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{3}.name = 'BR_MomentofIntervention';
    ECOCAN.ESP_21.fields{3}.units = 'Unit_NewtoMeter';
    ECOCAN.ESP_21.fields{3}.start_bit = 12;
    ECOCAN.ESP_21.fields{3}.bit_length = 10;
    ECOCAN.ESP_21.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{3}.scale = 1;
    ECOCAN.ESP_21.fields{3}.offset = -509;
    ECOCAN.ESP_21.fields{3}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{3}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{4}.name = 'ESP_v_Signal';
    ECOCAN.ESP_21.fields{4}.units = 'Unit_KiloMeterPerHour';
    ECOCAN.ESP_21.fields{4}.start_bit = 32;
    ECOCAN.ESP_21.fields{4}.bit_length = 16;
    ECOCAN.ESP_21.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{4}.scale = 0.01;
    ECOCAN.ESP_21.fields{4}.offset = 0;
    ECOCAN.ESP_21.fields{4}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{4}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{5}.name = 'ASR_Tastung_passiv';
    ECOCAN.ESP_21.fields{5}.units = '';
    ECOCAN.ESP_21.fields{5}.start_bit = 48;
    ECOCAN.ESP_21.fields{5}.bit_length = 1;
    ECOCAN.ESP_21.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{5}.scale = 1;
    ECOCAN.ESP_21.fields{5}.offset = 0;
    ECOCAN.ESP_21.fields{5}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{5}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{6}.name = 'ESP_Tastung_passiv';
    ECOCAN.ESP_21.fields{6}.units = '';
    ECOCAN.ESP_21.fields{6}.start_bit = 49;
    ECOCAN.ESP_21.fields{6}.bit_length = 1;
    ECOCAN.ESP_21.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{6}.scale = 1;
    ECOCAN.ESP_21.fields{6}.offset = 0;
    ECOCAN.ESP_21.fields{6}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{6}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{7}.name = 'ESP_Systemstatus';
    ECOCAN.ESP_21.fields{7}.units = '';
    ECOCAN.ESP_21.fields{7}.start_bit = 50;
    ECOCAN.ESP_21.fields{7}.bit_length = 1;
    ECOCAN.ESP_21.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{7}.scale = 1;
    ECOCAN.ESP_21.fields{7}.offset = 0;
    ECOCAN.ESP_21.fields{7}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{7}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{8}.name = 'ASR_SwitchingIntervention';
    ECOCAN.ESP_21.fields{8}.units = '';
    ECOCAN.ESP_21.fields{8}.start_bit = 51;
    ECOCAN.ESP_21.fields{8}.bit_length = 2;
    ECOCAN.ESP_21.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{8}.scale = 1;
    ECOCAN.ESP_21.fields{8}.offset = 0;
    ECOCAN.ESP_21.fields{8}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{8}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{9}.name = 'ESP_HoldConfirmation';
    ECOCAN.ESP_21.fields{9}.units = '';
    ECOCAN.ESP_21.fields{9}.start_bit = 53;
    ECOCAN.ESP_21.fields{9}.bit_length = 1;
    ECOCAN.ESP_21.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{9}.scale = 1;
    ECOCAN.ESP_21.fields{9}.offset = 0;
    ECOCAN.ESP_21.fields{9}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{9}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{10}.name = 'ESP_QBit_v_Signal';
    ECOCAN.ESP_21.fields{10}.units = '';
    ECOCAN.ESP_21.fields{10}.start_bit = 55;
    ECOCAN.ESP_21.fields{10}.bit_length = 1;
    ECOCAN.ESP_21.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{10}.scale = 1;
    ECOCAN.ESP_21.fields{10}.offset = 0;
    ECOCAN.ESP_21.fields{10}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{10}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{11}.name = 'ABS_Braking';
    ECOCAN.ESP_21.fields{11}.units = '';
    ECOCAN.ESP_21.fields{11}.start_bit = 56;
    ECOCAN.ESP_21.fields{11}.bit_length = 1;
    ECOCAN.ESP_21.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{11}.scale = 1;
    ECOCAN.ESP_21.fields{11}.offset = 0;
    ECOCAN.ESP_21.fields{11}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{11}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{12}.name = 'ASR_Anf';
    ECOCAN.ESP_21.fields{12}.units = '';
    ECOCAN.ESP_21.fields{12}.start_bit = 57;
    ECOCAN.ESP_21.fields{12}.bit_length = 1;
    ECOCAN.ESP_21.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{12}.scale = 1;
    ECOCAN.ESP_21.fields{12}.offset = 0;
    ECOCAN.ESP_21.fields{12}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{12}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{13}.name = 'MSR_Anf';
    ECOCAN.ESP_21.fields{13}.units = '';
    ECOCAN.ESP_21.fields{13}.start_bit = 58;
    ECOCAN.ESP_21.fields{13}.bit_length = 1;
    ECOCAN.ESP_21.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{13}.scale = 1;
    ECOCAN.ESP_21.fields{13}.offset = 0;
    ECOCAN.ESP_21.fields{13}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{13}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{14}.name = 'EBV_Intervention';
    ECOCAN.ESP_21.fields{14}.units = '';
    ECOCAN.ESP_21.fields{14}.start_bit = 59;
    ECOCAN.ESP_21.fields{14}.bit_length = 1;
    ECOCAN.ESP_21.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{14}.scale = 1;
    ECOCAN.ESP_21.fields{14}.offset = 0;
    ECOCAN.ESP_21.fields{14}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{14}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{15}.name = 'EDS_Intervention';
    ECOCAN.ESP_21.fields{15}.units = '';
    ECOCAN.ESP_21.fields{15}.start_bit = 60;
    ECOCAN.ESP_21.fields{15}.bit_length = 1;
    ECOCAN.ESP_21.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{15}.scale = 1;
    ECOCAN.ESP_21.fields{15}.offset = 0;
    ECOCAN.ESP_21.fields{15}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{15}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{16}.name = 'ESP_Intervention';
    ECOCAN.ESP_21.fields{16}.units = '';
    ECOCAN.ESP_21.fields{16}.start_bit = 61;
    ECOCAN.ESP_21.fields{16}.bit_length = 1;
    ECOCAN.ESP_21.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{16}.scale = 1;
    ECOCAN.ESP_21.fields{16}.offset = 0;
    ECOCAN.ESP_21.fields{16}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{16}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{17}.name = 'ESP_ASP';
    ECOCAN.ESP_21.fields{17}.units = '';
    ECOCAN.ESP_21.fields{17}.start_bit = 62;
    ECOCAN.ESP_21.fields{17}.bit_length = 1;
    ECOCAN.ESP_21.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{17}.scale = 1;
    ECOCAN.ESP_21.fields{17}.offset = 0;
    ECOCAN.ESP_21.fields{17}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{17}.multiplex_value = 0;

    ECOCAN.ESP_21.fields{18}.name = 'ESP_StoppingProcess_ACC_aktiv';
    ECOCAN.ESP_21.fields{18}.units = '';
    ECOCAN.ESP_21.fields{18}.start_bit = 63;
    ECOCAN.ESP_21.fields{18}.bit_length = 1;
    ECOCAN.ESP_21.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_21.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.ESP_21.fields{18}.scale = 1;
    ECOCAN.ESP_21.fields{18}.offset = 0;
    ECOCAN.ESP_21.fields{18}.multiplex_type = 'Standard';
    ECOCAN.ESP_21.fields{18}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:58
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('C3');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:GearShiftSwitch
%Message Number:59
case 'GearShiftSwitch'
    ECOCAN.GearShiftSwitch = struct;
    ECOCAN.GearShiftSwitch.name = 'GearShiftSwitch';
    ECOCAN.GearShiftSwitch.description = 'GearShiftSwitch';
    ECOCAN.GearShiftSwitch.protocol  = 'ECOCAN';
    ECOCAN.GearShiftSwitch.id = hex2dec('B5');
    ECOCAN.GearShiftSwitch.idext = 'STANDARD';
    ECOCAN.GearShiftSwitch.payload_size =8;
    ECOCAN.GearShiftSwitch.interval =-1;

    ECOCAN.GearShiftSwitch.fields{1}.name = 'Checksum';
    ECOCAN.GearShiftSwitch.fields{1}.units = '-';
    ECOCAN.GearShiftSwitch.fields{1}.start_bit = 0;
    ECOCAN.GearShiftSwitch.fields{1}.bit_length = 8;
    ECOCAN.GearShiftSwitch.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GearShiftSwitch.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.GearShiftSwitch.fields{1}.scale = 1;
    ECOCAN.GearShiftSwitch.fields{1}.offset = 0;
    ECOCAN.GearShiftSwitch.fields{1}.multiplex_type = 'Standard';
    ECOCAN.GearShiftSwitch.fields{1}.multiplex_value = 0;

    ECOCAN.GearShiftSwitch.fields{2}.name = 'Counter';
    ECOCAN.GearShiftSwitch.fields{2}.units = '-';
    ECOCAN.GearShiftSwitch.fields{2}.start_bit = 8;
    ECOCAN.GearShiftSwitch.fields{2}.bit_length = 4;
    ECOCAN.GearShiftSwitch.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GearShiftSwitch.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.GearShiftSwitch.fields{2}.scale = 1;
    ECOCAN.GearShiftSwitch.fields{2}.offset = 0;
    ECOCAN.GearShiftSwitch.fields{2}.multiplex_type = 'Standard';
    ECOCAN.GearShiftSwitch.fields{2}.multiplex_value = 0;

    ECOCAN.GearShiftSwitch.fields{3}.name = 'NoIdea1';
    ECOCAN.GearShiftSwitch.fields{3}.units = '-';
    ECOCAN.GearShiftSwitch.fields{3}.start_bit = 12;
    ECOCAN.GearShiftSwitch.fields{3}.bit_length = 4;
    ECOCAN.GearShiftSwitch.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GearShiftSwitch.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.GearShiftSwitch.fields{3}.scale = 1;
    ECOCAN.GearShiftSwitch.fields{3}.offset = 0;
    ECOCAN.GearShiftSwitch.fields{3}.multiplex_type = 'Standard';
    ECOCAN.GearShiftSwitch.fields{3}.multiplex_value = 0;

    ECOCAN.GearShiftSwitch.fields{4}.name = 'SwitchRelated1';
    ECOCAN.GearShiftSwitch.fields{4}.units = '-';
    ECOCAN.GearShiftSwitch.fields{4}.start_bit = 16;
    ECOCAN.GearShiftSwitch.fields{4}.bit_length = 8;
    ECOCAN.GearShiftSwitch.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GearShiftSwitch.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.GearShiftSwitch.fields{4}.scale = 1;
    ECOCAN.GearShiftSwitch.fields{4}.offset = 0;
    ECOCAN.GearShiftSwitch.fields{4}.multiplex_type = 'Standard';
    ECOCAN.GearShiftSwitch.fields{4}.multiplex_value = 0;

    ECOCAN.GearShiftSwitch.fields{5}.name = 'RandomSignal';
    ECOCAN.GearShiftSwitch.fields{5}.units = '-';
    ECOCAN.GearShiftSwitch.fields{5}.start_bit = 24;
    ECOCAN.GearShiftSwitch.fields{5}.bit_length = 8;
    ECOCAN.GearShiftSwitch.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GearShiftSwitch.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.GearShiftSwitch.fields{5}.scale = 1;
    ECOCAN.GearShiftSwitch.fields{5}.offset = 0;
    ECOCAN.GearShiftSwitch.fields{5}.multiplex_type = 'Standard';
    ECOCAN.GearShiftSwitch.fields{5}.multiplex_value = 0;

    ECOCAN.GearShiftSwitch.fields{6}.name = 'RandomSignal2';
    ECOCAN.GearShiftSwitch.fields{6}.units = '-';
    ECOCAN.GearShiftSwitch.fields{6}.start_bit = 32;
    ECOCAN.GearShiftSwitch.fields{6}.bit_length = 8;
    ECOCAN.GearShiftSwitch.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GearShiftSwitch.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.GearShiftSwitch.fields{6}.scale = 1;
    ECOCAN.GearShiftSwitch.fields{6}.offset = 0;
    ECOCAN.GearShiftSwitch.fields{6}.multiplex_type = 'Standard';
    ECOCAN.GearShiftSwitch.fields{6}.multiplex_value = 0;

    ECOCAN.GearShiftSwitch.fields{7}.name = 'SwitchRelated2';
    ECOCAN.GearShiftSwitch.fields{7}.units = '-';
    ECOCAN.GearShiftSwitch.fields{7}.start_bit = 40;
    ECOCAN.GearShiftSwitch.fields{7}.bit_length = 8;
    ECOCAN.GearShiftSwitch.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GearShiftSwitch.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.GearShiftSwitch.fields{7}.scale = 1;
    ECOCAN.GearShiftSwitch.fields{7}.offset = 0;
    ECOCAN.GearShiftSwitch.fields{7}.multiplex_type = 'Standard';
    ECOCAN.GearShiftSwitch.fields{7}.multiplex_value = 0;

    ECOCAN.GearShiftSwitch.fields{8}.name = 'NoIdea2';
    ECOCAN.GearShiftSwitch.fields{8}.units = '-';
    ECOCAN.GearShiftSwitch.fields{8}.start_bit = 48;
    ECOCAN.GearShiftSwitch.fields{8}.bit_length = 8;
    ECOCAN.GearShiftSwitch.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GearShiftSwitch.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.GearShiftSwitch.fields{8}.scale = 1;
    ECOCAN.GearShiftSwitch.fields{8}.offset = 0;
    ECOCAN.GearShiftSwitch.fields{8}.multiplex_type = 'Standard';
    ECOCAN.GearShiftSwitch.fields{8}.multiplex_value = 0;

    ECOCAN.GearShiftSwitch.fields{9}.name = 'NoIdea3';
    ECOCAN.GearShiftSwitch.fields{9}.units = '-';
    ECOCAN.GearShiftSwitch.fields{9}.start_bit = 56;
    ECOCAN.GearShiftSwitch.fields{9}.bit_length = 8;
    ECOCAN.GearShiftSwitch.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GearShiftSwitch.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.GearShiftSwitch.fields{9}.scale = 1;
    ECOCAN.GearShiftSwitch.fields{9}.offset = 0;
    ECOCAN.GearShiftSwitch.fields{9}.multiplex_type = 'Standard';
    ECOCAN.GearShiftSwitch.fields{9}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:ESP_19
%Message Number:60
case 'ESP_19'
    ECOCAN.ESP_19 = struct;
    ECOCAN.ESP_19.name = 'ESP_19';
    ECOCAN.ESP_19.description = 'ESP_19';
    ECOCAN.ESP_19.protocol  = 'ECOCAN';
    ECOCAN.ESP_19.id = hex2dec('B2');
    ECOCAN.ESP_19.idext = 'STANDARD';
    ECOCAN.ESP_19.payload_size =8;
    ECOCAN.ESP_19.interval =-1;

    ECOCAN.ESP_19.fields{1}.name = 'ESP_BL_WheelSpeed_02';
    ECOCAN.ESP_19.fields{1}.units = 'Unit_KiloMeterPerHour';
    ECOCAN.ESP_19.fields{1}.start_bit = 0;
    ECOCAN.ESP_19.fields{1}.bit_length = 16;
    ECOCAN.ESP_19.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_19.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.ESP_19.fields{1}.scale = 0.0075;
    ECOCAN.ESP_19.fields{1}.offset = 0;
    ECOCAN.ESP_19.fields{1}.multiplex_type = 'Standard';
    ECOCAN.ESP_19.fields{1}.multiplex_value = 0;

    ECOCAN.ESP_19.fields{2}.name = 'ESP_BR_WheelSpeed_02';
    ECOCAN.ESP_19.fields{2}.units = 'Unit_KiloMeterPerHour';
    ECOCAN.ESP_19.fields{2}.start_bit = 16;
    ECOCAN.ESP_19.fields{2}.bit_length = 16;
    ECOCAN.ESP_19.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_19.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.ESP_19.fields{2}.scale = 0.0075;
    ECOCAN.ESP_19.fields{2}.offset = 0;
    ECOCAN.ESP_19.fields{2}.multiplex_type = 'Standard';
    ECOCAN.ESP_19.fields{2}.multiplex_value = 0;

    ECOCAN.ESP_19.fields{3}.name = 'ESP_FL_WheelSpeed_02';
    ECOCAN.ESP_19.fields{3}.units = 'Unit_KiloMeterPerHour';
    ECOCAN.ESP_19.fields{3}.start_bit = 32;
    ECOCAN.ESP_19.fields{3}.bit_length = 16;
    ECOCAN.ESP_19.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_19.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.ESP_19.fields{3}.scale = 0.0075;
    ECOCAN.ESP_19.fields{3}.offset = 0;
    ECOCAN.ESP_19.fields{3}.multiplex_type = 'Standard';
    ECOCAN.ESP_19.fields{3}.multiplex_value = 0;

    ECOCAN.ESP_19.fields{4}.name = 'ESP_FR_WheelSpeed_02';
    ECOCAN.ESP_19.fields{4}.units = 'Unit_KiloMeterPerHour';
    ECOCAN.ESP_19.fields{4}.start_bit = 48;
    ECOCAN.ESP_19.fields{4}.bit_length = 16;
    ECOCAN.ESP_19.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.ESP_19.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.ESP_19.fields{4}.scale = 0.0075;
    ECOCAN.ESP_19.fields{4}.offset = 0;
    ECOCAN.ESP_19.fields{4}.multiplex_type = 'Standard';
    ECOCAN.ESP_19.fields{4}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Message
%Message Number:61
case 'Message'
    ECOCAN.Message = struct;
    ECOCAN.Message.name = 'Message';
    ECOCAN.Message.description = 'Message';
    ECOCAN.Message.protocol  = 'ECOCAN';
    ECOCAN.Message.id = hex2dec('B1');
    ECOCAN.Message.idext = 'STANDARD';
    ECOCAN.Message.payload_size =8;
    ECOCAN.Message.interval =-1;


%%
%Network Node:Vector__XXX
%Message Name:Getriebe_12
%Message Number:62
case 'Getriebe_12'
    ECOCAN.Getriebe_12 = struct;
    ECOCAN.Getriebe_12.name = 'Getriebe_12';
    ECOCAN.Getriebe_12.description = 'Getriebe_12';
    ECOCAN.Getriebe_12.protocol  = 'ECOCAN';
    ECOCAN.Getriebe_12.id = hex2dec('AE');
    ECOCAN.Getriebe_12.idext = 'STANDARD';
    ECOCAN.Getriebe_12.payload_size =8;
    ECOCAN.Getriebe_12.interval =-1;

    ECOCAN.Getriebe_12.fields{1}.name = 'Getriebe_12_CRC';
    ECOCAN.Getriebe_12.fields{1}.units = '';
    ECOCAN.Getriebe_12.fields{1}.start_bit = 0;
    ECOCAN.Getriebe_12.fields{1}.bit_length = 8;
    ECOCAN.Getriebe_12.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_12.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_12.fields{1}.scale = 1;
    ECOCAN.Getriebe_12.fields{1}.offset = 0;
    ECOCAN.Getriebe_12.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_12.fields{1}.multiplex_value = 0;

    ECOCAN.Getriebe_12.fields{2}.name = 'Getriebe_12_BZ';
    ECOCAN.Getriebe_12.fields{2}.units = '';
    ECOCAN.Getriebe_12.fields{2}.start_bit = 8;
    ECOCAN.Getriebe_12.fields{2}.bit_length = 4;
    ECOCAN.Getriebe_12.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_12.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_12.fields{2}.scale = 1;
    ECOCAN.Getriebe_12.fields{2}.offset = 0;
    ECOCAN.Getriebe_12.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_12.fields{2}.multiplex_value = 0;

    ECOCAN.Getriebe_12.fields{3}.name = 'GE_Tachometer_Damping';
    ECOCAN.Getriebe_12.fields{3}.units = '';
    ECOCAN.Getriebe_12.fields{3}.start_bit = 12;
    ECOCAN.Getriebe_12.fields{3}.bit_length = 1;
    ECOCAN.Getriebe_12.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_12.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_12.fields{3}.scale = 1;
    ECOCAN.Getriebe_12.fields{3}.offset = 0;
    ECOCAN.Getriebe_12.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_12.fields{3}.multiplex_value = 0;

    ECOCAN.Getriebe_12.fields{4}.name = 'GE_FuelCutOff_Unt';
    ECOCAN.Getriebe_12.fields{4}.units = '';
    ECOCAN.Getriebe_12.fields{4}.start_bit = 13;
    ECOCAN.Getriebe_12.fields{4}.bit_length = 1;
    ECOCAN.Getriebe_12.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_12.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_12.fields{4}.scale = 1;
    ECOCAN.Getriebe_12.fields{4}.offset = 0;
    ECOCAN.Getriebe_12.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_12.fields{4}.multiplex_value = 0;

    ECOCAN.Getriebe_12.fields{5}.name = 'GE_Release_Synchro';
    ECOCAN.Getriebe_12.fields{5}.units = '';
    ECOCAN.Getriebe_12.fields{5}.start_bit = 14;
    ECOCAN.Getriebe_12.fields{5}.bit_length = 1;
    ECOCAN.Getriebe_12.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_12.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_12.fields{5}.scale = 1;
    ECOCAN.Getriebe_12.fields{5}.offset = 0;
    ECOCAN.Getriebe_12.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_12.fields{5}.multiplex_value = 0;

    ECOCAN.Getriebe_12.fields{6}.name = 'GE_Synchro_DesiredSpeed';
    ECOCAN.Getriebe_12.fields{6}.units = 'Unit_MinutInver';
    ECOCAN.Getriebe_12.fields{6}.start_bit = 15;
    ECOCAN.Getriebe_12.fields{6}.bit_length = 9;
    ECOCAN.Getriebe_12.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_12.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_12.fields{6}.scale = 25;
    ECOCAN.Getriebe_12.fields{6}.offset = 0;
    ECOCAN.Getriebe_12.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_12.fields{6}.multiplex_value = 0;

    ECOCAN.Getriebe_12.fields{7}.name = 'GE_Synchro_Time';
    ECOCAN.Getriebe_12.fields{7}.units = 'Unit_MilliSecon';
    ECOCAN.Getriebe_12.fields{7}.start_bit = 24;
    ECOCAN.Getriebe_12.fields{7}.bit_length = 8;
    ECOCAN.Getriebe_12.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_12.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_12.fields{7}.scale = 20;
    ECOCAN.Getriebe_12.fields{7}.offset = 0;
    ECOCAN.Getriebe_12.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_12.fields{7}.multiplex_value = 0;

    ECOCAN.Getriebe_12.fields{8}.name = 'GE_Moment_Start_Gradient';
    ECOCAN.Getriebe_12.fields{8}.units = 'Unit_NewtoMeterPerSecon';
    ECOCAN.Getriebe_12.fields{8}.start_bit = 32;
    ECOCAN.Getriebe_12.fields{8}.bit_length = 8;
    ECOCAN.Getriebe_12.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_12.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_12.fields{8}.scale = 10;
    ECOCAN.Getriebe_12.fields{8}.offset = 0;
    ECOCAN.Getriebe_12.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_12.fields{8}.multiplex_value = 0;

    ECOCAN.Getriebe_12.fields{9}.name = 'GE_Increase_SetSpeed_Idle';
    ECOCAN.Getriebe_12.fields{9}.units = 'Unit_MinutInver';
    ECOCAN.Getriebe_12.fields{9}.start_bit = 40;
    ECOCAN.Getriebe_12.fields{9}.bit_length = 8;
    ECOCAN.Getriebe_12.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_12.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_12.fields{9}.scale = 10;
    ECOCAN.Getriebe_12.fields{9}.offset = 0;
    ECOCAN.Getriebe_12.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_12.fields{9}.multiplex_value = 0;

    ECOCAN.Getriebe_12.fields{10}.name = 'GE_RecordingMoment';
    ECOCAN.Getriebe_12.fields{10}.units = 'Unit_NewtoMeter';
    ECOCAN.Getriebe_12.fields{10}.start_bit = 48;
    ECOCAN.Getriebe_12.fields{10}.bit_length = 10;
    ECOCAN.Getriebe_12.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_12.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_12.fields{10}.scale = 1;
    ECOCAN.Getriebe_12.fields{10}.offset = -509;
    ECOCAN.Getriebe_12.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_12.fields{10}.multiplex_value = 0;

    ECOCAN.Getriebe_12.fields{11}.name = 'GE_Anf_Zylabsch';
    ECOCAN.Getriebe_12.fields{11}.units = '';
    ECOCAN.Getriebe_12.fields{11}.start_bit = 58;
    ECOCAN.Getriebe_12.fields{11}.bit_length = 2;
    ECOCAN.Getriebe_12.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_12.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_12.fields{11}.scale = 1;
    ECOCAN.Getriebe_12.fields{11}.offset = 0;
    ECOCAN.Getriebe_12.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_12.fields{11}.multiplex_value = 0;

    ECOCAN.Getriebe_12.fields{12}.name = 'GE_HYB_DZ_Intervention';
    ECOCAN.Getriebe_12.fields{12}.units = '';
    ECOCAN.Getriebe_12.fields{12}.start_bit = 62;
    ECOCAN.Getriebe_12.fields{12}.bit_length = 2;
    ECOCAN.Getriebe_12.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_12.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_12.fields{12}.scale = 1;
    ECOCAN.Getriebe_12.fields{12}.offset = 0;
    ECOCAN.Getriebe_12.fields{12}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_12.fields{12}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Getriebe_11
%Message Number:63
case 'Getriebe_11'
    ECOCAN.Getriebe_11 = struct;
    ECOCAN.Getriebe_11.name = 'Getriebe_11';
    ECOCAN.Getriebe_11.description = 'Getriebe_11';
    ECOCAN.Getriebe_11.protocol  = 'ECOCAN';
    ECOCAN.Getriebe_11.id = hex2dec('AD');
    ECOCAN.Getriebe_11.idext = 'STANDARD';
    ECOCAN.Getriebe_11.payload_size =8;
    ECOCAN.Getriebe_11.interval =-1;

    ECOCAN.Getriebe_11.fields{1}.name = 'CHECKSUM';
    ECOCAN.Getriebe_11.fields{1}.units = '';
    ECOCAN.Getriebe_11.fields{1}.start_bit = 0;
    ECOCAN.Getriebe_11.fields{1}.bit_length = 8;
    ECOCAN.Getriebe_11.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_11.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_11.fields{1}.scale = 1;
    ECOCAN.Getriebe_11.fields{1}.offset = 0;
    ECOCAN.Getriebe_11.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_11.fields{1}.multiplex_value = 0;

    ECOCAN.Getriebe_11.fields{2}.name = 'COUNTERXX';
    ECOCAN.Getriebe_11.fields{2}.units = '';
    ECOCAN.Getriebe_11.fields{2}.start_bit = 8;
    ECOCAN.Getriebe_11.fields{2}.bit_length = 4;
    ECOCAN.Getriebe_11.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_11.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_11.fields{2}.scale = 1;
    ECOCAN.Getriebe_11.fields{2}.offset = 0;
    ECOCAN.Getriebe_11.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_11.fields{2}.multiplex_value = 0;

    ECOCAN.Getriebe_11.fields{3}.name = 'GE_MMom_Soll_02';
    ECOCAN.Getriebe_11.fields{3}.units = 'Unit_NewtoMeter';
    ECOCAN.Getriebe_11.fields{3}.start_bit = 12;
    ECOCAN.Getriebe_11.fields{3}.bit_length = 10;
    ECOCAN.Getriebe_11.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_11.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_11.fields{3}.scale = 1;
    ECOCAN.Getriebe_11.fields{3}.offset = -509;
    ECOCAN.Getriebe_11.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_11.fields{3}.multiplex_value = 0;

    ECOCAN.Getriebe_11.fields{4}.name = 'GE_MMom_Hold_02';
    ECOCAN.Getriebe_11.fields{4}.units = 'Unit_NewtoMeter';
    ECOCAN.Getriebe_11.fields{4}.start_bit = 22;
    ECOCAN.Getriebe_11.fields{4}.bit_length = 10;
    ECOCAN.Getriebe_11.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_11.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_11.fields{4}.scale = 1;
    ECOCAN.Getriebe_11.fields{4}.offset = -509;
    ECOCAN.Getriebe_11.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_11.fields{4}.multiplex_value = 0;

    ECOCAN.Getriebe_11.fields{5}.name = 'GE_Uefkt';
    ECOCAN.Getriebe_11.fields{5}.units = '';
    ECOCAN.Getriebe_11.fields{5}.start_bit = 32;
    ECOCAN.Getriebe_11.fields{5}.bit_length = 10;
    ECOCAN.Getriebe_11.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_11.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_11.fields{5}.scale = 0.1;
    ECOCAN.Getriebe_11.fields{5}.offset = 0;
    ECOCAN.Getriebe_11.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_11.fields{5}.multiplex_value = 0;

    ECOCAN.Getriebe_11.fields{6}.name = 'GE_SpeedLevel';
    ECOCAN.Getriebe_11.fields{6}.units = '';
    ECOCAN.Getriebe_11.fields{6}.start_bit = 42;
    ECOCAN.Getriebe_11.fields{6}.bit_length = 5;
    ECOCAN.Getriebe_11.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_11.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_11.fields{6}.scale = 1;
    ECOCAN.Getriebe_11.fields{6}.offset = 0;
    ECOCAN.Getriebe_11.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_11.fields{6}.multiplex_value = 0;

    ECOCAN.Getriebe_11.fields{7}.name = 'GE_SwitchingProcess';
    ECOCAN.Getriebe_11.fields{7}.units = '';
    ECOCAN.Getriebe_11.fields{7}.start_bit = 47;
    ECOCAN.Getriebe_11.fields{7}.bit_length = 1;
    ECOCAN.Getriebe_11.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_11.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_11.fields{7}.scale = 1;
    ECOCAN.Getriebe_11.fields{7}.offset = 0;
    ECOCAN.Getriebe_11.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_11.fields{7}.multiplex_value = 0;

    ECOCAN.Getriebe_11.fields{8}.name = 'GE_Status_Coupling';
    ECOCAN.Getriebe_11.fields{8}.units = '';
    ECOCAN.Getriebe_11.fields{8}.start_bit = 54;
    ECOCAN.Getriebe_11.fields{8}.bit_length = 2;
    ECOCAN.Getriebe_11.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_11.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_11.fields{8}.scale = 1;
    ECOCAN.Getriebe_11.fields{8}.offset = 0;
    ECOCAN.Getriebe_11.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_11.fields{8}.multiplex_value = 0;

    ECOCAN.Getriebe_11.fields{9}.name = 'GE_MMom_Status';
    ECOCAN.Getriebe_11.fields{9}.units = '';
    ECOCAN.Getriebe_11.fields{9}.start_bit = 56;
    ECOCAN.Getriebe_11.fields{9}.bit_length = 2;
    ECOCAN.Getriebe_11.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_11.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_11.fields{9}.scale = 1;
    ECOCAN.Getriebe_11.fields{9}.offset = 0;
    ECOCAN.Getriebe_11.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_11.fields{9}.multiplex_value = 0;

    ECOCAN.Getriebe_11.fields{10}.name = 'GE_Released_MMom_Hold';
    ECOCAN.Getriebe_11.fields{10}.units = '';
    ECOCAN.Getriebe_11.fields{10}.start_bit = 58;
    ECOCAN.Getriebe_11.fields{10}.bit_length = 1;
    ECOCAN.Getriebe_11.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_11.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_11.fields{10}.scale = 1;
    ECOCAN.Getriebe_11.fields{10}.offset = 0;
    ECOCAN.Getriebe_11.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_11.fields{10}.multiplex_value = 0;

    ECOCAN.Getriebe_11.fields{11}.name = 'GE_Ban_FadingOut';
    ECOCAN.Getriebe_11.fields{11}.units = '';
    ECOCAN.Getriebe_11.fields{11}.start_bit = 59;
    ECOCAN.Getriebe_11.fields{11}.bit_length = 1;
    ECOCAN.Getriebe_11.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_11.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_11.fields{11}.scale = 1;
    ECOCAN.Getriebe_11.fields{11}.offset = 0;
    ECOCAN.Getriebe_11.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_11.fields{11}.multiplex_value = 0;

    ECOCAN.Getriebe_11.fields{12}.name = 'GE_TargetWalk';
    ECOCAN.Getriebe_11.fields{12}.units = '';
    ECOCAN.Getriebe_11.fields{12}.start_bit = 60;
    ECOCAN.Getriebe_11.fields{12}.bit_length = 4;
    ECOCAN.Getriebe_11.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Getriebe_11.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.Getriebe_11.fields{12}.scale = 1;
    ECOCAN.Getriebe_11.fields{12}.offset = 0;
    ECOCAN.Getriebe_11.fields{12}.multiplex_type = 'Standard';
    ECOCAN.Getriebe_11.fields{12}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Motor_12
%Message Number:64
case 'Motor_12'
    ECOCAN.Motor_12 = struct;
    ECOCAN.Motor_12.name = 'Motor_12';
    ECOCAN.Motor_12.description = 'Motor_12';
    ECOCAN.Motor_12.protocol  = 'ECOCAN';
    ECOCAN.Motor_12.id = hex2dec('A8');
    ECOCAN.Motor_12.idext = 'STANDARD';
    ECOCAN.Motor_12.payload_size =8;
    ECOCAN.Motor_12.interval =-1;

    ECOCAN.Motor_12.fields{1}.name = 'Motor_12_CRC';
    ECOCAN.Motor_12.fields{1}.units = '';
    ECOCAN.Motor_12.fields{1}.start_bit = 0;
    ECOCAN.Motor_12.fields{1}.bit_length = 8;
    ECOCAN.Motor_12.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_12.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Motor_12.fields{1}.scale = 1;
    ECOCAN.Motor_12.fields{1}.offset = 0;
    ECOCAN.Motor_12.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Motor_12.fields{1}.multiplex_value = 0;

    ECOCAN.Motor_12.fields{2}.name = 'Motor_12_BZ';
    ECOCAN.Motor_12.fields{2}.units = '';
    ECOCAN.Motor_12.fields{2}.start_bit = 8;
    ECOCAN.Motor_12.fields{2}.bit_length = 4;
    ECOCAN.Motor_12.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_12.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Motor_12.fields{2}.scale = 1;
    ECOCAN.Motor_12.fields{2}.offset = 0;
    ECOCAN.Motor_12.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Motor_12.fields{2}.multiplex_value = 0;

    ECOCAN.Motor_12.fields{3}.name = 'MO_Mom_neg_available';
    ECOCAN.Motor_12.fields{3}.units = 'Unit_NewtoMeter';
    ECOCAN.Motor_12.fields{3}.start_bit = 12;
    ECOCAN.Motor_12.fields{3}.bit_length = 9;
    ECOCAN.Motor_12.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_12.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Motor_12.fields{3}.scale = 1;
    ECOCAN.Motor_12.fields{3}.offset = -509;
    ECOCAN.Motor_12.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Motor_12.fields{3}.multiplex_value = 0;

    ECOCAN.Motor_12.fields{4}.name = 'MO_Mom_Lim_stat';
    ECOCAN.Motor_12.fields{4}.units = 'Unit_NewtoMeter';
    ECOCAN.Motor_12.fields{4}.start_bit = 21;
    ECOCAN.Motor_12.fields{4}.bit_length = 9;
    ECOCAN.Motor_12.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_12.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Motor_12.fields{4}.scale = 1;
    ECOCAN.Motor_12.fields{4}.offset = 0;
    ECOCAN.Motor_12.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Motor_12.fields{4}.multiplex_value = 0;

    ECOCAN.Motor_12.fields{5}.name = 'MO_Mom_Lim_dyn';
    ECOCAN.Motor_12.fields{5}.units = 'Unit_NewtoMeter';
    ECOCAN.Motor_12.fields{5}.start_bit = 30;
    ECOCAN.Motor_12.fields{5}.bit_length = 10;
    ECOCAN.Motor_12.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_12.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Motor_12.fields{5}.scale = 1;
    ECOCAN.Motor_12.fields{5}.offset = -509;
    ECOCAN.Motor_12.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Motor_12.fields{5}.multiplex_value = 0;

    ECOCAN.Motor_12.fields{6}.name = 'MO_Momentenintegral_02';
    ECOCAN.Motor_12.fields{6}.units = 'Unit_PerCent';
    ECOCAN.Motor_12.fields{6}.start_bit = 40;
    ECOCAN.Motor_12.fields{6}.bit_length = 7;
    ECOCAN.Motor_12.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_12.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Motor_12.fields{6}.scale = 1;
    ECOCAN.Motor_12.fields{6}.offset = 0;
    ECOCAN.Motor_12.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Motor_12.fields{6}.multiplex_value = 0;

    ECOCAN.Motor_12.fields{7}.name = 'MO_QBit_RotationSpeed_01';
    ECOCAN.Motor_12.fields{7}.units = '';
    ECOCAN.Motor_12.fields{7}.start_bit = 47;
    ECOCAN.Motor_12.fields{7}.bit_length = 1;
    ECOCAN.Motor_12.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_12.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Motor_12.fields{7}.scale = 1;
    ECOCAN.Motor_12.fields{7}.offset = 0;
    ECOCAN.Motor_12.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Motor_12.fields{7}.multiplex_value = 0;

    ECOCAN.Motor_12.fields{8}.name = 'MO_RotationSpeed_01';
    ECOCAN.Motor_12.fields{8}.units = 'Unit_MinutInver';
    ECOCAN.Motor_12.fields{8}.start_bit = 48;
    ECOCAN.Motor_12.fields{8}.bit_length = 16;
    ECOCAN.Motor_12.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_12.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Motor_12.fields{8}.scale = 0.25;
    ECOCAN.Motor_12.fields{8}.offset = 0;
    ECOCAN.Motor_12.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Motor_12.fields{8}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Motor_11
%Message Number:65
case 'Motor_11'
    ECOCAN.Motor_11 = struct;
    ECOCAN.Motor_11.name = 'Motor_11';
    ECOCAN.Motor_11.description = 'Motor_11';
    ECOCAN.Motor_11.protocol  = 'ECOCAN';
    ECOCAN.Motor_11.id = hex2dec('A7');
    ECOCAN.Motor_11.idext = 'STANDARD';
    ECOCAN.Motor_11.payload_size =8;
    ECOCAN.Motor_11.interval =-1;

    ECOCAN.Motor_11.fields{1}.name = 'Motor_11_CRC';
    ECOCAN.Motor_11.fields{1}.units = '';
    ECOCAN.Motor_11.fields{1}.start_bit = 0;
    ECOCAN.Motor_11.fields{1}.bit_length = 8;
    ECOCAN.Motor_11.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_11.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Motor_11.fields{1}.scale = 1;
    ECOCAN.Motor_11.fields{1}.offset = 0;
    ECOCAN.Motor_11.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Motor_11.fields{1}.multiplex_value = 0;

    ECOCAN.Motor_11.fields{2}.name = 'Motor_11_BZ';
    ECOCAN.Motor_11.fields{2}.units = '';
    ECOCAN.Motor_11.fields{2}.start_bit = 8;
    ECOCAN.Motor_11.fields{2}.bit_length = 4;
    ECOCAN.Motor_11.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_11.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Motor_11.fields{2}.scale = 1;
    ECOCAN.Motor_11.fields{2}.offset = 0;
    ECOCAN.Motor_11.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Motor_11.fields{2}.multiplex_value = 0;

    ECOCAN.Motor_11.fields{3}.name = 'MO_Mom_Soll_Roh';
    ECOCAN.Motor_11.fields{3}.units = 'Unit_NewtoMeter';
    ECOCAN.Motor_11.fields{3}.start_bit = 12;
    ECOCAN.Motor_11.fields{3}.bit_length = 10;
    ECOCAN.Motor_11.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_11.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Motor_11.fields{3}.scale = 1;
    ECOCAN.Motor_11.fields{3}.offset = -509;
    ECOCAN.Motor_11.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Motor_11.fields{3}.multiplex_value = 0;

    ECOCAN.Motor_11.fields{4}.name = 'MO_Mom_Total';
    ECOCAN.Motor_11.fields{4}.units = 'Unit_NewtoMeter';
    ECOCAN.Motor_11.fields{4}.start_bit = 22;
    ECOCAN.Motor_11.fields{4}.bit_length = 10;
    ECOCAN.Motor_11.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_11.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Motor_11.fields{4}.scale = 1;
    ECOCAN.Motor_11.fields{4}.offset = -509;
    ECOCAN.Motor_11.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Motor_11.fields{4}.multiplex_value = 0;

    ECOCAN.Motor_11.fields{5}.name = 'MO_Mom_Inertia_Total';
    ECOCAN.Motor_11.fields{5}.units = 'Unit_NewtoMeter';
    ECOCAN.Motor_11.fields{5}.start_bit = 32;
    ECOCAN.Motor_11.fields{5}.bit_length = 10;
    ECOCAN.Motor_11.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_11.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Motor_11.fields{5}.scale = 1;
    ECOCAN.Motor_11.fields{5}.offset = -509;
    ECOCAN.Motor_11.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Motor_11.fields{5}.multiplex_value = 0;

    ECOCAN.Motor_11.fields{6}.name = 'MO_Mom_Soll_Filtered';
    ECOCAN.Motor_11.fields{6}.units = 'Unit_NewtoMeter';
    ECOCAN.Motor_11.fields{6}.start_bit = 42;
    ECOCAN.Motor_11.fields{6}.bit_length = 10;
    ECOCAN.Motor_11.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_11.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Motor_11.fields{6}.scale = 1;
    ECOCAN.Motor_11.fields{6}.offset = -509;
    ECOCAN.Motor_11.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Motor_11.fields{6}.multiplex_value = 0;

    ECOCAN.Motor_11.fields{7}.name = 'MO_Mom_Schub';
    ECOCAN.Motor_11.fields{7}.units = 'Unit_NewtoMeter';
    ECOCAN.Motor_11.fields{7}.start_bit = 52;
    ECOCAN.Motor_11.fields{7}.bit_length = 9;
    ECOCAN.Motor_11.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_11.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Motor_11.fields{7}.scale = 1;
    ECOCAN.Motor_11.fields{7}.offset = -509;
    ECOCAN.Motor_11.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Motor_11.fields{7}.multiplex_value = 0;

    ECOCAN.Motor_11.fields{8}.name = 'MO_Status_NormalOperation_01';
    ECOCAN.Motor_11.fields{8}.units = '';
    ECOCAN.Motor_11.fields{8}.start_bit = 61;
    ECOCAN.Motor_11.fields{8}.bit_length = 1;
    ECOCAN.Motor_11.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_11.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Motor_11.fields{8}.scale = 1;
    ECOCAN.Motor_11.fields{8}.offset = 0;
    ECOCAN.Motor_11.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Motor_11.fields{8}.multiplex_value = 0;

    ECOCAN.Motor_11.fields{9}.name = 'MO_First_InaccurateThreshold';
    ECOCAN.Motor_11.fields{9}.units = '';
    ECOCAN.Motor_11.fields{9}.start_bit = 62;
    ECOCAN.Motor_11.fields{9}.bit_length = 1;
    ECOCAN.Motor_11.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_11.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Motor_11.fields{9}.scale = 1;
    ECOCAN.Motor_11.fields{9}.offset = 0;
    ECOCAN.Motor_11.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Motor_11.fields{9}.multiplex_value = 0;

    ECOCAN.Motor_11.fields{10}.name = 'MO_QBit_Motormomente';
    ECOCAN.Motor_11.fields{10}.units = '';
    ECOCAN.Motor_11.fields{10}.start_bit = 63;
    ECOCAN.Motor_11.fields{10}.bit_length = 1;
    ECOCAN.Motor_11.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Motor_11.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Motor_11.fields{10}.scale = 1;
    ECOCAN.Motor_11.fields{10}.offset = 0;
    ECOCAN.Motor_11.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Motor_11.fields{10}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:LWI_01
%Message Number:66
case 'LWI_01'
    ECOCAN.LWI_01 = struct;
    ECOCAN.LWI_01.name = 'LWI_01';
    ECOCAN.LWI_01.description = 'LWI_01';
    ECOCAN.LWI_01.protocol  = 'ECOCAN';
    ECOCAN.LWI_01.id = hex2dec('86');
    ECOCAN.LWI_01.idext = 'STANDARD';
    ECOCAN.LWI_01.payload_size =8;
    ECOCAN.LWI_01.interval =-1;

    ECOCAN.LWI_01.fields{1}.name = 'CHECKSUM';
    ECOCAN.LWI_01.fields{1}.units = '';
    ECOCAN.LWI_01.fields{1}.start_bit = 0;
    ECOCAN.LWI_01.fields{1}.bit_length = 8;
    ECOCAN.LWI_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LWI_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.LWI_01.fields{1}.scale = 1;
    ECOCAN.LWI_01.fields{1}.offset = 0;
    ECOCAN.LWI_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.LWI_01.fields{1}.multiplex_value = 0;

    ECOCAN.LWI_01.fields{2}.name = 'COUNTER';
    ECOCAN.LWI_01.fields{2}.units = '';
    ECOCAN.LWI_01.fields{2}.start_bit = 8;
    ECOCAN.LWI_01.fields{2}.bit_length = 4;
    ECOCAN.LWI_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LWI_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.LWI_01.fields{2}.scale = 1;
    ECOCAN.LWI_01.fields{2}.offset = 0;
    ECOCAN.LWI_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.LWI_01.fields{2}.multiplex_value = 0;

    ECOCAN.LWI_01.fields{3}.name = 'LWI_Sensorstatus';
    ECOCAN.LWI_01.fields{3}.units = '';
    ECOCAN.LWI_01.fields{3}.start_bit = 12;
    ECOCAN.LWI_01.fields{3}.bit_length = 1;
    ECOCAN.LWI_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LWI_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.LWI_01.fields{3}.scale = 1;
    ECOCAN.LWI_01.fields{3}.offset = 0;
    ECOCAN.LWI_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.LWI_01.fields{3}.multiplex_value = 0;

    ECOCAN.LWI_01.fields{4}.name = 'LWI_QBit_Sub_Daten';
    ECOCAN.LWI_01.fields{4}.units = '';
    ECOCAN.LWI_01.fields{4}.start_bit = 13;
    ECOCAN.LWI_01.fields{4}.bit_length = 1;
    ECOCAN.LWI_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LWI_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.LWI_01.fields{4}.scale = 1;
    ECOCAN.LWI_01.fields{4}.offset = 0;
    ECOCAN.LWI_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.LWI_01.fields{4}.multiplex_value = 0;

    ECOCAN.LWI_01.fields{5}.name = 'LWI_QBit_SteeringWheelAngle';
    ECOCAN.LWI_01.fields{5}.units = '';
    ECOCAN.LWI_01.fields{5}.start_bit = 15;
    ECOCAN.LWI_01.fields{5}.bit_length = 1;
    ECOCAN.LWI_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LWI_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.LWI_01.fields{5}.scale = 1;
    ECOCAN.LWI_01.fields{5}.offset = 0;
    ECOCAN.LWI_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.LWI_01.fields{5}.multiplex_value = 0;

    ECOCAN.LWI_01.fields{6}.name = 'LWI_SteeringWheelAngle';
    ECOCAN.LWI_01.fields{6}.units = 'Unit_DegreOfArc';
    ECOCAN.LWI_01.fields{6}.start_bit = 16;
    ECOCAN.LWI_01.fields{6}.bit_length = 13;
    ECOCAN.LWI_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LWI_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.LWI_01.fields{6}.scale = 0.1;
    ECOCAN.LWI_01.fields{6}.offset = 0;
    ECOCAN.LWI_01.fields{6}.multiplex_type = 'Standard';
    ECOCAN.LWI_01.fields{6}.multiplex_value = 0;

    ECOCAN.LWI_01.fields{7}.name = 'LWI_VZ_SteeringWheelAngle';
    ECOCAN.LWI_01.fields{7}.units = '';
    ECOCAN.LWI_01.fields{7}.start_bit = 29;
    ECOCAN.LWI_01.fields{7}.bit_length = 1;
    ECOCAN.LWI_01.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LWI_01.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.LWI_01.fields{7}.scale = 1;
    ECOCAN.LWI_01.fields{7}.offset = 0;
    ECOCAN.LWI_01.fields{7}.multiplex_type = 'Standard';
    ECOCAN.LWI_01.fields{7}.multiplex_value = 0;

    ECOCAN.LWI_01.fields{8}.name = 'LWI_VZ_SteeringWheelAngle_Speed';
    ECOCAN.LWI_01.fields{8}.units = '';
    ECOCAN.LWI_01.fields{8}.start_bit = 30;
    ECOCAN.LWI_01.fields{8}.bit_length = 1;
    ECOCAN.LWI_01.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LWI_01.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.LWI_01.fields{8}.scale = 1;
    ECOCAN.LWI_01.fields{8}.offset = 0;
    ECOCAN.LWI_01.fields{8}.multiplex_type = 'Standard';
    ECOCAN.LWI_01.fields{8}.multiplex_value = 0;

    ECOCAN.LWI_01.fields{9}.name = 'LWI_SteeringWheelAngle_Speed';
    ECOCAN.LWI_01.fields{9}.units = 'Unit_DegreOfArcPerSecon';
    ECOCAN.LWI_01.fields{9}.start_bit = 31;
    ECOCAN.LWI_01.fields{9}.bit_length = 9;
    ECOCAN.LWI_01.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LWI_01.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.LWI_01.fields{9}.scale = 5;
    ECOCAN.LWI_01.fields{9}.offset = 0;
    ECOCAN.LWI_01.fields{9}.multiplex_type = 'Standard';
    ECOCAN.LWI_01.fields{9}.multiplex_value = 0;

    ECOCAN.LWI_01.fields{10}.name = 'LWI_Sub_Daten';
    ECOCAN.LWI_01.fields{10}.units = '';
    ECOCAN.LWI_01.fields{10}.start_bit = 40;
    ECOCAN.LWI_01.fields{10}.bit_length = 16;
    ECOCAN.LWI_01.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LWI_01.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.LWI_01.fields{10}.scale = 1;
    ECOCAN.LWI_01.fields{10}.offset = 0;
    ECOCAN.LWI_01.fields{10}.multiplex_type = 'Standard';
    ECOCAN.LWI_01.fields{10}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Airbag_01
%Message Number:67
case 'Airbag_01'
    ECOCAN.Airbag_01 = struct;
    ECOCAN.Airbag_01.name = 'Airbag_01';
    ECOCAN.Airbag_01.description = 'Airbag_01';
    ECOCAN.Airbag_01.protocol  = 'ECOCAN';
    ECOCAN.Airbag_01.id = hex2dec('40');
    ECOCAN.Airbag_01.idext = 'STANDARD';
    ECOCAN.Airbag_01.payload_size =8;
    ECOCAN.Airbag_01.interval =-1;

    ECOCAN.Airbag_01.fields{1}.name = 'Airbag_01_CRC';
    ECOCAN.Airbag_01.fields{1}.units = '';
    ECOCAN.Airbag_01.fields{1}.start_bit = 0;
    ECOCAN.Airbag_01.fields{1}.bit_length = 8;
    ECOCAN.Airbag_01.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{1}.scale = 1;
    ECOCAN.Airbag_01.fields{1}.offset = 0;
    ECOCAN.Airbag_01.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{1}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{2}.name = 'Airbag_01_BZ';
    ECOCAN.Airbag_01.fields{2}.units = '';
    ECOCAN.Airbag_01.fields{2}.start_bit = 8;
    ECOCAN.Airbag_01.fields{2}.bit_length = 4;
    ECOCAN.Airbag_01.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{2}.scale = 1;
    ECOCAN.Airbag_01.fields{2}.offset = 0;
    ECOCAN.Airbag_01.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{2}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{3}.name = 'AB_RGS_Anst';
    ECOCAN.Airbag_01.fields{3}.units = '';
    ECOCAN.Airbag_01.fields{3}.start_bit = 12;
    ECOCAN.Airbag_01.fields{3}.bit_length = 4;
    ECOCAN.Airbag_01.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{3}.scale = 1;
    ECOCAN.Airbag_01.fields{3}.offset = 0;
    ECOCAN.Airbag_01.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{3}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{4}.name = 'AB_Front_Crash';
    ECOCAN.Airbag_01.fields{4}.units = '';
    ECOCAN.Airbag_01.fields{4}.start_bit = 16;
    ECOCAN.Airbag_01.fields{4}.bit_length = 1;
    ECOCAN.Airbag_01.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{4}.scale = 1;
    ECOCAN.Airbag_01.fields{4}.offset = 0;
    ECOCAN.Airbag_01.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{4}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{5}.name = 'AB_Heck_Crash';
    ECOCAN.Airbag_01.fields{5}.units = '';
    ECOCAN.Airbag_01.fields{5}.start_bit = 17;
    ECOCAN.Airbag_01.fields{5}.bit_length = 1;
    ECOCAN.Airbag_01.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{5}.scale = 1;
    ECOCAN.Airbag_01.fields{5}.offset = 0;
    ECOCAN.Airbag_01.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{5}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{6}.name = 'AB_SF_Crash';
    ECOCAN.Airbag_01.fields{6}.units = '';
    ECOCAN.Airbag_01.fields{6}.start_bit = 18;
    ECOCAN.Airbag_01.fields{6}.bit_length = 1;
    ECOCAN.Airbag_01.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{6}.scale = 1;
    ECOCAN.Airbag_01.fields{6}.offset = 0;
    ECOCAN.Airbag_01.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{6}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{7}.name = 'AB_SB_Crash';
    ECOCAN.Airbag_01.fields{7}.units = '';
    ECOCAN.Airbag_01.fields{7}.start_bit = 19;
    ECOCAN.Airbag_01.fields{7}.bit_length = 1;
    ECOCAN.Airbag_01.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{7}.scale = 1;
    ECOCAN.Airbag_01.fields{7}.offset = 0;
    ECOCAN.Airbag_01.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{7}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{8}.name = 'AB_Rollover_Crash';
    ECOCAN.Airbag_01.fields{8}.units = '';
    ECOCAN.Airbag_01.fields{8}.start_bit = 20;
    ECOCAN.Airbag_01.fields{8}.bit_length = 1;
    ECOCAN.Airbag_01.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{8}.scale = 1;
    ECOCAN.Airbag_01.fields{8}.offset = 0;
    ECOCAN.Airbag_01.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{8}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{9}.name = 'AB_Crash_Int';
    ECOCAN.Airbag_01.fields{9}.units = '';
    ECOCAN.Airbag_01.fields{9}.start_bit = 21;
    ECOCAN.Airbag_01.fields{9}.bit_length = 3;
    ECOCAN.Airbag_01.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{9}.scale = 1;
    ECOCAN.Airbag_01.fields{9}.offset = 0;
    ECOCAN.Airbag_01.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{9}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{10}.name = 'AB_Lampe';
    ECOCAN.Airbag_01.fields{10}.units = '';
    ECOCAN.Airbag_01.fields{10}.start_bit = 24;
    ECOCAN.Airbag_01.fields{10}.bit_length = 1;
    ECOCAN.Airbag_01.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{10}.scale = 1;
    ECOCAN.Airbag_01.fields{10}.offset = 0;
    ECOCAN.Airbag_01.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{10}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{11}.name = 'AB_Deaktiviert';
    ECOCAN.Airbag_01.fields{11}.units = '';
    ECOCAN.Airbag_01.fields{11}.start_bit = 25;
    ECOCAN.Airbag_01.fields{11}.bit_length = 1;
    ECOCAN.Airbag_01.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{11}.scale = 1;
    ECOCAN.Airbag_01.fields{11}.offset = 0;
    ECOCAN.Airbag_01.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{11}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{12}.name = 'AB_VB_deaktiviert';
    ECOCAN.Airbag_01.fields{12}.units = '';
    ECOCAN.Airbag_01.fields{12}.start_bit = 26;
    ECOCAN.Airbag_01.fields{12}.bit_length = 1;
    ECOCAN.Airbag_01.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{12}.scale = 1;
    ECOCAN.Airbag_01.fields{12}.offset = 0;
    ECOCAN.Airbag_01.fields{12}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{12}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{13}.name = 'AB_Systemfehler';
    ECOCAN.Airbag_01.fields{13}.units = '';
    ECOCAN.Airbag_01.fields{13}.start_bit = 27;
    ECOCAN.Airbag_01.fields{13}.bit_length = 1;
    ECOCAN.Airbag_01.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{13}.scale = 1;
    ECOCAN.Airbag_01.fields{13}.offset = 0;
    ECOCAN.Airbag_01.fields{13}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{13}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{14}.name = 'AB_Diagnose';
    ECOCAN.Airbag_01.fields{14}.units = '';
    ECOCAN.Airbag_01.fields{14}.start_bit = 28;
    ECOCAN.Airbag_01.fields{14}.bit_length = 1;
    ECOCAN.Airbag_01.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{14}.scale = 1;
    ECOCAN.Airbag_01.fields{14}.offset = 0;
    ECOCAN.Airbag_01.fields{14}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{14}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{15}.name = 'AB_Stellgliedtest';
    ECOCAN.Airbag_01.fields{15}.units = '';
    ECOCAN.Airbag_01.fields{15}.start_bit = 29;
    ECOCAN.Airbag_01.fields{15}.bit_length = 1;
    ECOCAN.Airbag_01.fields{15}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{15}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{15}.scale = 1;
    ECOCAN.Airbag_01.fields{15}.offset = 0;
    ECOCAN.Airbag_01.fields{15}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{15}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{16}.name = 'AB_Erh_Auf_VB';
    ECOCAN.Airbag_01.fields{16}.units = '';
    ECOCAN.Airbag_01.fields{16}.start_bit = 30;
    ECOCAN.Airbag_01.fields{16}.bit_length = 2;
    ECOCAN.Airbag_01.fields{16}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{16}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{16}.scale = 1;
    ECOCAN.Airbag_01.fields{16}.offset = 0;
    ECOCAN.Airbag_01.fields{16}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{16}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{17}.name = 'AB_Gurtwarn_VF';
    ECOCAN.Airbag_01.fields{17}.units = '';
    ECOCAN.Airbag_01.fields{17}.start_bit = 32;
    ECOCAN.Airbag_01.fields{17}.bit_length = 1;
    ECOCAN.Airbag_01.fields{17}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{17}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{17}.scale = 1;
    ECOCAN.Airbag_01.fields{17}.offset = 0;
    ECOCAN.Airbag_01.fields{17}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{17}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{18}.name = 'AB_Gurtwarn_VB';
    ECOCAN.Airbag_01.fields{18}.units = '';
    ECOCAN.Airbag_01.fields{18}.start_bit = 33;
    ECOCAN.Airbag_01.fields{18}.bit_length = 1;
    ECOCAN.Airbag_01.fields{18}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{18}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{18}.scale = 1;
    ECOCAN.Airbag_01.fields{18}.offset = 0;
    ECOCAN.Airbag_01.fields{18}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{18}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{19}.name = 'AB_Anzeige_Fussg';
    ECOCAN.Airbag_01.fields{19}.units = '';
    ECOCAN.Airbag_01.fields{19}.start_bit = 34;
    ECOCAN.Airbag_01.fields{19}.bit_length = 2;
    ECOCAN.Airbag_01.fields{19}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{19}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{19}.scale = 1;
    ECOCAN.Airbag_01.fields{19}.offset = 0;
    ECOCAN.Airbag_01.fields{19}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{19}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{20}.name = 'AB_Texte_AKS';
    ECOCAN.Airbag_01.fields{20}.units = '';
    ECOCAN.Airbag_01.fields{20}.start_bit = 36;
    ECOCAN.Airbag_01.fields{20}.bit_length = 2;
    ECOCAN.Airbag_01.fields{20}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{20}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{20}.scale = 1;
    ECOCAN.Airbag_01.fields{20}.offset = 0;
    ECOCAN.Airbag_01.fields{20}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{20}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{21}.name = 'AB_PAO_Leuchte_Anf';
    ECOCAN.Airbag_01.fields{21}.units = '';
    ECOCAN.Airbag_01.fields{21}.start_bit = 38;
    ECOCAN.Airbag_01.fields{21}.bit_length = 1;
    ECOCAN.Airbag_01.fields{21}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{21}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{21}.scale = 1;
    ECOCAN.Airbag_01.fields{21}.offset = 0;
    ECOCAN.Airbag_01.fields{21}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{21}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{22}.name = 'AB_MKB_gueltig';
    ECOCAN.Airbag_01.fields{22}.units = '';
    ECOCAN.Airbag_01.fields{22}.start_bit = 39;
    ECOCAN.Airbag_01.fields{22}.bit_length = 1;
    ECOCAN.Airbag_01.fields{22}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{22}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{22}.scale = 1;
    ECOCAN.Airbag_01.fields{22}.offset = 0;
    ECOCAN.Airbag_01.fields{22}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{22}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{23}.name = 'AB_MKB_Anforderung';
    ECOCAN.Airbag_01.fields{23}.units = '';
    ECOCAN.Airbag_01.fields{23}.start_bit = 40;
    ECOCAN.Airbag_01.fields{23}.bit_length = 1;
    ECOCAN.Airbag_01.fields{23}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{23}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{23}.scale = 1;
    ECOCAN.Airbag_01.fields{23}.offset = 0;
    ECOCAN.Airbag_01.fields{23}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{23}.multiplex_value = 0;

    ECOCAN.Airbag_01.fields{24}.name = 'AB_Versorgungsspannung';
    ECOCAN.Airbag_01.fields{24}.units = '';
    ECOCAN.Airbag_01.fields{24}.start_bit = 41;
    ECOCAN.Airbag_01.fields{24}.bit_length = 1;
    ECOCAN.Airbag_01.fields{24}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Airbag_01.fields{24}.data_type = 'UNSIGNED';
    ECOCAN.Airbag_01.fields{24}.scale = 1;
    ECOCAN.Airbag_01.fields{24}.offset = 0;
    ECOCAN.Airbag_01.fields{24}.multiplex_type = 'Standard';
    ECOCAN.Airbag_01.fields{24}.multiplex_value = 0;


  end
  try
    msg = ECOCAN.(msgname);
  catch
  end
end
end

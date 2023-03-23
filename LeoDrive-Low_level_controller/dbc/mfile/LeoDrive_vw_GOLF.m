function msg = LeoDrive_vw_GOLF(msgname,type)
  if(255==type)
  msg = struct;
  msg.num=9;
  msg.list= cell(1, msg.num);
  msg.list{1}='VehicleErrors';
  msg.list{2}='motor_info';
  msg.list{3}='MotionInfo';
  msg.list{4}='VehicleSignalStatus';
  msg.list{5}='VehicleDynamicsInfo';
  msg.list{6}='FrontWheelCommands';
  msg.list{7}='VehicleCommands';
  msg.list{8}='LongitudinalCommandsV2';
  msg.list{9}='LongitudinalCommandsV1';
  else 
  msg = struct;
  switch msgname 
%%
%Network Node:Vector__XXX
%Message Name:VehicleErrors
%Message Number:1
case 'VehicleErrors'
    ECOCAN.VehicleErrors = struct;
    ECOCAN.VehicleErrors.name = 'VehicleErrors';
    ECOCAN.VehicleErrors.description = 'VehicleErrors';
    ECOCAN.VehicleErrors.protocol  = 'ECOCAN';
    ECOCAN.VehicleErrors.id = hex2dec('415');
    ECOCAN.VehicleErrors.idext = 'STANDARD';
    ECOCAN.VehicleErrors.payload_size =8;
    ECOCAN.VehicleErrors.interval =-1;

    ECOCAN.VehicleErrors.fields{1}.name = 'isMotorRunning';
    ECOCAN.VehicleErrors.fields{1}.units = '-';
    ECOCAN.VehicleErrors.fields{1}.start_bit = 0;
    ECOCAN.VehicleErrors.fields{1}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{1}.scale = 1;
    ECOCAN.VehicleErrors.fields{1}.offset = 0;
    ECOCAN.VehicleErrors.fields{1}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{1}.multiplex_value = 0;

    ECOCAN.VehicleErrors.fields{2}.name = 'Kl75';
    ECOCAN.VehicleErrors.fields{2}.units = '-';
    ECOCAN.VehicleErrors.fields{2}.start_bit = 1;
    ECOCAN.VehicleErrors.fields{2}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{2}.scale = 1;
    ECOCAN.VehicleErrors.fields{2}.offset = 0;
    ECOCAN.VehicleErrors.fields{2}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{2}.multiplex_value = 0;

    ECOCAN.VehicleErrors.fields{3}.name = 'PDS_HeartbeatErr';
    ECOCAN.VehicleErrors.fields{3}.units = '-';
    ECOCAN.VehicleErrors.fields{3}.start_bit = 8;
    ECOCAN.VehicleErrors.fields{3}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{3}.scale = 1;
    ECOCAN.VehicleErrors.fields{3}.offset = 0;
    ECOCAN.VehicleErrors.fields{3}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{3}.multiplex_value = 0;

    ECOCAN.VehicleErrors.fields{4}.name = 'PDS_BusErr';
    ECOCAN.VehicleErrors.fields{4}.units = '-';
    ECOCAN.VehicleErrors.fields{4}.start_bit = 9;
    ECOCAN.VehicleErrors.fields{4}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{4}.scale = 1;
    ECOCAN.VehicleErrors.fields{4}.offset = 0;
    ECOCAN.VehicleErrors.fields{4}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{4}.multiplex_value = 0;

    ECOCAN.VehicleErrors.fields{5}.name = 'By_wirePowerErr';
    ECOCAN.VehicleErrors.fields{5}.units = '-';
    ECOCAN.VehicleErrors.fields{5}.start_bit = 10;
    ECOCAN.VehicleErrors.fields{5}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{5}.scale = 1;
    ECOCAN.VehicleErrors.fields{5}.offset = 0;
    ECOCAN.VehicleErrors.fields{5}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{5}.multiplex_value = 0;

    ECOCAN.VehicleErrors.fields{6}.name = 'EPASPowerErr';
    ECOCAN.VehicleErrors.fields{6}.units = '-';
    ECOCAN.VehicleErrors.fields{6}.start_bit = 11;
    ECOCAN.VehicleErrors.fields{6}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{6}.scale = 1;
    ECOCAN.VehicleErrors.fields{6}.offset = 0;
    ECOCAN.VehicleErrors.fields{6}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{6}.multiplex_value = 0;

    ECOCAN.VehicleErrors.fields{7}.name = 'BrakePowerErr';
    ECOCAN.VehicleErrors.fields{7}.units = '-';
    ECOCAN.VehicleErrors.fields{7}.start_bit = 12;
    ECOCAN.VehicleErrors.fields{7}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{7}.scale = 1;
    ECOCAN.VehicleErrors.fields{7}.offset = 0;
    ECOCAN.VehicleErrors.fields{7}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{7}.multiplex_value = 0;

    ECOCAN.VehicleErrors.fields{8}.name = 'Throttle_ECU_HeartbeatErr';
    ECOCAN.VehicleErrors.fields{8}.units = '-';
    ECOCAN.VehicleErrors.fields{8}.start_bit = 13;
    ECOCAN.VehicleErrors.fields{8}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{8}.scale = 1;
    ECOCAN.VehicleErrors.fields{8}.offset = 0;
    ECOCAN.VehicleErrors.fields{8}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{8}.multiplex_value = 0;

    ECOCAN.VehicleErrors.fields{9}.name = 'G29_HeartbeatErr';
    ECOCAN.VehicleErrors.fields{9}.units = '-';
    ECOCAN.VehicleErrors.fields{9}.start_bit = 14;
    ECOCAN.VehicleErrors.fields{9}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{9}.scale = 1;
    ECOCAN.VehicleErrors.fields{9}.offset = 0;
    ECOCAN.VehicleErrors.fields{9}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{9}.multiplex_value = 0;

    ECOCAN.VehicleErrors.fields{10}.name = 'EPAS_systemErr';
    ECOCAN.VehicleErrors.fields{10}.units = '-';
    ECOCAN.VehicleErrors.fields{10}.start_bit = 15;
    ECOCAN.VehicleErrors.fields{10}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{10}.scale = 1;
    ECOCAN.VehicleErrors.fields{10}.offset = 0;
    ECOCAN.VehicleErrors.fields{10}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{10}.multiplex_value = 0;

    ECOCAN.VehicleErrors.fields{11}.name = 'EPAS_HeartbeatErr';
    ECOCAN.VehicleErrors.fields{11}.units = '-';
    ECOCAN.VehicleErrors.fields{11}.start_bit = 16;
    ECOCAN.VehicleErrors.fields{11}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{11}.scale = 1;
    ECOCAN.VehicleErrors.fields{11}.offset = 0;
    ECOCAN.VehicleErrors.fields{11}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{11}.multiplex_value = 0;

    ECOCAN.VehicleErrors.fields{12}.name = 'Brake_SystemErr';
    ECOCAN.VehicleErrors.fields{12}.units = '-';
    ECOCAN.VehicleErrors.fields{12}.start_bit = 17;
    ECOCAN.VehicleErrors.fields{12}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{12}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{12}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{12}.scale = 1;
    ECOCAN.VehicleErrors.fields{12}.offset = 0;
    ECOCAN.VehicleErrors.fields{12}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{12}.multiplex_value = 0;

    ECOCAN.VehicleErrors.fields{13}.name = 'Brake_HeartbeatErr';
    ECOCAN.VehicleErrors.fields{13}.units = '-';
    ECOCAN.VehicleErrors.fields{13}.start_bit = 18;
    ECOCAN.VehicleErrors.fields{13}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{13}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{13}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{13}.scale = 1;
    ECOCAN.VehicleErrors.fields{13}.offset = 0;
    ECOCAN.VehicleErrors.fields{13}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{13}.multiplex_value = 0;

    ECOCAN.VehicleErrors.fields{14}.name = 'PC_HeartbeatErr';
    ECOCAN.VehicleErrors.fields{14}.units = '-';
    ECOCAN.VehicleErrors.fields{14}.start_bit = 19;
    ECOCAN.VehicleErrors.fields{14}.bit_length = 1;
    ECOCAN.VehicleErrors.fields{14}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleErrors.fields{14}.data_type = 'UNSIGNED';
    ECOCAN.VehicleErrors.fields{14}.scale = 1;
    ECOCAN.VehicleErrors.fields{14}.offset = 0;
    ECOCAN.VehicleErrors.fields{14}.multiplex_type = 'Standard';
    ECOCAN.VehicleErrors.fields{14}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:motor_info
%Message Number:2
case 'motor_info'
    ECOCAN.motor_info = struct;
    ECOCAN.motor_info.name = 'motor_info';
    ECOCAN.motor_info.description = 'motor_info';
    ECOCAN.motor_info.protocol  = 'ECOCAN';
    ECOCAN.motor_info.id = hex2dec('414');
    ECOCAN.motor_info.idext = 'STANDARD';
    ECOCAN.motor_info.payload_size =8;
    ECOCAN.motor_info.interval =-1;

    ECOCAN.motor_info.fields{1}.name = 'motor_temp';
    ECOCAN.motor_info.fields{1}.units = '-';
    ECOCAN.motor_info.fields{1}.start_bit = 0;
    ECOCAN.motor_info.fields{1}.bit_length = 8;
    ECOCAN.motor_info.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.motor_info.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.motor_info.fields{1}.scale = 1;
    ECOCAN.motor_info.fields{1}.offset = 0;
    ECOCAN.motor_info.fields{1}.multiplex_type = 'Standard';
    ECOCAN.motor_info.fields{1}.multiplex_value = 0;

    ECOCAN.motor_info.fields{2}.name = 'motor_rpm';
    ECOCAN.motor_info.fields{2}.units = '-';
    ECOCAN.motor_info.fields{2}.start_bit = 8;
    ECOCAN.motor_info.fields{2}.bit_length = 16;
    ECOCAN.motor_info.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.motor_info.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.motor_info.fields{2}.scale = 1;
    ECOCAN.motor_info.fields{2}.offset = 0;
    ECOCAN.motor_info.fields{2}.multiplex_type = 'Standard';
    ECOCAN.motor_info.fields{2}.multiplex_value = 0;

    ECOCAN.motor_info.fields{3}.name = 'kl75';
    ECOCAN.motor_info.fields{3}.units = '-';
    ECOCAN.motor_info.fields{3}.start_bit = 24;
    ECOCAN.motor_info.fields{3}.bit_length = 1;
    ECOCAN.motor_info.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.motor_info.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.motor_info.fields{3}.scale = 1;
    ECOCAN.motor_info.fields{3}.offset = 0;
    ECOCAN.motor_info.fields{3}.multiplex_type = 'Standard';
    ECOCAN.motor_info.fields{3}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:MotionInfo
%Message Number:3
case 'MotionInfo'
    ECOCAN.MotionInfo = struct;
    ECOCAN.MotionInfo.name = 'MotionInfo';
    ECOCAN.MotionInfo.description = 'MotionInfo';
    ECOCAN.MotionInfo.protocol  = 'ECOCAN';
    ECOCAN.MotionInfo.id = hex2dec('413');
    ECOCAN.MotionInfo.idext = 'STANDARD';
    ECOCAN.MotionInfo.payload_size =8;
    ECOCAN.MotionInfo.interval =-1;

    ECOCAN.MotionInfo.fields{1}.name = 'Steering_intervention';
    ECOCAN.MotionInfo.fields{1}.units = '-';
    ECOCAN.MotionInfo.fields{1}.start_bit = 0;
    ECOCAN.MotionInfo.fields{1}.bit_length = 1;
    ECOCAN.MotionInfo.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.MotionInfo.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.MotionInfo.fields{1}.scale = 1;
    ECOCAN.MotionInfo.fields{1}.offset = 0;
    ECOCAN.MotionInfo.fields{1}.multiplex_type = 'Standard';
    ECOCAN.MotionInfo.fields{1}.multiplex_value = 0;

    ECOCAN.MotionInfo.fields{2}.name = 'Brake_intervention';
    ECOCAN.MotionInfo.fields{2}.units = '-';
    ECOCAN.MotionInfo.fields{2}.start_bit = 1;
    ECOCAN.MotionInfo.fields{2}.bit_length = 1;
    ECOCAN.MotionInfo.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.MotionInfo.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.MotionInfo.fields{2}.scale = 1;
    ECOCAN.MotionInfo.fields{2}.offset = 0;
    ECOCAN.MotionInfo.fields{2}.multiplex_type = 'Standard';
    ECOCAN.MotionInfo.fields{2}.multiplex_value = 0;

    ECOCAN.MotionInfo.fields{3}.name = 'Acc_Pedal_intervention';
    ECOCAN.MotionInfo.fields{3}.units = '-';
    ECOCAN.MotionInfo.fields{3}.start_bit = 2;
    ECOCAN.MotionInfo.fields{3}.bit_length = 1;
    ECOCAN.MotionInfo.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.MotionInfo.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.MotionInfo.fields{3}.scale = 1;
    ECOCAN.MotionInfo.fields{3}.offset = 0;
    ECOCAN.MotionInfo.fields{3}.multiplex_type = 'Standard';
    ECOCAN.MotionInfo.fields{3}.multiplex_value = 0;

    ECOCAN.MotionInfo.fields{4}.name = 'ready';
    ECOCAN.MotionInfo.fields{4}.units = '-';
    ECOCAN.MotionInfo.fields{4}.start_bit = 8;
    ECOCAN.MotionInfo.fields{4}.bit_length = 8;
    ECOCAN.MotionInfo.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.MotionInfo.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.MotionInfo.fields{4}.scale = 1;
    ECOCAN.MotionInfo.fields{4}.offset = 0;
    ECOCAN.MotionInfo.fields{4}.multiplex_type = 'Standard';
    ECOCAN.MotionInfo.fields{4}.multiplex_value = 0;

    ECOCAN.MotionInfo.fields{5}.name = 'motion_allow';
    ECOCAN.MotionInfo.fields{5}.units = '-';
    ECOCAN.MotionInfo.fields{5}.start_bit = 16;
    ECOCAN.MotionInfo.fields{5}.bit_length = 8;
    ECOCAN.MotionInfo.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.MotionInfo.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.MotionInfo.fields{5}.scale = 1;
    ECOCAN.MotionInfo.fields{5}.offset = 0;
    ECOCAN.MotionInfo.fields{5}.multiplex_type = 'Standard';
    ECOCAN.MotionInfo.fields{5}.multiplex_value = 0;

    ECOCAN.MotionInfo.fields{6}.name = 'throttle';
    ECOCAN.MotionInfo.fields{6}.units = '-';
    ECOCAN.MotionInfo.fields{6}.start_bit = 24;
    ECOCAN.MotionInfo.fields{6}.bit_length = 8;
    ECOCAN.MotionInfo.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.MotionInfo.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.MotionInfo.fields{6}.scale = 1;
    ECOCAN.MotionInfo.fields{6}.offset = 0;
    ECOCAN.MotionInfo.fields{6}.multiplex_type = 'Standard';
    ECOCAN.MotionInfo.fields{6}.multiplex_value = 0;

    ECOCAN.MotionInfo.fields{7}.name = 'brake';
    ECOCAN.MotionInfo.fields{7}.units = '-';
    ECOCAN.MotionInfo.fields{7}.start_bit = 32;
    ECOCAN.MotionInfo.fields{7}.bit_length = 8;
    ECOCAN.MotionInfo.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.MotionInfo.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.MotionInfo.fields{7}.scale = 1;
    ECOCAN.MotionInfo.fields{7}.offset = 0;
    ECOCAN.MotionInfo.fields{7}.multiplex_type = 'Standard';
    ECOCAN.MotionInfo.fields{7}.multiplex_value = 0;

    ECOCAN.MotionInfo.fields{8}.name = 'front_steer';
    ECOCAN.MotionInfo.fields{8}.units = '-';
    ECOCAN.MotionInfo.fields{8}.start_bit = 40;
    ECOCAN.MotionInfo.fields{8}.bit_length = 16;
    ECOCAN.MotionInfo.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.MotionInfo.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.MotionInfo.fields{8}.scale = 1;
    ECOCAN.MotionInfo.fields{8}.offset = 0;
    ECOCAN.MotionInfo.fields{8}.multiplex_type = 'Standard';
    ECOCAN.MotionInfo.fields{8}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:VehicleSignalStatus
%Message Number:4
case 'VehicleSignalStatus'
    ECOCAN.VehicleSignalStatus = struct;
    ECOCAN.VehicleSignalStatus.name = 'VehicleSignalStatus';
    ECOCAN.VehicleSignalStatus.description = 'VehicleSignalStatus';
    ECOCAN.VehicleSignalStatus.protocol  = 'ECOCAN';
    ECOCAN.VehicleSignalStatus.id = hex2dec('412');
    ECOCAN.VehicleSignalStatus.idext = 'STANDARD';
    ECOCAN.VehicleSignalStatus.payload_size =8;
    ECOCAN.VehicleSignalStatus.interval =-1;

    ECOCAN.VehicleSignalStatus.fields{1}.name = 'fuel';
    ECOCAN.VehicleSignalStatus.fields{1}.units = '-';
    ECOCAN.VehicleSignalStatus.fields{1}.start_bit = 0;
    ECOCAN.VehicleSignalStatus.fields{1}.bit_length = 8;
    ECOCAN.VehicleSignalStatus.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleSignalStatus.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.VehicleSignalStatus.fields{1}.scale = 1;
    ECOCAN.VehicleSignalStatus.fields{1}.offset = 0;
    ECOCAN.VehicleSignalStatus.fields{1}.multiplex_type = 'Standard';
    ECOCAN.VehicleSignalStatus.fields{1}.multiplex_value = 0;

    ECOCAN.VehicleSignalStatus.fields{2}.name = 'blinker';
    ECOCAN.VehicleSignalStatus.fields{2}.units = '-';
    ECOCAN.VehicleSignalStatus.fields{2}.start_bit = 8;
    ECOCAN.VehicleSignalStatus.fields{2}.bit_length = 8;
    ECOCAN.VehicleSignalStatus.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleSignalStatus.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.VehicleSignalStatus.fields{2}.scale = 1;
    ECOCAN.VehicleSignalStatus.fields{2}.offset = 0;
    ECOCAN.VehicleSignalStatus.fields{2}.multiplex_type = 'Standard';
    ECOCAN.VehicleSignalStatus.fields{2}.multiplex_value = 0;

    ECOCAN.VehicleSignalStatus.fields{3}.name = 'headlight';
    ECOCAN.VehicleSignalStatus.fields{3}.units = '-';
    ECOCAN.VehicleSignalStatus.fields{3}.start_bit = 16;
    ECOCAN.VehicleSignalStatus.fields{3}.bit_length = 8;
    ECOCAN.VehicleSignalStatus.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleSignalStatus.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.VehicleSignalStatus.fields{3}.scale = 1;
    ECOCAN.VehicleSignalStatus.fields{3}.offset = 0;
    ECOCAN.VehicleSignalStatus.fields{3}.multiplex_type = 'Standard';
    ECOCAN.VehicleSignalStatus.fields{3}.multiplex_value = 0;

    ECOCAN.VehicleSignalStatus.fields{4}.name = 'wiper';
    ECOCAN.VehicleSignalStatus.fields{4}.units = '-';
    ECOCAN.VehicleSignalStatus.fields{4}.start_bit = 24;
    ECOCAN.VehicleSignalStatus.fields{4}.bit_length = 8;
    ECOCAN.VehicleSignalStatus.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleSignalStatus.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.VehicleSignalStatus.fields{4}.scale = 1;
    ECOCAN.VehicleSignalStatus.fields{4}.offset = 0;
    ECOCAN.VehicleSignalStatus.fields{4}.multiplex_type = 'Standard';
    ECOCAN.VehicleSignalStatus.fields{4}.multiplex_value = 0;

    ECOCAN.VehicleSignalStatus.fields{5}.name = 'gear';
    ECOCAN.VehicleSignalStatus.fields{5}.units = '-';
    ECOCAN.VehicleSignalStatus.fields{5}.start_bit = 32;
    ECOCAN.VehicleSignalStatus.fields{5}.bit_length = 8;
    ECOCAN.VehicleSignalStatus.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleSignalStatus.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.VehicleSignalStatus.fields{5}.scale = 1;
    ECOCAN.VehicleSignalStatus.fields{5}.offset = 0;
    ECOCAN.VehicleSignalStatus.fields{5}.multiplex_type = 'Standard';
    ECOCAN.VehicleSignalStatus.fields{5}.multiplex_value = 0;

    ECOCAN.VehicleSignalStatus.fields{6}.name = 'mode';
    ECOCAN.VehicleSignalStatus.fields{6}.units = '-';
    ECOCAN.VehicleSignalStatus.fields{6}.start_bit = 40;
    ECOCAN.VehicleSignalStatus.fields{6}.bit_length = 8;
    ECOCAN.VehicleSignalStatus.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleSignalStatus.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.VehicleSignalStatus.fields{6}.scale = 1;
    ECOCAN.VehicleSignalStatus.fields{6}.offset = 0;
    ECOCAN.VehicleSignalStatus.fields{6}.multiplex_type = 'Standard';
    ECOCAN.VehicleSignalStatus.fields{6}.multiplex_value = 0;

    ECOCAN.VehicleSignalStatus.fields{7}.name = 'hand_brake';
    ECOCAN.VehicleSignalStatus.fields{7}.units = '-';
    ECOCAN.VehicleSignalStatus.fields{7}.start_bit = 48;
    ECOCAN.VehicleSignalStatus.fields{7}.bit_length = 8;
    ECOCAN.VehicleSignalStatus.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleSignalStatus.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.VehicleSignalStatus.fields{7}.scale = 1;
    ECOCAN.VehicleSignalStatus.fields{7}.offset = 0;
    ECOCAN.VehicleSignalStatus.fields{7}.multiplex_type = 'Standard';
    ECOCAN.VehicleSignalStatus.fields{7}.multiplex_value = 0;

    ECOCAN.VehicleSignalStatus.fields{8}.name = 'horn';
    ECOCAN.VehicleSignalStatus.fields{8}.units = '-';
    ECOCAN.VehicleSignalStatus.fields{8}.start_bit = 56;
    ECOCAN.VehicleSignalStatus.fields{8}.bit_length = 8;
    ECOCAN.VehicleSignalStatus.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleSignalStatus.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.VehicleSignalStatus.fields{8}.scale = 1;
    ECOCAN.VehicleSignalStatus.fields{8}.offset = 0;
    ECOCAN.VehicleSignalStatus.fields{8}.multiplex_type = 'Standard';
    ECOCAN.VehicleSignalStatus.fields{8}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:VehicleDynamicsInfo
%Message Number:5
case 'VehicleDynamicsInfo'
    ECOCAN.VehicleDynamicsInfo = struct;
    ECOCAN.VehicleDynamicsInfo.name = 'VehicleDynamicsInfo';
    ECOCAN.VehicleDynamicsInfo.description = 'VehicleDynamicsInfo';
    ECOCAN.VehicleDynamicsInfo.protocol  = 'ECOCAN';
    ECOCAN.VehicleDynamicsInfo.id = hex2dec('411');
    ECOCAN.VehicleDynamicsInfo.idext = 'STANDARD';
    ECOCAN.VehicleDynamicsInfo.payload_size =8;
    ECOCAN.VehicleDynamicsInfo.interval =-1;

    ECOCAN.VehicleDynamicsInfo.fields{1}.name = 'linear_vehicle_velocity';
    ECOCAN.VehicleDynamicsInfo.fields{1}.units = 'm/s';
    ECOCAN.VehicleDynamicsInfo.fields{1}.start_bit = 0;
    ECOCAN.VehicleDynamicsInfo.fields{1}.bit_length = 32;
    ECOCAN.VehicleDynamicsInfo.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleDynamicsInfo.fields{1}.data_type = 'FLOAT32';
    ECOCAN.VehicleDynamicsInfo.fields{1}.scale = 1;
    ECOCAN.VehicleDynamicsInfo.fields{1}.offset = 0;
    ECOCAN.VehicleDynamicsInfo.fields{1}.multiplex_type = 'Standard';
    ECOCAN.VehicleDynamicsInfo.fields{1}.multiplex_value = 0;

    ECOCAN.VehicleDynamicsInfo.fields{2}.name = 'front_wheel_angle';
    ECOCAN.VehicleDynamicsInfo.fields{2}.units = 'rad';
    ECOCAN.VehicleDynamicsInfo.fields{2}.start_bit = 32;
    ECOCAN.VehicleDynamicsInfo.fields{2}.bit_length = 32;
    ECOCAN.VehicleDynamicsInfo.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleDynamicsInfo.fields{2}.data_type = 'FLOAT32';
    ECOCAN.VehicleDynamicsInfo.fields{2}.scale = 1;
    ECOCAN.VehicleDynamicsInfo.fields{2}.offset = 0;
    ECOCAN.VehicleDynamicsInfo.fields{2}.multiplex_type = 'Standard';
    ECOCAN.VehicleDynamicsInfo.fields{2}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:FrontWheelCommands
%Message Number:6
case 'FrontWheelCommands'
    ECOCAN.FrontWheelCommands = struct;
    ECOCAN.FrontWheelCommands.name = 'FrontWheelCommands';
    ECOCAN.FrontWheelCommands.description = 'FrontWheelCommands';
    ECOCAN.FrontWheelCommands.protocol  = 'ECOCAN';
    ECOCAN.FrontWheelCommands.id = hex2dec('403');
    ECOCAN.FrontWheelCommands.idext = 'STANDARD';
    ECOCAN.FrontWheelCommands.payload_size =8;
    ECOCAN.FrontWheelCommands.interval =-1;

    ECOCAN.FrontWheelCommands.fields{1}.name = 'set_front_wheel_angle';
    ECOCAN.FrontWheelCommands.fields{1}.units = 'rad';
    ECOCAN.FrontWheelCommands.fields{1}.start_bit = 0;
    ECOCAN.FrontWheelCommands.fields{1}.bit_length = 32;
    ECOCAN.FrontWheelCommands.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FrontWheelCommands.fields{1}.data_type = 'FLOAT32';
    ECOCAN.FrontWheelCommands.fields{1}.scale = 1;
    ECOCAN.FrontWheelCommands.fields{1}.offset = 0;
    ECOCAN.FrontWheelCommands.fields{1}.multiplex_type = 'Standard';
    ECOCAN.FrontWheelCommands.fields{1}.multiplex_value = 0;

    ECOCAN.FrontWheelCommands.fields{2}.name = 'set_front_wheel_angle_rate';
    ECOCAN.FrontWheelCommands.fields{2}.units = 'rad/s';
    ECOCAN.FrontWheelCommands.fields{2}.start_bit = 32;
    ECOCAN.FrontWheelCommands.fields{2}.bit_length = 32;
    ECOCAN.FrontWheelCommands.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FrontWheelCommands.fields{2}.data_type = 'FLOAT32';
    ECOCAN.FrontWheelCommands.fields{2}.scale = 1;
    ECOCAN.FrontWheelCommands.fields{2}.offset = 0;
    ECOCAN.FrontWheelCommands.fields{2}.multiplex_type = 'Standard';
    ECOCAN.FrontWheelCommands.fields{2}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:VehicleCommands
%Message Number:7
case 'VehicleCommands'
    ECOCAN.VehicleCommands = struct;
    ECOCAN.VehicleCommands.name = 'VehicleCommands';
    ECOCAN.VehicleCommands.description = 'VehicleCommands';
    ECOCAN.VehicleCommands.protocol  = 'ECOCAN';
    ECOCAN.VehicleCommands.id = hex2dec('402');
    ECOCAN.VehicleCommands.idext = 'STANDARD';
    ECOCAN.VehicleCommands.payload_size =8;
    ECOCAN.VehicleCommands.interval =-1;

    ECOCAN.VehicleCommands.fields{1}.name = 'blinker';
    ECOCAN.VehicleCommands.fields{1}.units = '-';
    ECOCAN.VehicleCommands.fields{1}.start_bit = 0;
    ECOCAN.VehicleCommands.fields{1}.bit_length = 8;
    ECOCAN.VehicleCommands.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleCommands.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.VehicleCommands.fields{1}.scale = 1;
    ECOCAN.VehicleCommands.fields{1}.offset = 0;
    ECOCAN.VehicleCommands.fields{1}.multiplex_type = 'Standard';
    ECOCAN.VehicleCommands.fields{1}.multiplex_value = 0;

    ECOCAN.VehicleCommands.fields{2}.name = 'headlgiht';
    ECOCAN.VehicleCommands.fields{2}.units = '-';
    ECOCAN.VehicleCommands.fields{2}.start_bit = 8;
    ECOCAN.VehicleCommands.fields{2}.bit_length = 8;
    ECOCAN.VehicleCommands.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleCommands.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.VehicleCommands.fields{2}.scale = 1;
    ECOCAN.VehicleCommands.fields{2}.offset = 0;
    ECOCAN.VehicleCommands.fields{2}.multiplex_type = 'Standard';
    ECOCAN.VehicleCommands.fields{2}.multiplex_value = 0;

    ECOCAN.VehicleCommands.fields{3}.name = 'wiper';
    ECOCAN.VehicleCommands.fields{3}.units = '-';
    ECOCAN.VehicleCommands.fields{3}.start_bit = 16;
    ECOCAN.VehicleCommands.fields{3}.bit_length = 8;
    ECOCAN.VehicleCommands.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleCommands.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.VehicleCommands.fields{3}.scale = 1;
    ECOCAN.VehicleCommands.fields{3}.offset = 0;
    ECOCAN.VehicleCommands.fields{3}.multiplex_type = 'Standard';
    ECOCAN.VehicleCommands.fields{3}.multiplex_value = 0;

    ECOCAN.VehicleCommands.fields{4}.name = 'gear';
    ECOCAN.VehicleCommands.fields{4}.units = '-';
    ECOCAN.VehicleCommands.fields{4}.start_bit = 24;
    ECOCAN.VehicleCommands.fields{4}.bit_length = 8;
    ECOCAN.VehicleCommands.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleCommands.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.VehicleCommands.fields{4}.scale = 1;
    ECOCAN.VehicleCommands.fields{4}.offset = 0;
    ECOCAN.VehicleCommands.fields{4}.multiplex_type = 'Standard';
    ECOCAN.VehicleCommands.fields{4}.multiplex_value = 0;

    ECOCAN.VehicleCommands.fields{5}.name = 'mode';
    ECOCAN.VehicleCommands.fields{5}.units = '-';
    ECOCAN.VehicleCommands.fields{5}.start_bit = 32;
    ECOCAN.VehicleCommands.fields{5}.bit_length = 8;
    ECOCAN.VehicleCommands.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleCommands.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.VehicleCommands.fields{5}.scale = 1;
    ECOCAN.VehicleCommands.fields{5}.offset = 0;
    ECOCAN.VehicleCommands.fields{5}.multiplex_type = 'Standard';
    ECOCAN.VehicleCommands.fields{5}.multiplex_value = 0;

    ECOCAN.VehicleCommands.fields{6}.name = 'hand_brake';
    ECOCAN.VehicleCommands.fields{6}.units = '-';
    ECOCAN.VehicleCommands.fields{6}.start_bit = 40;
    ECOCAN.VehicleCommands.fields{6}.bit_length = 8;
    ECOCAN.VehicleCommands.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleCommands.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.VehicleCommands.fields{6}.scale = 1;
    ECOCAN.VehicleCommands.fields{6}.offset = 0;
    ECOCAN.VehicleCommands.fields{6}.multiplex_type = 'Standard';
    ECOCAN.VehicleCommands.fields{6}.multiplex_value = 0;

    ECOCAN.VehicleCommands.fields{7}.name = 'horn';
    ECOCAN.VehicleCommands.fields{7}.units = '-';
    ECOCAN.VehicleCommands.fields{7}.start_bit = 48;
    ECOCAN.VehicleCommands.fields{7}.bit_length = 8;
    ECOCAN.VehicleCommands.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleCommands.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.VehicleCommands.fields{7}.scale = 1;
    ECOCAN.VehicleCommands.fields{7}.offset = 0;
    ECOCAN.VehicleCommands.fields{7}.multiplex_type = 'Standard';
    ECOCAN.VehicleCommands.fields{7}.multiplex_value = 0;

    ECOCAN.VehicleCommands.fields{8}.name = 'Long_mode';
    ECOCAN.VehicleCommands.fields{8}.units = '-';
    ECOCAN.VehicleCommands.fields{8}.start_bit = 56;
    ECOCAN.VehicleCommands.fields{8}.bit_length = 8;
    ECOCAN.VehicleCommands.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.VehicleCommands.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.VehicleCommands.fields{8}.scale = 1;
    ECOCAN.VehicleCommands.fields{8}.offset = 0;
    ECOCAN.VehicleCommands.fields{8}.multiplex_type = 'Standard';
    ECOCAN.VehicleCommands.fields{8}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:LongitudinalCommandsV2
%Message Number:8
case 'LongitudinalCommandsV2'
    ECOCAN.LongitudinalCommandsV2 = struct;
    ECOCAN.LongitudinalCommandsV2.name = 'LongitudinalCommandsV2';
    ECOCAN.LongitudinalCommandsV2.description = 'LongitudinalCommandsV2';
    ECOCAN.LongitudinalCommandsV2.protocol  = 'ECOCAN';
    ECOCAN.LongitudinalCommandsV2.id = hex2dec('401');
    ECOCAN.LongitudinalCommandsV2.idext = 'STANDARD';
    ECOCAN.LongitudinalCommandsV2.payload_size =8;
    ECOCAN.LongitudinalCommandsV2.interval =-1;

    ECOCAN.LongitudinalCommandsV2.fields{1}.name = 'set_gas_pedal_pos';
    ECOCAN.LongitudinalCommandsV2.fields{1}.units = '-';
    ECOCAN.LongitudinalCommandsV2.fields{1}.start_bit = 0;
    ECOCAN.LongitudinalCommandsV2.fields{1}.bit_length = 32;
    ECOCAN.LongitudinalCommandsV2.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LongitudinalCommandsV2.fields{1}.data_type = 'FLOAT32';
    ECOCAN.LongitudinalCommandsV2.fields{1}.scale = 1;
    ECOCAN.LongitudinalCommandsV2.fields{1}.offset = 0;
    ECOCAN.LongitudinalCommandsV2.fields{1}.multiplex_type = 'Standard';
    ECOCAN.LongitudinalCommandsV2.fields{1}.multiplex_value = 0;

    ECOCAN.LongitudinalCommandsV2.fields{2}.name = 'set_brake_pedal_pos';
    ECOCAN.LongitudinalCommandsV2.fields{2}.units = '-';
    ECOCAN.LongitudinalCommandsV2.fields{2}.start_bit = 32;
    ECOCAN.LongitudinalCommandsV2.fields{2}.bit_length = 32;
    ECOCAN.LongitudinalCommandsV2.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LongitudinalCommandsV2.fields{2}.data_type = 'FLOAT32';
    ECOCAN.LongitudinalCommandsV2.fields{2}.scale = 1;
    ECOCAN.LongitudinalCommandsV2.fields{2}.offset = 0;
    ECOCAN.LongitudinalCommandsV2.fields{2}.multiplex_type = 'Standard';
    ECOCAN.LongitudinalCommandsV2.fields{2}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:LongitudinalCommandsV1
%Message Number:9
case 'LongitudinalCommandsV1'
    ECOCAN.LongitudinalCommandsV1 = struct;
    ECOCAN.LongitudinalCommandsV1.name = 'LongitudinalCommandsV1';
    ECOCAN.LongitudinalCommandsV1.description = 'LongitudinalCommandsV1';
    ECOCAN.LongitudinalCommandsV1.protocol  = 'ECOCAN';
    ECOCAN.LongitudinalCommandsV1.id = hex2dec('400');
    ECOCAN.LongitudinalCommandsV1.idext = 'STANDARD';
    ECOCAN.LongitudinalCommandsV1.payload_size =8;
    ECOCAN.LongitudinalCommandsV1.interval =-1;

    ECOCAN.LongitudinalCommandsV1.fields{1}.name = 'set_long_accel';
    ECOCAN.LongitudinalCommandsV1.fields{1}.units = 'm/s^2';
    ECOCAN.LongitudinalCommandsV1.fields{1}.start_bit = 0;
    ECOCAN.LongitudinalCommandsV1.fields{1}.bit_length = 32;
    ECOCAN.LongitudinalCommandsV1.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LongitudinalCommandsV1.fields{1}.data_type = 'FLOAT32';
    ECOCAN.LongitudinalCommandsV1.fields{1}.scale = 1;
    ECOCAN.LongitudinalCommandsV1.fields{1}.offset = 0;
    ECOCAN.LongitudinalCommandsV1.fields{1}.multiplex_type = 'Standard';
    ECOCAN.LongitudinalCommandsV1.fields{1}.multiplex_value = 0;

    ECOCAN.LongitudinalCommandsV1.fields{2}.name = 'set_limit_velocity';
    ECOCAN.LongitudinalCommandsV1.fields{2}.units = 'm/s';
    ECOCAN.LongitudinalCommandsV1.fields{2}.start_bit = 32;
    ECOCAN.LongitudinalCommandsV1.fields{2}.bit_length = 32;
    ECOCAN.LongitudinalCommandsV1.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.LongitudinalCommandsV1.fields{2}.data_type = 'FLOAT32';
    ECOCAN.LongitudinalCommandsV1.fields{2}.scale = 1;
    ECOCAN.LongitudinalCommandsV1.fields{2}.offset = 0;
    ECOCAN.LongitudinalCommandsV1.fields{2}.multiplex_type = 'Standard';
    ECOCAN.LongitudinalCommandsV1.fields{2}.multiplex_value = 0;


  end
  try
    msg = ECOCAN.(msgname);
  catch
  end
end
end

function msg = brakedebug(msgname,type)
  if(255==type)
  msg = struct;
  msg.num=4;
  msg.list= cell(1, msg.num);
  msg.list{1}='FeedbackMsg3';
  msg.list{2}='Vehicle';
  msg.list{3}='FeedbackMsg2';
  msg.list{4}='Brake_Pos';
  else 
  msg = struct;
  switch msgname 
%%
%Network Node:Vector__XXX
%Message Name:FeedbackMsg3
%Message Number:1
case 'FeedbackMsg3'
    ECOCAN.FeedbackMsg3 = struct;
    ECOCAN.FeedbackMsg3.name = 'FeedbackMsg3';
    ECOCAN.FeedbackMsg3.description = 'FeedbackMsg3';
    ECOCAN.FeedbackMsg3.protocol  = 'ECOCAN';
    ECOCAN.FeedbackMsg3.id = hex2dec('504');
    ECOCAN.FeedbackMsg3.idext = 'STANDARD';
    ECOCAN.FeedbackMsg3.payload_size =2;
    ECOCAN.FeedbackMsg3.interval =-1;

    ECOCAN.FeedbackMsg3.fields{1}.name = 'MotorConnection';
    ECOCAN.FeedbackMsg3.fields{1}.units = '-';
    ECOCAN.FeedbackMsg3.fields{1}.start_bit = 0;
    ECOCAN.FeedbackMsg3.fields{1}.bit_length = 1;
    ECOCAN.FeedbackMsg3.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg3.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.FeedbackMsg3.fields{1}.scale = 1;
    ECOCAN.FeedbackMsg3.fields{1}.offset = 0;
    ECOCAN.FeedbackMsg3.fields{1}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg3.fields{1}.multiplex_value = 0;

    ECOCAN.FeedbackMsg3.fields{2}.name = 'OverCurrent';
    ECOCAN.FeedbackMsg3.fields{2}.units = '-';
    ECOCAN.FeedbackMsg3.fields{2}.start_bit = 1;
    ECOCAN.FeedbackMsg3.fields{2}.bit_length = 1;
    ECOCAN.FeedbackMsg3.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg3.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.FeedbackMsg3.fields{2}.scale = 1;
    ECOCAN.FeedbackMsg3.fields{2}.offset = 0;
    ECOCAN.FeedbackMsg3.fields{2}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg3.fields{2}.multiplex_value = 0;

    ECOCAN.FeedbackMsg3.fields{3}.name = 'AngleSensorConnection';
    ECOCAN.FeedbackMsg3.fields{3}.units = '-';
    ECOCAN.FeedbackMsg3.fields{3}.start_bit = 2;
    ECOCAN.FeedbackMsg3.fields{3}.bit_length = 1;
    ECOCAN.FeedbackMsg3.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg3.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.FeedbackMsg3.fields{3}.scale = 1;
    ECOCAN.FeedbackMsg3.fields{3}.offset = 0;
    ECOCAN.FeedbackMsg3.fields{3}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg3.fields{3}.multiplex_value = 0;

    ECOCAN.FeedbackMsg3.fields{4}.name = 'DriverIntervention';
    ECOCAN.FeedbackMsg3.fields{4}.units = '-';
    ECOCAN.FeedbackMsg3.fields{4}.start_bit = 3;
    ECOCAN.FeedbackMsg3.fields{4}.bit_length = 1;
    ECOCAN.FeedbackMsg3.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg3.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.FeedbackMsg3.fields{4}.scale = 1;
    ECOCAN.FeedbackMsg3.fields{4}.offset = 0;
    ECOCAN.FeedbackMsg3.fields{4}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg3.fields{4}.multiplex_value = 0;

    ECOCAN.FeedbackMsg3.fields{5}.name = 'EcuReset';
    ECOCAN.FeedbackMsg3.fields{5}.units = '-';
    ECOCAN.FeedbackMsg3.fields{5}.start_bit = 4;
    ECOCAN.FeedbackMsg3.fields{5}.bit_length = 1;
    ECOCAN.FeedbackMsg3.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg3.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.FeedbackMsg3.fields{5}.scale = 1;
    ECOCAN.FeedbackMsg3.fields{5}.offset = 0;
    ECOCAN.FeedbackMsg3.fields{5}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg3.fields{5}.multiplex_value = 0;

    ECOCAN.FeedbackMsg3.fields{6}.name = 'UnderVoltage';
    ECOCAN.FeedbackMsg3.fields{6}.units = '-';
    ECOCAN.FeedbackMsg3.fields{6}.start_bit = 5;
    ECOCAN.FeedbackMsg3.fields{6}.bit_length = 1;
    ECOCAN.FeedbackMsg3.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg3.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.FeedbackMsg3.fields{6}.scale = 1;
    ECOCAN.FeedbackMsg3.fields{6}.offset = 0;
    ECOCAN.FeedbackMsg3.fields{6}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg3.fields{6}.multiplex_value = 0;

    ECOCAN.FeedbackMsg3.fields{7}.name = 'unused';
    ECOCAN.FeedbackMsg3.fields{7}.units = '-';
    ECOCAN.FeedbackMsg3.fields{7}.start_bit = 8;
    ECOCAN.FeedbackMsg3.fields{7}.bit_length = 8;
    ECOCAN.FeedbackMsg3.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg3.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.FeedbackMsg3.fields{7}.scale = 1;
    ECOCAN.FeedbackMsg3.fields{7}.offset = 0;
    ECOCAN.FeedbackMsg3.fields{7}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg3.fields{7}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Vehicle
%Message Number:2
case 'Vehicle'
    ECOCAN.Vehicle = struct;
    ECOCAN.Vehicle.name = 'Vehicle';
    ECOCAN.Vehicle.description = 'Vehicle';
    ECOCAN.Vehicle.protocol  = 'ECOCAN';
    ECOCAN.Vehicle.id = hex2dec('503');
    ECOCAN.Vehicle.idext = 'STANDARD';
    ECOCAN.Vehicle.payload_size =4;
    ECOCAN.Vehicle.interval =-1;

    ECOCAN.Vehicle.fields{1}.name = 'Speed';
    ECOCAN.Vehicle.fields{1}.units = '-';
    ECOCAN.Vehicle.fields{1}.start_bit = 0;
    ECOCAN.Vehicle.fields{1}.bit_length = 16;
    ECOCAN.Vehicle.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Vehicle.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Vehicle.fields{1}.scale = 1;
    ECOCAN.Vehicle.fields{1}.offset = 0;
    ECOCAN.Vehicle.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Vehicle.fields{1}.multiplex_value = 0;

    ECOCAN.Vehicle.fields{2}.name = 'Mode';
    ECOCAN.Vehicle.fields{2}.units = '-';
    ECOCAN.Vehicle.fields{2}.start_bit = 16;
    ECOCAN.Vehicle.fields{2}.bit_length = 8;
    ECOCAN.Vehicle.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Vehicle.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Vehicle.fields{2}.scale = 1;
    ECOCAN.Vehicle.fields{2}.offset = 0;
    ECOCAN.Vehicle.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Vehicle.fields{2}.multiplex_value = 0;

    ECOCAN.Vehicle.fields{3}.name = 'longACC';
    ECOCAN.Vehicle.fields{3}.units = '-';
    ECOCAN.Vehicle.fields{3}.start_bit = 24;
    ECOCAN.Vehicle.fields{3}.bit_length = 8;
    ECOCAN.Vehicle.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Vehicle.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Vehicle.fields{3}.scale = 1;
    ECOCAN.Vehicle.fields{3}.offset = 0;
    ECOCAN.Vehicle.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Vehicle.fields{3}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:FeedbackMsg2
%Message Number:3
case 'FeedbackMsg2'
    ECOCAN.FeedbackMsg2 = struct;
    ECOCAN.FeedbackMsg2.name = 'FeedbackMsg2';
    ECOCAN.FeedbackMsg2.description = 'FeedbackMsg2';
    ECOCAN.FeedbackMsg2.protocol  = 'ECOCAN';
    ECOCAN.FeedbackMsg2.id = hex2dec('502');
    ECOCAN.FeedbackMsg2.idext = 'STANDARD';
    ECOCAN.FeedbackMsg2.payload_size =8;
    ECOCAN.FeedbackMsg2.interval =-1;

    ECOCAN.FeedbackMsg2.fields{1}.name = 'MotorDuty';
    ECOCAN.FeedbackMsg2.fields{1}.units = '%';
    ECOCAN.FeedbackMsg2.fields{1}.start_bit = 0;
    ECOCAN.FeedbackMsg2.fields{1}.bit_length = 8;
    ECOCAN.FeedbackMsg2.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg2.fields{1}.data_type = 'SIGNED';
    ECOCAN.FeedbackMsg2.fields{1}.scale = 1;
    ECOCAN.FeedbackMsg2.fields{1}.offset = 0;
    ECOCAN.FeedbackMsg2.fields{1}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg2.fields{1}.multiplex_value = 0;

    ECOCAN.FeedbackMsg2.fields{2}.name = 'MotorCurrent';
    ECOCAN.FeedbackMsg2.fields{2}.units = 'A';
    ECOCAN.FeedbackMsg2.fields{2}.start_bit = 8;
    ECOCAN.FeedbackMsg2.fields{2}.bit_length = 8;
    ECOCAN.FeedbackMsg2.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg2.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.FeedbackMsg2.fields{2}.scale = 1;
    ECOCAN.FeedbackMsg2.fields{2}.offset = 0;
    ECOCAN.FeedbackMsg2.fields{2}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg2.fields{2}.multiplex_value = 0;

    ECOCAN.FeedbackMsg2.fields{3}.name = 'MotorVoltage';
    ECOCAN.FeedbackMsg2.fields{3}.units = 'V';
    ECOCAN.FeedbackMsg2.fields{3}.start_bit = 16;
    ECOCAN.FeedbackMsg2.fields{3}.bit_length = 8;
    ECOCAN.FeedbackMsg2.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg2.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.FeedbackMsg2.fields{3}.scale = 0.15;
    ECOCAN.FeedbackMsg2.fields{3}.offset = 0;
    ECOCAN.FeedbackMsg2.fields{3}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg2.fields{3}.multiplex_value = 0;

    ECOCAN.FeedbackMsg2.fields{4}.name = 'BoxTemperature';
    ECOCAN.FeedbackMsg2.fields{4}.units = 'celcius';
    ECOCAN.FeedbackMsg2.fields{4}.start_bit = 24;
    ECOCAN.FeedbackMsg2.fields{4}.bit_length = 8;
    ECOCAN.FeedbackMsg2.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg2.fields{4}.data_type = 'SIGNED';
    ECOCAN.FeedbackMsg2.fields{4}.scale = 1;
    ECOCAN.FeedbackMsg2.fields{4}.offset = 0;
    ECOCAN.FeedbackMsg2.fields{4}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg2.fields{4}.multiplex_value = 0;

    ECOCAN.FeedbackMsg2.fields{5}.name = 'RawTorqueA';
    ECOCAN.FeedbackMsg2.fields{5}.units = '-';
    ECOCAN.FeedbackMsg2.fields{5}.start_bit = 32;
    ECOCAN.FeedbackMsg2.fields{5}.bit_length = 16;
    ECOCAN.FeedbackMsg2.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg2.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.FeedbackMsg2.fields{5}.scale = 1;
    ECOCAN.FeedbackMsg2.fields{5}.offset = 0;
    ECOCAN.FeedbackMsg2.fields{5}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg2.fields{5}.multiplex_value = 0;

    ECOCAN.FeedbackMsg2.fields{6}.name = 'RawTorqueB';
    ECOCAN.FeedbackMsg2.fields{6}.units = '-';
    ECOCAN.FeedbackMsg2.fields{6}.start_bit = 48;
    ECOCAN.FeedbackMsg2.fields{6}.bit_length = 16;
    ECOCAN.FeedbackMsg2.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg2.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.FeedbackMsg2.fields{6}.scale = 1;
    ECOCAN.FeedbackMsg2.fields{6}.offset = 0;
    ECOCAN.FeedbackMsg2.fields{6}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg2.fields{6}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Brake_Pos
%Message Number:4
case 'Brake_Pos'
    ECOCAN.Brake_Pos = struct;
    ECOCAN.Brake_Pos.name = 'Brake_Pos';
    ECOCAN.Brake_Pos.description = 'Brake_Pos';
    ECOCAN.Brake_Pos.protocol  = 'ECOCAN';
    ECOCAN.Brake_Pos.id = hex2dec('500');
    ECOCAN.Brake_Pos.idext = 'STANDARD';
    ECOCAN.Brake_Pos.payload_size =8;
    ECOCAN.Brake_Pos.interval =-1;

    ECOCAN.Brake_Pos.fields{1}.name = 'Set_Brake_Pos';
    ECOCAN.Brake_Pos.fields{1}.units = '-';
    ECOCAN.Brake_Pos.fields{1}.start_bit = 0;
    ECOCAN.Brake_Pos.fields{1}.bit_length = 32;
    ECOCAN.Brake_Pos.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Brake_Pos.fields{1}.data_type = 'FLOAT32';
    ECOCAN.Brake_Pos.fields{1}.scale = 1;
    ECOCAN.Brake_Pos.fields{1}.offset = 0;
    ECOCAN.Brake_Pos.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Brake_Pos.fields{1}.multiplex_value = 0;

    ECOCAN.Brake_Pos.fields{2}.name = 'Act_Brake_Pos';
    ECOCAN.Brake_Pos.fields{2}.units = '-';
    ECOCAN.Brake_Pos.fields{2}.start_bit = 32;
    ECOCAN.Brake_Pos.fields{2}.bit_length = 32;
    ECOCAN.Brake_Pos.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Brake_Pos.fields{2}.data_type = 'FLOAT32';
    ECOCAN.Brake_Pos.fields{2}.scale = 1;
    ECOCAN.Brake_Pos.fields{2}.offset = 0;
    ECOCAN.Brake_Pos.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Brake_Pos.fields{2}.multiplex_value = 0;


  end
  try
    msg = ECOCAN.(msgname);
  catch
  end
end
end

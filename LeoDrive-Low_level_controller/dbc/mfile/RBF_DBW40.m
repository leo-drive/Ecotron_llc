function msg = RBF_DBW40(msgname,type)
  if(255==type)
  msg = struct;
  msg.num=5;
  msg.list= cell(1, msg.num);
  msg.list{1}='CommandMessage';
  msg.list{2}='FeedbackMsg3';
  msg.list{3}='FeedbackMsg2';
  msg.list{4}='FeedbackMsg1';
  msg.list{5}='WABCOConfigMessage';
  else 
  msg = struct;
  switch msgname 
%%
%Network Node:Vector__XXX
%Message Name:CommandMessage
%Message Number:1
case 'CommandMessage'
    ECOCAN.CommandMessage = struct;
    ECOCAN.CommandMessage.name = 'CommandMessage';
    ECOCAN.CommandMessage.description = 'CommandMessage';
    ECOCAN.CommandMessage.protocol  = 'ECOCAN';
    ECOCAN.CommandMessage.id = hex2dec('298');
    ECOCAN.CommandMessage.idext = 'STANDARD';
    ECOCAN.CommandMessage.payload_size =8;
    ECOCAN.CommandMessage.interval =-1;

    ECOCAN.CommandMessage.fields{1}.name = 'ControlMode';
    ECOCAN.CommandMessage.fields{1}.units = '-';
    ECOCAN.CommandMessage.fields{1}.start_bit = 0;
    ECOCAN.CommandMessage.fields{1}.bit_length = 8;
    ECOCAN.CommandMessage.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.CommandMessage.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.CommandMessage.fields{1}.scale = 1;
    ECOCAN.CommandMessage.fields{1}.offset = 0;
    ECOCAN.CommandMessage.fields{1}.multiplex_type = 'Standard';
    ECOCAN.CommandMessage.fields{1}.multiplex_value = 0;

    ECOCAN.CommandMessage.fields{2}.name = 'ReferenceDutyCycle';
    ECOCAN.CommandMessage.fields{2}.units = '%';
    ECOCAN.CommandMessage.fields{2}.start_bit = 8;
    ECOCAN.CommandMessage.fields{2}.bit_length = 8;
    ECOCAN.CommandMessage.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.CommandMessage.fields{2}.data_type = 'SIGNED';
    ECOCAN.CommandMessage.fields{2}.scale = 1;
    ECOCAN.CommandMessage.fields{2}.offset = 0;
    ECOCAN.CommandMessage.fields{2}.multiplex_type = 'Standard';
    ECOCAN.CommandMessage.fields{2}.multiplex_value = 0;

    ECOCAN.CommandMessage.fields{3}.name = 'SetSteeringAngle';
    ECOCAN.CommandMessage.fields{3}.units = 'degree';
    ECOCAN.CommandMessage.fields{3}.start_bit = 16;
    ECOCAN.CommandMessage.fields{3}.bit_length = 32;
    ECOCAN.CommandMessage.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.CommandMessage.fields{3}.data_type = 'FLOAT32';
    ECOCAN.CommandMessage.fields{3}.scale = 1;
    ECOCAN.CommandMessage.fields{3}.offset = 0;
    ECOCAN.CommandMessage.fields{3}.multiplex_type = 'Standard';
    ECOCAN.CommandMessage.fields{3}.multiplex_value = 0;

    ECOCAN.CommandMessage.fields{4}.name = 'ResetCommand';
    ECOCAN.CommandMessage.fields{4}.units = '-';
    ECOCAN.CommandMessage.fields{4}.start_bit = 48;
    ECOCAN.CommandMessage.fields{4}.bit_length = 8;
    ECOCAN.CommandMessage.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.CommandMessage.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.CommandMessage.fields{4}.scale = 1;
    ECOCAN.CommandMessage.fields{4}.offset = 0;
    ECOCAN.CommandMessage.fields{4}.multiplex_type = 'Standard';
    ECOCAN.CommandMessage.fields{4}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:FeedbackMsg3
%Message Number:2
case 'FeedbackMsg3'
    ECOCAN.FeedbackMsg3 = struct;
    ECOCAN.FeedbackMsg3.name = 'FeedbackMsg3';
    ECOCAN.FeedbackMsg3.description = 'FeedbackMsg3';
    ECOCAN.FeedbackMsg3.protocol  = 'ECOCAN';
    ECOCAN.FeedbackMsg3.id = hex2dec('294');
    ECOCAN.FeedbackMsg3.idext = 'STANDARD';
    ECOCAN.FeedbackMsg3.payload_size =8;
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

    ECOCAN.FeedbackMsg3.fields{7}.name = 'Reserved';
    ECOCAN.FeedbackMsg3.fields{7}.units = '-';
    ECOCAN.FeedbackMsg3.fields{7}.start_bit = 6;
    ECOCAN.FeedbackMsg3.fields{7}.bit_length = 58;
    ECOCAN.FeedbackMsg3.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg3.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.FeedbackMsg3.fields{7}.scale = 1;
    ECOCAN.FeedbackMsg3.fields{7}.offset = 0;
    ECOCAN.FeedbackMsg3.fields{7}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg3.fields{7}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:FeedbackMsg2
%Message Number:3
case 'FeedbackMsg2'
    ECOCAN.FeedbackMsg2 = struct;
    ECOCAN.FeedbackMsg2.name = 'FeedbackMsg2';
    ECOCAN.FeedbackMsg2.description = 'FeedbackMsg2';
    ECOCAN.FeedbackMsg2.protocol  = 'ECOCAN';
    ECOCAN.FeedbackMsg2.id = hex2dec('292');
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
%Message Name:FeedbackMsg1
%Message Number:4
case 'FeedbackMsg1'
    ECOCAN.FeedbackMsg1 = struct;
    ECOCAN.FeedbackMsg1.name = 'FeedbackMsg1';
    ECOCAN.FeedbackMsg1.description = 'FeedbackMsg1';
    ECOCAN.FeedbackMsg1.protocol  = 'ECOCAN';
    ECOCAN.FeedbackMsg1.id = hex2dec('290');
    ECOCAN.FeedbackMsg1.idext = 'STANDARD';
    ECOCAN.FeedbackMsg1.payload_size =8;
    ECOCAN.FeedbackMsg1.interval =-1;

    ECOCAN.FeedbackMsg1.fields{1}.name = 'ReferenceSteeringAngle';
    ECOCAN.FeedbackMsg1.fields{1}.units = 'Degree';
    ECOCAN.FeedbackMsg1.fields{1}.start_bit = 0;
    ECOCAN.FeedbackMsg1.fields{1}.bit_length = 32;
    ECOCAN.FeedbackMsg1.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg1.fields{1}.data_type = 'FLOAT32';
    ECOCAN.FeedbackMsg1.fields{1}.scale = 1;
    ECOCAN.FeedbackMsg1.fields{1}.offset = 0;
    ECOCAN.FeedbackMsg1.fields{1}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg1.fields{1}.multiplex_value = 0;

    ECOCAN.FeedbackMsg1.fields{2}.name = 'ActualSteeringAngle';
    ECOCAN.FeedbackMsg1.fields{2}.units = 'Degree';
    ECOCAN.FeedbackMsg1.fields{2}.start_bit = 32;
    ECOCAN.FeedbackMsg1.fields{2}.bit_length = 32;
    ECOCAN.FeedbackMsg1.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FeedbackMsg1.fields{2}.data_type = 'FLOAT32';
    ECOCAN.FeedbackMsg1.fields{2}.scale = 1;
    ECOCAN.FeedbackMsg1.fields{2}.offset = 0;
    ECOCAN.FeedbackMsg1.fields{2}.multiplex_type = 'Standard';
    ECOCAN.FeedbackMsg1.fields{2}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:WABCOConfigMessage
%Message Number:5
case 'WABCOConfigMessage'
    ECOCAN.WABCOConfigMessage = struct;
    ECOCAN.WABCOConfigMessage.name = 'WABCOConfigMessage';
    ECOCAN.WABCOConfigMessage.description = 'WABCOConfigMessage';
    ECOCAN.WABCOConfigMessage.protocol  = 'ECOCAN';
    ECOCAN.WABCOConfigMessage.id = hex2dec('150');
    ECOCAN.WABCOConfigMessage.idext = 'STANDARD';
    ECOCAN.WABCOConfigMessage.payload_size =8;
    ECOCAN.WABCOConfigMessage.interval =-1;

    ECOCAN.WABCOConfigMessage.fields{1}.name = 'ConfigWabco';
    ECOCAN.WABCOConfigMessage.fields{1}.units = '-';
    ECOCAN.WABCOConfigMessage.fields{1}.start_bit = 0;
    ECOCAN.WABCOConfigMessage.fields{1}.bit_length = 8;
    ECOCAN.WABCOConfigMessage.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.WABCOConfigMessage.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.WABCOConfigMessage.fields{1}.scale = 1;
    ECOCAN.WABCOConfigMessage.fields{1}.offset = 0;
    ECOCAN.WABCOConfigMessage.fields{1}.multiplex_type = 'Standard';
    ECOCAN.WABCOConfigMessage.fields{1}.multiplex_value = 0;


  end
  try
    msg = ECOCAN.(msgname);
  catch
  end
end
end

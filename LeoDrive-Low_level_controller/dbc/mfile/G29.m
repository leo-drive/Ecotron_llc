function msg = G29(msgname,type)
  if(255==type)
  msg = struct;
  msg.num=2;
  msg.list= cell(1, msg.num);
  msg.list{1}='Throttle';
  msg.list{2}='SteeringBrake';
  else 
  msg = struct;
  switch msgname 
%%
%Network Node:Vector__XXX
%Message Name:Throttle
%Message Number:1
case 'Throttle'
    ECOCAN.Throttle = struct;
    ECOCAN.Throttle.name = 'Throttle';
    ECOCAN.Throttle.description = 'Throttle';
    ECOCAN.Throttle.protocol  = 'ECOCAN';
    ECOCAN.Throttle.id = hex2dec('576');
    ECOCAN.Throttle.idext = 'STANDARD';
    ECOCAN.Throttle.payload_size =8;
    ECOCAN.Throttle.interval =-1;

    ECOCAN.Throttle.fields{1}.name = 'gas';
    ECOCAN.Throttle.fields{1}.units = '-';
    ECOCAN.Throttle.fields{1}.start_bit = 0;
    ECOCAN.Throttle.fields{1}.bit_length = 32;
    ECOCAN.Throttle.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Throttle.fields{1}.data_type = 'FLOAT32';
    ECOCAN.Throttle.fields{1}.scale = 1;
    ECOCAN.Throttle.fields{1}.offset = 0;
    ECOCAN.Throttle.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Throttle.fields{1}.multiplex_value = 0;

    ECOCAN.Throttle.fields{2}.name = 'GearUp';
    ECOCAN.Throttle.fields{2}.units = '-';
    ECOCAN.Throttle.fields{2}.start_bit = 32;
    ECOCAN.Throttle.fields{2}.bit_length = 1;
    ECOCAN.Throttle.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Throttle.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Throttle.fields{2}.scale = 1;
    ECOCAN.Throttle.fields{2}.offset = 0;
    ECOCAN.Throttle.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Throttle.fields{2}.multiplex_value = 0;

    ECOCAN.Throttle.fields{3}.name = 'GearDown';
    ECOCAN.Throttle.fields{3}.units = '-';
    ECOCAN.Throttle.fields{3}.start_bit = 33;
    ECOCAN.Throttle.fields{3}.bit_length = 1;
    ECOCAN.Throttle.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Throttle.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Throttle.fields{3}.scale = 1;
    ECOCAN.Throttle.fields{3}.offset = 0;
    ECOCAN.Throttle.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Throttle.fields{3}.multiplex_value = 0;

    ECOCAN.Throttle.fields{4}.name = 'LeftBlink';
    ECOCAN.Throttle.fields{4}.units = '-';
    ECOCAN.Throttle.fields{4}.start_bit = 34;
    ECOCAN.Throttle.fields{4}.bit_length = 1;
    ECOCAN.Throttle.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Throttle.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.Throttle.fields{4}.scale = 1;
    ECOCAN.Throttle.fields{4}.offset = 0;
    ECOCAN.Throttle.fields{4}.multiplex_type = 'Standard';
    ECOCAN.Throttle.fields{4}.multiplex_value = 0;

    ECOCAN.Throttle.fields{5}.name = 'RightBlink';
    ECOCAN.Throttle.fields{5}.units = '-';
    ECOCAN.Throttle.fields{5}.start_bit = 35;
    ECOCAN.Throttle.fields{5}.bit_length = 1;
    ECOCAN.Throttle.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Throttle.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.Throttle.fields{5}.scale = 1;
    ECOCAN.Throttle.fields{5}.offset = 0;
    ECOCAN.Throttle.fields{5}.multiplex_type = 'Standard';
    ECOCAN.Throttle.fields{5}.multiplex_value = 0;

    ECOCAN.Throttle.fields{6}.name = 'HazardLight';
    ECOCAN.Throttle.fields{6}.units = '-';
    ECOCAN.Throttle.fields{6}.start_bit = 36;
    ECOCAN.Throttle.fields{6}.bit_length = 1;
    ECOCAN.Throttle.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Throttle.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.Throttle.fields{6}.scale = 1;
    ECOCAN.Throttle.fields{6}.offset = 0;
    ECOCAN.Throttle.fields{6}.multiplex_type = 'Standard';
    ECOCAN.Throttle.fields{6}.multiplex_value = 0;

    ECOCAN.Throttle.fields{7}.name = 'HighBeam';
    ECOCAN.Throttle.fields{7}.units = '-';
    ECOCAN.Throttle.fields{7}.start_bit = 37;
    ECOCAN.Throttle.fields{7}.bit_length = 1;
    ECOCAN.Throttle.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Throttle.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.Throttle.fields{7}.scale = 1;
    ECOCAN.Throttle.fields{7}.offset = 0;
    ECOCAN.Throttle.fields{7}.multiplex_type = 'Standard';
    ECOCAN.Throttle.fields{7}.multiplex_value = 0;

    ECOCAN.Throttle.fields{8}.name = 'HeadlightFlasher';
    ECOCAN.Throttle.fields{8}.units = '-';
    ECOCAN.Throttle.fields{8}.start_bit = 38;
    ECOCAN.Throttle.fields{8}.bit_length = 1;
    ECOCAN.Throttle.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Throttle.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.Throttle.fields{8}.scale = 1;
    ECOCAN.Throttle.fields{8}.offset = 0;
    ECOCAN.Throttle.fields{8}.multiplex_type = 'Standard';
    ECOCAN.Throttle.fields{8}.multiplex_value = 0;

    ECOCAN.Throttle.fields{9}.name = 'StartStop';
    ECOCAN.Throttle.fields{9}.units = '-';
    ECOCAN.Throttle.fields{9}.start_bit = 39;
    ECOCAN.Throttle.fields{9}.bit_length = 1;
    ECOCAN.Throttle.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Throttle.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.Throttle.fields{9}.scale = 1;
    ECOCAN.Throttle.fields{9}.offset = 0;
    ECOCAN.Throttle.fields{9}.multiplex_type = 'Standard';
    ECOCAN.Throttle.fields{9}.multiplex_value = 0;

    ECOCAN.Throttle.fields{10}.name = 'Reset';
    ECOCAN.Throttle.fields{10}.units = '-';
    ECOCAN.Throttle.fields{10}.start_bit = 40;
    ECOCAN.Throttle.fields{10}.bit_length = 1;
    ECOCAN.Throttle.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Throttle.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.Throttle.fields{10}.scale = 1;
    ECOCAN.Throttle.fields{10}.offset = 0;
    ECOCAN.Throttle.fields{10}.multiplex_type = 'Standard';
    ECOCAN.Throttle.fields{10}.multiplex_value = 0;

    ECOCAN.Throttle.fields{11}.name = 'otonomEnable';
    ECOCAN.Throttle.fields{11}.units = '-';
    ECOCAN.Throttle.fields{11}.start_bit = 41;
    ECOCAN.Throttle.fields{11}.bit_length = 1;
    ECOCAN.Throttle.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Throttle.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.Throttle.fields{11}.scale = 1;
    ECOCAN.Throttle.fields{11}.offset = 0;
    ECOCAN.Throttle.fields{11}.multiplex_type = 'Standard';
    ECOCAN.Throttle.fields{11}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:SteeringBrake
%Message Number:2
case 'SteeringBrake'
    ECOCAN.SteeringBrake = struct;
    ECOCAN.SteeringBrake.name = 'SteeringBrake';
    ECOCAN.SteeringBrake.description = 'SteeringBrake';
    ECOCAN.SteeringBrake.protocol  = 'ECOCAN';
    ECOCAN.SteeringBrake.id = hex2dec('575');
    ECOCAN.SteeringBrake.idext = 'STANDARD';
    ECOCAN.SteeringBrake.payload_size =8;
    ECOCAN.SteeringBrake.interval =-1;

    ECOCAN.SteeringBrake.fields{1}.name = 'Steering';
    ECOCAN.SteeringBrake.fields{1}.units = '-';
    ECOCAN.SteeringBrake.fields{1}.start_bit = 0;
    ECOCAN.SteeringBrake.fields{1}.bit_length = 32;
    ECOCAN.SteeringBrake.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.SteeringBrake.fields{1}.data_type = 'FLOAT32';
    ECOCAN.SteeringBrake.fields{1}.scale = 1;
    ECOCAN.SteeringBrake.fields{1}.offset = 0;
    ECOCAN.SteeringBrake.fields{1}.multiplex_type = 'Standard';
    ECOCAN.SteeringBrake.fields{1}.multiplex_value = 0;

    ECOCAN.SteeringBrake.fields{2}.name = 'Brake';
    ECOCAN.SteeringBrake.fields{2}.units = '-';
    ECOCAN.SteeringBrake.fields{2}.start_bit = 32;
    ECOCAN.SteeringBrake.fields{2}.bit_length = 32;
    ECOCAN.SteeringBrake.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.SteeringBrake.fields{2}.data_type = 'FLOAT32';
    ECOCAN.SteeringBrake.fields{2}.scale = 1;
    ECOCAN.SteeringBrake.fields{2}.offset = 0;
    ECOCAN.SteeringBrake.fields{2}.multiplex_type = 'Standard';
    ECOCAN.SteeringBrake.fields{2}.multiplex_value = 0;


  end
  try
    msg = ECOCAN.(msgname);
  catch
  end
end
end

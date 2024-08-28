function msg = GateECU(msgname,type)
  if(255==type)
  msg = struct;
  msg.num=1;
  msg.list= cell(1, msg.num);
  msg.list{1}='FrontWheelCommands';
  else 
  msg = struct;
  switch msgname 
%%
%Network Node:Vector__XXX
%Message Name:FrontWheelCommands
%Message Number:1
case 'FrontWheelCommands'
    ECOCAN.FrontWheelCommands = struct;
    ECOCAN.FrontWheelCommands.name = 'FrontWheelCommands';
    ECOCAN.FrontWheelCommands.description = 'FrontWheelCommands';
    ECOCAN.FrontWheelCommands.protocol  = 'ECOCAN';
    ECOCAN.FrontWheelCommands.id = hex2dec('350');
    ECOCAN.FrontWheelCommands.idext = 'STANDARD';
    ECOCAN.FrontWheelCommands.payload_size =8;
    ECOCAN.FrontWheelCommands.interval =-1;

    ECOCAN.FrontWheelCommands.fields{1}.name = 'set_steering_wheel_angle';
    ECOCAN.FrontWheelCommands.fields{1}.units = 'degree';
    ECOCAN.FrontWheelCommands.fields{1}.start_bit = 0;
    ECOCAN.FrontWheelCommands.fields{1}.bit_length = 16;
    ECOCAN.FrontWheelCommands.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FrontWheelCommands.fields{1}.data_type = 'SIGNED';
    ECOCAN.FrontWheelCommands.fields{1}.scale = 0.02;
    ECOCAN.FrontWheelCommands.fields{1}.offset = 0;
    ECOCAN.FrontWheelCommands.fields{1}.multiplex_type = 'Standard';
    ECOCAN.FrontWheelCommands.fields{1}.multiplex_value = 0;

    ECOCAN.FrontWheelCommands.fields{2}.name = 'set_steering_wheel_torque';
    ECOCAN.FrontWheelCommands.fields{2}.units = '-';
    ECOCAN.FrontWheelCommands.fields{2}.start_bit = 16;
    ECOCAN.FrontWheelCommands.fields{2}.bit_length = 8;
    ECOCAN.FrontWheelCommands.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FrontWheelCommands.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.FrontWheelCommands.fields{2}.scale = 1;
    ECOCAN.FrontWheelCommands.fields{2}.offset = 0;
    ECOCAN.FrontWheelCommands.fields{2}.multiplex_type = 'Standard';
    ECOCAN.FrontWheelCommands.fields{2}.multiplex_value = 0;

    ECOCAN.FrontWheelCommands.fields{3}.name = 'autonom_Enable';
    ECOCAN.FrontWheelCommands.fields{3}.units = '-';
    ECOCAN.FrontWheelCommands.fields{3}.start_bit = 24;
    ECOCAN.FrontWheelCommands.fields{3}.bit_length = 8;
    ECOCAN.FrontWheelCommands.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.FrontWheelCommands.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.FrontWheelCommands.fields{3}.scale = 1;
    ECOCAN.FrontWheelCommands.fields{3}.offset = 0;
    ECOCAN.FrontWheelCommands.fields{3}.multiplex_type = 'Standard';
    ECOCAN.FrontWheelCommands.fields{3}.multiplex_value = 0;


  end
  try
    msg = ECOCAN.(msgname);
  catch
  end
end
end

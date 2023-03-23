function msg = GearShiftSwitch(msgname,type)
  if(255==type)
  msg = struct;
  msg.num=1;
  msg.list= cell(1, msg.num);
  msg.list{1}='GearShiftSwitch';
  else 
  msg = struct;
  switch msgname 
%%
%Network Node:Vector__XXX
%Message Name:GearShiftSwitch
%Message Number:1
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

    ECOCAN.GearShiftSwitch.fields{3}.name = 'ShiftPos';
    ECOCAN.GearShiftSwitch.fields{3}.units = '-';
    ECOCAN.GearShiftSwitch.fields{3}.start_bit = 12;
    ECOCAN.GearShiftSwitch.fields{3}.bit_length = 4;
    ECOCAN.GearShiftSwitch.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.GearShiftSwitch.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.GearShiftSwitch.fields{3}.scale = 1;
    ECOCAN.GearShiftSwitch.fields{3}.offset = 0;
    ECOCAN.GearShiftSwitch.fields{3}.multiplex_type = 'Standard';
    ECOCAN.GearShiftSwitch.fields{3}.multiplex_value = 0;

    ECOCAN.GearShiftSwitch.fields{4}.name = 'SwitchMove';
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


  end
  try
    msg = ECOCAN.(msgname);
  catch
  end
end
end

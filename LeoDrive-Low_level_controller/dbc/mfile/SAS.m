function msg = SAS(msgname,type)
  if(255==type)
  msg = struct;
  msg.num=1;
  msg.list= cell(1, msg.num);
  msg.list{1}='SAS';
  else 
  msg = struct;
  switch msgname 
%%
%Network Node:Vector__XXX
%Message Name:SAS
%Message Number:1
case 'SAS'
    ECOCAN.SAS = struct;
    ECOCAN.SAS.name = 'SAS';
    ECOCAN.SAS.description = 'SAS';
    ECOCAN.SAS.protocol  = 'ECOCAN';
    ECOCAN.SAS.id = hex2dec('18F01DE4');
    ECOCAN.SAS.idext = 'EXTENDED';
    ECOCAN.SAS.payload_size =8;
    ECOCAN.SAS.interval =-1;

    ECOCAN.SAS.fields{1}.name = 'SteeringWheelAngle';
    ECOCAN.SAS.fields{1}.units = '-';
    ECOCAN.SAS.fields{1}.start_bit = 0;
    ECOCAN.SAS.fields{1}.bit_length = 16;
    ECOCAN.SAS.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.SAS.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.SAS.fields{1}.scale = 1;
    ECOCAN.SAS.fields{1}.offset = 0;
    ECOCAN.SAS.fields{1}.multiplex_type = 'Standard';
    ECOCAN.SAS.fields{1}.multiplex_value = 0;


  end
  try
    msg = ECOCAN.(msgname);
  catch
  end
end
end

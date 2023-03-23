function msg = Leo_accpedal(msgname,type)
  if(255==type)
  msg = struct;
  msg.num=2;
  msg.list= cell(1, msg.num);
  msg.list{1}='Feedback';
  msg.list{2}='Acc_Pedal_Command';
  else 
  msg = struct;
  switch msgname 
%%
%Network Node:Vector__XXX
%Message Name:Feedback
%Message Number:1
case 'Feedback'
    ECOCAN.Feedback = struct;
    ECOCAN.Feedback.name = 'Feedback';
    ECOCAN.Feedback.description = 'Feedback';
    ECOCAN.Feedback.protocol  = 'ECOCAN';
    ECOCAN.Feedback.id = hex2dec('475');
    ECOCAN.Feedback.idext = 'STANDARD';
    ECOCAN.Feedback.payload_size =3;
    ECOCAN.Feedback.interval =-1;

    ECOCAN.Feedback.fields{1}.name = 'Current_Pedal_Pos';
    ECOCAN.Feedback.fields{1}.units = '%';
    ECOCAN.Feedback.fields{1}.start_bit = 0;
    ECOCAN.Feedback.fields{1}.bit_length = 16;
    ECOCAN.Feedback.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Feedback.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Feedback.fields{1}.scale = 0.01;
    ECOCAN.Feedback.fields{1}.offset = 0;
    ECOCAN.Feedback.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Feedback.fields{1}.multiplex_value = 0;

    ECOCAN.Feedback.fields{2}.name = 'Timeout_Err';
    ECOCAN.Feedback.fields{2}.units = 'boolean';
    ECOCAN.Feedback.fields{2}.start_bit = 16;
    ECOCAN.Feedback.fields{2}.bit_length = 1;
    ECOCAN.Feedback.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Feedback.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Feedback.fields{2}.scale = 1;
    ECOCAN.Feedback.fields{2}.offset = 0;
    ECOCAN.Feedback.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Feedback.fields{2}.multiplex_value = 0;

    ECOCAN.Feedback.fields{3}.name = 'Pedal_conn_err';
    ECOCAN.Feedback.fields{3}.units = 'boolean';
    ECOCAN.Feedback.fields{3}.start_bit = 17;
    ECOCAN.Feedback.fields{3}.bit_length = 1;
    ECOCAN.Feedback.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Feedback.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.Feedback.fields{3}.scale = 1;
    ECOCAN.Feedback.fields{3}.offset = 0;
    ECOCAN.Feedback.fields{3}.multiplex_type = 'Standard';
    ECOCAN.Feedback.fields{3}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Acc_Pedal_Command
%Message Number:2
case 'Acc_Pedal_Command'
    ECOCAN.Acc_Pedal_Command = struct;
    ECOCAN.Acc_Pedal_Command.name = 'Acc_Pedal_Command';
    ECOCAN.Acc_Pedal_Command.description = 'Acc_Pedal_Command';
    ECOCAN.Acc_Pedal_Command.protocol  = 'ECOCAN';
    ECOCAN.Acc_Pedal_Command.id = hex2dec('474');
    ECOCAN.Acc_Pedal_Command.idext = 'STANDARD';
    ECOCAN.Acc_Pedal_Command.payload_size =3;
    ECOCAN.Acc_Pedal_Command.interval =-1;

    ECOCAN.Acc_Pedal_Command.fields{1}.name = 'Throtte_command';
    ECOCAN.Acc_Pedal_Command.fields{1}.units = '%';
    ECOCAN.Acc_Pedal_Command.fields{1}.start_bit = 0;
    ECOCAN.Acc_Pedal_Command.fields{1}.bit_length = 16;
    ECOCAN.Acc_Pedal_Command.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Acc_Pedal_Command.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Acc_Pedal_Command.fields{1}.scale = 0.01;
    ECOCAN.Acc_Pedal_Command.fields{1}.offset = 0;
    ECOCAN.Acc_Pedal_Command.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Acc_Pedal_Command.fields{1}.multiplex_value = 0;

    ECOCAN.Acc_Pedal_Command.fields{2}.name = 'Autonomy_Active';
    ECOCAN.Acc_Pedal_Command.fields{2}.units = 'boolean';
    ECOCAN.Acc_Pedal_Command.fields{2}.start_bit = 16;
    ECOCAN.Acc_Pedal_Command.fields{2}.bit_length = 1;
    ECOCAN.Acc_Pedal_Command.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Acc_Pedal_Command.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Acc_Pedal_Command.fields{2}.scale = 1;
    ECOCAN.Acc_Pedal_Command.fields{2}.offset = 0;
    ECOCAN.Acc_Pedal_Command.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Acc_Pedal_Command.fields{2}.multiplex_value = 0;


  end
  try
    msg = ECOCAN.(msgname);
  catch
  end
end
end

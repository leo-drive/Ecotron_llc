function msg = ld_pds(msgname,type)
  if(255==type)
  msg = struct;
  msg.num=8;
  msg.list= cell(1, msg.num);
  msg.list{1}='PDS_Status2_Master';
  msg.list{2}='PDS_Current3Master';
  msg.list{3}='PDS_Current2Master';
  msg.list{4}='PDS_Current1Master';
  msg.list{5}='PDS_UniteChannelStatus';
  msg.list{6}='PDS_StatusMaster';
  msg.list{7}='PDS_UniteChannel';
  msg.list{8}='Relay_Request';
  else 
  msg = struct;
  switch msgname 
%%
%Network Node:Vector__XXX
%Message Name:PDS_Status2_Master
%Message Number:1
case 'PDS_Status2_Master'
    ECOCAN.PDS_Status2_Master = struct;
    ECOCAN.PDS_Status2_Master.name = 'PDS_Status2_Master';
    ECOCAN.PDS_Status2_Master.description = 'PDS_Status2_Master';
    ECOCAN.PDS_Status2_Master.protocol  = 'ECOCAN';
    ECOCAN.PDS_Status2_Master.id = hex2dec('43C');
    ECOCAN.PDS_Status2_Master.idext = 'STANDARD';
    ECOCAN.PDS_Status2_Master.payload_size =6;
    ECOCAN.PDS_Status2_Master.interval =-1;

    ECOCAN.PDS_Status2_Master.fields{1}.name = 'BOARDTEMP';
    ECOCAN.PDS_Status2_Master.fields{1}.units = '_C';
    ECOCAN.PDS_Status2_Master.fields{1}.start_bit = 0;
    ECOCAN.PDS_Status2_Master.fields{1}.bit_length = 16;
    ECOCAN.PDS_Status2_Master.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_Status2_Master.fields{1}.data_type = 'SIGNED';
    ECOCAN.PDS_Status2_Master.fields{1}.scale = 0.01;
    ECOCAN.PDS_Status2_Master.fields{1}.offset = 0;
    ECOCAN.PDS_Status2_Master.fields{1}.multiplex_type = 'Standard';
    ECOCAN.PDS_Status2_Master.fields{1}.multiplex_value = 0;

    ECOCAN.PDS_Status2_Master.fields{2}.name = 'INPUT_Voltage';
    ECOCAN.PDS_Status2_Master.fields{2}.units = 'V';
    ECOCAN.PDS_Status2_Master.fields{2}.start_bit = 16;
    ECOCAN.PDS_Status2_Master.fields{2}.bit_length = 16;
    ECOCAN.PDS_Status2_Master.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_Status2_Master.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.PDS_Status2_Master.fields{2}.scale = 0.01;
    ECOCAN.PDS_Status2_Master.fields{2}.offset = 0;
    ECOCAN.PDS_Status2_Master.fields{2}.multiplex_type = 'Standard';
    ECOCAN.PDS_Status2_Master.fields{2}.multiplex_value = 0;

    ECOCAN.PDS_Status2_Master.fields{3}.name = 'INPUT_CURRENT';
    ECOCAN.PDS_Status2_Master.fields{3}.units = 'A';
    ECOCAN.PDS_Status2_Master.fields{3}.start_bit = 32;
    ECOCAN.PDS_Status2_Master.fields{3}.bit_length = 16;
    ECOCAN.PDS_Status2_Master.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_Status2_Master.fields{3}.data_type = 'SIGNED';
    ECOCAN.PDS_Status2_Master.fields{3}.scale = 0.01;
    ECOCAN.PDS_Status2_Master.fields{3}.offset = 0;
    ECOCAN.PDS_Status2_Master.fields{3}.multiplex_type = 'Standard';
    ECOCAN.PDS_Status2_Master.fields{3}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:PDS_Current3Master
%Message Number:2
case 'PDS_Current3Master'
    ECOCAN.PDS_Current3Master = struct;
    ECOCAN.PDS_Current3Master.name = 'PDS_Current3Master';
    ECOCAN.PDS_Current3Master.description = 'PDS_Current3Master';
    ECOCAN.PDS_Current3Master.protocol  = 'ECOCAN';
    ECOCAN.PDS_Current3Master.id = hex2dec('42C');
    ECOCAN.PDS_Current3Master.idext = 'STANDARD';
    ECOCAN.PDS_Current3Master.payload_size =4;
    ECOCAN.PDS_Current3Master.interval =-1;

    ECOCAN.PDS_Current3Master.fields{1}.name = 'CURRENT9';
    ECOCAN.PDS_Current3Master.fields{1}.units = 'A';
    ECOCAN.PDS_Current3Master.fields{1}.start_bit = 0;
    ECOCAN.PDS_Current3Master.fields{1}.bit_length = 16;
    ECOCAN.PDS_Current3Master.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_Current3Master.fields{1}.data_type = 'SIGNED';
    ECOCAN.PDS_Current3Master.fields{1}.scale = 0.01;
    ECOCAN.PDS_Current3Master.fields{1}.offset = 0;
    ECOCAN.PDS_Current3Master.fields{1}.multiplex_type = 'Standard';
    ECOCAN.PDS_Current3Master.fields{1}.multiplex_value = 0;

    ECOCAN.PDS_Current3Master.fields{2}.name = 'CURRENT10';
    ECOCAN.PDS_Current3Master.fields{2}.units = 'A';
    ECOCAN.PDS_Current3Master.fields{2}.start_bit = 16;
    ECOCAN.PDS_Current3Master.fields{2}.bit_length = 16;
    ECOCAN.PDS_Current3Master.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_Current3Master.fields{2}.data_type = 'SIGNED';
    ECOCAN.PDS_Current3Master.fields{2}.scale = 0.01;
    ECOCAN.PDS_Current3Master.fields{2}.offset = 0;
    ECOCAN.PDS_Current3Master.fields{2}.multiplex_type = 'Standard';
    ECOCAN.PDS_Current3Master.fields{2}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:PDS_Current2Master
%Message Number:3
case 'PDS_Current2Master'
    ECOCAN.PDS_Current2Master = struct;
    ECOCAN.PDS_Current2Master.name = 'PDS_Current2Master';
    ECOCAN.PDS_Current2Master.description = 'PDS_Current2Master';
    ECOCAN.PDS_Current2Master.protocol  = 'ECOCAN';
    ECOCAN.PDS_Current2Master.id = hex2dec('428');
    ECOCAN.PDS_Current2Master.idext = 'STANDARD';
    ECOCAN.PDS_Current2Master.payload_size =8;
    ECOCAN.PDS_Current2Master.interval =-1;

    ECOCAN.PDS_Current2Master.fields{1}.name = 'CURRENT5';
    ECOCAN.PDS_Current2Master.fields{1}.units = 'A';
    ECOCAN.PDS_Current2Master.fields{1}.start_bit = 0;
    ECOCAN.PDS_Current2Master.fields{1}.bit_length = 16;
    ECOCAN.PDS_Current2Master.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_Current2Master.fields{1}.data_type = 'SIGNED';
    ECOCAN.PDS_Current2Master.fields{1}.scale = 0.01;
    ECOCAN.PDS_Current2Master.fields{1}.offset = 0;
    ECOCAN.PDS_Current2Master.fields{1}.multiplex_type = 'Standard';
    ECOCAN.PDS_Current2Master.fields{1}.multiplex_value = 0;

    ECOCAN.PDS_Current2Master.fields{2}.name = 'CURRENT6';
    ECOCAN.PDS_Current2Master.fields{2}.units = 'A';
    ECOCAN.PDS_Current2Master.fields{2}.start_bit = 16;
    ECOCAN.PDS_Current2Master.fields{2}.bit_length = 16;
    ECOCAN.PDS_Current2Master.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_Current2Master.fields{2}.data_type = 'SIGNED';
    ECOCAN.PDS_Current2Master.fields{2}.scale = 0.01;
    ECOCAN.PDS_Current2Master.fields{2}.offset = 0;
    ECOCAN.PDS_Current2Master.fields{2}.multiplex_type = 'Standard';
    ECOCAN.PDS_Current2Master.fields{2}.multiplex_value = 0;

    ECOCAN.PDS_Current2Master.fields{3}.name = 'CURRENT7';
    ECOCAN.PDS_Current2Master.fields{3}.units = 'A';
    ECOCAN.PDS_Current2Master.fields{3}.start_bit = 32;
    ECOCAN.PDS_Current2Master.fields{3}.bit_length = 16;
    ECOCAN.PDS_Current2Master.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_Current2Master.fields{3}.data_type = 'SIGNED';
    ECOCAN.PDS_Current2Master.fields{3}.scale = 0.01;
    ECOCAN.PDS_Current2Master.fields{3}.offset = 0;
    ECOCAN.PDS_Current2Master.fields{3}.multiplex_type = 'Standard';
    ECOCAN.PDS_Current2Master.fields{3}.multiplex_value = 0;

    ECOCAN.PDS_Current2Master.fields{4}.name = 'CURRENT8';
    ECOCAN.PDS_Current2Master.fields{4}.units = 'A';
    ECOCAN.PDS_Current2Master.fields{4}.start_bit = 48;
    ECOCAN.PDS_Current2Master.fields{4}.bit_length = 16;
    ECOCAN.PDS_Current2Master.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_Current2Master.fields{4}.data_type = 'SIGNED';
    ECOCAN.PDS_Current2Master.fields{4}.scale = 0.01;
    ECOCAN.PDS_Current2Master.fields{4}.offset = 0;
    ECOCAN.PDS_Current2Master.fields{4}.multiplex_type = 'Standard';
    ECOCAN.PDS_Current2Master.fields{4}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:PDS_Current1Master
%Message Number:4
case 'PDS_Current1Master'
    ECOCAN.PDS_Current1Master = struct;
    ECOCAN.PDS_Current1Master.name = 'PDS_Current1Master';
    ECOCAN.PDS_Current1Master.description = 'PDS_Current1Master';
    ECOCAN.PDS_Current1Master.protocol  = 'ECOCAN';
    ECOCAN.PDS_Current1Master.id = hex2dec('424');
    ECOCAN.PDS_Current1Master.idext = 'STANDARD';
    ECOCAN.PDS_Current1Master.payload_size =8;
    ECOCAN.PDS_Current1Master.interval =-1;

    ECOCAN.PDS_Current1Master.fields{1}.name = 'CURRENT1';
    ECOCAN.PDS_Current1Master.fields{1}.units = 'A';
    ECOCAN.PDS_Current1Master.fields{1}.start_bit = 0;
    ECOCAN.PDS_Current1Master.fields{1}.bit_length = 16;
    ECOCAN.PDS_Current1Master.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_Current1Master.fields{1}.data_type = 'SIGNED';
    ECOCAN.PDS_Current1Master.fields{1}.scale = 0.01;
    ECOCAN.PDS_Current1Master.fields{1}.offset = 0;
    ECOCAN.PDS_Current1Master.fields{1}.multiplex_type = 'Standard';
    ECOCAN.PDS_Current1Master.fields{1}.multiplex_value = 0;

    ECOCAN.PDS_Current1Master.fields{2}.name = 'CURRENT2';
    ECOCAN.PDS_Current1Master.fields{2}.units = 'A';
    ECOCAN.PDS_Current1Master.fields{2}.start_bit = 16;
    ECOCAN.PDS_Current1Master.fields{2}.bit_length = 16;
    ECOCAN.PDS_Current1Master.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_Current1Master.fields{2}.data_type = 'SIGNED';
    ECOCAN.PDS_Current1Master.fields{2}.scale = 0.01;
    ECOCAN.PDS_Current1Master.fields{2}.offset = 0;
    ECOCAN.PDS_Current1Master.fields{2}.multiplex_type = 'Standard';
    ECOCAN.PDS_Current1Master.fields{2}.multiplex_value = 0;

    ECOCAN.PDS_Current1Master.fields{3}.name = 'CURRENT3';
    ECOCAN.PDS_Current1Master.fields{3}.units = 'A';
    ECOCAN.PDS_Current1Master.fields{3}.start_bit = 32;
    ECOCAN.PDS_Current1Master.fields{3}.bit_length = 16;
    ECOCAN.PDS_Current1Master.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_Current1Master.fields{3}.data_type = 'SIGNED';
    ECOCAN.PDS_Current1Master.fields{3}.scale = 0.01;
    ECOCAN.PDS_Current1Master.fields{3}.offset = 0;
    ECOCAN.PDS_Current1Master.fields{3}.multiplex_type = 'Standard';
    ECOCAN.PDS_Current1Master.fields{3}.multiplex_value = 0;

    ECOCAN.PDS_Current1Master.fields{4}.name = 'CURRENT4';
    ECOCAN.PDS_Current1Master.fields{4}.units = 'A';
    ECOCAN.PDS_Current1Master.fields{4}.start_bit = 48;
    ECOCAN.PDS_Current1Master.fields{4}.bit_length = 16;
    ECOCAN.PDS_Current1Master.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_Current1Master.fields{4}.data_type = 'SIGNED';
    ECOCAN.PDS_Current1Master.fields{4}.scale = 0.01;
    ECOCAN.PDS_Current1Master.fields{4}.offset = 0;
    ECOCAN.PDS_Current1Master.fields{4}.multiplex_type = 'Standard';
    ECOCAN.PDS_Current1Master.fields{4}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:PDS_UniteChannelStatus
%Message Number:5
case 'PDS_UniteChannelStatus'
    ECOCAN.PDS_UniteChannelStatus = struct;
    ECOCAN.PDS_UniteChannelStatus.name = 'PDS_UniteChannelStatus';
    ECOCAN.PDS_UniteChannelStatus.description = 'PDS_UniteChannelStatus';
    ECOCAN.PDS_UniteChannelStatus.protocol  = 'ECOCAN';
    ECOCAN.PDS_UniteChannelStatus.id = hex2dec('421');
    ECOCAN.PDS_UniteChannelStatus.idext = 'STANDARD';
    ECOCAN.PDS_UniteChannelStatus.payload_size =8;
    ECOCAN.PDS_UniteChannelStatus.interval =-1;

    ECOCAN.PDS_UniteChannelStatus.fields{1}.name = 'Parallel_Group1';
    ECOCAN.PDS_UniteChannelStatus.fields{1}.units = '-';
    ECOCAN.PDS_UniteChannelStatus.fields{1}.start_bit = 0;
    ECOCAN.PDS_UniteChannelStatus.fields{1}.bit_length = 16;
    ECOCAN.PDS_UniteChannelStatus.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_UniteChannelStatus.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.PDS_UniteChannelStatus.fields{1}.scale = 1;
    ECOCAN.PDS_UniteChannelStatus.fields{1}.offset = 0;
    ECOCAN.PDS_UniteChannelStatus.fields{1}.multiplex_type = 'Standard';
    ECOCAN.PDS_UniteChannelStatus.fields{1}.multiplex_value = 0;

    ECOCAN.PDS_UniteChannelStatus.fields{2}.name = 'Parallel_Group2';
    ECOCAN.PDS_UniteChannelStatus.fields{2}.units = '-';
    ECOCAN.PDS_UniteChannelStatus.fields{2}.start_bit = 16;
    ECOCAN.PDS_UniteChannelStatus.fields{2}.bit_length = 16;
    ECOCAN.PDS_UniteChannelStatus.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_UniteChannelStatus.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.PDS_UniteChannelStatus.fields{2}.scale = 1;
    ECOCAN.PDS_UniteChannelStatus.fields{2}.offset = 0;
    ECOCAN.PDS_UniteChannelStatus.fields{2}.multiplex_type = 'Standard';
    ECOCAN.PDS_UniteChannelStatus.fields{2}.multiplex_value = 0;

    ECOCAN.PDS_UniteChannelStatus.fields{3}.name = 'Parallel_Group3';
    ECOCAN.PDS_UniteChannelStatus.fields{3}.units = '-';
    ECOCAN.PDS_UniteChannelStatus.fields{3}.start_bit = 32;
    ECOCAN.PDS_UniteChannelStatus.fields{3}.bit_length = 16;
    ECOCAN.PDS_UniteChannelStatus.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_UniteChannelStatus.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.PDS_UniteChannelStatus.fields{3}.scale = 1;
    ECOCAN.PDS_UniteChannelStatus.fields{3}.offset = 0;
    ECOCAN.PDS_UniteChannelStatus.fields{3}.multiplex_type = 'Standard';
    ECOCAN.PDS_UniteChannelStatus.fields{3}.multiplex_value = 0;

    ECOCAN.PDS_UniteChannelStatus.fields{4}.name = 'Parallel_Group4';
    ECOCAN.PDS_UniteChannelStatus.fields{4}.units = '-';
    ECOCAN.PDS_UniteChannelStatus.fields{4}.start_bit = 48;
    ECOCAN.PDS_UniteChannelStatus.fields{4}.bit_length = 16;
    ECOCAN.PDS_UniteChannelStatus.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_UniteChannelStatus.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.PDS_UniteChannelStatus.fields{4}.scale = 1;
    ECOCAN.PDS_UniteChannelStatus.fields{4}.offset = 0;
    ECOCAN.PDS_UniteChannelStatus.fields{4}.multiplex_type = 'Standard';
    ECOCAN.PDS_UniteChannelStatus.fields{4}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:PDS_StatusMaster
%Message Number:6
case 'PDS_StatusMaster'
    ECOCAN.PDS_StatusMaster = struct;
    ECOCAN.PDS_StatusMaster.name = 'PDS_StatusMaster';
    ECOCAN.PDS_StatusMaster.description = 'PDS_StatusMaster';
    ECOCAN.PDS_StatusMaster.protocol  = 'ECOCAN';
    ECOCAN.PDS_StatusMaster.id = hex2dec('420');
    ECOCAN.PDS_StatusMaster.idext = 'STANDARD';
    ECOCAN.PDS_StatusMaster.payload_size =8;
    ECOCAN.PDS_StatusMaster.interval =-1;

    ECOCAN.PDS_StatusMaster.fields{1}.name = 'STATUS1';
    ECOCAN.PDS_StatusMaster.fields{1}.units = '';
    ECOCAN.PDS_StatusMaster.fields{1}.start_bit = 16;
    ECOCAN.PDS_StatusMaster.fields{1}.bit_length = 4;
    ECOCAN.PDS_StatusMaster.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_StatusMaster.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.PDS_StatusMaster.fields{1}.scale = 1;
    ECOCAN.PDS_StatusMaster.fields{1}.offset = 0;
    ECOCAN.PDS_StatusMaster.fields{1}.multiplex_type = 'Standard';
    ECOCAN.PDS_StatusMaster.fields{1}.multiplex_value = 0;

    ECOCAN.PDS_StatusMaster.fields{2}.name = 'STATUS2';
    ECOCAN.PDS_StatusMaster.fields{2}.units = '';
    ECOCAN.PDS_StatusMaster.fields{2}.start_bit = 20;
    ECOCAN.PDS_StatusMaster.fields{2}.bit_length = 4;
    ECOCAN.PDS_StatusMaster.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_StatusMaster.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.PDS_StatusMaster.fields{2}.scale = 1;
    ECOCAN.PDS_StatusMaster.fields{2}.offset = 0;
    ECOCAN.PDS_StatusMaster.fields{2}.multiplex_type = 'Standard';
    ECOCAN.PDS_StatusMaster.fields{2}.multiplex_value = 0;

    ECOCAN.PDS_StatusMaster.fields{3}.name = 'STATUS3';
    ECOCAN.PDS_StatusMaster.fields{3}.units = '';
    ECOCAN.PDS_StatusMaster.fields{3}.start_bit = 24;
    ECOCAN.PDS_StatusMaster.fields{3}.bit_length = 4;
    ECOCAN.PDS_StatusMaster.fields{3}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_StatusMaster.fields{3}.data_type = 'UNSIGNED';
    ECOCAN.PDS_StatusMaster.fields{3}.scale = 1;
    ECOCAN.PDS_StatusMaster.fields{3}.offset = 0;
    ECOCAN.PDS_StatusMaster.fields{3}.multiplex_type = 'Standard';
    ECOCAN.PDS_StatusMaster.fields{3}.multiplex_value = 0;

    ECOCAN.PDS_StatusMaster.fields{4}.name = 'STATUS4';
    ECOCAN.PDS_StatusMaster.fields{4}.units = '';
    ECOCAN.PDS_StatusMaster.fields{4}.start_bit = 28;
    ECOCAN.PDS_StatusMaster.fields{4}.bit_length = 4;
    ECOCAN.PDS_StatusMaster.fields{4}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_StatusMaster.fields{4}.data_type = 'UNSIGNED';
    ECOCAN.PDS_StatusMaster.fields{4}.scale = 1;
    ECOCAN.PDS_StatusMaster.fields{4}.offset = 0;
    ECOCAN.PDS_StatusMaster.fields{4}.multiplex_type = 'Standard';
    ECOCAN.PDS_StatusMaster.fields{4}.multiplex_value = 0;

    ECOCAN.PDS_StatusMaster.fields{5}.name = 'STATUS5';
    ECOCAN.PDS_StatusMaster.fields{5}.units = '';
    ECOCAN.PDS_StatusMaster.fields{5}.start_bit = 32;
    ECOCAN.PDS_StatusMaster.fields{5}.bit_length = 4;
    ECOCAN.PDS_StatusMaster.fields{5}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_StatusMaster.fields{5}.data_type = 'UNSIGNED';
    ECOCAN.PDS_StatusMaster.fields{5}.scale = 1;
    ECOCAN.PDS_StatusMaster.fields{5}.offset = 0;
    ECOCAN.PDS_StatusMaster.fields{5}.multiplex_type = 'Standard';
    ECOCAN.PDS_StatusMaster.fields{5}.multiplex_value = 0;

    ECOCAN.PDS_StatusMaster.fields{6}.name = 'STATUS6';
    ECOCAN.PDS_StatusMaster.fields{6}.units = '';
    ECOCAN.PDS_StatusMaster.fields{6}.start_bit = 36;
    ECOCAN.PDS_StatusMaster.fields{6}.bit_length = 4;
    ECOCAN.PDS_StatusMaster.fields{6}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_StatusMaster.fields{6}.data_type = 'UNSIGNED';
    ECOCAN.PDS_StatusMaster.fields{6}.scale = 1;
    ECOCAN.PDS_StatusMaster.fields{6}.offset = 0;
    ECOCAN.PDS_StatusMaster.fields{6}.multiplex_type = 'Standard';
    ECOCAN.PDS_StatusMaster.fields{6}.multiplex_value = 0;

    ECOCAN.PDS_StatusMaster.fields{7}.name = 'STATUS7';
    ECOCAN.PDS_StatusMaster.fields{7}.units = '';
    ECOCAN.PDS_StatusMaster.fields{7}.start_bit = 40;
    ECOCAN.PDS_StatusMaster.fields{7}.bit_length = 4;
    ECOCAN.PDS_StatusMaster.fields{7}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_StatusMaster.fields{7}.data_type = 'UNSIGNED';
    ECOCAN.PDS_StatusMaster.fields{7}.scale = 1;
    ECOCAN.PDS_StatusMaster.fields{7}.offset = 0;
    ECOCAN.PDS_StatusMaster.fields{7}.multiplex_type = 'Standard';
    ECOCAN.PDS_StatusMaster.fields{7}.multiplex_value = 0;

    ECOCAN.PDS_StatusMaster.fields{8}.name = 'STATUS8';
    ECOCAN.PDS_StatusMaster.fields{8}.units = '';
    ECOCAN.PDS_StatusMaster.fields{8}.start_bit = 44;
    ECOCAN.PDS_StatusMaster.fields{8}.bit_length = 4;
    ECOCAN.PDS_StatusMaster.fields{8}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_StatusMaster.fields{8}.data_type = 'UNSIGNED';
    ECOCAN.PDS_StatusMaster.fields{8}.scale = 1;
    ECOCAN.PDS_StatusMaster.fields{8}.offset = 0;
    ECOCAN.PDS_StatusMaster.fields{8}.multiplex_type = 'Standard';
    ECOCAN.PDS_StatusMaster.fields{8}.multiplex_value = 0;

    ECOCAN.PDS_StatusMaster.fields{9}.name = 'STATUS9';
    ECOCAN.PDS_StatusMaster.fields{9}.units = '';
    ECOCAN.PDS_StatusMaster.fields{9}.start_bit = 48;
    ECOCAN.PDS_StatusMaster.fields{9}.bit_length = 4;
    ECOCAN.PDS_StatusMaster.fields{9}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_StatusMaster.fields{9}.data_type = 'UNSIGNED';
    ECOCAN.PDS_StatusMaster.fields{9}.scale = 1;
    ECOCAN.PDS_StatusMaster.fields{9}.offset = 0;
    ECOCAN.PDS_StatusMaster.fields{9}.multiplex_type = 'Standard';
    ECOCAN.PDS_StatusMaster.fields{9}.multiplex_value = 0;

    ECOCAN.PDS_StatusMaster.fields{10}.name = 'STATUS10';
    ECOCAN.PDS_StatusMaster.fields{10}.units = '';
    ECOCAN.PDS_StatusMaster.fields{10}.start_bit = 52;
    ECOCAN.PDS_StatusMaster.fields{10}.bit_length = 4;
    ECOCAN.PDS_StatusMaster.fields{10}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_StatusMaster.fields{10}.data_type = 'UNSIGNED';
    ECOCAN.PDS_StatusMaster.fields{10}.scale = 1;
    ECOCAN.PDS_StatusMaster.fields{10}.offset = 0;
    ECOCAN.PDS_StatusMaster.fields{10}.multiplex_type = 'Standard';
    ECOCAN.PDS_StatusMaster.fields{10}.multiplex_value = 0;

    ECOCAN.PDS_StatusMaster.fields{11}.name = 'Errors';
    ECOCAN.PDS_StatusMaster.fields{11}.units = '-';
    ECOCAN.PDS_StatusMaster.fields{11}.start_bit = 56;
    ECOCAN.PDS_StatusMaster.fields{11}.bit_length = 8;
    ECOCAN.PDS_StatusMaster.fields{11}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_StatusMaster.fields{11}.data_type = 'UNSIGNED';
    ECOCAN.PDS_StatusMaster.fields{11}.scale = 1;
    ECOCAN.PDS_StatusMaster.fields{11}.offset = 0;
    ECOCAN.PDS_StatusMaster.fields{11}.multiplex_type = 'Standard';
    ECOCAN.PDS_StatusMaster.fields{11}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:PDS_UniteChannel
%Message Number:7
case 'PDS_UniteChannel'
    ECOCAN.PDS_UniteChannel = struct;
    ECOCAN.PDS_UniteChannel.name = 'PDS_UniteChannel';
    ECOCAN.PDS_UniteChannel.description = 'PDS_UniteChannel';
    ECOCAN.PDS_UniteChannel.protocol  = 'ECOCAN';
    ECOCAN.PDS_UniteChannel.id = hex2dec('411');
    ECOCAN.PDS_UniteChannel.idext = 'STANDARD';
    ECOCAN.PDS_UniteChannel.payload_size =2;
    ECOCAN.PDS_UniteChannel.interval =-1;

    ECOCAN.PDS_UniteChannel.fields{1}.name = 'Master';
    ECOCAN.PDS_UniteChannel.fields{1}.units = '';
    ECOCAN.PDS_UniteChannel.fields{1}.start_bit = 0;
    ECOCAN.PDS_UniteChannel.fields{1}.bit_length = 8;
    ECOCAN.PDS_UniteChannel.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_UniteChannel.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.PDS_UniteChannel.fields{1}.scale = 1;
    ECOCAN.PDS_UniteChannel.fields{1}.offset = 0;
    ECOCAN.PDS_UniteChannel.fields{1}.multiplex_type = 'Standard';
    ECOCAN.PDS_UniteChannel.fields{1}.multiplex_value = 0;

    ECOCAN.PDS_UniteChannel.fields{2}.name = 'Slave';
    ECOCAN.PDS_UniteChannel.fields{2}.units = '-';
    ECOCAN.PDS_UniteChannel.fields{2}.start_bit = 8;
    ECOCAN.PDS_UniteChannel.fields{2}.bit_length = 8;
    ECOCAN.PDS_UniteChannel.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.PDS_UniteChannel.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.PDS_UniteChannel.fields{2}.scale = 1;
    ECOCAN.PDS_UniteChannel.fields{2}.offset = 0;
    ECOCAN.PDS_UniteChannel.fields{2}.multiplex_type = 'Standard';
    ECOCAN.PDS_UniteChannel.fields{2}.multiplex_value = 0;


%%
%Network Node:Vector__XXX
%Message Name:Relay_Request
%Message Number:8
case 'Relay_Request'
    ECOCAN.Relay_Request = struct;
    ECOCAN.Relay_Request.name = 'Relay_Request';
    ECOCAN.Relay_Request.description = 'Relay_Request';
    ECOCAN.Relay_Request.protocol  = 'ECOCAN';
    ECOCAN.Relay_Request.id = hex2dec('410');
    ECOCAN.Relay_Request.idext = 'STANDARD';
    ECOCAN.Relay_Request.payload_size =2;
    ECOCAN.Relay_Request.interval =-1;

    ECOCAN.Relay_Request.fields{1}.name = 'CHANNEL';
    ECOCAN.Relay_Request.fields{1}.units = '';
    ECOCAN.Relay_Request.fields{1}.start_bit = 0;
    ECOCAN.Relay_Request.fields{1}.bit_length = 8;
    ECOCAN.Relay_Request.fields{1}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Relay_Request.fields{1}.data_type = 'UNSIGNED';
    ECOCAN.Relay_Request.fields{1}.scale = 1;
    ECOCAN.Relay_Request.fields{1}.offset = 0;
    ECOCAN.Relay_Request.fields{1}.multiplex_type = 'Standard';
    ECOCAN.Relay_Request.fields{1}.multiplex_value = 0;

    ECOCAN.Relay_Request.fields{2}.name = 'REQUEST';
    ECOCAN.Relay_Request.fields{2}.units = '';
    ECOCAN.Relay_Request.fields{2}.start_bit = 8;
    ECOCAN.Relay_Request.fields{2}.bit_length = 8;
    ECOCAN.Relay_Request.fields{2}.byte_order = 'LITTLE_ENDIAN';
    ECOCAN.Relay_Request.fields{2}.data_type = 'UNSIGNED';
    ECOCAN.Relay_Request.fields{2}.scale = 1;
    ECOCAN.Relay_Request.fields{2}.offset = 0;
    ECOCAN.Relay_Request.fields{2}.multiplex_type = 'Standard';
    ECOCAN.Relay_Request.fields{2}.multiplex_value = 0;


  end
  try
    msg = ECOCAN.(msgname);
  catch
  end
end
end

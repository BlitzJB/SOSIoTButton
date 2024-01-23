# Sample commands to test the GSM module
Send these commands via Serial after mounting `gsm.ino`

1. **AT**: Sending the "AT" command is a basic test of communication with the GSM module. If everything is working correctly, you should receive an "OK" response. For example:

   ```
   AT
   OK
   ```

2. **AT+CSQ**: This command is used to check the signal strength of the GSM network. The response will include the signal quality value, which represents the signal strength. For example:

   ```
   AT+CSQ
   +CSQ: 19,0
   OK
   ```

   In this example, the signal quality value is 19, which indicates the signal strength. A higher value typically indicates a stronger signal.

3. **AT+CREG?**: This command is used to check the network registration status. The response will indicate whether the module is registered on the network. For example:

   ```
   AT+CREG?
   +CREG: 0,1
   OK
   ```

   In this example, "+CREG: 0,1" indicates that the module is registered on the network (1 means registered).

4. **AT+CGATT?**: This command checks if the module is attached to a GPRS network. The response will indicate whether GPRS is attached or not. For example:

   ```
   AT+CGATT?
   +CGATT: 1
   OK
   ```

   In this example, "+CGATT: 1" indicates that the module is attached to a GPRS network (1 means attached).


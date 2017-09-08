# EchoPatcher
EchoPatcher is a simple tool that copies Revive and OpenVR DLLs to your Echo Arena folder, so you can use the Echo Arena party workaround I found.

[Releases](https://github.com/GiantSox/EchoPatcher/releases)

# Echo Arena Revive Party Workaround

**NOTE**: These instructions require an Oculus CV1 or DK2 sensor. A simpler solution that doesn't need a sensor is in the works.

1. Make sure your Vive is plugged in and SteamVR is running. Do not begin the guide until SteamVR is working (you don’t want SteamVR to try connecting to the virtual Rift we are going to create).

2. Open the OculusDebugTool and set Debug HMD to CV1. This will emulate an Oculus CV1 headset, and you should see a window pop up mirroring what’s being presented to the virtual headset (Oculus Home should load on it). The OculusDebugTool is located at:

       C:\Program Files\Oculus\Support\oculus-diagnostics\OculusDebugTool.exe

3. Plug in your Oculus Sensor. Any warning messages about a headset/sensor not being connected should now be dismissed. Oculus Home may give a “Poor tracking quality” warning on the sensor, but that does not matter.

4. You can now launch the game. **Do not launch the game through Steam or the Revive Dashboard.** Click on Echo Arena in the Oculus application on your desktop.

5. The game should now be running, and parties will work. You will probably encounter performance issues due to the Debug HMD though. Go back to the OculusDebugTool, and set Debug HMD back to none.

6. You should kill the “OculusVR” process in Task Manager, as it is rendering the Oculus Home environment in the Debug HMD. It may need to be killed multiple times.

7. If you continue to have performance issues, restart the game. “OculusVR” may need to be killed again.

Following these steps should cause parties to work. Note that the patch tool only needs to be run the first time. Please report any issues with the patch tool to GiantSox.

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofFile openVR_api;
	ofFile revive64;
	ofFile echoArenaExe;

	//Check if Echo Arena is in the default folder, if not ask the user
	ofFile defaultEchoArenaExe("C:/Program Files/Oculus/Software/Software/ready-at-dawn-echo-arena/EchoArena.exe");
	if (!defaultEchoArenaExe.exists()) {
		ofSystemAlertDialog("Echo Arena was not found in the default directory. Please select your Echo Arena executable (called EchoArena.exe).");
		ofFileDialogResult openEchoResult = ofSystemLoadDialog("Select your Echo Arena Executable (called EchoArena.exe).");
		echoArenaExe = ofFile(openEchoResult.getPath());
	}
	else
		echoArenaExe = defaultEchoArenaExe;

	//Check if LibRevive64_1.dll is in the default folder, if not ask the user
	ofFile defaultRevive64("C:/Program Files/Revive/Revive/x64/LibRevive64_1.dll");
	if (!defaultRevive64.exists()) {
		ofSystemAlertDialog("Revive was not found in the default directory. Please select your Revive 64bit DLL (usually called LibRevive64_1.dll).");
		ofFileDialogResult openReviveResult = ofSystemLoadDialog("Select your Revive 64bit DLL. (usually called LibRevive64_1.dll)");
		revive64 = ofFile(openReviveResult.getPath());
	}
	else
		revive64 = defaultRevive64;

	//Check if openvr_api.dll is in the Revive folder, if not download it
	ofFile openVR64FromRevive("C:/Program Files/Revive/Revive/x64/openvr_api.dll");
	if (!openVR64FromRevive.exists()) {
		ofSystemAlertDialog("openvr_api.dll could not be found in the default Revive directory, so the latest OpenVR DLL will now be downloaded from GitHub. Note that this may require SteamVR Beta.");
		ofSaveURLTo("https://raw.githubusercontent.com/ValveSoftware/openvr/master/bin/win64/openvr_api.dll", "openvr_api.dll");
		openVR_api = ofFile("openvr_api.dll");
	}
	else
		openVR_api = openVR64FromRevive;

	revive64.copyTo(echoArenaExe.getEnclosingDirectory(), false, true);	//Copy Revive DLL to Echo Arena Folder
	revive64 = ofFile(echoArenaExe.getEnclosingDirectory() + revive64.getFileName());	//Update revive64 path to one in Echo Arena folder
	revive64.moveTo(echoArenaExe.getEnclosingDirectory() + "TextInputFramework.dll", false, true);	//Rename Revive to TextInputFramework.dll

	openVR_api.copyTo(echoArenaExe.getEnclosingDirectory(), false, true); //Copy openvr_api.dll to Echo Arena folder
	
	ofSystemAlertDialog("Files should have been copied. You will no longer need EchoPatcher unless you want to update the copy of Revive Echo Arena is using.");
	
	std::exit(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

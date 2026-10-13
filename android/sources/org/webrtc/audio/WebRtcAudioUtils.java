package org.webrtc.audio;

import a3.e;
import android.annotation.TargetApi;
import android.content.Context;
import android.media.AudioDeviceInfo;
import android.media.AudioManager;
import android.os.Build;
import java.util.Arrays;
import k0.d;
import org.webrtc.Logging;
import s4.h;

/* loaded from: classes4.dex */
public final class WebRtcAudioUtils {
    private static final String TAG = "WebRtcAudioUtilsExternal";

    @TargetApi(24)
    public static String audioEncodingToString(int i5) {
        if (i5 == 0) {
            return "INVALID";
        }
        switch (i5) {
            case 2:
                return "PCM_16BIT";
            case 3:
                return "PCM_8BIT";
            case 4:
                return "PCM_FLOAT";
            case 5:
            case 6:
                return "AC3";
            case 7:
                return "DTS";
            case 8:
                return "DTS_HD";
            case 9:
                return "MP3";
            default:
                return d.i(i5, "Invalid encoding: ");
        }
    }

    public static String audioSourceToString(int i5) {
        switch (i5) {
            case 0:
                return "DEFAULT";
            case 1:
                return "MIC";
            case 2:
                return "VOICE_UPLINK";
            case 3:
                return "VOICE_DOWNLINK";
            case 4:
                return "VOICE_CALL";
            case 5:
                return "CAMCORDER";
            case 6:
                return "VOICE_RECOGNITION";
            case 7:
                return "VOICE_COMMUNICATION";
            case 8:
            default:
                return "INVALID";
            case 9:
                return "UNPROCESSED";
            case 10:
                return "VOICE_PERFORMANCE";
        }
    }

    public static String channelMaskToString(int i5) {
        return i5 != 12 ? i5 != 16 ? "INVALID" : "IN_MONO" : "IN_STEREO";
    }

    public static String deviceTypeToString(int i5) {
        switch (i5) {
            case 0:
                return "TYPE_UNKNOWN";
            case 1:
                return "TYPE_BUILTIN_EARPIECE";
            case 2:
                return "TYPE_BUILTIN_SPEAKER";
            case 3:
                return "TYPE_WIRED_HEADSET";
            case 4:
                return "TYPE_WIRED_HEADPHONES";
            case 5:
                return "TYPE_LINE_ANALOG";
            case 6:
                return "TYPE_LINE_DIGITAL";
            case 7:
                return "TYPE_BLUETOOTH_SCO";
            case 8:
                return "TYPE_BLUETOOTH_A2DP";
            case 9:
                return "TYPE_HDMI";
            case 10:
                return "TYPE_HDMI_ARC";
            case 11:
                return "TYPE_USB_DEVICE";
            case 12:
                return "TYPE_USB_ACCESSORY";
            case 13:
                return "TYPE_DOCK";
            case 14:
                return "TYPE_FM";
            case 15:
                return "TYPE_BUILTIN_MIC";
            case 16:
                return "TYPE_FM_TUNER";
            case 17:
                return "TYPE_TV_TUNER";
            case 18:
                return "TYPE_TELEPHONY";
            case 19:
                return "TYPE_AUX_LINE";
            case 20:
                return "TYPE_IP";
            case 21:
                return "TYPE_BUS";
            case 22:
                return "TYPE_USB_HEADSET";
            case 23:
                return "TYPE_HEARING_AID";
            case 24:
                return "TYPE_BUILTIN_SPEAKER_SAFE";
            case 25:
                return "TYPE_REMOTE_SUBMIX";
            case 26:
                return "TYPE_BLE_HEADSET";
            case 27:
                return "TYPE_BLE_SPEAKER";
            case 28:
            default:
                return h.e(i5, "TYPE_UNKNOWN(", ")");
            case 29:
                return "TYPE_HDMI_EARC";
            case 30:
                return "TYPE_BLE_BROADCAST";
            case 31:
                return "TYPE_DOCK_ANALOG";
        }
    }

    public static String getThreadInfo() {
        Thread currentThread = Thread.currentThread();
        return "@[name=" + currentThread.getName() + ", id=" + currentThread.getId() + "]";
    }

    private static boolean hasMicrophone(Context context) {
        return context.getPackageManager().hasSystemFeature("android.hardware.microphone");
    }

    private static void logAudioDeviceInfo(String str, AudioManager audioManager) {
        AudioDeviceInfo[] devices = audioManager.getDevices(3);
        if (devices.length == 0) {
            return;
        }
        Logging.d(str, "Audio Devices: ");
        for (AudioDeviceInfo audioDeviceInfo : devices) {
            StringBuilder sb2 = new StringBuilder("  ");
            sb2.append(deviceTypeToString(audioDeviceInfo.getType()));
            sb2.append(audioDeviceInfo.isSource() ? "(in): " : "(out): ");
            if (audioDeviceInfo.getChannelCounts().length > 0) {
                sb2.append("channels=");
                sb2.append(Arrays.toString(audioDeviceInfo.getChannelCounts()));
                sb2.append(", ");
            }
            if (audioDeviceInfo.getEncodings().length > 0) {
                sb2.append("encodings=");
                sb2.append(Arrays.toString(audioDeviceInfo.getEncodings()));
                sb2.append(", ");
            }
            if (audioDeviceInfo.getSampleRates().length > 0) {
                sb2.append("sample rates=");
                sb2.append(Arrays.toString(audioDeviceInfo.getSampleRates()));
                sb2.append(", ");
            }
            sb2.append("id=");
            sb2.append(audioDeviceInfo.getId());
            Logging.d(str, sb2.toString());
        }
    }

    public static void logAudioState(String str, Context context, AudioManager audioManager) {
        logDeviceInfo(str);
        logAudioStateBasic(str, context, audioManager);
        logAudioStateVolume(str, audioManager);
        logAudioDeviceInfo(str, audioManager);
    }

    private static void logAudioStateBasic(String str, Context context, AudioManager audioManager) {
        String modeToString = modeToString(audioManager.getMode());
        boolean hasMicrophone = hasMicrophone(context);
        boolean isMicrophoneMute = audioManager.isMicrophoneMute();
        boolean isMusicActive = audioManager.isMusicActive();
        boolean isSpeakerphoneOn = audioManager.isSpeakerphoneOn();
        boolean isBluetoothScoOn = audioManager.isBluetoothScoOn();
        StringBuilder sb2 = new StringBuilder("Audio State: audio mode: ");
        sb2.append(modeToString);
        sb2.append(", has mic: ");
        sb2.append(hasMicrophone);
        sb2.append(", mic muted: ");
        com.discord.chat.bridge.botuikit.a.s(sb2, isMicrophoneMute, ", music active: ", isMusicActive, ", speakerphone: ");
        sb2.append(isSpeakerphoneOn);
        sb2.append(", BT SCO: ");
        sb2.append(isBluetoothScoOn);
        Logging.d(str, sb2.toString());
    }

    private static void logAudioStateVolume(String str, AudioManager audioManager) {
        int[] iArr = {0, 3, 2, 4, 5, 1};
        Logging.d(str, "Audio State: ");
        boolean isVolumeFixed = audioManager.isVolumeFixed();
        Logging.d(str, "  fixed volume=" + isVolumeFixed);
        if (isVolumeFixed) {
            return;
        }
        for (int i5 = 0; i5 < 6; i5++) {
            int i6 = iArr[i5];
            StringBuilder sb2 = new StringBuilder();
            sb2.append("  " + streamTypeToString(i6) + ": ");
            sb2.append("volume=");
            sb2.append(audioManager.getStreamVolume(i6));
            sb2.append(", max=");
            sb2.append(audioManager.getStreamMaxVolume(i6));
            sb2.append(", muted=");
            sb2.append(audioManager.isStreamMute(i6));
            Logging.d(str, sb2.toString());
        }
    }

    private static void logDeviceInfo(String str) {
        int i5 = Build.VERSION.SDK_INT;
        String str2 = Build.VERSION.RELEASE;
        String str3 = Build.BRAND;
        String str4 = Build.DEVICE;
        String str5 = Build.ID;
        String str6 = Build.HARDWARE;
        String str7 = Build.MANUFACTURER;
        String str8 = Build.MODEL;
        String str9 = Build.PRODUCT;
        StringBuilder n6 = com.discord.chat.bridge.botuikit.a.n("Android SDK: ", ", Release: ", str2, i5, ", Brand: ");
        e.A(n6, str3, ", Device: ", str4, ", Id: ");
        e.A(n6, str5, ", Hardware: ", str6, ", Manufacturer: ");
        e.A(n6, str7, ", Model: ", str8, ", Product: ");
        n6.append(str9);
        Logging.d(str, n6.toString());
    }

    public static String modeToString(int i5) {
        return i5 != 0 ? i5 != 1 ? i5 != 2 ? i5 != 3 ? "MODE_INVALID" : "MODE_IN_COMMUNICATION" : "MODE_IN_CALL" : "MODE_RINGTONE" : "MODE_NORMAL";
    }

    public static boolean runningOnEmulator() {
        String str = Build.HARDWARE;
        return str.equals("goldfish") || str.equals("ranchu");
    }

    private static String streamTypeToString(int i5) {
        return i5 != 0 ? i5 != 1 ? i5 != 2 ? i5 != 3 ? i5 != 4 ? i5 != 5 ? "STREAM_INVALID" : "STREAM_NOTIFICATION" : "STREAM_ALARM" : "STREAM_MUSIC" : "STREAM_RING" : "STREAM_SYSTEM" : "STREAM_VOICE_CALL";
    }
}

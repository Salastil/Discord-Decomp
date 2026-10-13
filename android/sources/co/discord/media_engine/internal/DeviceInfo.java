package co.discord.media_engine.internal;

import androidx.annotation.NonNull;
import co.discord.media_engine.CameraEnumeratorProvider;
import com.discord.jank_stats.JankScreenContext;
import java.util.Locale;
import org.webrtc.CameraEnumerator;

/* loaded from: classes.dex */
public final class DeviceInfo {
    private static CameraEnumerator enumerator() {
        return CameraEnumeratorProvider.get();
    }

    @NonNull
    private String getDeviceFacingString(int i5) {
        return getDeviceFrontFacing(i5) ? "front" : getDeviceBackFacing(i5) ? "back" : JankScreenContext.UNKNOWN_SCREEN;
    }

    public boolean getDeviceBackFacing(int i5) {
        return enumerator().isBackFacing(getDeviceName(i5));
    }

    public boolean getDeviceFrontFacing(int i5) {
        return enumerator().isFrontFacing(getDeviceName(i5));
    }

    @NonNull
    public String getDeviceGuid(int i5) {
        Locale locale = Locale.US;
        return "android_camera_" + i5 + "_" + getDeviceFacingString(i5) + "_facing";
    }

    @NonNull
    public String getDeviceName(int i5) {
        return enumerator().getDeviceNames()[i5];
    }

    public int numberOfDevices() {
        return enumerator().getDeviceNames().length;
    }
}

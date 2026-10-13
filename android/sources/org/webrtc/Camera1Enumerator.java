package org.webrtc;

import android.hardware.Camera;
import android.os.SystemClock;
import java.util.ArrayList;
import java.util.List;
import org.webrtc.CameraEnumerationAndroid;
import org.webrtc.CameraVideoCapturer;

/* loaded from: classes4.dex */
public class Camera1Enumerator implements CameraEnumerator {
    private static final String TAG = "Camera1Enumerator";
    private static List<List<CameraEnumerationAndroid.CaptureFormat>> cachedSupportedFormats;
    private final boolean captureToTexture;

    public Camera1Enumerator() {
        this(true);
    }

    public static List<CameraEnumerationAndroid.CaptureFormat.FramerateRange> convertFramerates(List<int[]> list) {
        ArrayList arrayList = new ArrayList();
        for (int[] iArr : list) {
            arrayList.add(new CameraEnumerationAndroid.CaptureFormat.FramerateRange(iArr[0], iArr[1]));
        }
        return arrayList;
    }

    public static List<Size> convertSizes(List<Camera.Size> list) {
        ArrayList arrayList = new ArrayList();
        for (Camera.Size size : list) {
            arrayList.add(new Size(size.width, size.height));
        }
        return arrayList;
    }

    private static List<CameraEnumerationAndroid.CaptureFormat> enumerateFormats(int i5) {
        int i6;
        Logging.d(TAG, "Get supported formats for camera index " + i5 + ".");
        long elapsedRealtime = SystemClock.elapsedRealtime();
        Camera camera = null;
        try {
            try {
                Logging.d(TAG, "Opening camera with index " + i5);
                camera = Camera.open(i5);
                Camera.Parameters parameters = camera.getParameters();
                camera.release();
                ArrayList arrayList = new ArrayList();
                try {
                    List<int[]> supportedPreviewFpsRange = parameters.getSupportedPreviewFpsRange();
                    int i10 = 0;
                    if (supportedPreviewFpsRange != null) {
                        int[] iArr = supportedPreviewFpsRange.get(supportedPreviewFpsRange.size() - 1);
                        i10 = iArr[0];
                        i6 = iArr[1];
                    } else {
                        i6 = 0;
                    }
                    for (Camera.Size size : parameters.getSupportedPreviewSizes()) {
                        arrayList.add(new CameraEnumerationAndroid.CaptureFormat(size.width, size.height, i10, i6));
                    }
                } catch (Exception e9) {
                    Logging.e(TAG, "getSupportedFormats() failed on camera index " + i5, e9);
                }
                Logging.d(TAG, "Get supported formats for camera index " + i5 + " done. Time spent: " + (SystemClock.elapsedRealtime() - elapsedRealtime) + " ms.");
                return arrayList;
            } catch (RuntimeException e10) {
                Logging.e(TAG, "Open camera failed on camera index " + i5, e10);
                ArrayList arrayList2 = new ArrayList();
                if (camera != null) {
                    camera.release();
                }
                return arrayList2;
            }
        } catch (Throwable th2) {
            if (camera != null) {
                camera.release();
            }
            throw th2;
        }
    }

    public static int getCameraIndex(String str) {
        Logging.d(TAG, "getCameraIndex: " + str);
        for (int i5 = 0; i5 < Camera.getNumberOfCameras(); i5++) {
            if (str.equals(getDeviceName(i5))) {
                return i5;
            }
        }
        throw new IllegalArgumentException(a3.e.k("No such camera: ", str));
    }

    private static Camera.CameraInfo getCameraInfo(int i5) {
        Camera.CameraInfo cameraInfo = new Camera.CameraInfo();
        try {
            Camera.getCameraInfo(i5, cameraInfo);
            return cameraInfo;
        } catch (Exception e9) {
            Logging.e(TAG, "getCameraInfo failed on index " + i5, e9);
            return null;
        }
    }

    public static String getDeviceName(int i5) {
        Camera.CameraInfo cameraInfo = getCameraInfo(i5);
        if (cameraInfo == null) {
            return null;
        }
        String str = cameraInfo.facing == 1 ? "front" : "back";
        int i6 = cameraInfo.orientation;
        StringBuilder n6 = com.discord.chat.bridge.botuikit.a.n("Camera ", ", Facing ", str, i5, ", Orientation ");
        n6.append(i6);
        return n6.toString();
    }

    @Override // org.webrtc.CameraEnumerator
    public CameraVideoCapturer createCapturer(String str, CameraVideoCapturer.CameraEventsHandler cameraEventsHandler) {
        return new Camera1Capturer(str, cameraEventsHandler, this.captureToTexture);
    }

    @Override // org.webrtc.CameraEnumerator
    public String[] getDeviceNames() {
        ArrayList arrayList = new ArrayList();
        for (int i5 = 0; i5 < Camera.getNumberOfCameras(); i5++) {
            String deviceName = getDeviceName(i5);
            if (deviceName != null) {
                arrayList.add(deviceName);
                Logging.d(TAG, "Index: " + i5 + ". " + deviceName);
            } else {
                Logging.e(TAG, "Index: " + i5 + ". Failed to query camera name.");
            }
        }
        return (String[]) arrayList.toArray(new String[arrayList.size()]);
    }

    @Override // org.webrtc.CameraEnumerator
    public List<CameraEnumerationAndroid.CaptureFormat> getSupportedFormats(String str) {
        return getSupportedFormats(getCameraIndex(str));
    }

    @Override // org.webrtc.CameraEnumerator
    public boolean isBackFacing(String str) {
        Camera.CameraInfo cameraInfo = getCameraInfo(getCameraIndex(str));
        return cameraInfo != null && cameraInfo.facing == 0;
    }

    @Override // org.webrtc.CameraEnumerator
    public boolean isFrontFacing(String str) {
        Camera.CameraInfo cameraInfo = getCameraInfo(getCameraIndex(str));
        return cameraInfo != null && cameraInfo.facing == 1;
    }

    public Camera1Enumerator(boolean z5) {
        this.captureToTexture = z5;
    }

    public static synchronized List<CameraEnumerationAndroid.CaptureFormat> getSupportedFormats(int i5) {
        List<CameraEnumerationAndroid.CaptureFormat> list;
        synchronized (Camera1Enumerator.class) {
            try {
                if (cachedSupportedFormats == null) {
                    cachedSupportedFormats = new ArrayList();
                    for (int i6 = 0; i6 < Camera.getNumberOfCameras(); i6++) {
                        cachedSupportedFormats.add(enumerateFormats(i6));
                    }
                }
                list = cachedSupportedFormats.get(i5);
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return list;
    }
}

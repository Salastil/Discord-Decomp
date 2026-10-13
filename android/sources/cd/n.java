package cd;

import android.media.MediaCodecInfo;
import java.util.List;
import ke.d0;

/* loaded from: classes3.dex */
public abstract class n {
    public static int a(MediaCodecInfo.VideoCapabilities videoCapabilities, int i5, int i6, double d6) {
        List<MediaCodecInfo.VideoCapabilities.PerformancePoint> supportedPerformancePoints = videoCapabilities.getSupportedPerformancePoints();
        if (supportedPerformancePoints != null && !supportedPerformancePoints.isEmpty()) {
            String str = d0.f13294b;
            if (!str.equals("sabrina") && !str.equals("boreal")) {
                String str2 = d0.f13296d;
                if (!str2.startsWith("Lenovo TB-X605") && !str2.startsWith("Lenovo TB-X606") && !str2.startsWith("Lenovo TB-X616")) {
                    MediaCodecInfo.VideoCapabilities.PerformancePoint performancePoint = new MediaCodecInfo.VideoCapabilities.PerformancePoint(i5, i6, (int) d6);
                    for (int i10 = 0; i10 < supportedPerformancePoints.size(); i10++) {
                        if (supportedPerformancePoints.get(i10).covers(performancePoint)) {
                            return 2;
                        }
                    }
                    return 1;
                }
            }
        }
        return 0;
    }
}

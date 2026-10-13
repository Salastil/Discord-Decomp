package al;

import android.hardware.HardwareBuffer;
import com.margelo.nitro.utils.HardwareBufferUtils;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a {
    public static HardwareBuffer a(HardwareBuffer hardwareBuffer) {
        Object copyHardwareBuffer;
        Intrinsics.checkNotNullParameter(hardwareBuffer, "hardwareBuffer");
        copyHardwareBuffer = HardwareBufferUtils.copyHardwareBuffer(hardwareBuffer);
        Intrinsics.checkNotNull(copyHardwareBuffer, "null cannot be cast to non-null type android.hardware.HardwareBuffer");
        return (HardwareBuffer) copyHardwareBuffer;
    }
}

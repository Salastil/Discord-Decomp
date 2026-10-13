package nc;

import android.media.DeniedByServerException;
import android.media.NotProvisionedException;

/* loaded from: classes3.dex */
public abstract class s {
    public static boolean a(Throwable th2) {
        return th2 instanceof DeniedByServerException;
    }

    public static boolean b(Throwable th2) {
        return th2 instanceof NotProvisionedException;
    }
}

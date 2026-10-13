package nc;

import android.media.MediaDrm;

/* loaded from: classes3.dex */
public abstract class t {
    public static boolean a(Throwable th2) {
        return th2 instanceof MediaDrm.MediaDrmStateException;
    }

    public static int b(Throwable th2) {
        return ke.d0.s(ke.d0.t(((MediaDrm.MediaDrmStateException) th2).getDiagnosticInfo()));
    }
}

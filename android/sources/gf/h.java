package gf;

import android.os.StrictMode;

/* loaded from: classes3.dex */
public abstract class h {
    public static StrictMode.VmPolicy.Builder a(StrictMode.VmPolicy.Builder builder) {
        return builder.permitUnsafeIntentLaunch();
    }
}

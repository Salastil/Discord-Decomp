package rl;

import android.os.Build;

/* loaded from: classes3.dex */
public abstract class a {
    public static final boolean a;

    static {
        a = Build.VERSION.SDK_INT < 30;
    }
}

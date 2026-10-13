package androidx.core.view;

import java.util.List;

/* loaded from: classes.dex */
public abstract class d1 {
    public static final int DISPATCH_MODE_CONTINUE_ON_SUBTREE = 1;
    public static final int DISPATCH_MODE_STOP = 0;
    WindowInsetsCompat mDispachedInsets;
    private final int mDispatchMode;

    public d1(int i5) {
        this.mDispatchMode = i5;
    }

    public final int getDispatchMode() {
        return this.mDispatchMode;
    }

    public abstract void onEnd(m1 m1Var);

    public void onPrepare(m1 m1Var) {
    }

    public abstract WindowInsetsCompat onProgress(WindowInsetsCompat windowInsetsCompat, List list);

    public c1 onStart(m1 m1Var, c1 c1Var) {
        return c1Var;
    }
}

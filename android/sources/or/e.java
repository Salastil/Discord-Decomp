package or;

import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.view.Choreographer;
import fo.q;
import fo.r;
import kotlin.Result;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class e {
    private static volatile Choreographer choreographer;

    static {
        Object i5;
        try {
            q qVar = Result.f13476e;
            i5 = new d(a(Looper.getMainLooper()), false);
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        if (i5 instanceof r) {
            i5 = null;
        }
    }

    public static final Handler a(Looper looper) {
        if (Build.VERSION.SDK_INT >= 28) {
            Object invoke = Handler.class.getDeclaredMethod("createAsync", Looper.class).invoke(null, looper);
            Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type android.os.Handler");
            return (Handler) invoke;
        }
        try {
            return (Handler) Handler.class.getDeclaredConstructor(Looper.class, Handler.Callback.class, Boolean.TYPE).newInstance(looper, null, Boolean.TRUE);
        } catch (NoSuchMethodException unused) {
            return new Handler(looper);
        }
    }
}

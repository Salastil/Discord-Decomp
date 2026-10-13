package o;

import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import androidx.core.view.h;
import java.lang.reflect.InvocationTargetException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* loaded from: classes.dex */
public final class c extends d9.a {

    /* renamed from: t, reason: collision with root package name */
    public final Object f15704t;

    /* renamed from: u, reason: collision with root package name */
    public final ExecutorService f15705u;

    /* renamed from: v, reason: collision with root package name */
    public volatile Handler f15706v;

    public c() {
        super(14);
        this.f15704t = new Object();
        this.f15705u = Executors.newFixedThreadPool(4, new b());
    }

    public static Handler U(Looper looper) {
        if (Build.VERSION.SDK_INT >= 28) {
            return h.c(looper);
        }
        try {
            return (Handler) Handler.class.getDeclaredConstructor(Looper.class, Handler.Callback.class, Boolean.TYPE).newInstance(looper, null, Boolean.TRUE);
        } catch (IllegalAccessException | InstantiationException | NoSuchMethodException unused) {
            return new Handler(looper);
        } catch (InvocationTargetException unused2) {
            return new Handler(looper);
        }
    }
}

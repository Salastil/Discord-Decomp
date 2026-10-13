package gs;

import android.content.Context;
import android.content.IntentFilter;
import android.util.Log;
import com.facebook.react.bridge.ReactApplicationContext;
import is.c;
import java.util.Collections;
import java.util.concurrent.atomic.AtomicBoolean;
import net.time4j.android.spi.AndroidResourceLoader;
import net.time4j.c1;
import net.time4j.w0;
import net.time4j.z0;

/* loaded from: classes3.dex */
public abstract class b {
    public static final AtomicBoolean a = new AtomicBoolean(false);

    /* renamed from: b, reason: collision with root package name */
    public static final AtomicBoolean f9445b = new AtomicBoolean(false);

    public static void a(ReactApplicationContext reactApplicationContext) {
        long nanoTime = System.nanoTime();
        if (!a.getAndSet(true)) {
            System.setProperty("net.time4j.base.ResourceLoader", "net.time4j.android.spi.AndroidResourceLoader");
            AndroidResourceLoader androidResourceLoader = (AndroidResourceLoader) c.f12272b;
            if (reactApplicationContext == null) {
                androidResourceLoader.getClass();
                throw new NullPointerException("Missing Android-context.");
            }
            androidResourceLoader.f15221d = reactApplicationContext;
            androidResourceLoader.f15222e = Collections.singletonList(new hs.a(androidResourceLoader));
        }
        Context applicationContext = reactApplicationContext.getApplicationContext();
        if (applicationContext != null && !f9445b.getAndSet(true)) {
            System.setProperty("net.time4j.allow.system.tz.override", "true");
            applicationContext.registerReceiver(new a(), new IntentFilter("android.intent.action.TIMEZONE_CHANGED"));
        }
        Log.i("TIME4A", "Starting Time4A (v4.8-2021a published on " + new c1(w0.z(2021, 3, 27, true), z0.J).f15234d + ")");
        Log.i("TIME4A", "Main-Thread consumed in ms: " + ((System.nanoTime() - nanoTime) / 1000000));
    }
}

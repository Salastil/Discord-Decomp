package j4;

import java.util.Locale;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes.dex */
public final class b {

    /* renamed from: c, reason: collision with root package name */
    public static final b f12411c = new b();
    public final ExecutorService a;

    /* renamed from: b, reason: collision with root package name */
    public final h4.a f12412b;

    public b() {
        ExecutorService executorService;
        String property = System.getProperty("java.runtime.name");
        if (property == null ? false : property.toLowerCase(Locale.US).contains("android")) {
            a aVar = a.f12408b;
            ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(a.f12409c, a.f12410d, 1L, TimeUnit.SECONDS, new LinkedBlockingQueue());
            threadPoolExecutor.allowCoreThreadTimeOut(true);
            executorService = threadPoolExecutor;
        } else {
            executorService = Executors.newCachedThreadPool();
        }
        this.a = executorService;
        Executors.newSingleThreadScheduledExecutor();
        h4.a aVar2 = new h4.a(1);
        aVar2.f9515e = new ThreadLocal();
        this.f12412b = aVar2;
    }
}

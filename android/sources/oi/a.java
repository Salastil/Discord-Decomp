package oi;

import android.os.StrictMode;
import java.util.Locale;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicLong;
import jc.b0;

/* loaded from: classes3.dex */
public final class a implements ThreadFactory {

    /* renamed from: e, reason: collision with root package name */
    public static final ThreadFactory f15972e = Executors.defaultThreadFactory();
    public final AtomicLong a = new AtomicLong();

    /* renamed from: b, reason: collision with root package name */
    public final String f15973b;

    /* renamed from: c, reason: collision with root package name */
    public final int f15974c;

    /* renamed from: d, reason: collision with root package name */
    public final StrictMode.ThreadPolicy f15975d;

    public a(String str, int i5, StrictMode.ThreadPolicy threadPolicy) {
        this.f15973b = str;
        this.f15974c = i5;
        this.f15975d = threadPolicy;
    }

    @Override // java.util.concurrent.ThreadFactory
    public final Thread newThread(Runnable runnable) {
        Thread newThread = f15972e.newThread(new b0(10, this, runnable));
        Locale locale = Locale.ROOT;
        newThread.setName(this.f15973b + " Thread #" + this.a.getAndIncrement());
        return newThread;
    }
}

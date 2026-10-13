package jl;

import android.util.Log;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.WritableNativeArray;
import com.facebook.react.bridge.WritableNativeMap;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public final class f {
    public Promise a;

    /* renamed from: b, reason: collision with root package name */
    public int f12845b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f12846c;

    /* renamed from: d, reason: collision with root package name */
    public AtomicInteger f12847d;

    /* renamed from: e, reason: collision with root package name */
    public WritableNativeArray f12848e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f12849f;

    public final synchronized boolean a() {
        if (this.f12849f) {
            Log.w("image-crop-picker", "Skipping result, already sent...");
            return false;
        }
        if (this.a != null) {
            return true;
        }
        Log.w("image-crop-picker", "Trying to notify success but promise is not set");
        return false;
    }

    public final synchronized void b(String str, Exception exc) {
        if (a()) {
            Log.e("image-crop-picker", "Promise rejected. " + exc.getMessage());
            this.a.reject(str, exc);
            this.f12849f = true;
        }
    }

    public final synchronized void c(String str, String str2) {
        if (a()) {
            Log.e("image-crop-picker", "Promise rejected. " + str2);
            this.a.reject(str, str2);
            this.f12849f = true;
        }
    }

    public final synchronized void d(WritableNativeMap writableNativeMap) {
        try {
            if (a()) {
                if (this.f12846c) {
                    this.f12848e.pushMap(writableNativeMap);
                    if (this.f12847d.addAndGet(1) == this.f12845b) {
                        this.a.resolve(this.f12848e);
                        this.f12849f = true;
                    }
                } else {
                    this.a.resolve(writableNativeMap);
                    this.f12849f = true;
                }
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final synchronized void e(int i5) {
        this.f12845b = i5;
        this.f12847d = new AtomicInteger(0);
    }

    public final synchronized void f(Promise promise, boolean z5) {
        this.a = promise;
        this.f12846c = z5;
        this.f12849f = false;
        this.f12845b = 0;
        this.f12847d = new AtomicInteger(0);
        if (z5) {
            this.f12848e = new WritableNativeArray();
        }
    }
}

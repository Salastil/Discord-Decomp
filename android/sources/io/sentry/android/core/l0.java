package io.sentry.android.core;

import android.app.Activity;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.v5;
import java.lang.ref.WeakReference;

/* loaded from: classes3.dex */
public final class l0 implements ILogger, io.sentry.transport.h {

    /* renamed from: e, reason: collision with root package name */
    public static final l0 f11265e = new l0();

    /* renamed from: d, reason: collision with root package name */
    public Object f11266d;

    public /* synthetic */ l0(Object obj) {
        this.f11266d = obj;
    }

    public void a(Activity activity) {
        WeakReference weakReference = (WeakReference) this.f11266d;
        if (weakReference == null || weakReference.get() != activity) {
            this.f11266d = new WeakReference(activity);
        }
    }

    @Override // io.sentry.ILogger
    public void i(SentryLevel sentryLevel, Throwable th2, String str, Object... objArr) {
        if (objArr.length == 0) {
            k(sentryLevel, str, th2);
        } else {
            k(sentryLevel, String.format(str, objArr), th2);
        }
    }

    @Override // io.sentry.transport.h
    public boolean isConnected() {
        int i5 = v.a[((v5) this.f11266d).getConnectionStatusProvider().I().ordinal()];
        return i5 == 1 || i5 == 2 || i5 == 3;
    }

    @Override // io.sentry.ILogger
    public void k(SentryLevel sentryLevel, String str, Throwable th2) {
        String str2 = (String) this.f11266d;
        int i5 = j.a[sentryLevel.ordinal()];
        if (i5 == 1) {
            Log.i(str2, str, th2);
            return;
        }
        if (i5 == 2) {
            Log.w(str2, str, th2);
            return;
        }
        if (i5 == 3) {
            Log.e(str2, str, th2);
        } else if (i5 != 4) {
            Log.d(str2, str, th2);
        } else {
            Log.wtf(str2, str, th2);
        }
    }

    @Override // io.sentry.ILogger
    public void u(SentryLevel sentryLevel, String str, Object... objArr) {
        String str2 = (String) this.f11266d;
        int i5 = 5;
        if (objArr.length == 0) {
            int i6 = j.a[sentryLevel.ordinal()];
            if (i6 == 1) {
                i5 = 4;
            } else if (i6 != 2) {
                i5 = i6 != 4 ? 3 : 7;
            }
            Log.println(i5, str2, str);
            return;
        }
        int i10 = j.a[sentryLevel.ordinal()];
        if (i10 == 1) {
            i5 = 4;
        } else if (i10 != 2) {
            i5 = i10 != 4 ? 3 : 7;
        }
        Log.println(i5, str2, String.format(str, objArr));
    }

    @Override // io.sentry.ILogger
    public boolean w(SentryLevel sentryLevel) {
        return true;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public l0(int i5) {
        this("Sentry");
        switch (i5) {
            case 3:
                this.f11266d = new Handler(Looper.getMainLooper());
                break;
            default:
                break;
        }
    }
}

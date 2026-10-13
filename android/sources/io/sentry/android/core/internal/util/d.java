package io.sentry.android.core.internal.util;

import android.os.StrictMode;
import android.os.SystemClock;
import com.discord.chat.presentation.message.view.z;

/* loaded from: classes3.dex */
public final class d implements io.sentry.transport.f, io.sentry.util.runtime.b {

    /* renamed from: d, reason: collision with root package name */
    public static final d f11221d = new d();

    @Override // io.sentry.util.runtime.b
    public void c(z zVar) {
        StrictMode.ThreadPolicy threadPolicy = StrictMode.getThreadPolicy();
        StrictMode.VmPolicy vmPolicy = StrictMode.getVmPolicy();
        StrictMode.setThreadPolicy(StrictMode.ThreadPolicy.LAX);
        StrictMode.setVmPolicy(StrictMode.VmPolicy.LAX);
        try {
            zVar.run();
        } finally {
            StrictMode.setThreadPolicy(threadPolicy);
            StrictMode.setVmPolicy(vmPolicy);
        }
    }

    @Override // io.sentry.transport.f
    public long g() {
        return SystemClock.uptimeMillis();
    }

    @Override // io.sentry.util.runtime.b
    public Object i(io.sentry.util.runtime.a aVar) {
        StrictMode.ThreadPolicy threadPolicy = StrictMode.getThreadPolicy();
        StrictMode.VmPolicy vmPolicy = StrictMode.getVmPolicy();
        StrictMode.setThreadPolicy(StrictMode.ThreadPolicy.LAX);
        StrictMode.setVmPolicy(StrictMode.VmPolicy.LAX);
        try {
            return aVar.run();
        } finally {
            StrictMode.setThreadPolicy(threadPolicy);
            StrictMode.setVmPolicy(vmPolicy);
        }
    }
}

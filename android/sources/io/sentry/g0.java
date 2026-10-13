package io.sentry;

import java.net.InetAddress;
import java.util.ArrayList;
import java.util.concurrent.Callable;

/* loaded from: classes3.dex */
public final /* synthetic */ class g0 implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11554d;

    @Override // java.util.concurrent.Callable
    public final Object call() {
        switch (this.f11554d) {
            case 0:
                return InetAddress.getLocalHost();
            case 1:
                return null;
            case 2:
                return new ArrayList();
            default:
                return io.sentry.android.core.internal.util.f.f11223c.a();
        }
    }
}

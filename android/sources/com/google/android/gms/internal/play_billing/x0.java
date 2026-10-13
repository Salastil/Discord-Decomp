package com.google.android.gms.internal.play_billing;

import java.util.logging.Logger;

/* loaded from: classes3.dex */
public final class x0 {
    public final o a = new o();

    /* renamed from: b, reason: collision with root package name */
    public final String f5883b;

    /* renamed from: c, reason: collision with root package name */
    public volatile Logger f5884c;

    public x0(Class cls) {
        this.f5883b = cls.getName();
    }

    public final Logger a() {
        Logger logger = this.f5884c;
        if (logger != null) {
            return logger;
        }
        synchronized (this.a) {
            try {
                Logger logger2 = this.f5884c;
                if (logger2 != null) {
                    return logger2;
                }
                Logger logger3 = Logger.getLogger(this.f5883b);
                this.f5884c = logger3;
                return logger3;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}

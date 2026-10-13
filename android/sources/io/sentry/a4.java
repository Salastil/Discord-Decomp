package io.sentry;

import java.io.File;

/* loaded from: classes3.dex */
public final /* synthetic */ class a4 implements io.sentry.util.runtime.a {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11011d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ File f11012e;

    public /* synthetic */ a4(File file, int i5) {
        this.f11011d = i5;
        this.f11012e = file;
    }

    @Override // io.sentry.util.runtime.a
    public final Object run() {
        switch (this.f11011d) {
            case 0:
                return Boolean.valueOf(this.f11012e.mkdirs());
            case 1:
                return Boolean.valueOf(this.f11012e.mkdirs());
            case 2:
                return Boolean.valueOf(this.f11012e.mkdirs());
            case 3:
                return Boolean.valueOf(this.f11012e.exists());
            default:
                return Boolean.valueOf(this.f11012e.delete());
        }
    }
}

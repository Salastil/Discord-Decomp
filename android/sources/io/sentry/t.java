package io.sentry;

import io.sentry.android.replay.ReplayCache;
import java.io.File;
import java.io.FilenameFilter;

/* loaded from: classes3.dex */
public final /* synthetic */ class t implements FilenameFilter {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f11984b;

    public /* synthetic */ t(int i5, Object obj) {
        this.a = i5;
        this.f11984b = obj;
    }

    @Override // java.io.FilenameFilter
    public final boolean accept(File file, String str) {
        boolean fromDisk$lambda$3;
        switch (this.a) {
            case 0:
                return ((v) this.f11984b).a(str);
            default:
                fromDisk$lambda$3 = ReplayCache.Companion.fromDisk$lambda$3((ReplayCache) this.f11984b, file, str);
                return fromDisk$lambda$3;
        }
    }
}

package com.discord.crash_reporting;

import io.sentry.SentryLevel;
import io.sentry.a4;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.q5;
import java.io.File;
import java.util.List;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements q5, io.sentry.util.d {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ SentryAndroidOptions f4134d;

    public /* synthetic */ b(SentryAndroidOptions sentryAndroidOptions) {
        this.f4134d = sentryAndroidOptions;
    }

    @Override // io.sentry.util.d
    public Object b() {
        List list = io.sentry.android.core.cache.b.I;
        SentryAndroidOptions sentryAndroidOptions = this.f4134d;
        String outboxPath = sentryAndroidOptions.getOutboxPath();
        boolean z5 = false;
        if (outboxPath == null) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "Outbox path is null, the startup crash marker file does not exist", new Object[0]);
        } else {
            File file = new File(outboxPath, "startup_crash");
            try {
                boolean booleanValue = ((Boolean) sentryAndroidOptions.getRuntimeManager().i(new a4(file, 3))).booleanValue();
                if (booleanValue && !((Boolean) sentryAndroidOptions.getRuntimeManager().i(new a4(file, 4))).booleanValue()) {
                    sentryAndroidOptions.getLogger().u(SentryLevel.ERROR, "Failed to delete the startup crash marker file. %s.", file.getAbsolutePath());
                }
                z5 = booleanValue;
            } catch (Throwable th2) {
                sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error reading/deleting the startup crash marker file on the disk", th2);
            }
        }
        return Boolean.valueOf(z5);
    }
}

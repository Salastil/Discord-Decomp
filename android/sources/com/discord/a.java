package com.discord;

import com.discord.MainApplication;
import com.discord.crash_reporting.CrashReporting;
import java.util.concurrent.Callable;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3728d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ MainApplication f3729e;

    public /* synthetic */ a(MainApplication mainApplication, int i5) {
        this.f3728d = i5;
        this.f3729e = mainApplication;
    }

    @Override // java.util.concurrent.Callable
    public final Object call() {
        MainApplication.ReactNativeInitialization reactNativeInitializationTask$lambda$5;
        CrashReporting.CrashReportingReady performInitialization$lambda$10;
        switch (this.f3728d) {
            case 0:
                reactNativeInitializationTask$lambda$5 = MainApplication.reactNativeInitializationTask$lambda$5(this.f3729e);
                return reactNativeInitializationTask$lambda$5;
            default:
                performInitialization$lambda$10 = MainApplication.performInitialization$lambda$10(this.f3729e);
                return performInitialization$lambda$10;
        }
    }
}

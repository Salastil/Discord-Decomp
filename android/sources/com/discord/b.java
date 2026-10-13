package com.discord;

import com.facebook.react.ReactHost;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3768d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ MainApplication f3769e;

    public /* synthetic */ b(MainApplication mainApplication, int i5) {
        this.f3768d = i5;
        this.f3769e = mainApplication;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit initialize$lambda$4;
        ReactHost reactHost_delegate$lambda$7;
        Unit performInitialization$lambda$8;
        Unit performInitialization$lambda$12;
        Unit onCreate$lambda$1;
        switch (this.f3768d) {
            case 0:
                initialize$lambda$4 = MainApplication.initialize$lambda$4(this.f3769e);
                return initialize$lambda$4;
            case 1:
                reactHost_delegate$lambda$7 = MainApplication.reactHost_delegate$lambda$7(this.f3769e);
                return reactHost_delegate$lambda$7;
            case 2:
                performInitialization$lambda$8 = MainApplication.performInitialization$lambda$8(this.f3769e);
                return performInitialization$lambda$8;
            case 3:
                performInitialization$lambda$12 = MainApplication.performInitialization$lambda$12(this.f3769e);
                return performInitialization$lambda$12;
            default:
                onCreate$lambda$1 = MainApplication.onCreate$lambda$1(this.f3769e);
                return onCreate$lambda$1;
        }
    }
}

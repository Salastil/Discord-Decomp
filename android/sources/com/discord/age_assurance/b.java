package com.discord.age_assurance;

import com.facebook.react.bridge.Promise;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements jg.c {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3737d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Promise f3738e;

    public /* synthetic */ b(Promise promise, int i5) {
        this.f3737d = i5;
        this.f3738e = promise;
    }

    @Override // jg.c
    public final void onFailure(Exception exc) {
        switch (this.f3737d) {
            case 0:
                PlayAgeSignalsModule.getAgeSignals$lambda$2(this.f3738e, exc);
                break;
            default:
                PlayAgeSignalsModule.retrieveAgeSignals$lambda$5(this.f3738e, exc);
                break;
        }
    }
}

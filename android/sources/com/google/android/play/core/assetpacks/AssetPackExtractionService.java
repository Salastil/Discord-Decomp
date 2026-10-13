package com.google.android.play.core.assetpacks;

import android.app.Service;
import android.content.Intent;
import android.os.IBinder;
import th.m0;
import th.o;
import uh.f;

/* loaded from: classes3.dex */
public class AssetPackExtractionService extends Service {

    /* renamed from: d, reason: collision with root package name */
    public o f6171d;

    @Override // android.app.Service
    public final IBinder onBind(Intent intent) {
        return this.f6171d;
    }

    @Override // android.app.Service
    public final void onCreate() {
        super.onCreate();
        this.f6171d = (o) ((f) m0.b(getApplicationContext()).f7953e).a();
    }
}

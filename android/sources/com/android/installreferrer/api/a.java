package com.android.installreferrer.api;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.IInterface;
import com.android.installreferrer.commons.InstallReferrerCommons;
import ne.c;

/* loaded from: classes.dex */
public final class a implements ServiceConnection {

    /* renamed from: d, reason: collision with root package name */
    public final InstallReferrerStateListener f3630d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ b f3631e;

    public a(b bVar, InstallReferrerStateListener installReferrerStateListener) {
        this.f3631e = bVar;
        if (installReferrerStateListener == null) {
            throw new RuntimeException("Please specify a listener to know when setup is done.");
        }
        this.f3630d = installReferrerStateListener;
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        c aVar;
        InstallReferrerCommons.logVerbose("InstallReferrerClient", "Install Referrer service connected.");
        int i5 = ne.b.f15214f;
        if (iBinder == null) {
            aVar = null;
        } else {
            IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.finsky.externalreferrer.IGetInstallReferrerService");
            aVar = queryLocalInterface instanceof c ? (c) queryLocalInterface : new ne.a(iBinder);
        }
        b bVar = this.f3631e;
        bVar.f3633c = aVar;
        bVar.a = 2;
        this.f3630d.onInstallReferrerSetupFinished(0);
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        InstallReferrerCommons.logWarn("InstallReferrerClient", "Install Referrer service disconnected.");
        b bVar = this.f3631e;
        bVar.f3633c = null;
        bVar.a = 0;
        this.f3630d.onInstallReferrerServiceDisconnected();
    }
}

package cc;

import android.content.Context;
import android.content.Intent;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Bundle;
import com.discord.misc.utilities.activity.ActivityUtilities;
import com.facebook.react.modules.core.PermissionListener;
import e4.m;
import java.lang.ref.WeakReference;
import java.util.Objects;

/* loaded from: classes3.dex */
public final /* synthetic */ class e implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3374d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f3375e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3376i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f3377v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f3378w;

    public /* synthetic */ e(Object obj, Object obj2, int i5, Object obj3, int i6) {
        this.f3374d = i6;
        this.f3376i = obj;
        this.f3377v = obj2;
        this.f3375e = i5;
        this.f3378w = obj3;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f3374d) {
            case 0:
                k kVar = (k) this.f3376i;
                wb.i iVar = (wb.i) this.f3377v;
                int i5 = this.f3375e;
                Runnable runnable = (Runnable) this.f3378w;
                ec.c cVar = (ec.c) kVar.f3403y;
                try {
                    try {
                        dc.d dVar = (dc.d) kVar.f3400v;
                        Objects.requireNonNull(dVar);
                        ((dc.h) cVar).o(new app.rive.runtime.kotlin.core.a(2, dVar));
                        NetworkInfo activeNetworkInfo = ((ConnectivityManager) ((Context) kVar.f3398e).getSystemService("connectivity")).getActiveNetworkInfo();
                        if (activeNetworkInfo == null || !activeNetworkInfo.isConnected()) {
                            ((dc.h) cVar).o(new f(kVar, iVar, i5, 0));
                        } else {
                            kVar.d(iVar, i5);
                        }
                    } catch (ec.a unused) {
                        ((m) kVar.f3401w).g0(iVar, i5 + 1, false);
                    }
                    runnable.run();
                    return;
                } catch (Throwable th2) {
                    runnable.run();
                    throw th2;
                }
            case 1:
                ActivityUtilities.startActivityForResultAsync$lambda$0((WeakReference) this.f3376i, (Intent) this.f3377v, this.f3375e, (Bundle) this.f3378w);
                return;
            default:
                super/*com.facebook.react.ReactActivityDelegate*/.requestPermissions((String[]) this.f3377v, this.f3375e, (PermissionListener) this.f3378w);
                return;
        }
    }
}

package lt;

import android.content.ComponentName;
import android.content.Context;
import android.content.pm.PackageManager;
import android.content.pm.ServiceInfo;
import android.os.Bundle;
import android.os.Trace;
import ch.u;
import f0.e;

/* loaded from: classes.dex */
public final class d {

    /* renamed from: b, reason: collision with root package name */
    public static final Object f14269b = new Object();

    /* renamed from: c, reason: collision with root package name */
    public static Context f14270c;

    /* renamed from: d, reason: collision with root package name */
    public static Bundle f14271d;
    public final /* synthetic */ int a;

    public static Bundle a(Context context) {
        Bundle bundle;
        ServiceInfo serviceInfo;
        Bundle bundle2;
        Context applicationContext = context.getApplicationContext();
        synchronized (f14269b) {
            if (applicationContext != f14270c) {
                ht.a.c("CronetManifest#getMetaData fetching info");
                try {
                    try {
                        serviceInfo = applicationContext.getPackageManager().getServiceInfo(new ComponentName(applicationContext, "android.net.http.MetaDataHolder"), 787072);
                    } finally {
                    }
                } catch (PackageManager.NameNotFoundException | NullPointerException unused) {
                    serviceInfo = null;
                }
                if (serviceInfo == null || (bundle2 = serviceInfo.metaData) == null) {
                    bundle2 = new Bundle();
                }
                f14271d = bundle2;
                f14270c = applicationContext;
                Trace.endSection();
            }
            bundle = f14271d;
        }
        return bundle;
    }

    public final void b(a aVar) {
        int i5;
        int i6;
        int i10;
        switch (this.a) {
            case 0:
                return;
            default:
                ht.a.c("CronetLoggerImpl#logCronetEngineBuilderInitializedInfo");
                try {
                    long j = aVar.a;
                    int b10 = e.b(aVar.f14256b);
                    int i11 = 2;
                    int i12 = 1;
                    if (b10 == 0) {
                        i5 = 0;
                        i6 = 1;
                    } else if (b10 != 1) {
                        i6 = 0;
                        i5 = 0;
                    } else {
                        i6 = 2;
                        i5 = 0;
                    }
                    int i13 = aVar.f14257c;
                    int ordinal = aVar.f14258d.ordinal();
                    if (ordinal == 1) {
                        i10 = 1;
                    } else if (ordinal == 2) {
                        i10 = 1;
                        i12 = 2;
                    } else if (ordinal == 3) {
                        i10 = 1;
                        i12 = 3;
                    } else if (ordinal != 4) {
                        int i14 = i5;
                        i10 = 1;
                        i12 = i14;
                    } else {
                        i10 = 1;
                        i12 = 4;
                    }
                    Boolean bool = aVar.f14259e;
                    if (bool == null) {
                        i11 = i10;
                    } else if (!bool.booleanValue()) {
                        i11 = 3;
                    }
                    int b11 = e.b(i11);
                    u uVar = aVar.f14260f;
                    int i15 = uVar.f3566b;
                    int i16 = uVar.f3567c;
                    int i17 = uVar.f3568d;
                    int i18 = uVar.f3569e;
                    u uVar2 = aVar.f14261g;
                    int i19 = uVar2 == null ? -1 : uVar2.f3566b;
                    int i20 = uVar2 == null ? -1 : uVar2.f3567c;
                    int i21 = uVar2 == null ? -1 : uVar2.f3568d;
                    int i22 = uVar2 == null ? -1 : uVar2.f3569e;
                    mt.a.a(j, i6, i13, i12, b11, i15, i16, i17, i18, i19, i20, i21, i22, aVar.f14262h);
                    Trace.endSection();
                    return;
                } finally {
                }
        }
    }

    private final void c(a aVar) {
    }
}

package xh;

import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.util.Log;
import di.a0;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class g {
    public final a0 a;

    /* renamed from: b, reason: collision with root package name */
    public final String f20470b;

    /* renamed from: c, reason: collision with root package name */
    public final Context f20471c;

    /* renamed from: d, reason: collision with root package name */
    public final j8.b f20472d;

    /* renamed from: e, reason: collision with root package name */
    public final di.c f20473e;

    public g(Context context, a0 a0Var, j8.b bVar) {
        a0 a0Var2;
        this.f20470b = context.getPackageName();
        this.a = a0Var;
        this.f20472d = bVar;
        this.f20471c = context;
        a0 a0Var3 = di.e.a;
        try {
            if (context.getPackageManager().getApplicationInfo("com.android.vending", 0).enabled) {
                try {
                    if (di.e.b(context.getPackageManager().getPackageInfo("com.android.vending", 64).signatures)) {
                        this.f20473e = new di.c(context, a0Var, "IntegrityService", h.a, new qa.s());
                        return;
                    }
                } catch (PackageManager.NameNotFoundException unused) {
                    a0Var2 = a0Var;
                    a0Var3.c("Play Store package is not found.", new Object[0]);
                }
            } else {
                a0Var3.c("Play Store package is disabled.", new Object[0]);
            }
            a0Var2 = a0Var;
        } catch (PackageManager.NameNotFoundException unused2) {
            a0Var2 = a0Var;
            a0Var3.c("Play Store package is not found.", new Object[0]);
        }
        Object[] objArr = new Object[0];
        a0Var2.getClass();
        if (Log.isLoggable("PlayCore", 6)) {
            Log.e("PlayCore", a0.d(a0Var2.a, "Phonesky is not installed.", objArr));
        }
        this.f20473e = null;
    }

    public static Bundle a(g gVar, byte[] bArr, Long l6) {
        Bundle bundle = new Bundle();
        bundle.putString("package.name", gVar.f20470b);
        bundle.putByteArray("nonce", bArr);
        bundle.putInt("playcore.integrity.version.major", 1);
        bundle.putInt("playcore.integrity.version.minor", 6);
        bundle.putInt("playcore.integrity.version.patch", 0);
        if (l6 != null) {
            bundle.putLong("cloud.prj", l6.longValue());
        }
        ArrayList arrayList = new ArrayList();
        arrayList.add(new di.s(3, System.currentTimeMillis()));
        bundle.putParcelableArrayList("event_timestamps", new ArrayList<>(ys.l.b(arrayList)));
        return bundle;
    }
}

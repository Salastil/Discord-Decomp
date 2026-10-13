package hg;

import android.content.Context;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import androidx.appcompat.widget.w;
import ze.j;
import ze.k;

/* loaded from: classes3.dex */
public final class a extends bf.e implements ze.c {
    public final boolean V;
    public final w W;
    public final Bundle X;
    public final Integer Y;

    public a(Context context, Looper looper, w wVar, Bundle bundle, j jVar, k kVar) {
        super(context, looper, 44, wVar, jVar, kVar, 0);
        this.V = true;
        this.W = wVar;
        this.X = bundle;
        this.Y = (Integer) wVar.f1146x;
    }

    @Override // bf.e, ze.c
    public final int h() {
        return 12451000;
    }

    @Override // bf.e, ze.c
    public final boolean k() {
        return this.V;
    }

    @Override // bf.e
    public final IInterface l(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.signin.internal.ISignInService");
        return queryLocalInterface instanceof d ? (d) queryLocalInterface : new d(iBinder, "com.google.android.gms.signin.internal.ISignInService", 4);
    }

    @Override // bf.e
    public final Bundle n() {
        w wVar = this.W;
        boolean equals = this.f2866i.getPackageName().equals((String) wVar.f1143i);
        Bundle bundle = this.X;
        if (!equals) {
            bundle.putString("com.google.android.gms.signin.internal.realClientPackageName", (String) wVar.f1143i);
        }
        return bundle;
    }

    @Override // bf.e
    public final String p() {
        return "com.google.android.gms.signin.internal.ISignInService";
    }

    @Override // bf.e
    public final String q() {
        return "com.google.android.gms.signin.service.START";
    }
}

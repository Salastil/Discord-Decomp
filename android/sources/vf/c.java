package vf;

import af.q;
import android.content.Context;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import androidx.appcompat.widget.w;
import com.discord.chat.presentation.message.view.MediaImageViewKt;

/* loaded from: classes3.dex */
public final class c extends bf.e {
    public final Bundle V;

    public c(Context context, Looper looper, w wVar, q qVar, q qVar2) {
        super(context, looper, MediaImageViewKt.OBSCURED_IMAGE_MIN_HEIGHT, wVar, qVar, qVar2, 0);
        this.V = new Bundle();
    }

    @Override // bf.e, ze.c
    public final int h() {
        return 17895000;
    }

    @Override // bf.e
    public final IInterface l(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.auth.api.identity.internal.ISignInService");
        return queryLocalInterface instanceof i ? (i) queryLocalInterface : new i(iBinder, "com.google.android.gms.auth.api.identity.internal.ISignInService", 3);
    }

    @Override // bf.e
    public final ye.d[] m() {
        return d.f19410b;
    }

    @Override // bf.e
    public final Bundle n() {
        return this.V;
    }

    @Override // bf.e
    public final String p() {
        return "com.google.android.gms.auth.api.identity.internal.ISignInService";
    }

    @Override // bf.e
    public final String q() {
        return "com.google.android.gms.auth.api.identity.service.signin.START";
    }

    @Override // bf.e
    public final boolean r() {
        return true;
    }

    @Override // bf.e
    public final boolean s() {
        return true;
    }
}
